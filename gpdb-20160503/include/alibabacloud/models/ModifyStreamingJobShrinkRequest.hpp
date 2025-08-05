// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTREAMINGJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTREAMINGJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyStreamingJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStreamingJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Consistency, consistency_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DestColumns, destColumnsShrink_);
      DARABONBA_PTR_TO_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_TO_JSON(DestTable, destTable_);
      DARABONBA_PTR_TO_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_TO_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MatchColumns, matchColumnsShrink_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SrcColumns, srcColumnsShrink_);
      DARABONBA_PTR_TO_JSON(TryRun, tryRun_);
      DARABONBA_PTR_TO_JSON(UpdateColumns, updateColumnsShrink_);
      DARABONBA_PTR_TO_JSON(WriteMode, writeMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStreamingJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Consistency, consistency_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DestColumns, destColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_FROM_JSON(DestTable, destTable_);
      DARABONBA_PTR_FROM_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_FROM_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MatchColumns, matchColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SrcColumns, srcColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(TryRun, tryRun_);
      DARABONBA_PTR_FROM_JSON(UpdateColumns, updateColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(WriteMode, writeMode_);
    };
    ModifyStreamingJobShrinkRequest() = default ;
    ModifyStreamingJobShrinkRequest(const ModifyStreamingJobShrinkRequest &) = default ;
    ModifyStreamingJobShrinkRequest(ModifyStreamingJobShrinkRequest &&) = default ;
    ModifyStreamingJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStreamingJobShrinkRequest() = default ;
    ModifyStreamingJobShrinkRequest& operator=(const ModifyStreamingJobShrinkRequest &) = default ;
    ModifyStreamingJobShrinkRequest& operator=(ModifyStreamingJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->consistency_ != nullptr && this->DBInstanceId_ != nullptr && this->destColumnsShrink_ != nullptr && this->destDatabase_ != nullptr && this->destSchema_ != nullptr
        && this->destTable_ != nullptr && this->errorLimitCount_ != nullptr && this->fallbackOffset_ != nullptr && this->groupName_ != nullptr && this->jobConfig_ != nullptr
        && this->jobDescription_ != nullptr && this->jobId_ != nullptr && this->matchColumnsShrink_ != nullptr && this->password_ != nullptr && this->regionId_ != nullptr
        && this->srcColumnsShrink_ != nullptr && this->tryRun_ != nullptr && this->updateColumnsShrink_ != nullptr && this->writeMode_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ModifyStreamingJobShrinkRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // consistency Field Functions 
    bool hasConsistency() const { return this->consistency_ != nullptr;};
    void deleteConsistency() { this->consistency_ = nullptr;};
    inline string consistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, "") };
    inline ModifyStreamingJobShrinkRequest& setConsistency(string consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyStreamingJobShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // destColumnsShrink Field Functions 
    bool hasDestColumnsShrink() const { return this->destColumnsShrink_ != nullptr;};
    void deleteDestColumnsShrink() { this->destColumnsShrink_ = nullptr;};
    inline string destColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(destColumnsShrink_, "") };
    inline ModifyStreamingJobShrinkRequest& setDestColumnsShrink(string destColumnsShrink) { DARABONBA_PTR_SET_VALUE(destColumnsShrink_, destColumnsShrink) };


    // destDatabase Field Functions 
    bool hasDestDatabase() const { return this->destDatabase_ != nullptr;};
    void deleteDestDatabase() { this->destDatabase_ = nullptr;};
    inline string destDatabase() const { DARABONBA_PTR_GET_DEFAULT(destDatabase_, "") };
    inline ModifyStreamingJobShrinkRequest& setDestDatabase(string destDatabase) { DARABONBA_PTR_SET_VALUE(destDatabase_, destDatabase) };


    // destSchema Field Functions 
    bool hasDestSchema() const { return this->destSchema_ != nullptr;};
    void deleteDestSchema() { this->destSchema_ = nullptr;};
    inline string destSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
    inline ModifyStreamingJobShrinkRequest& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


    // destTable Field Functions 
    bool hasDestTable() const { return this->destTable_ != nullptr;};
    void deleteDestTable() { this->destTable_ = nullptr;};
    inline string destTable() const { DARABONBA_PTR_GET_DEFAULT(destTable_, "") };
    inline ModifyStreamingJobShrinkRequest& setDestTable(string destTable) { DARABONBA_PTR_SET_VALUE(destTable_, destTable) };


    // errorLimitCount Field Functions 
    bool hasErrorLimitCount() const { return this->errorLimitCount_ != nullptr;};
    void deleteErrorLimitCount() { this->errorLimitCount_ = nullptr;};
    inline int64_t errorLimitCount() const { DARABONBA_PTR_GET_DEFAULT(errorLimitCount_, 0L) };
    inline ModifyStreamingJobShrinkRequest& setErrorLimitCount(int64_t errorLimitCount) { DARABONBA_PTR_SET_VALUE(errorLimitCount_, errorLimitCount) };


    // fallbackOffset Field Functions 
    bool hasFallbackOffset() const { return this->fallbackOffset_ != nullptr;};
    void deleteFallbackOffset() { this->fallbackOffset_ = nullptr;};
    inline string fallbackOffset() const { DARABONBA_PTR_GET_DEFAULT(fallbackOffset_, "") };
    inline ModifyStreamingJobShrinkRequest& setFallbackOffset(string fallbackOffset) { DARABONBA_PTR_SET_VALUE(fallbackOffset_, fallbackOffset) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyStreamingJobShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // jobConfig Field Functions 
    bool hasJobConfig() const { return this->jobConfig_ != nullptr;};
    void deleteJobConfig() { this->jobConfig_ = nullptr;};
    inline string jobConfig() const { DARABONBA_PTR_GET_DEFAULT(jobConfig_, "") };
    inline ModifyStreamingJobShrinkRequest& setJobConfig(string jobConfig) { DARABONBA_PTR_SET_VALUE(jobConfig_, jobConfig) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string jobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline ModifyStreamingJobShrinkRequest& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ModifyStreamingJobShrinkRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // matchColumnsShrink Field Functions 
    bool hasMatchColumnsShrink() const { return this->matchColumnsShrink_ != nullptr;};
    void deleteMatchColumnsShrink() { this->matchColumnsShrink_ = nullptr;};
    inline string matchColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(matchColumnsShrink_, "") };
    inline ModifyStreamingJobShrinkRequest& setMatchColumnsShrink(string matchColumnsShrink) { DARABONBA_PTR_SET_VALUE(matchColumnsShrink_, matchColumnsShrink) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyStreamingJobShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyStreamingJobShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // srcColumnsShrink Field Functions 
    bool hasSrcColumnsShrink() const { return this->srcColumnsShrink_ != nullptr;};
    void deleteSrcColumnsShrink() { this->srcColumnsShrink_ = nullptr;};
    inline string srcColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(srcColumnsShrink_, "") };
    inline ModifyStreamingJobShrinkRequest& setSrcColumnsShrink(string srcColumnsShrink) { DARABONBA_PTR_SET_VALUE(srcColumnsShrink_, srcColumnsShrink) };


    // tryRun Field Functions 
    bool hasTryRun() const { return this->tryRun_ != nullptr;};
    void deleteTryRun() { this->tryRun_ = nullptr;};
    inline bool tryRun() const { DARABONBA_PTR_GET_DEFAULT(tryRun_, false) };
    inline ModifyStreamingJobShrinkRequest& setTryRun(bool tryRun) { DARABONBA_PTR_SET_VALUE(tryRun_, tryRun) };


    // updateColumnsShrink Field Functions 
    bool hasUpdateColumnsShrink() const { return this->updateColumnsShrink_ != nullptr;};
    void deleteUpdateColumnsShrink() { this->updateColumnsShrink_ = nullptr;};
    inline string updateColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(updateColumnsShrink_, "") };
    inline ModifyStreamingJobShrinkRequest& setUpdateColumnsShrink(string updateColumnsShrink) { DARABONBA_PTR_SET_VALUE(updateColumnsShrink_, updateColumnsShrink) };


    // writeMode Field Functions 
    bool hasWriteMode() const { return this->writeMode_ != nullptr;};
    void deleteWriteMode() { this->writeMode_ = nullptr;};
    inline string writeMode() const { DARABONBA_PTR_GET_DEFAULT(writeMode_, "") };
    inline ModifyStreamingJobShrinkRequest& setWriteMode(string writeMode) { DARABONBA_PTR_SET_VALUE(writeMode_, writeMode) };


  protected:
    // Account name.
    std::shared_ptr<string> account_ = nullptr;
    // The delivery guarantee setting.
    std::shared_ptr<string> consistency_ = nullptr;
    // Instance ID
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Target data table mapping field list.
    std::shared_ptr<string> destColumnsShrink_ = nullptr;
    // Target database name.
    std::shared_ptr<string> destDatabase_ = nullptr;
    // Target schema.
    std::shared_ptr<string> destSchema_ = nullptr;
    // Target table name.
    std::shared_ptr<string> destTable_ = nullptr;
    // When the data in Kafka does not match the ADBPG target table, it will cause a write failure. This value is the number of error rows allowed; exceeding this will cause the task to fail.
    std::shared_ptr<int64_t> errorLimitCount_ = nullptr;
    // The fallback offset for data consumption.
    // 
    // *   This parameter specifies the starting offset from which data consumption resumes when a consumer does not request a consumption offset or requests a consumption offset that is beyond the range of the offset information recorded in the current Kafka cluster. You can choose to start data consumption from the earliest or latest offset.
    // 
    // Valid values:
    // *   EARLIEST
    // *   LATEST
    std::shared_ptr<string> fallbackOffset_ = nullptr;
    // Kafka group name
    std::shared_ptr<string> groupName_ = nullptr;
    // Job configuration file, required for professional mode.
    std::shared_ptr<string> jobConfig_ = nullptr;
    // Job description.
    std::shared_ptr<string> jobDescription_ = nullptr;
    // Job ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // Match columns, usually all primary key columns of the target table. If all column values in this configuration are the same, the two rows of data are considered duplicates.
    std::shared_ptr<string> matchColumnsShrink_ = nullptr;
    // Password.
    std::shared_ptr<string> password_ = nullptr;
    // Region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) API to view available region IDs.
    std::shared_ptr<string> regionId_ = nullptr;
    // Source data field list.
    std::shared_ptr<string> srcColumnsShrink_ = nullptr;
    // Specifies whether to test the real-time job. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> tryRun_ = nullptr;
    // Update columns, usually all non-primary key columns of the target table. When data duplication is determined through MatchColumns, updating the UpdateColumns column values will result in new data overwriting old data.
    std::shared_ptr<string> updateColumnsShrink_ = nullptr;
    // The write mode.
    // 
    // Valid values:
    // 
    // *   MERGE
    // *   INSERT
    // *   UPDATE
    std::shared_ptr<string> writeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
