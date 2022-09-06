#ifndef ENUMS_H
#define ENUMS_H

typedef enum
{
    META_COMMAND_SUCCESS,
    META_COMMAND_FAILURE,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

typedef enum
{
    PREPARE_SUCCESS,
    PREPARE_FAILURE,
    PREPARE_UNRECOGNIZRED_STATEMENT
} PrepareResult;

typedef enum
{
    STATEMENT_INSERT,
    STATEMENT_SELECT
} StatementType;

#endif