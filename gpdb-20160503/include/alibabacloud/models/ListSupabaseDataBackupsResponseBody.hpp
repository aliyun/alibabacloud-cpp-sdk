// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPABASEDATABACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPABASEDATABACKUPSRESPONSEBODY_HPP_
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
  class ListSupabaseDataBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupabaseDataBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalBackupSize, totalBackupSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupabaseDataBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalBackupSize, totalBackupSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSupabaseDataBackupsResponseBody() = default ;
    ListSupabaseDataBackupsResponseBody(const ListSupabaseDataBackupsResponseBody &) = default ;
    ListSupabaseDataBackupsResponseBody(ListSupabaseDataBackupsResponseBody &&) = default ;
    ListSupabaseDataBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupabaseDataBackupsResponseBody() = default ;
    ListSupabaseDataBackupsResponseBody& operator=(const ListSupabaseDataBackupsResponseBody &) = default ;
    ListSupabaseDataBackupsResponseBody& operator=(ListSupabaseDataBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_TO_JSON(BackupEndTimeLocal, backupEndTimeLocal_);
        DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
        DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
        DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
        DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
        DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_TO_JSON(BackupStartTimeLocal, backupStartTimeLocal_);
        DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_TO_JSON(BaksetName, baksetName_);
        DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_FROM_JSON(BackupEndTimeLocal, backupEndTimeLocal_);
        DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
        DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
        DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
        DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
        DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_FROM_JSON(BackupStartTimeLocal, backupStartTimeLocal_);
        DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_FROM_JSON(BaksetName, baksetName_);
        DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && this->backupEndTimeLocal_ == nullptr && this->backupMethod_ == nullptr && this->backupMode_ == nullptr && this->backupSetId_ == nullptr && this->backupSize_ == nullptr
        && this->backupStartTime_ == nullptr && this->backupStartTimeLocal_ == nullptr && this->backupStatus_ == nullptr && this->baksetName_ == nullptr && this->consistentTime_ == nullptr
        && this->dataType_ == nullptr; };
      // backupEndTime Field Functions 
      bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
      void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
      inline string getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
      inline Items& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


      // backupEndTimeLocal Field Functions 
      bool hasBackupEndTimeLocal() const { return this->backupEndTimeLocal_ != nullptr;};
      void deleteBackupEndTimeLocal() { this->backupEndTimeLocal_ = nullptr;};
      inline string getBackupEndTimeLocal() const { DARABONBA_PTR_GET_DEFAULT(backupEndTimeLocal_, "") };
      inline Items& setBackupEndTimeLocal(string backupEndTimeLocal) { DARABONBA_PTR_SET_VALUE(backupEndTimeLocal_, backupEndTimeLocal) };


      // backupMethod Field Functions 
      bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
      void deleteBackupMethod() { this->backupMethod_ = nullptr;};
      inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
      inline Items& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


      // backupMode Field Functions 
      bool hasBackupMode() const { return this->backupMode_ != nullptr;};
      void deleteBackupMode() { this->backupMode_ = nullptr;};
      inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
      inline Items& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


      // backupSetId Field Functions 
      bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
      void deleteBackupSetId() { this->backupSetId_ = nullptr;};
      inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
      inline Items& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


      // backupSize Field Functions 
      bool hasBackupSize() const { return this->backupSize_ != nullptr;};
      void deleteBackupSize() { this->backupSize_ = nullptr;};
      inline int64_t getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
      inline Items& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


      // backupStartTime Field Functions 
      bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
      void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
      inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
      inline Items& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


      // backupStartTimeLocal Field Functions 
      bool hasBackupStartTimeLocal() const { return this->backupStartTimeLocal_ != nullptr;};
      void deleteBackupStartTimeLocal() { this->backupStartTimeLocal_ = nullptr;};
      inline string getBackupStartTimeLocal() const { DARABONBA_PTR_GET_DEFAULT(backupStartTimeLocal_, "") };
      inline Items& setBackupStartTimeLocal(string backupStartTimeLocal) { DARABONBA_PTR_SET_VALUE(backupStartTimeLocal_, backupStartTimeLocal) };


      // backupStatus Field Functions 
      bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
      void deleteBackupStatus() { this->backupStatus_ = nullptr;};
      inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
      inline Items& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


      // baksetName Field Functions 
      bool hasBaksetName() const { return this->baksetName_ != nullptr;};
      void deleteBaksetName() { this->baksetName_ = nullptr;};
      inline string getBaksetName() const { DARABONBA_PTR_GET_DEFAULT(baksetName_, "") };
      inline Items& setBaksetName(string baksetName) { DARABONBA_PTR_SET_VALUE(baksetName_, baksetName) };


      // consistentTime Field Functions 
      bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
      void deleteConsistentTime() { this->consistentTime_ = nullptr;};
      inline int64_t getConsistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, 0L) };
      inline Items& setConsistentTime(int64_t consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Items& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    protected:
      // The end time of the backup. Format: yyyy-MM-ddTHH:mm:ssZ (UTC).
      shared_ptr<string> backupEndTime_ {};
      // The local time representation of the backup end time. Format: yyyy-MM-ddTHH:mm:ssZ. The current return value is in Beijing time (UTC+8). The trailing Z is a fixed character in the compatibility format and does not indicate the zero time zone. To parse the time in a standard format, use BackupEndTime.
      shared_ptr<string> backupEndTimeLocal_ {};
      // The backup method. Valid values: Physical: physical backup; Snapshot: snapshot backup.
      shared_ptr<string> backupMethod_ {};
      // The backup mode.
      // 
      // Valid values for automatic backups:
      // 
      // - **Automated**: automatic system backup.
      // - **Manual**: manual backup.
      // 
      // Valid values for restorable points:
      // 
      // - **Automated**: the restorable point after a automatic backup.
      // - **Manual**: the restorable point manually triggered by the user.
      // - **Period**: the restorable point triggered periodically based on the backup policy.
      shared_ptr<string> backupMode_ {};
      // The ID of the backup set.
      shared_ptr<string> backupSetId_ {};
      // The size of the backup file. Unit: bytes.
      shared_ptr<int64_t> backupSize_ {};
      // The start time of the backup. Format: yyyy-MM-ddTHH:mm:ssZ (UTC).
      shared_ptr<string> backupStartTime_ {};
      // The local time representation of the backup start time. Format: yyyy-MM-ddTHH:mm:ssZ. The current return value is in Beijing time (UTC+8). The trailing Z is a fixed character in the compatibility format and does not indicate the zero time zone. To parse the time in a standard format, use BackupStartTime.
      shared_ptr<string> backupStartTimeLocal_ {};
      // The status of the backup set. Valid values:
      // 
      // - **Success**: successful.
      // - **Failure**: failed.
      shared_ptr<string> backupStatus_ {};
      // The name of the restorable point or the full backup set.
      shared_ptr<string> baksetName_ {};
      // The consistency point in time. The value is a UNIX timestamp in seconds. For a full backup, this parameter indicates the consistency point in time of the backup. For a restorable point, this parameter indicates the point in time to which data can be restored.
      shared_ptr<int64_t> consistentTime_ {};
      // The backup type. Valid values:
      // 
      // - **DATA**: full backup.
      // - **RESTOREPOI**: restorable point.
      shared_ptr<string> dataType_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalBackupSize_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListSupabaseDataBackupsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListSupabaseDataBackupsResponseBody::Items>) };
    inline vector<ListSupabaseDataBackupsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListSupabaseDataBackupsResponseBody::Items>) };
    inline ListSupabaseDataBackupsResponseBody& setItems(const vector<ListSupabaseDataBackupsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSupabaseDataBackupsResponseBody& setItems(vector<ListSupabaseDataBackupsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSupabaseDataBackupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupabaseDataBackupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSupabaseDataBackupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSupabaseDataBackupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupabaseDataBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalBackupSize Field Functions 
    bool hasTotalBackupSize() const { return this->totalBackupSize_ != nullptr;};
    void deleteTotalBackupSize() { this->totalBackupSize_ = nullptr;};
    inline int64_t getTotalBackupSize() const { DARABONBA_PTR_GET_DEFAULT(totalBackupSize_, 0L) };
    inline ListSupabaseDataBackupsResponseBody& setTotalBackupSize(int64_t totalBackupSize) { DARABONBA_PTR_SET_VALUE(totalBackupSize_, totalBackupSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSupabaseDataBackupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of backup sets.
    shared_ptr<vector<ListSupabaseDataBackupsResponseBody::Items>> items_ {};
    // The maximum number of entries to return for the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. You can use this value as the NextToken parameter in the next request.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of backup sets on the current page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total size of the backup sets. Unit: bytes.
    shared_ptr<int64_t> totalBackupSize_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
