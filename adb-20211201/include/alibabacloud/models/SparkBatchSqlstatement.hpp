// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPARKBATCHSQLSTATEMENT_HPP_
#define ALIBABACLOUD_MODELS_SPARKBATCHSQLSTATEMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SparkBatchSQLStatement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SparkBatchSQLStatement& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(ResultUri, resultUri_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StatementId, statementId_);
    };
    friend void from_json(const Darabonba::Json& j, SparkBatchSQLStatement& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(ResultUri, resultUri_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
    };
    SparkBatchSQLStatement() = default ;
    SparkBatchSQLStatement(const SparkBatchSQLStatement &) = default ;
    SparkBatchSQLStatement(SparkBatchSQLStatement &&) = default ;
    SparkBatchSQLStatement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SparkBatchSQLStatement() = default ;
    SparkBatchSQLStatement& operator=(const SparkBatchSQLStatement &) = default ;
    SparkBatchSQLStatement& operator=(SparkBatchSQLStatement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->code_ != nullptr && this->endTime_ != nullptr && this->error_ != nullptr && this->result_ != nullptr && this->resultUri_ != nullptr
        && this->startTime_ != nullptr && this->state_ != nullptr && this->statementId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SparkBatchSQLStatement& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SparkBatchSQLStatement& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SparkBatchSQLStatement& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline SparkBatchSQLStatement& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline SparkBatchSQLStatement& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // resultUri Field Functions 
    bool hasResultUri() const { return this->resultUri_ != nullptr;};
    void deleteResultUri() { this->resultUri_ = nullptr;};
    inline string resultUri() const { DARABONBA_PTR_GET_DEFAULT(resultUri_, "") };
    inline SparkBatchSQLStatement& setResultUri(string resultUri) { DARABONBA_PTR_SET_VALUE(resultUri_, resultUri) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SparkBatchSQLStatement& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SparkBatchSQLStatement& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline string statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, "") };
    inline SparkBatchSQLStatement& setStatementId(string statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> resultUri_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> statementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
