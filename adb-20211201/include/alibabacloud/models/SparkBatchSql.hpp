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
        && this->errMessage_ == nullptr && this->query_ == nullptr && this->queryEndTime_ == nullptr && this->queryId_ == nullptr && this->queryStartTime_ == nullptr
        && this->queryState_ == nullptr && this->querySubmissionTime_ == nullptr && this->resourceGroupName_ == nullptr && this->schema_ == nullptr && this->statements_ == nullptr
        && this->uid_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline SparkBatchSQL& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline SparkBatchSQL& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SparkBatchSQL& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryEndTime Field Functions 
    bool hasQueryEndTime() const { return this->queryEndTime_ != nullptr;};
    void deleteQueryEndTime() { this->queryEndTime_ = nullptr;};
    inline int64_t getQueryEndTime() const { DARABONBA_PTR_GET_DEFAULT(queryEndTime_, 0L) };
    inline SparkBatchSQL& setQueryEndTime(int64_t queryEndTime) { DARABONBA_PTR_SET_VALUE(queryEndTime_, queryEndTime) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline SparkBatchSQL& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline int64_t getQueryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, 0L) };
    inline SparkBatchSQL& setQueryStartTime(int64_t queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


    // queryState Field Functions 
    bool hasQueryState() const { return this->queryState_ != nullptr;};
    void deleteQueryState() { this->queryState_ = nullptr;};
    inline string getQueryState() const { DARABONBA_PTR_GET_DEFAULT(queryState_, "") };
    inline SparkBatchSQL& setQueryState(string queryState) { DARABONBA_PTR_SET_VALUE(queryState_, queryState) };


    // querySubmissionTime Field Functions 
    bool hasQuerySubmissionTime() const { return this->querySubmissionTime_ != nullptr;};
    void deleteQuerySubmissionTime() { this->querySubmissionTime_ = nullptr;};
    inline int64_t getQuerySubmissionTime() const { DARABONBA_PTR_GET_DEFAULT(querySubmissionTime_, 0L) };
    inline SparkBatchSQL& setQuerySubmissionTime(int64_t querySubmissionTime) { DARABONBA_PTR_SET_VALUE(querySubmissionTime_, querySubmissionTime) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline SparkBatchSQL& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline SparkBatchSQL& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // statements Field Functions 
    bool hasStatements() const { return this->statements_ != nullptr;};
    void deleteStatements() { this->statements_ = nullptr;};
    inline const vector<SparkBatchSQLStatement> & getStatements() const { DARABONBA_PTR_GET_CONST(statements_, vector<SparkBatchSQLStatement>) };
    inline vector<SparkBatchSQLStatement> getStatements() { DARABONBA_PTR_GET(statements_, vector<SparkBatchSQLStatement>) };
    inline SparkBatchSQL& setStatements(const vector<SparkBatchSQLStatement> & statements) { DARABONBA_PTR_SET_VALUE(statements_, statements) };
    inline SparkBatchSQL& setStatements(vector<SparkBatchSQLStatement> && statements) { DARABONBA_PTR_SET_RVALUE(statements_, statements) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline SparkBatchSQL& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<string> query_ {};
    shared_ptr<int64_t> queryEndTime_ {};
    shared_ptr<string> queryId_ {};
    shared_ptr<int64_t> queryStartTime_ {};
    shared_ptr<string> queryState_ {};
    shared_ptr<int64_t> querySubmissionTime_ {};
    shared_ptr<string> resourceGroupName_ {};
    shared_ptr<string> schema_ {};
    shared_ptr<vector<SparkBatchSQLStatement>> statements_ {};
    shared_ptr<int64_t> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
