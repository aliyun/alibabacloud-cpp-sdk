// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMINGJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMINGJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateStreamingJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamingJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Consistency, consistency_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DestColumns, destColumnsShrink_);
      DARABONBA_PTR_TO_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_TO_JSON(DestTable, destTable_);
      DARABONBA_PTR_TO_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_TO_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(MatchColumns, matchColumnsShrink_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SrcColumns, srcColumnsShrink_);
      DARABONBA_PTR_TO_JSON(TryRun, tryRun_);
      DARABONBA_PTR_TO_JSON(UpdateColumns, updateColumnsShrink_);
      DARABONBA_PTR_TO_JSON(WriteMode, writeMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamingJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Consistency, consistency_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DestColumns, destColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_FROM_JSON(DestTable, destTable_);
      DARABONBA_PTR_FROM_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_FROM_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(MatchColumns, matchColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SrcColumns, srcColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(TryRun, tryRun_);
      DARABONBA_PTR_FROM_JSON(UpdateColumns, updateColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(WriteMode, writeMode_);
    };
    CreateStreamingJobShrinkRequest() = default ;
    CreateStreamingJobShrinkRequest(const CreateStreamingJobShrinkRequest &) = default ;
    CreateStreamingJobShrinkRequest(CreateStreamingJobShrinkRequest &&) = default ;
    CreateStreamingJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamingJobShrinkRequest() = default ;
    CreateStreamingJobShrinkRequest& operator=(const CreateStreamingJobShrinkRequest &) = default ;
    CreateStreamingJobShrinkRequest& operator=(CreateStreamingJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->consistency_ == nullptr && this->DBInstanceId_ == nullptr && this->dataSourceId_ == nullptr && this->destColumnsShrink_ == nullptr && this->destDatabase_ == nullptr
        && this->destSchema_ == nullptr && this->destTable_ == nullptr && this->errorLimitCount_ == nullptr && this->fallbackOffset_ == nullptr && this->groupName_ == nullptr
        && this->jobConfig_ == nullptr && this->jobDescription_ == nullptr && this->jobName_ == nullptr && this->matchColumnsShrink_ == nullptr && this->mode_ == nullptr
        && this->password_ == nullptr && this->regionId_ == nullptr && this->srcColumnsShrink_ == nullptr && this->tryRun_ == nullptr && this->updateColumnsShrink_ == nullptr
        && this->writeMode_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline CreateStreamingJobShrinkRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // consistency Field Functions 
    bool hasConsistency() const { return this->consistency_ != nullptr;};
    void deleteConsistency() { this->consistency_ = nullptr;};
    inline string getConsistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, "") };
    inline CreateStreamingJobShrinkRequest& setConsistency(string consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateStreamingJobShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreateStreamingJobShrinkRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // destColumnsShrink Field Functions 
    bool hasDestColumnsShrink() const { return this->destColumnsShrink_ != nullptr;};
    void deleteDestColumnsShrink() { this->destColumnsShrink_ = nullptr;};
    inline string getDestColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(destColumnsShrink_, "") };
    inline CreateStreamingJobShrinkRequest& setDestColumnsShrink(string destColumnsShrink) { DARABONBA_PTR_SET_VALUE(destColumnsShrink_, destColumnsShrink) };


    // destDatabase Field Functions 
    bool hasDestDatabase() const { return this->destDatabase_ != nullptr;};
    void deleteDestDatabase() { this->destDatabase_ = nullptr;};
    inline string getDestDatabase() const { DARABONBA_PTR_GET_DEFAULT(destDatabase_, "") };
    inline CreateStreamingJobShrinkRequest& setDestDatabase(string destDatabase) { DARABONBA_PTR_SET_VALUE(destDatabase_, destDatabase) };


    // destSchema Field Functions 
    bool hasDestSchema() const { return this->destSchema_ != nullptr;};
    void deleteDestSchema() { this->destSchema_ = nullptr;};
    inline string getDestSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
    inline CreateStreamingJobShrinkRequest& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


    // destTable Field Functions 
    bool hasDestTable() const { return this->destTable_ != nullptr;};
    void deleteDestTable() { this->destTable_ = nullptr;};
    inline string getDestTable() const { DARABONBA_PTR_GET_DEFAULT(destTable_, "") };
    inline CreateStreamingJobShrinkRequest& setDestTable(string destTable) { DARABONBA_PTR_SET_VALUE(destTable_, destTable) };


    // errorLimitCount Field Functions 
    bool hasErrorLimitCount() const { return this->errorLimitCount_ != nullptr;};
    void deleteErrorLimitCount() { this->errorLimitCount_ = nullptr;};
    inline int64_t getErrorLimitCount() const { DARABONBA_PTR_GET_DEFAULT(errorLimitCount_, 0L) };
    inline CreateStreamingJobShrinkRequest& setErrorLimitCount(int64_t errorLimitCount) { DARABONBA_PTR_SET_VALUE(errorLimitCount_, errorLimitCount) };


    // fallbackOffset Field Functions 
    bool hasFallbackOffset() const { return this->fallbackOffset_ != nullptr;};
    void deleteFallbackOffset() { this->fallbackOffset_ = nullptr;};
    inline string getFallbackOffset() const { DARABONBA_PTR_GET_DEFAULT(fallbackOffset_, "") };
    inline CreateStreamingJobShrinkRequest& setFallbackOffset(string fallbackOffset) { DARABONBA_PTR_SET_VALUE(fallbackOffset_, fallbackOffset) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateStreamingJobShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // jobConfig Field Functions 
    bool hasJobConfig() const { return this->jobConfig_ != nullptr;};
    void deleteJobConfig() { this->jobConfig_ = nullptr;};
    inline string getJobConfig() const { DARABONBA_PTR_GET_DEFAULT(jobConfig_, "") };
    inline CreateStreamingJobShrinkRequest& setJobConfig(string jobConfig) { DARABONBA_PTR_SET_VALUE(jobConfig_, jobConfig) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string getJobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline CreateStreamingJobShrinkRequest& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateStreamingJobShrinkRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // matchColumnsShrink Field Functions 
    bool hasMatchColumnsShrink() const { return this->matchColumnsShrink_ != nullptr;};
    void deleteMatchColumnsShrink() { this->matchColumnsShrink_ = nullptr;};
    inline string getMatchColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(matchColumnsShrink_, "") };
    inline CreateStreamingJobShrinkRequest& setMatchColumnsShrink(string matchColumnsShrink) { DARABONBA_PTR_SET_VALUE(matchColumnsShrink_, matchColumnsShrink) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateStreamingJobShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateStreamingJobShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStreamingJobShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // srcColumnsShrink Field Functions 
    bool hasSrcColumnsShrink() const { return this->srcColumnsShrink_ != nullptr;};
    void deleteSrcColumnsShrink() { this->srcColumnsShrink_ = nullptr;};
    inline string getSrcColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(srcColumnsShrink_, "") };
    inline CreateStreamingJobShrinkRequest& setSrcColumnsShrink(string srcColumnsShrink) { DARABONBA_PTR_SET_VALUE(srcColumnsShrink_, srcColumnsShrink) };


    // tryRun Field Functions 
    bool hasTryRun() const { return this->tryRun_ != nullptr;};
    void deleteTryRun() { this->tryRun_ = nullptr;};
    inline bool getTryRun() const { DARABONBA_PTR_GET_DEFAULT(tryRun_, false) };
    inline CreateStreamingJobShrinkRequest& setTryRun(bool tryRun) { DARABONBA_PTR_SET_VALUE(tryRun_, tryRun) };


    // updateColumnsShrink Field Functions 
    bool hasUpdateColumnsShrink() const { return this->updateColumnsShrink_ != nullptr;};
    void deleteUpdateColumnsShrink() { this->updateColumnsShrink_ = nullptr;};
    inline string getUpdateColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(updateColumnsShrink_, "") };
    inline CreateStreamingJobShrinkRequest& setUpdateColumnsShrink(string updateColumnsShrink) { DARABONBA_PTR_SET_VALUE(updateColumnsShrink_, updateColumnsShrink) };


    // writeMode Field Functions 
    bool hasWriteMode() const { return this->writeMode_ != nullptr;};
    void deleteWriteMode() { this->writeMode_ = nullptr;};
    inline string getWriteMode() const { DARABONBA_PTR_GET_DEFAULT(writeMode_, "") };
    inline CreateStreamingJobShrinkRequest& setWriteMode(string writeMode) { DARABONBA_PTR_SET_VALUE(writeMode_, writeMode) };


  protected:
    // Target database account.
    shared_ptr<string> account_ {};
    // Delivery guarantee.
    shared_ptr<string> consistency_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Data source ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceId_ {};
    // Target data table mapping field list.
    shared_ptr<string> destColumnsShrink_ {};
    // Target database name.
    shared_ptr<string> destDatabase_ {};
    // Target namespace.
    shared_ptr<string> destSchema_ {};
    // Target table name.
    shared_ptr<string> destTable_ {};
    // When data in Kafka does not match the ADBPG target table, it will cause a write failure. This value is the number of error rows allowed; exceeding this will cause the task to fail.
    shared_ptr<int64_t> errorLimitCount_ {};
    // FallbackOffset, fallback offset
    // 
    // - The FallbackOffset parameter defines the behavior when the consumer does not request a specific offset or the requested offset exceeds the current Kafka cluster\\"s recorded offset information. You can choose to start consuming from the earliest (newest) or latest (oldest) offset.
    shared_ptr<string> fallbackOffset_ {};
    // Kafka group name
    shared_ptr<string> groupName_ {};
    // Job configuration file, required for professional mode.
    shared_ptr<string> jobConfig_ {};
    // Job description.
    shared_ptr<string> jobDescription_ {};
    // Job name.
    // 
    // This parameter is required.
    shared_ptr<string> jobName_ {};
    // Match columns, usually all primary key columns of the target table. If all column values in this configuration are the same, the two rows of data are considered duplicates.
    shared_ptr<string> matchColumnsShrink_ {};
    // Configuration mode
    // 1. Basic mode requires specifying some configuration fields
    // 1. Professional mode supports submitting a YAML file
    shared_ptr<string> mode_ {};
    // Target database password.
    shared_ptr<string> password_ {};
    // Region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) API to view available region IDs.
    shared_ptr<string> regionId_ {};
    // Source data field list.
    shared_ptr<string> srcColumnsShrink_ {};
    // Whether to test the real-time task, values:
    // 
    // - true
    // 
    // - false
    // 
    // Default value: false.
    shared_ptr<bool> tryRun_ {};
    // Update columns, usually all non-primary key columns of the target table. When data is determined to be duplicate through MatchColumns, updating the UpdateColumns column values will result in new data overwriting old data.
    shared_ptr<string> updateColumnsShrink_ {};
    // Write mode.
    shared_ptr<string> writeMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
