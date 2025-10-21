// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLSTATEMENTEXECUTERESULT_HPP_
#define ALIBABACLOUD_MODELS_SQLSTATEMENTEXECUTERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ErrorDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SqlStatementExecuteResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlStatementExecuteResult& obj) { 
      DARABONBA_PTR_TO_JSON(errorDetails, errorDetails_);
      DARABONBA_PTR_TO_JSON(executeSuccess, executeSuccess_);
      DARABONBA_PTR_TO_JSON(statement, statement_);
    };
    friend void from_json(const Darabonba::Json& j, SqlStatementExecuteResult& obj) { 
      DARABONBA_PTR_FROM_JSON(errorDetails, errorDetails_);
      DARABONBA_PTR_FROM_JSON(executeSuccess, executeSuccess_);
      DARABONBA_PTR_FROM_JSON(statement, statement_);
    };
    SqlStatementExecuteResult() = default ;
    SqlStatementExecuteResult(const SqlStatementExecuteResult &) = default ;
    SqlStatementExecuteResult(SqlStatementExecuteResult &&) = default ;
    SqlStatementExecuteResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlStatementExecuteResult() = default ;
    SqlStatementExecuteResult& operator=(const SqlStatementExecuteResult &) = default ;
    SqlStatementExecuteResult& operator=(SqlStatementExecuteResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorDetails_ == nullptr
        && return this->executeSuccess_ == nullptr && return this->statement_ == nullptr; };
    // errorDetails Field Functions 
    bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
    void deleteErrorDetails() { this->errorDetails_ = nullptr;};
    inline const ErrorDetails & errorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, ErrorDetails) };
    inline ErrorDetails errorDetails() { DARABONBA_PTR_GET(errorDetails_, ErrorDetails) };
    inline SqlStatementExecuteResult& setErrorDetails(const ErrorDetails & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
    inline SqlStatementExecuteResult& setErrorDetails(ErrorDetails && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


    // executeSuccess Field Functions 
    bool hasExecuteSuccess() const { return this->executeSuccess_ != nullptr;};
    void deleteExecuteSuccess() { this->executeSuccess_ = nullptr;};
    inline bool executeSuccess() const { DARABONBA_PTR_GET_DEFAULT(executeSuccess_, false) };
    inline SqlStatementExecuteResult& setExecuteSuccess(bool executeSuccess) { DARABONBA_PTR_SET_VALUE(executeSuccess_, executeSuccess) };


    // statement Field Functions 
    bool hasStatement() const { return this->statement_ != nullptr;};
    void deleteStatement() { this->statement_ = nullptr;};
    inline string statement() const { DARABONBA_PTR_GET_DEFAULT(statement_, "") };
    inline SqlStatementExecuteResult& setStatement(string statement) { DARABONBA_PTR_SET_VALUE(statement_, statement) };


  protected:
    std::shared_ptr<ErrorDetails> errorDetails_ = nullptr;
    std::shared_ptr<bool> executeSuccess_ = nullptr;
    std::shared_ptr<string> statement_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
