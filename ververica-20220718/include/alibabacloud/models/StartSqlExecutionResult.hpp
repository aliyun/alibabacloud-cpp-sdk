// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSQLEXECUTIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_STARTSQLEXECUTIONRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class StartSqlExecutionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSqlExecutionResult& obj) { 
      DARABONBA_PTR_TO_JSON(newlyCreated, newlyCreated_);
      DARABONBA_PTR_TO_JSON(sqlExecutionId, sqlExecutionId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StartSqlExecutionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(newlyCreated, newlyCreated_);
      DARABONBA_PTR_FROM_JSON(sqlExecutionId, sqlExecutionId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    StartSqlExecutionResult() = default ;
    StartSqlExecutionResult(const StartSqlExecutionResult &) = default ;
    StartSqlExecutionResult(StartSqlExecutionResult &&) = default ;
    StartSqlExecutionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSqlExecutionResult() = default ;
    StartSqlExecutionResult& operator=(const StartSqlExecutionResult &) = default ;
    StartSqlExecutionResult& operator=(StartSqlExecutionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newlyCreated_ == nullptr
        && this->sqlExecutionId_ == nullptr && this->success_ == nullptr; };
    // newlyCreated Field Functions 
    bool hasNewlyCreated() const { return this->newlyCreated_ != nullptr;};
    void deleteNewlyCreated() { this->newlyCreated_ = nullptr;};
    inline bool getNewlyCreated() const { DARABONBA_PTR_GET_DEFAULT(newlyCreated_, false) };
    inline StartSqlExecutionResult& setNewlyCreated(bool newlyCreated) { DARABONBA_PTR_SET_VALUE(newlyCreated_, newlyCreated) };


    // sqlExecutionId Field Functions 
    bool hasSqlExecutionId() const { return this->sqlExecutionId_ != nullptr;};
    void deleteSqlExecutionId() { this->sqlExecutionId_ = nullptr;};
    inline string getSqlExecutionId() const { DARABONBA_PTR_GET_DEFAULT(sqlExecutionId_, "") };
    inline StartSqlExecutionResult& setSqlExecutionId(string sqlExecutionId) { DARABONBA_PTR_SET_VALUE(sqlExecutionId_, sqlExecutionId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StartSqlExecutionResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the SQL execution is newly created.
    shared_ptr<bool> newlyCreated_ {};
    // The SQL execution ID.
    shared_ptr<string> sqlExecutionId_ {};
    // Indicates whether the SQL execution is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
