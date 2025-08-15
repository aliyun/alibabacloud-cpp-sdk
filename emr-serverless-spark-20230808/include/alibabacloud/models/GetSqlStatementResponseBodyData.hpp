// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLSTATEMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSQLSTATEMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSqlStatementResponseBodyDataSqlOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetSqlStatementResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlStatementResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(executionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(sqlErrorCode, sqlErrorCode_);
      DARABONBA_PTR_TO_JSON(sqlErrorMessage, sqlErrorMessage_);
      DARABONBA_PTR_TO_JSON(sqlOutputs, sqlOutputs_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(statementId, statementId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlStatementResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(executionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(sqlErrorCode, sqlErrorCode_);
      DARABONBA_PTR_FROM_JSON(sqlErrorMessage, sqlErrorMessage_);
      DARABONBA_PTR_FROM_JSON(sqlOutputs, sqlOutputs_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(statementId, statementId_);
    };
    GetSqlStatementResponseBodyData() = default ;
    GetSqlStatementResponseBodyData(const GetSqlStatementResponseBodyData &) = default ;
    GetSqlStatementResponseBodyData(GetSqlStatementResponseBodyData &&) = default ;
    GetSqlStatementResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlStatementResponseBodyData() = default ;
    GetSqlStatementResponseBodyData& operator=(const GetSqlStatementResponseBodyData &) = default ;
    GetSqlStatementResponseBodyData& operator=(GetSqlStatementResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionTime_ != nullptr
        && this->sqlErrorCode_ != nullptr && this->sqlErrorMessage_ != nullptr && this->sqlOutputs_ != nullptr && this->state_ != nullptr && this->statementId_ != nullptr; };
    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline const vector<int64_t> & executionTime() const { DARABONBA_PTR_GET_CONST(executionTime_, vector<int64_t>) };
    inline vector<int64_t> executionTime() { DARABONBA_PTR_GET(executionTime_, vector<int64_t>) };
    inline GetSqlStatementResponseBodyData& setExecutionTime(const vector<int64_t> & executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };
    inline GetSqlStatementResponseBodyData& setExecutionTime(vector<int64_t> && executionTime) { DARABONBA_PTR_SET_RVALUE(executionTime_, executionTime) };


    // sqlErrorCode Field Functions 
    bool hasSqlErrorCode() const { return this->sqlErrorCode_ != nullptr;};
    void deleteSqlErrorCode() { this->sqlErrorCode_ = nullptr;};
    inline string sqlErrorCode() const { DARABONBA_PTR_GET_DEFAULT(sqlErrorCode_, "") };
    inline GetSqlStatementResponseBodyData& setSqlErrorCode(string sqlErrorCode) { DARABONBA_PTR_SET_VALUE(sqlErrorCode_, sqlErrorCode) };


    // sqlErrorMessage Field Functions 
    bool hasSqlErrorMessage() const { return this->sqlErrorMessage_ != nullptr;};
    void deleteSqlErrorMessage() { this->sqlErrorMessage_ = nullptr;};
    inline string sqlErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(sqlErrorMessage_, "") };
    inline GetSqlStatementResponseBodyData& setSqlErrorMessage(string sqlErrorMessage) { DARABONBA_PTR_SET_VALUE(sqlErrorMessage_, sqlErrorMessage) };


    // sqlOutputs Field Functions 
    bool hasSqlOutputs() const { return this->sqlOutputs_ != nullptr;};
    void deleteSqlOutputs() { this->sqlOutputs_ = nullptr;};
    inline const vector<Models::GetSqlStatementResponseBodyDataSqlOutputs> & sqlOutputs() const { DARABONBA_PTR_GET_CONST(sqlOutputs_, vector<Models::GetSqlStatementResponseBodyDataSqlOutputs>) };
    inline vector<Models::GetSqlStatementResponseBodyDataSqlOutputs> sqlOutputs() { DARABONBA_PTR_GET(sqlOutputs_, vector<Models::GetSqlStatementResponseBodyDataSqlOutputs>) };
    inline GetSqlStatementResponseBodyData& setSqlOutputs(const vector<Models::GetSqlStatementResponseBodyDataSqlOutputs> & sqlOutputs) { DARABONBA_PTR_SET_VALUE(sqlOutputs_, sqlOutputs) };
    inline GetSqlStatementResponseBodyData& setSqlOutputs(vector<Models::GetSqlStatementResponseBodyDataSqlOutputs> && sqlOutputs) { DARABONBA_PTR_SET_RVALUE(sqlOutputs_, sqlOutputs) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetSqlStatementResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline string statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, "") };
    inline GetSqlStatementResponseBodyData& setStatementId(string statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


  protected:
    // The list of time that is consumed by SQL queries.
    std::shared_ptr<vector<int64_t>> executionTime_ = nullptr;
    // The error code.
    std::shared_ptr<string> sqlErrorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> sqlErrorMessage_ = nullptr;
    // The query results.
    std::shared_ptr<vector<Models::GetSqlStatementResponseBodyDataSqlOutputs>> sqlOutputs_ = nullptr;
    // The query status.
    // 
    // Valid values:
    // 
    // *   running
    // *   available
    // *   cancelled
    // *   error
    // *   cancelling
    std::shared_ptr<string> state_ = nullptr;
    // The query ID.
    std::shared_ptr<string> statementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
