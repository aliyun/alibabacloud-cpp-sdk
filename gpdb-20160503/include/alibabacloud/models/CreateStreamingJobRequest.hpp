// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMINGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMINGJOBREQUEST_HPP_
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
  class CreateStreamingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Consistency, consistency_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DestColumns, destColumns_);
      DARABONBA_PTR_TO_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_TO_JSON(DestTable, destTable_);
      DARABONBA_PTR_TO_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_TO_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(MatchColumns, matchColumns_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SrcColumns, srcColumns_);
      DARABONBA_PTR_TO_JSON(TryRun, tryRun_);
      DARABONBA_PTR_TO_JSON(UpdateColumns, updateColumns_);
      DARABONBA_PTR_TO_JSON(WriteMode, writeMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Consistency, consistency_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DestColumns, destColumns_);
      DARABONBA_PTR_FROM_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_FROM_JSON(DestTable, destTable_);
      DARABONBA_PTR_FROM_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_FROM_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(MatchColumns, matchColumns_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SrcColumns, srcColumns_);
      DARABONBA_PTR_FROM_JSON(TryRun, tryRun_);
      DARABONBA_PTR_FROM_JSON(UpdateColumns, updateColumns_);
      DARABONBA_PTR_FROM_JSON(WriteMode, writeMode_);
    };
    CreateStreamingJobRequest() = default ;
    CreateStreamingJobRequest(const CreateStreamingJobRequest &) = default ;
    CreateStreamingJobRequest(CreateStreamingJobRequest &&) = default ;
    CreateStreamingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamingJobRequest() = default ;
    CreateStreamingJobRequest& operator=(const CreateStreamingJobRequest &) = default ;
    CreateStreamingJobRequest& operator=(CreateStreamingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->consistency_ == nullptr && return this->DBInstanceId_ == nullptr && return this->dataSourceId_ == nullptr && return this->destColumns_ == nullptr && return this->destDatabase_ == nullptr
        && return this->destSchema_ == nullptr && return this->destTable_ == nullptr && return this->errorLimitCount_ == nullptr && return this->fallbackOffset_ == nullptr && return this->groupName_ == nullptr
        && return this->jobConfig_ == nullptr && return this->jobDescription_ == nullptr && return this->jobName_ == nullptr && return this->matchColumns_ == nullptr && return this->mode_ == nullptr
        && return this->password_ == nullptr && return this->regionId_ == nullptr && return this->srcColumns_ == nullptr && return this->tryRun_ == nullptr && return this->updateColumns_ == nullptr
        && return this->writeMode_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline CreateStreamingJobRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // consistency Field Functions 
    bool hasConsistency() const { return this->consistency_ != nullptr;};
    void deleteConsistency() { this->consistency_ = nullptr;};
    inline string consistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, "") };
    inline CreateStreamingJobRequest& setConsistency(string consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateStreamingJobRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreateStreamingJobRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // destColumns Field Functions 
    bool hasDestColumns() const { return this->destColumns_ != nullptr;};
    void deleteDestColumns() { this->destColumns_ = nullptr;};
    inline const vector<string> & destColumns() const { DARABONBA_PTR_GET_CONST(destColumns_, vector<string>) };
    inline vector<string> destColumns() { DARABONBA_PTR_GET(destColumns_, vector<string>) };
    inline CreateStreamingJobRequest& setDestColumns(const vector<string> & destColumns) { DARABONBA_PTR_SET_VALUE(destColumns_, destColumns) };
    inline CreateStreamingJobRequest& setDestColumns(vector<string> && destColumns) { DARABONBA_PTR_SET_RVALUE(destColumns_, destColumns) };


    // destDatabase Field Functions 
    bool hasDestDatabase() const { return this->destDatabase_ != nullptr;};
    void deleteDestDatabase() { this->destDatabase_ = nullptr;};
    inline string destDatabase() const { DARABONBA_PTR_GET_DEFAULT(destDatabase_, "") };
    inline CreateStreamingJobRequest& setDestDatabase(string destDatabase) { DARABONBA_PTR_SET_VALUE(destDatabase_, destDatabase) };


    // destSchema Field Functions 
    bool hasDestSchema() const { return this->destSchema_ != nullptr;};
    void deleteDestSchema() { this->destSchema_ = nullptr;};
    inline string destSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
    inline CreateStreamingJobRequest& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


    // destTable Field Functions 
    bool hasDestTable() const { return this->destTable_ != nullptr;};
    void deleteDestTable() { this->destTable_ = nullptr;};
    inline string destTable() const { DARABONBA_PTR_GET_DEFAULT(destTable_, "") };
    inline CreateStreamingJobRequest& setDestTable(string destTable) { DARABONBA_PTR_SET_VALUE(destTable_, destTable) };


    // errorLimitCount Field Functions 
    bool hasErrorLimitCount() const { return this->errorLimitCount_ != nullptr;};
    void deleteErrorLimitCount() { this->errorLimitCount_ = nullptr;};
    inline int64_t errorLimitCount() const { DARABONBA_PTR_GET_DEFAULT(errorLimitCount_, 0L) };
    inline CreateStreamingJobRequest& setErrorLimitCount(int64_t errorLimitCount) { DARABONBA_PTR_SET_VALUE(errorLimitCount_, errorLimitCount) };


    // fallbackOffset Field Functions 
    bool hasFallbackOffset() const { return this->fallbackOffset_ != nullptr;};
    void deleteFallbackOffset() { this->fallbackOffset_ = nullptr;};
    inline string fallbackOffset() const { DARABONBA_PTR_GET_DEFAULT(fallbackOffset_, "") };
    inline CreateStreamingJobRequest& setFallbackOffset(string fallbackOffset) { DARABONBA_PTR_SET_VALUE(fallbackOffset_, fallbackOffset) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateStreamingJobRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // jobConfig Field Functions 
    bool hasJobConfig() const { return this->jobConfig_ != nullptr;};
    void deleteJobConfig() { this->jobConfig_ = nullptr;};
    inline string jobConfig() const { DARABONBA_PTR_GET_DEFAULT(jobConfig_, "") };
    inline CreateStreamingJobRequest& setJobConfig(string jobConfig) { DARABONBA_PTR_SET_VALUE(jobConfig_, jobConfig) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string jobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline CreateStreamingJobRequest& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateStreamingJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // matchColumns Field Functions 
    bool hasMatchColumns() const { return this->matchColumns_ != nullptr;};
    void deleteMatchColumns() { this->matchColumns_ = nullptr;};
    inline const vector<string> & matchColumns() const { DARABONBA_PTR_GET_CONST(matchColumns_, vector<string>) };
    inline vector<string> matchColumns() { DARABONBA_PTR_GET(matchColumns_, vector<string>) };
    inline CreateStreamingJobRequest& setMatchColumns(const vector<string> & matchColumns) { DARABONBA_PTR_SET_VALUE(matchColumns_, matchColumns) };
    inline CreateStreamingJobRequest& setMatchColumns(vector<string> && matchColumns) { DARABONBA_PTR_SET_RVALUE(matchColumns_, matchColumns) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateStreamingJobRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateStreamingJobRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStreamingJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // srcColumns Field Functions 
    bool hasSrcColumns() const { return this->srcColumns_ != nullptr;};
    void deleteSrcColumns() { this->srcColumns_ = nullptr;};
    inline const vector<string> & srcColumns() const { DARABONBA_PTR_GET_CONST(srcColumns_, vector<string>) };
    inline vector<string> srcColumns() { DARABONBA_PTR_GET(srcColumns_, vector<string>) };
    inline CreateStreamingJobRequest& setSrcColumns(const vector<string> & srcColumns) { DARABONBA_PTR_SET_VALUE(srcColumns_, srcColumns) };
    inline CreateStreamingJobRequest& setSrcColumns(vector<string> && srcColumns) { DARABONBA_PTR_SET_RVALUE(srcColumns_, srcColumns) };


    // tryRun Field Functions 
    bool hasTryRun() const { return this->tryRun_ != nullptr;};
    void deleteTryRun() { this->tryRun_ = nullptr;};
    inline bool tryRun() const { DARABONBA_PTR_GET_DEFAULT(tryRun_, false) };
    inline CreateStreamingJobRequest& setTryRun(bool tryRun) { DARABONBA_PTR_SET_VALUE(tryRun_, tryRun) };


    // updateColumns Field Functions 
    bool hasUpdateColumns() const { return this->updateColumns_ != nullptr;};
    void deleteUpdateColumns() { this->updateColumns_ = nullptr;};
    inline const vector<string> & updateColumns() const { DARABONBA_PTR_GET_CONST(updateColumns_, vector<string>) };
    inline vector<string> updateColumns() { DARABONBA_PTR_GET(updateColumns_, vector<string>) };
    inline CreateStreamingJobRequest& setUpdateColumns(const vector<string> & updateColumns) { DARABONBA_PTR_SET_VALUE(updateColumns_, updateColumns) };
    inline CreateStreamingJobRequest& setUpdateColumns(vector<string> && updateColumns) { DARABONBA_PTR_SET_RVALUE(updateColumns_, updateColumns) };


    // writeMode Field Functions 
    bool hasWriteMode() const { return this->writeMode_ != nullptr;};
    void deleteWriteMode() { this->writeMode_ = nullptr;};
    inline string writeMode() const { DARABONBA_PTR_GET_DEFAULT(writeMode_, "") };
    inline CreateStreamingJobRequest& setWriteMode(string writeMode) { DARABONBA_PTR_SET_VALUE(writeMode_, writeMode) };


  protected:
    // Target database account.
    std::shared_ptr<string> account_ = nullptr;
    // Delivery guarantee.
    std::shared_ptr<string> consistency_ = nullptr;
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Data source ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // Target data table mapping field list.
    std::shared_ptr<vector<string>> destColumns_ = nullptr;
    // Target database name.
    std::shared_ptr<string> destDatabase_ = nullptr;
    // Target namespace.
    std::shared_ptr<string> destSchema_ = nullptr;
    // Target table name.
    std::shared_ptr<string> destTable_ = nullptr;
    // When data in Kafka does not match the ADBPG target table, it will cause a write failure. This value is the number of error rows allowed; exceeding this will cause the task to fail.
    std::shared_ptr<int64_t> errorLimitCount_ = nullptr;
    // FallbackOffset, fallback offset
    // 
    // - The FallbackOffset parameter defines the behavior when the consumer does not request a specific offset or the requested offset exceeds the current Kafka cluster\\"s recorded offset information. You can choose to start consuming from the earliest (newest) or latest (oldest) offset.
    std::shared_ptr<string> fallbackOffset_ = nullptr;
    // Kafka group name
    std::shared_ptr<string> groupName_ = nullptr;
    // Job configuration file, required for professional mode.
    std::shared_ptr<string> jobConfig_ = nullptr;
    // Job description.
    std::shared_ptr<string> jobDescription_ = nullptr;
    // Job name.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobName_ = nullptr;
    // Match columns, usually all primary key columns of the target table. If all column values in this configuration are the same, the two rows of data are considered duplicates.
    std::shared_ptr<vector<string>> matchColumns_ = nullptr;
    // Configuration mode
    // 1. Basic mode requires specifying some configuration fields
    // 1. Professional mode supports submitting a YAML file
    std::shared_ptr<string> mode_ = nullptr;
    // Target database password.
    std::shared_ptr<string> password_ = nullptr;
    // Region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) API to view available region IDs.
    std::shared_ptr<string> regionId_ = nullptr;
    // Source data field list.
    std::shared_ptr<vector<string>> srcColumns_ = nullptr;
    // Whether to test the real-time task, values:
    // 
    // - true
    // 
    // - false
    // 
    // Default value: false.
    std::shared_ptr<bool> tryRun_ = nullptr;
    // Update columns, usually all non-primary key columns of the target table. When data is determined to be duplicate through MatchColumns, updating the UpdateColumns column values will result in new data overwriting old data.
    std::shared_ptr<vector<string>> updateColumns_ = nullptr;
    // Write mode.
    std::shared_ptr<string> writeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
