#ifndef _OSX_PTRACE_DEFS_H_
#define _OSX_PTRACE_DEFS_H_

#include <sys/types.h>
#include <errno.h>

enum ptracereq {
  PTRACE_TRACEME = 0,		/* 0, by tracee to begin tracing */
  PTRACE_CHILDDONE = 0,		/* 0, tracee is done with his half */
  PTRACE_PEEKTEXT,		/* 1, read word from text segment */
  PTRACE_PEEKDATA,		/* 2, read word from data segment */
  PTRACE_PEEKUSER,		/* 3, read word from user struct */
  PTRACE_POKETEXT,		/* 4, write word into text segment */
  PTRACE_POKEDATA,		/* 5, write word into data segment */
  PTRACE_POKEUSER,		/* 6, write word into user struct */
  PTRACE_CONT,			/* 7, continue process */
  PTRACE_KILL,			/* 8, terminate process */
  PTRACE_SINGLESTEP,		/* 9, single step process */
  PTRACE_ATTACH,		/* 10, attach to an existing process */
  PTRACE_DETACH,		/* 11, detach from a process */
  PTRACE_SIGEXC,		/* 12, signals as exceptions for current process */
  PTRACE_THUPDATE,		/* 13, signal for thread */
  PTRACE_ATTACHEXC,		/* 14, attach to running process with signals as exceptions */
  
  // These probably aren't actually implemented on OS X
  PTRACE_SETOPTIONS = 0x4200,
  PTRACE_GETEVENTMSG = 0x4201
};

typedef int __ptrace_request;

// OS X definition of ptrace has an int for parameter 4,
// not wide enough to hold a pointer in x86_64
int ptrace_ptr(int request, pid_t pid, caddr_t addr, void* data)
{
	// WARNING!!!  NOT IMPLEMENTED
	return EINVAL;
}

#endif
