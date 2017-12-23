#ifndef FX_CONSTRAINT_RANDOM_H
#define FX_CONSTRAINT_RANDOM_H

enum
{
	CONSTRAINT_RND_SEED = 1000,
	CONSTRAINT_RND_TYPE = 1001,
	CONSTRAINT_RND_TYPE_UNIFORM = 0,
	CONSTRAINT_RND_TYPE_EXPONENTIAL,
	CONSTRAINT_RND_TYPE_GAMMA,
	CONSTRAINT_RND_TYPE_WEIBULL,
	CONSTRAINT_RND_TYPE_EXTREMEVALUE,
	CONSTRAINT_RND_TYPE_NORMAL,
	CONSTRAINT_RND_TYPE_LOGNORMAL,
	CONSTRAINT_RND_TYPE_CAUCHY,
	
	CONSTRAINT_RND_BINARY = 1002,
	CONSTRAINT_RND_BINARYTHRESHOLD,
	CONSTRAINT_RND_CONSTANTINIT,

	CONSTRAINT_RND_DUMMY_
};

#endif