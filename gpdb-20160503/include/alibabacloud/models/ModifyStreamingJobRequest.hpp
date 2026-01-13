// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTREAMINGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTREAMINGJOBREQUEST_HPP_
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
  class ModifyStreamingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStreamingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Consistency, consistency_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DestColumns, destColumns_);
      DARABONBA_PTR_TO_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_TO_JSON(DestTable, destTable_);
      DARABONBA_PTR_TO_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_TO_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MatchColumns, matchColumns_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SrcColumns, srcColumns_);
      DARABONBA_PTR_TO_JSON(TryRun, tryRun_);
      DARABONBA_PTR_TO_JSON(UpdateColumns, updateColumns_);
      DARABONBA_PTR_TO_JSON(WriteMode, writeMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStreamingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Consistency, consistency_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DestColumns, destColumns_);
      DARABONBA_PTR_FROM_JSON(DestDatabase, destDatabase_);
      DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
      DARABONBA_PTR_FROM_JSON(DestTable, destTable_);
      DARABONBA_PTR_FROM_JSON(ErrorLimitCount, errorLimitCount_);
      DARABONBA_PTR_FROM_JSON(FallbackOffset, fallbackOffset_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MatchColumns, matchColumns_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SrcColumns, srcColumns_);
      DARABONBA_PTR_FROM_JSON(TryRun, tryRun_);
      DARABONBA_PTR_FROM_JSON(UpdateColumns, updateColumns_);
      DARABONBA_PTR_FROM_JSON(WriteMode, writeMode_);
    };
    ModifyStreamingJobRequest() = default ;
    ModifyStreamingJobRequest(const ModifyStreamingJobRequest &) = default ;
    ModifyStreamingJobRequest(ModifyStreamingJobRequest &&) = default ;
    ModifyStreamingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStreamingJobRequest() = default ;
    ModifyStreamingJobRequest& operator=(const ModifyStreamingJobRequest &) = default ;
    ModifyStreamingJobRequest& operator=(ModifyStreamingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->consistency_ == nullptr && this->DBInstanceId_ == nullptr && this->destColumns_ == nullptr && this->destDatabase_ == nullptr && this->destSchema_ == nullptr
        && this->destTable_ == nullptr && this->errorLimitCount_ == nullptr && this->fallbackOffset_ == nullptr && this->groupName_ == nullptr && this->jobConfig_ == nullptr
        && this->jobDescription_ == nullptr && this->jobId_ == nullptr && this->matchColumns_ == nullptr && this->password_ == nullptr && this->regionId_ == nullptr
        && this->srcColumns_ == nullptr && this->tryRun_ == nullptr && this->updateColumns_ == nullptr && this->writeMode_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ModifyStreamingJobRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // consistency Field Functions 
    bool hasConsistency() const { return this->consistency_ != nullptr;};
    void deleteConsistency() { this->consistency_ = nullptr;};
    inline string getConsistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, "") };
    inline ModifyStreamingJobRequest& setConsistency(string consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyStreamingJobRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // destColumns Field Functions 
    bool hasDestColumns() const { return this->destColumns_ != nullptr;};
    void deleteDestColumns() { this->destColumns_ = nullptr;};
    inline const vector<string> & getDestColumns() const { DARABONBA_PTR_GET_CONST(destColumns_, vector<string>) };
    inline vector<string> getDestColumns() { DARABONBA_PTR_GET(destColumns_, vector<string>) };
    inline ModifyStreamingJobRequest& setDestColumns(const vector<string> & destColumns) { DARABONBA_PTR_SET_VALUE(destColumns_, destColumns) };
    inline ModifyStreamingJobRequest& setDestColumns(vector<string> && destColumns) { DARABONBA_PTR_SET_RVALUE(destColumns_, destColumns) };


    // destDatabase Field Functions 
    bool hasDestDatabase() const { return this->destDatabase_ != nullptr;};
    void deleteDestDatabase() { this->destDatabase_ = nullptr;};
    inline string getDestDatabase() const { DARABONBA_PTR_GET_DEFAULT(destDatabase_, "") };
    inline ModifyStreamingJobRequest& setDestDatabase(string destDatabase) { DARABONBA_PTR_SET_VALUE(destDatabase_, destDatabase) };


    // destSchema Field Functions 
    bool hasDestSchema() const { return this->destSchema_ != nullptr;};
    void deleteDestSchema() { this->destSchema_ = nullptr;};
    inline string getDestSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
    inline ModifyStreamingJobRequest& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


    // destTable Field Functions 
    bool hasDestTable() const { return this->destTable_ != nullptr;};
    void deleteDestTable() { this->destTable_ = nullptr;};
    inline string getDestTable() const { DARABONBA_PTR_GET_DEFAULT(destTable_, "") };
    inline ModifyStreamingJobRequest& setDestTable(string destTable) { DARABONBA_PTR_SET_VALUE(destTable_, destTable) };


    // errorLimitCount Field Functions 
    bool hasErrorLimitCount() const { return this->errorLimitCount_ != nullptr;};
    void deleteErrorLimitCount() { this->errorLimitCount_ = nullptr;};
    inline int64_t getErrorLimitCount() const { DARABONBA_PTR_GET_DEFAULT(errorLimitCount_, 0L) };
    inline ModifyStreamingJobRequest& setErrorLimitCount(int64_t errorLimitCount) { DARABONBA_PTR_SET_VALUE(errorLimitCount_, errorLimitCount) };


    // fallbackOffset Field Functions 
    bool hasFallbackOffset() const { return this->fallbackOffset_ != nullptr;};
    void deleteFallbackOffset() { this->fallbackOffset_ = nullptr;};
    inline string getFallbackOffset() const { DARABONBA_PTR_GET_DEFAULT(fallbackOffset_, "") };
    inline ModifyStreamingJobRequest& setFallbackOffset(string fallbackOffset) { DARABONBA_PTR_SET_VALUE(fallbackOffset_, fallbackOffset) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyStreamingJobRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // jobConfig Field Functions 
    bool hasJobConfig() const { return this->jobConfig_ != nullptr;};
    void deleteJobConfig() { this->jobConfig_ = nullptr;};
    inline string getJobConfig() const { DARABONBA_PTR_GET_DEFAULT(jobConfig_, "") };
    inline ModifyStreamingJobRequest& setJobConfig(string jobConfig) { DARABONBA_PTR_SET_VALUE(jobConfig_, jobConfig) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string getJobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline ModifyStreamingJobRequest& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ModifyStreamingJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // matchColumns Field Functions 
    bool hasMatchColumns() const { return this->matchColumns_ != nullptr;};
    void deleteMatchColumns() { this->matchColumns_ = nullptr;};
    inline const vector<string> & getMatchColumns() const { DARABONBA_PTR_GET_CONST(matchColumns_, vector<string>) };
    inline vector<string> getMatchColumns() { DARABONBA_PTR_GET(matchColumns_, vector<string>) };
    inline ModifyStreamingJobRequest& setMatchColumns(const vector<string> & matchColumns) { DARABONBA_PTR_SET_VALUE(matchColumns_, matchColumns) };
    inline ModifyStreamingJobRequest& setMatchColumns(vector<string> && matchColumns) { DARABONBA_PTR_SET_RVALUE(matchColumns_, matchColumns) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyStreamingJobRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyStreamingJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // srcColumns Field Functions 
    bool hasSrcColumns() const { return this->srcColumns_ != nullptr;};
    void deleteSrcColumns() { this->srcColumns_ = nullptr;};
    inline const vector<string> & getSrcColumns() const { DARABONBA_PTR_GET_CONST(srcColumns_, vector<string>) };
    inline vector<string> getSrcColumns() { DARABONBA_PTR_GET(srcColumns_, vector<string>) };
    inline ModifyStreamingJobRequest& setSrcColumns(const vector<string> & srcColumns) { DARABONBA_PTR_SET_VALUE(srcColumns_, srcColumns) };
    inline ModifyStreamingJobRequest& setSrcColumns(vector<string> && srcColumns) { DARABONBA_PTR_SET_RVALUE(srcColumns_, srcColumns) };


    // tryRun Field Functions 
    bool hasTryRun() const { return this->tryRun_ != nullptr;};
    void deleteTryRun() { this->tryRun_ = nullptr;};
    inline bool getTryRun() const { DARABONBA_PTR_GET_DEFAULT(tryRun_, false) };
    inline ModifyStreamingJobRequest& setTryRun(bool tryRun) { DARABONBA_PTR_SET_VALUE(tryRun_, tryRun) };


    // updateColumns Field Functions 
    bool hasUpdateColumns() const { return this->updateColumns_ != nullptr;};
    void deleteUpdateColumns() { this->updateColumns_ = nullptr;};
    inline const vector<string> & getUpdateColumns() const { DARABONBA_PTR_GET_CONST(updateColumns_, vector<string>) };
    inline vector<string> getUpdateColumns() { DARABONBA_PTR_GET(updateColumns_, vector<string>) };
    inline ModifyStreamingJobRequest& setUpdateColumns(const vector<string> & updateColumns) { DARABONBA_PTR_SET_VALUE(updateColumns_, updateColumns) };
    inline ModifyStreamingJobRequest& setUpdateColumns(vector<string> && updateColumns) { DARABONBA_PTR_SET_RVALUE(updateColumns_, updateColumns) };


    // writeMode Field Functions 
    bool hasWriteMode() const { return this->writeMode_ != nullptr;};
    void deleteWriteMode() { this->writeMode_ = nullptr;};
    inline string getWriteMode() const { DARABONBA_PTR_GET_DEFAULT(writeMode_, "") };
    inline ModifyStreamingJobRequest& setWriteMode(string writeMode) { DARABONBA_PTR_SET_VALUE(writeMode_, writeMode) };


  protected:
    // Account name.
    shared_ptr<string> account_ {};
    // The delivery guarantee setting.
    shared_ptr<string> consistency_ {};
    // Instance ID
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Target data table mapping field list.
    shared_ptr<vector<string>> destColumns_ {};
    // Target database name.
    shared_ptr<string> destDatabase_ {};
    // Target schema.
    shared_ptr<string> destSchema_ {};
    // Target table name.
    shared_ptr<string> destTable_ {};
    // When the data in Kafka does not match the ADBPG target table, it will cause a write failure. This value is the number of error rows allowed; exceeding this will cause the task to fail.
    shared_ptr<int64_t> errorLimitCount_ {};
    // The fallback offset for data consumption.
    // 
    // *   This parameter specifies the starting offset from which data consumption resumes when a consumer does not request a consumption offset or requests a consumption offset that is beyond the range of the offset information recorded in the current Kafka cluster. You can choose to start data consumption from the earliest or latest offset.
    // 
    // Valid values:
    // *   EARLIEST
    // *   LATEST
    shared_ptr<string> fallbackOffset_ {};
    // Kafka group name
    shared_ptr<string> groupName_ {};
    // Job configuration file, required for professional mode.
    shared_ptr<string> jobConfig_ {};
    // Job description.
    shared_ptr<string> jobDescription_ {};
    // Job ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> jobId_ {};
    // Match columns, usually all primary key columns of the target table. If all column values in this configuration are the same, the two rows of data are considered duplicates.
    shared_ptr<vector<string>> matchColumns_ {};
    // Password.
    shared_ptr<string> password_ {};
    // Region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) API to view available region IDs.
    shared_ptr<string> regionId_ {};
    // Source data field list.
    shared_ptr<vector<string>> srcColumns_ {};
    // Specifies whether to test the real-time job. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> tryRun_ {};
    // Update columns, usually all non-primary key columns of the target table. When data duplication is determined through MatchColumns, updating the UpdateColumns column values will result in new data overwriting old data.
    shared_ptr<vector<string>> updateColumns_ {};
    // The write mode.
    // 
    // Valid values:
    // 
    // *   MERGE
    // *   INSERT
    // *   UPDATE
    shared_ptr<string> writeMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
