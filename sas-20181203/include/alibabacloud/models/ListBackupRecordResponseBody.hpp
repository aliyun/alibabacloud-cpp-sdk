// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBackupRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRecordList, backupRecordList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRecordList, backupRecordList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBackupRecordResponseBody() = default ;
    ListBackupRecordResponseBody(const ListBackupRecordResponseBody &) = default ;
    ListBackupRecordResponseBody(ListBackupRecordResponseBody &&) = default ;
    ListBackupRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupRecordResponseBody() = default ;
    ListBackupRecordResponseBody& operator=(const ListBackupRecordResponseBody &) = default ;
    ListBackupRecordResponseBody& operator=(ListBackupRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class BackupRecordList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupRecordList& obj) { 
        DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
        DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
        DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, BackupRecordList& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
        DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
        DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      BackupRecordList() = default ;
      BackupRecordList(const BackupRecordList &) = default ;
      BackupRecordList(BackupRecordList &&) = default ;
      BackupRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupRecordList() = default ;
      BackupRecordList& operator=(const BackupRecordList &) = default ;
      BackupRecordList& operator=(BackupRecordList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && this->backupJobId_ == nullptr && this->backupPlanId_ == nullptr && this->backupStartTime_ == nullptr && this->backupStatus_ == nullptr && this->clientId_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->ip_ == nullptr && this->regionId_ == nullptr && this->uuid_ == nullptr; };
      // backupEndTime Field Functions 
      bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
      void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
      inline int64_t getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, 0L) };
      inline BackupRecordList& setBackupEndTime(int64_t backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


      // backupJobId Field Functions 
      bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
      void deleteBackupJobId() { this->backupJobId_ = nullptr;};
      inline string getBackupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, "") };
      inline BackupRecordList& setBackupJobId(string backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


      // backupPlanId Field Functions 
      bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
      void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
      inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
      inline BackupRecordList& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


      // backupStartTime Field Functions 
      bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
      void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
      inline int64_t getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, 0L) };
      inline BackupRecordList& setBackupStartTime(int64_t backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


      // backupStatus Field Functions 
      bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
      void deleteBackupStatus() { this->backupStatus_ = nullptr;};
      inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
      inline BackupRecordList& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline BackupRecordList& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline BackupRecordList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline BackupRecordList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline BackupRecordList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline BackupRecordList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline BackupRecordList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline BackupRecordList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline BackupRecordList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline BackupRecordList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline BackupRecordList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The timestamp when the backup task ended. Unit: milliseconds.
      shared_ptr<int64_t> backupEndTime_ {};
      // The backup task ID.
      shared_ptr<string> backupJobId_ {};
      // The backup plan ID.
      shared_ptr<string> backupPlanId_ {};
      // The timestamp when the backup task started. Unit: milliseconds.
      shared_ptr<int64_t> backupStartTime_ {};
      // The backup task status. Valid value:
      // 
      // *   **BACKUP_COMPLETE**: The backup task is successful.
      // *   **BACKUP_FAILED**: The backup task failed.
      // *   **PARTIAL_COMPLETE**: The backup task is partially successful.
      shared_ptr<string> backupStatus_ {};
      // The ID of the anti-ransomware agent.
      shared_ptr<string> clientId_ {};
      // The error code of the backup task.
      shared_ptr<string> errorCode_ {};
      // The error message of the backup task.
      shared_ptr<string> errorMessage_ {};
      // The instance ID of the server.
      shared_ptr<string> instanceId_ {};
      // The instance name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The IP address of the server.
      shared_ptr<string> ip_ {};
      // The ID of the region in which the backup is stored.
      shared_ptr<string> regionId_ {};
      // The UUID of the server whose data is backed up based on the anti-ransomware policy.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->backupRecordList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // backupRecordList Field Functions 
    bool hasBackupRecordList() const { return this->backupRecordList_ != nullptr;};
    void deleteBackupRecordList() { this->backupRecordList_ = nullptr;};
    inline const vector<ListBackupRecordResponseBody::BackupRecordList> & getBackupRecordList() const { DARABONBA_PTR_GET_CONST(backupRecordList_, vector<ListBackupRecordResponseBody::BackupRecordList>) };
    inline vector<ListBackupRecordResponseBody::BackupRecordList> getBackupRecordList() { DARABONBA_PTR_GET(backupRecordList_, vector<ListBackupRecordResponseBody::BackupRecordList>) };
    inline ListBackupRecordResponseBody& setBackupRecordList(const vector<ListBackupRecordResponseBody::BackupRecordList> & backupRecordList) { DARABONBA_PTR_SET_VALUE(backupRecordList_, backupRecordList) };
    inline ListBackupRecordResponseBody& setBackupRecordList(vector<ListBackupRecordResponseBody::BackupRecordList> && backupRecordList) { DARABONBA_PTR_SET_RVALUE(backupRecordList_, backupRecordList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListBackupRecordResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListBackupRecordResponseBody::PageInfo) };
    inline ListBackupRecordResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListBackupRecordResponseBody::PageInfo) };
    inline ListBackupRecordResponseBody& setPageInfo(const ListBackupRecordResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListBackupRecordResponseBody& setPageInfo(ListBackupRecordResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBackupRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the backup record.
    shared_ptr<vector<ListBackupRecordResponseBody::BackupRecordList>> backupRecordList_ {};
    // The pagination information.
    shared_ptr<ListBackupRecordResponseBody::PageInfo> pageInfo_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
