// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNIBACKUPRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNIBACKUPRECORDRESPONSEBODY_HPP_
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
  class ListUniBackupRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUniBackupRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UniBackupRecordList, uniBackupRecordList_);
    };
    friend void from_json(const Darabonba::Json& j, ListUniBackupRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UniBackupRecordList, uniBackupRecordList_);
    };
    ListUniBackupRecordResponseBody() = default ;
    ListUniBackupRecordResponseBody(const ListUniBackupRecordResponseBody &) = default ;
    ListUniBackupRecordResponseBody(ListUniBackupRecordResponseBody &&) = default ;
    ListUniBackupRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUniBackupRecordResponseBody() = default ;
    ListUniBackupRecordResponseBody& operator=(const ListUniBackupRecordResponseBody &) = default ;
    ListUniBackupRecordResponseBody& operator=(ListUniBackupRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UniBackupRecordList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UniBackupRecordList& obj) { 
        DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_TO_JSON(ErrorMessageList, errorMessageList_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Subtype, subtype_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, UniBackupRecordList& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_FROM_JSON(ErrorMessageList, errorMessageList_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Subtype, subtype_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      UniBackupRecordList() = default ;
      UniBackupRecordList(const UniBackupRecordList &) = default ;
      UniBackupRecordList(UniBackupRecordList &&) = default ;
      UniBackupRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UniBackupRecordList() = default ;
      UniBackupRecordList& operator=(const UniBackupRecordList &) = default ;
      UniBackupRecordList& operator=(UniBackupRecordList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && this->backupStartTime_ == nullptr && this->databaseName_ == nullptr && this->databaseType_ == nullptr && this->errorMessageList_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->instanceUuid_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->ip_ == nullptr
        && this->regionId_ == nullptr && this->state_ == nullptr && this->subtype_ == nullptr && this->uuid_ == nullptr; };
      // backupEndTime Field Functions 
      bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
      void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
      inline int64_t getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, 0L) };
      inline UniBackupRecordList& setBackupEndTime(int64_t backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


      // backupStartTime Field Functions 
      bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
      void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
      inline int64_t getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, 0L) };
      inline UniBackupRecordList& setBackupStartTime(int64_t backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline UniBackupRecordList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // databaseType Field Functions 
      bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
      void deleteDatabaseType() { this->databaseType_ = nullptr;};
      inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
      inline UniBackupRecordList& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


      // errorMessageList Field Functions 
      bool hasErrorMessageList() const { return this->errorMessageList_ != nullptr;};
      void deleteErrorMessageList() { this->errorMessageList_ = nullptr;};
      inline const vector<string> & getErrorMessageList() const { DARABONBA_PTR_GET_CONST(errorMessageList_, vector<string>) };
      inline vector<string> getErrorMessageList() { DARABONBA_PTR_GET(errorMessageList_, vector<string>) };
      inline UniBackupRecordList& setErrorMessageList(const vector<string> & errorMessageList) { DARABONBA_PTR_SET_VALUE(errorMessageList_, errorMessageList) };
      inline UniBackupRecordList& setErrorMessageList(vector<string> && errorMessageList) { DARABONBA_PTR_SET_RVALUE(errorMessageList_, errorMessageList) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline UniBackupRecordList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline UniBackupRecordList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceUuid Field Functions 
      bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
      void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
      inline string getInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
      inline UniBackupRecordList& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline UniBackupRecordList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline UniBackupRecordList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline UniBackupRecordList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline UniBackupRecordList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline UniBackupRecordList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // subtype Field Functions 
      bool hasSubtype() const { return this->subtype_ != nullptr;};
      void deleteSubtype() { this->subtype_ = nullptr;};
      inline string getSubtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, "") };
      inline UniBackupRecordList& setSubtype(string subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline UniBackupRecordList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The end time of the backup, in timestamp format (in milliseconds).
      shared_ptr<int64_t> backupEndTime_ {};
      // The start time of the backup, in timestamp format (in milliseconds).
      shared_ptr<int64_t> backupStartTime_ {};
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // Database type. Values:
      // 
      // - **MYSQL**
      // - **ORACLE**
      // - **MSSQL**
      shared_ptr<string> databaseType_ {};
      // List of backup error messages.
      shared_ptr<vector<string>> errorMessageList_ {};
      // The instance ID of the server.
      shared_ptr<string> instanceId_ {};
      // Server name.
      shared_ptr<string> instanceName_ {};
      // The unique ID of the database instance on the server.
      shared_ptr<string> instanceUuid_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The IP of the server.
      // 
      // > If a public IP exists, this value is the public IP; if no public IP but a private IP exists, then it is the private IP.
      shared_ptr<string> ip_ {};
      // The ID of the region where the instance is located.
      shared_ptr<string> regionId_ {};
      // Backup status. Values:
      // - **completed**: Success
      // - **error**: Failure
      // - **canceled**: Closed
      shared_ptr<string> state_ {};
      // Backup type. Values:
      // 
      // - *full*: Full backup
      // - *incremental*: Incremental backup
      shared_ptr<string> subtype_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

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
      // The number of items displayed on the current page in a pagination query.
      shared_ptr<int32_t> count_ {};
      // The page number of the current page in a pagination query.
      shared_ptr<int32_t> currentPage_ {};
      // The number of items displayed per page in a pagination query.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records in the query result.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->uniBackupRecordList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListUniBackupRecordResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListUniBackupRecordResponseBody::PageInfo) };
    inline ListUniBackupRecordResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListUniBackupRecordResponseBody::PageInfo) };
    inline ListUniBackupRecordResponseBody& setPageInfo(const ListUniBackupRecordResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListUniBackupRecordResponseBody& setPageInfo(ListUniBackupRecordResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUniBackupRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uniBackupRecordList Field Functions 
    bool hasUniBackupRecordList() const { return this->uniBackupRecordList_ != nullptr;};
    void deleteUniBackupRecordList() { this->uniBackupRecordList_ = nullptr;};
    inline const vector<ListUniBackupRecordResponseBody::UniBackupRecordList> & getUniBackupRecordList() const { DARABONBA_PTR_GET_CONST(uniBackupRecordList_, vector<ListUniBackupRecordResponseBody::UniBackupRecordList>) };
    inline vector<ListUniBackupRecordResponseBody::UniBackupRecordList> getUniBackupRecordList() { DARABONBA_PTR_GET(uniBackupRecordList_, vector<ListUniBackupRecordResponseBody::UniBackupRecordList>) };
    inline ListUniBackupRecordResponseBody& setUniBackupRecordList(const vector<ListUniBackupRecordResponseBody::UniBackupRecordList> & uniBackupRecordList) { DARABONBA_PTR_SET_VALUE(uniBackupRecordList_, uniBackupRecordList) };
    inline ListUniBackupRecordResponseBody& setUniBackupRecordList(vector<ListUniBackupRecordResponseBody::UniBackupRecordList> && uniBackupRecordList) { DARABONBA_PTR_SET_RVALUE(uniBackupRecordList_, uniBackupRecordList) };


  protected:
    // Page information for pagination queries.
    shared_ptr<ListUniBackupRecordResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // List of database backup records.
    shared_ptr<vector<ListUniBackupRecordResponseBody::UniBackupRecordList>> uniBackupRecordList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
