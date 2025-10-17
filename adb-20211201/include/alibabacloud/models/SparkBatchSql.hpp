// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPARKBATCHSQL_HPP_
#define ALIBABACLOUD_MODELS_SPARKBATCHSQL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SparkBatchSQLStatement.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SparkBatchSQL : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SparkBatchSQL& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(QueryEndTime, queryEndTime_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_TO_JSON(QueryState, queryState_);
      DARABONBA_PTR_TO_JSON(QuerySubmissionTime, querySubmissionTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Statements, statements_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, SparkBatchSQL& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(QueryEndTime, queryEndTime_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_FROM_JSON(QueryState, queryState_);
      DARABONBA_PTR_FROM_JSON(QuerySubmissionTime, querySubmissionTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Statements, statements_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    SparkBatchSQL() = default ;
    SparkBatchSQL(const SparkBatchSQL &) = default ;
    SparkBatchSQL(SparkBatchSQL &&) = default ;
    SparkBatchSQL(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SparkBatchSQL() = default ;
    SparkBatchSQL& operator=(const SparkBatchSQL &) = default ;
    SparkBatchSQL& operator=(SparkBatchSQL &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->errMessage_ == nullptr && return this->query_ == nullptr && return this->queryEndTime_ == nullptr && return this->queryId_ == nullptr && return this->queryStartTime_ == nullptr
        && return this->queryState_ == nullptr && return this->querySubmissionTime_ == nullptr && return this->resourceGroupName_ == nullptr && return this->schema_ == nullptr && return this->statements_ == nullptr
        && return this->uid_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline SparkBatchSQL& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline SparkBatchSQL& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SparkBatchSQL& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryEndTime Field Functions 
    bool hasQueryEndTime() const { return this->queryEndTime_ != nullptr;};
    void deleteQueryEndTime() { this->queryEndTime_ = nullptr;};
    inline int64_t queryEndTime() const { DARABONBA_PTR_GET_DEFAULT(queryEndTime_, 0L) };
    inline SparkBatchSQL& setQueryEndTime(int64_t queryEndTime) { DARABONBA_PTR_SET_VALUE(queryEndTime_, queryEndTime) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline SparkBatchSQL& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline int64_t queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, 0L) };
    inline SparkBatchSQL& setQueryStartTime(int64_t queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


    // queryState Field Functions 
    bool hasQueryState() const { return this->queryState_ != nullptr;};
    void deleteQueryState() { this->queryState_ = nullptr;};
    inline string queryState() const { DARABONBA_PTR_GET_DEFAULT(queryState_, "") };
    inline SparkBatchSQL& setQueryState(string queryState) { DARABONBA_PTR_SET_VALUE(queryState_, queryState) };


    // querySubmissionTime Field Functions 
    bool hasQuerySubmissionTime() const { return this->querySubmissionTime_ != nullptr;};
    void deleteQuerySubmissionTime() { this->querySubmissionTime_ = nullptr;};
    inline int64_t querySubmissionTime() const { DARABONBA_PTR_GET_DEFAULT(querySubmissionTime_, 0L) };
    inline SparkBatchSQL& setQuerySubmissionTime(int64_t querySubmissionTime) { DARABONBA_PTR_SET_VALUE(querySubmissionTime_, querySubmissionTime) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline SparkBatchSQL& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline SparkBatchSQL& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // statements Field Functions 
    bool hasStatements() const { return this->statements_ != nullptr;};
    void deleteStatements() { this->statements_ = nullptr;};
    inline const vector<SparkBatchSQLStatement> & statements() const { DARABONBA_PTR_GET_CONST(statements_, vector<SparkBatchSQLStatement>) };
    inline vector<SparkBatchSQLStatement> statements() { DARABONBA_PTR_GET(statements_, vector<SparkBatchSQLStatement>) };
    inline SparkBatchSQL& setStatements(const vector<SparkBatchSQLStatement> & statements) { DARABONBA_PTR_SET_VALUE(statements_, statements) };
    inline SparkBatchSQL& setStatements(vector<SparkBatchSQLStatement> && statements) { DARABONBA_PTR_SET_RVALUE(statements_, statements) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline SparkBatchSQL& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<int64_t> queryEndTime_ = nullptr;
    std::shared_ptr<string> queryId_ = nullptr;
    std::shared_ptr<int64_t> queryStartTime_ = nullptr;
    std::shared_ptr<string> queryState_ = nullptr;
    std::shared_ptr<int64_t> querySubmissionTime_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<string> schema_ = nullptr;
    std::shared_ptr<vector<SparkBatchSQLStatement>> statements_ = nullptr;
    std::shared_ptr<int64_t> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
