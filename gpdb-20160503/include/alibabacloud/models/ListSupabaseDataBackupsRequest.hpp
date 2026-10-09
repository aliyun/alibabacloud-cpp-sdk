// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPABASEDATABACKUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPABASEDATABACKUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSupabaseDataBackupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupabaseDataBackupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupabaseDataBackupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListSupabaseDataBackupsRequest() = default ;
    ListSupabaseDataBackupsRequest(const ListSupabaseDataBackupsRequest &) = default ;
    ListSupabaseDataBackupsRequest(ListSupabaseDataBackupsRequest &&) = default ;
    ListSupabaseDataBackupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupabaseDataBackupsRequest() = default ;
    ListSupabaseDataBackupsRequest& operator=(const ListSupabaseDataBackupsRequest &) = default ;
    ListSupabaseDataBackupsRequest& operator=(ListSupabaseDataBackupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && this->backupMode_ == nullptr && this->backupStatus_ == nullptr && this->dataType_ == nullptr && this->endTime_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr
        && this->startTime_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ListSupabaseDataBackupsRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline ListSupabaseDataBackupsRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline ListSupabaseDataBackupsRequest& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ListSupabaseDataBackupsRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListSupabaseDataBackupsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSupabaseDataBackupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupabaseDataBackupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSupabaseDataBackupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSupabaseDataBackupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListSupabaseDataBackupsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSupabaseDataBackupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListSupabaseDataBackupsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the backup set. You can obtain the ID from the BackupSetId parameter returned by the ListSupabaseDataBackups operation.
    shared_ptr<string> backupId_ {};
    // The backup pattern. Valid values: Automated: automatic backup. Manual: manual backup.
    shared_ptr<string> backupMode_ {};
    // The status of the backup set. Valid values: Success: the backup is successful; Failed: the backup fails.
    shared_ptr<string> backupStatus_ {};
    // The backup type. Valid values: DATA: full backup; RESTOREPOI: restorable point.
    shared_ptr<string> dataType_ {};
    // The end time of the query. The end time must be later than the start time. Format: yyyy-MM-ddTHH:mmZ (UTC).
    shared_ptr<string> endTime_ {};
    // The maximum number of entries to return for the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The paging token for paged query. Do not specify this parameter for the first request. For subsequent requests, specify the NextToken value returned by the previous response.
    shared_ptr<string> nextToken_ {};
    // The page number. The value must be greater than 0 and cannot exceed the maximum value of an integer. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // - 30
    // - 50
    // - 100
    // 
    // Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // Instance ID of the Supabase instance. You can obtain instance ID from the Supabase page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query available region IDs.
    shared_ptr<string> regionId_ {};
    // The start time of the query. Format: yyyy-MM-ddTHH:mmZ (UTC).
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
