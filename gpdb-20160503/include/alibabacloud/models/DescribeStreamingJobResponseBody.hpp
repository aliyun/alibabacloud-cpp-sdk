// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMINGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMINGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeStreamingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Consistency, consistency_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DestColumns, destColumns_);
      DARABONBA_PTR_TO_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_TO_JSON(DestTable, destTable_);
      DARABONBA_PTR_TO_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(MatchColumns, matchColumns_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SrcColumns, srcColumns_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateColumns, updateColumns_);
      DARABONBA_PTR_TO_JSON(WriteMode, writeMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Consistency, consistency_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DestColumns, destColumns_);
      DARABONBA_PTR_FROM_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_FROM_JSON(DestTable, destTable_);
      DARABONBA_PTR_FROM_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(MatchColumns, matchColumns_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SrcColumns, srcColumns_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateColumns, updateColumns_);
      DARABONBA_PTR_FROM_JSON(WriteMode, writeMode_);
    };
    DescribeStreamingJobResponseBody() = default ;
    DescribeStreamingJobResponseBody(const DescribeStreamingJobResponseBody &) = default ;
    DescribeStreamingJobResponseBody(DescribeStreamingJobResponseBody &&) = default ;
    DescribeStreamingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamingJobResponseBody() = default ;
    DescribeStreamingJobResponseBody& operator=(const DescribeStreamingJobResponseBody &) = default ;
    DescribeStreamingJobResponseBody& operator=(DescribeStreamingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->consistency_ == nullptr && this->createTime_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->destColumns_ == nullptr
        && this->destDatabase_ == nullptr && this->destSchema_ == nullptr && this->destTable_ == nullptr && this->errorLimitCount_ == nullptr && this->errorMessage_ == nullptr
        && this->fallbackOffset_ == nullptr && this->groupName_ == nullptr && this->jobConfig_ == nullptr && this->jobDescription_ == nullptr && this->jobId_ == nullptr
        && this->jobName_ == nullptr && this->matchColumns_ == nullptr && this->mode_ == nullptr && this->modifyTime_ == nullptr && this->password_ == nullptr
        && this->requestId_ == nullptr && this->srcColumns_ == nullptr && this->status_ == nullptr && this->updateColumns_ == nullptr && this->writeMode_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline DescribeStreamingJobResponseBody& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // consistency Field Functions 
    bool hasConsistency() const { return this->consistency_ != nullptr;};
    void deleteConsistency() { this->consistency_ = nullptr;};
    inline string getConsistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, "") };
    inline DescribeStreamingJobResponseBody& setConsistency(string consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeStreamingJobResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DescribeStreamingJobResponseBody& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline DescribeStreamingJobResponseBody& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // destColumns Field Functions 
    bool hasDestColumns() const { return this->destColumns_ != nullptr;};
    void deleteDestColumns() { this->destColumns_ = nullptr;};
    inline const vector<string> & getDestColumns() const { DARABONBA_PTR_GET_CONST(destColumns_, vector<string>) };
    inline vector<string> getDestColumns() { DARABONBA_PTR_GET(destColumns_, vector<string>) };
    inline DescribeStreamingJobResponseBody& setDestColumns(const vector<string> & destColumns) { DARABONBA_PTR_SET_VALUE(destColumns_, destColumns) };
    inline DescribeStreamingJobResponseBody& setDestColumns(vector<string> && destColumns) { DARABONBA_PTR_SET_RVALUE(destColumns_, destColumns) };


    // destDatabase Field Functions 
    bool hasDestDatabase() const { return this->destDatabase_ != nullptr;};
    void deleteDestDatabase() { this->destDatabase_ = nullptr;};
    inline string getDestDatabase() const { DARABONBA_PTR_GET_DEFAULT(destDatabase_, "") };
    inline DescribeStreamingJobResponseBody& setDestDatabase(string destDatabase) { DARABONBA_PTR_SET_VALUE(destDatabase_, destDatabase) };


    // destSchema Field Functions 
    bool hasDestSchema() const { return this->destSchema_ != nullptr;};
    void deleteDestSchema() { this->destSchema_ = nullptr;};
    inline string getDestSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
    inline DescribeStreamingJobResponseBody& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


    // destTable Field Functions 
    bool hasDestTable() const { return this->destTable_ != nullptr;};
    void deleteDestTable() { this->destTable_ = nullptr;};
    inline string getDestTable() const { DARABONBA_PTR_GET_DEFAULT(destTable_, "") };
    inline DescribeStreamingJobResponseBody& setDestTable(string destTable) { DARABONBA_PTR_SET_VALUE(destTable_, destTable) };


    // errorLimitCount Field Functions 
    bool hasErrorLimitCount() const { return this->errorLimitCount_ != nullptr;};
    void deleteErrorLimitCount() { this->errorLimitCount_ = nullptr;};
    inline int32_t getErrorLimitCount() const { DARABONBA_PTR_GET_DEFAULT(errorLimitCount_, 0) };
    inline DescribeStreamingJobResponseBody& setErrorLimitCount(int32_t errorLimitCount) { DARABONBA_PTR_SET_VALUE(errorLimitCount_, errorLimitCount) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeStreamingJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // fallbackOffset Field Functions 
    bool hasFallbackOffset() const { return this->fallbackOffset_ != nullptr;};
    void deleteFallbackOffset() { this->fallbackOffset_ = nullptr;};
    inline string getFallbackOffset() const { DARABONBA_PTR_GET_DEFAULT(fallbackOffset_, "") };
    inline DescribeStreamingJobResponseBody& setFallbackOffset(string fallbackOffset) { DARABONBA_PTR_SET_VALUE(fallbackOffset_, fallbackOffset) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeStreamingJobResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // jobConfig Field Functions 
    bool hasJobConfig() const { return this->jobConfig_ != nullptr;};
    void deleteJobConfig() { this->jobConfig_ = nullptr;};
    inline string getJobConfig() const { DARABONBA_PTR_GET_DEFAULT(jobConfig_, "") };
    inline DescribeStreamingJobResponseBody& setJobConfig(string jobConfig) { DARABONBA_PTR_SET_VALUE(jobConfig_, jobConfig) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string getJobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline DescribeStreamingJobResponseBody& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeStreamingJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DescribeStreamingJobResponseBody& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // matchColumns Field Functions 
    bool hasMatchColumns() const { return this->matchColumns_ != nullptr;};
    void deleteMatchColumns() { this->matchColumns_ = nullptr;};
    inline const vector<string> & getMatchColumns() const { DARABONBA_PTR_GET_CONST(matchColumns_, vector<string>) };
    inline vector<string> getMatchColumns() { DARABONBA_PTR_GET(matchColumns_, vector<string>) };
    inline DescribeStreamingJobResponseBody& setMatchColumns(const vector<string> & matchColumns) { DARABONBA_PTR_SET_VALUE(matchColumns_, matchColumns) };
    inline DescribeStreamingJobResponseBody& setMatchColumns(vector<string> && matchColumns) { DARABONBA_PTR_SET_RVALUE(matchColumns_, matchColumns) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeStreamingJobResponseBody& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeStreamingJobResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeStreamingJobResponseBody& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStreamingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // srcColumns Field Functions 
    bool hasSrcColumns() const { return this->srcColumns_ != nullptr;};
    void deleteSrcColumns() { this->srcColumns_ = nullptr;};
    inline const vector<string> & getSrcColumns() const { DARABONBA_PTR_GET_CONST(srcColumns_, vector<string>) };
    inline vector<string> getSrcColumns() { DARABONBA_PTR_GET(srcColumns_, vector<string>) };
    inline DescribeStreamingJobResponseBody& setSrcColumns(const vector<string> & srcColumns) { DARABONBA_PTR_SET_VALUE(srcColumns_, srcColumns) };
    inline DescribeStreamingJobResponseBody& setSrcColumns(vector<string> && srcColumns) { DARABONBA_PTR_SET_RVALUE(srcColumns_, srcColumns) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeStreamingJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateColumns Field Functions 
    bool hasUpdateColumns() const { return this->updateColumns_ != nullptr;};
    void deleteUpdateColumns() { this->updateColumns_ = nullptr;};
    inline const vector<string> & getUpdateColumns() const { DARABONBA_PTR_GET_CONST(updateColumns_, vector<string>) };
    inline vector<string> getUpdateColumns() { DARABONBA_PTR_GET(updateColumns_, vector<string>) };
    inline DescribeStreamingJobResponseBody& setUpdateColumns(const vector<string> & updateColumns) { DARABONBA_PTR_SET_VALUE(updateColumns_, updateColumns) };
    inline DescribeStreamingJobResponseBody& setUpdateColumns(vector<string> && updateColumns) { DARABONBA_PTR_SET_RVALUE(updateColumns_, updateColumns) };


    // writeMode Field Functions 
    bool hasWriteMode() const { return this->writeMode_ != nullptr;};
    void deleteWriteMode() { this->writeMode_ = nullptr;};
    inline string getWriteMode() const { DARABONBA_PTR_GET_DEFAULT(writeMode_, "") };
    inline DescribeStreamingJobResponseBody& setWriteMode(string writeMode) { DARABONBA_PTR_SET_VALUE(writeMode_, writeMode) };


  protected:
    // Target database account.
    shared_ptr<string> account_ {};
    // Delivery guarantee.
    shared_ptr<string> consistency_ {};
    // Creation time.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> createTime_ {};
    // Data source ID.
    shared_ptr<string> dataSourceId_ {};
    // Data source name.
    shared_ptr<string> dataSourceName_ {};
    // Target data table mapping field list.
    shared_ptr<vector<string>> destColumns_ {};
    // Target database name.
    shared_ptr<string> destDatabase_ {};
    // Target namespace.
    shared_ptr<string> destSchema_ {};
    // Target table name.
    shared_ptr<string> destTable_ {};
    // When data in Kafka does not match the ADBPG target table, it can cause write failures. This value represents the number of error rows allowed; if exceeded, the task will fail.
    shared_ptr<int32_t> errorLimitCount_ {};
    // Service status information, such as the reason for an exception. It is empty in the normal Running state.
    shared_ptr<string> errorMessage_ {};
    // Fallback offset, which is the fallback position
    // 
    // - The FallbackOffset parameter defines the behavior when the consumer has not requested a specific offset to consume or the requested offset exceeds the current record\\"s offset information in the Kafka cluster. You can choose to start consuming from the earliest (newest) or latest (oldest) offset.
    shared_ptr<string> fallbackOffset_ {};
    // Kafka group name
    shared_ptr<string> groupName_ {};
    // Job configuration file.
    shared_ptr<string> jobConfig_ {};
    // Job description.
    shared_ptr<string> jobDescription_ {};
    // Job ID.
    shared_ptr<string> jobId_ {};
    // Job name.
    shared_ptr<string> jobName_ {};
    // Match columns, usually all primary key columns of the target table. If all column values in this configuration are the same, the two rows of data are considered duplicates.
    shared_ptr<vector<string>> matchColumns_ {};
    // Configuration mode
    // 1. Basic mode requires specifying some configuration fields
    // 1. Professional mode supports submitting YAML files
    shared_ptr<string> mode_ {};
    // Last modified time.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> modifyTime_ {};
    // Target database password.
    shared_ptr<string> password_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Source field list.
    shared_ptr<vector<string>> srcColumns_ {};
    // Service status, with possible values:
    // 
    // - Init: Initializing
    // 
    // - Running: Running
    // 
    // - Exception: Exception
    // 
    // - Paused: Paused
    shared_ptr<string> status_ {};
    // Update columns, usually all non-primary key columns of the target table. When data duplication is determined through MatchColumns, updating the UpdateColumns column values will result in new data overwriting old data.
    shared_ptr<vector<string>> updateColumns_ {};
    // Write mode.
    shared_ptr<string> writeMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
