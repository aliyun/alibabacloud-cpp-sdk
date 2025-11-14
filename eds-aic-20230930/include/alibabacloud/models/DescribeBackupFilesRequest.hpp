// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeBackupFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_TO_JSON(AndroidInstanceName, androidInstanceName_);
      DARABONBA_PTR_TO_JSON(BackupAll, backupAll_);
      DARABONBA_PTR_TO_JSON(BackupFileId, backupFileId_);
      DARABONBA_PTR_TO_JSON(BackupFileName, backupFileName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_FROM_JSON(AndroidInstanceName, androidInstanceName_);
      DARABONBA_PTR_FROM_JSON(BackupAll, backupAll_);
      DARABONBA_PTR_FROM_JSON(BackupFileId, backupFileId_);
      DARABONBA_PTR_FROM_JSON(BackupFileName, backupFileName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    DescribeBackupFilesRequest() = default ;
    DescribeBackupFilesRequest(const DescribeBackupFilesRequest &) = default ;
    DescribeBackupFilesRequest(DescribeBackupFilesRequest &&) = default ;
    DescribeBackupFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupFilesRequest() = default ;
    DescribeBackupFilesRequest& operator=(const DescribeBackupFilesRequest &) = default ;
    DescribeBackupFilesRequest& operator=(DescribeBackupFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && return this->androidInstanceName_ == nullptr && return this->backupAll_ == nullptr && return this->backupFileId_ == nullptr && return this->backupFileName_ == nullptr && return this->description_ == nullptr
        && return this->endTime_ == nullptr && return this->endUserId_ == nullptr && return this->instanceGroupId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->saleMode_ == nullptr && return this->startTime_ == nullptr && return this->statusList_ == nullptr; };
    // androidInstanceId Field Functions 
    bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
    void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
    inline string androidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
    inline DescribeBackupFilesRequest& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


    // androidInstanceName Field Functions 
    bool hasAndroidInstanceName() const { return this->androidInstanceName_ != nullptr;};
    void deleteAndroidInstanceName() { this->androidInstanceName_ = nullptr;};
    inline string androidInstanceName() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceName_, "") };
    inline DescribeBackupFilesRequest& setAndroidInstanceName(string androidInstanceName) { DARABONBA_PTR_SET_VALUE(androidInstanceName_, androidInstanceName) };


    // backupAll Field Functions 
    bool hasBackupAll() const { return this->backupAll_ != nullptr;};
    void deleteBackupAll() { this->backupAll_ = nullptr;};
    inline bool backupAll() const { DARABONBA_PTR_GET_DEFAULT(backupAll_, false) };
    inline DescribeBackupFilesRequest& setBackupAll(bool backupAll) { DARABONBA_PTR_SET_VALUE(backupAll_, backupAll) };


    // backupFileId Field Functions 
    bool hasBackupFileId() const { return this->backupFileId_ != nullptr;};
    void deleteBackupFileId() { this->backupFileId_ = nullptr;};
    inline string backupFileId() const { DARABONBA_PTR_GET_DEFAULT(backupFileId_, "") };
    inline DescribeBackupFilesRequest& setBackupFileId(string backupFileId) { DARABONBA_PTR_SET_VALUE(backupFileId_, backupFileId) };


    // backupFileName Field Functions 
    bool hasBackupFileName() const { return this->backupFileName_ != nullptr;};
    void deleteBackupFileName() { this->backupFileName_ = nullptr;};
    inline string backupFileName() const { DARABONBA_PTR_GET_DEFAULT(backupFileName_, "") };
    inline DescribeBackupFilesRequest& setBackupFileName(string backupFileName) { DARABONBA_PTR_SET_VALUE(backupFileName_, backupFileName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBackupFilesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeBackupFilesRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeBackupFilesRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string instanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline DescribeBackupFilesRequest& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeBackupFilesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeBackupFilesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string saleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline DescribeBackupFilesRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeBackupFilesRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline DescribeBackupFilesRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline DescribeBackupFilesRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> androidInstanceId_ = nullptr;
    // The name of the instance. Fuzzy match is supported.
    std::shared_ptr<string> androidInstanceName_ = nullptr;
    // Specifies whether the whole instance is backed up.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> backupAll_ = nullptr;
    // The ID of the backup file.
    std::shared_ptr<string> backupFileId_ = nullptr;
    // The name of the backup file. Fuzzy match is supported.
    std::shared_ptr<string> backupFileName_ = nullptr;
    // The description of the backup file. Fuzzy match is supported.
    std::shared_ptr<string> description_ = nullptr;
    // The end of the period for querying generated backup files.
    std::shared_ptr<string> endTime_ = nullptr;
    // The owner of the backup file.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> instanceGroupId_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> saleMode_ = nullptr;
    // The beginning of the period for querying generated backup files.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the backup files.
    std::shared_ptr<vector<string>> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
