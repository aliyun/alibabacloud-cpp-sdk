// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILEEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILEEVENTSRESPONSEBODY_HPP_
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
  class DescribeWebLockFileEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockFileEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockFileEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockFileEventsResponseBody() = default ;
    DescribeWebLockFileEventsResponseBody(const DescribeWebLockFileEventsResponseBody &) = default ;
    DescribeWebLockFileEventsResponseBody(DescribeWebLockFileEventsResponseBody &&) = default ;
    DescribeWebLockFileEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockFileEventsResponseBody() = default ;
    DescribeWebLockFileEventsResponseBody& operator=(const DescribeWebLockFileEventsResponseBody &) = default ;
    DescribeWebLockFileEventsResponseBody& operator=(DescribeWebLockFileEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Ds, ds_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(GmtEvent, gmtEvent_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Ds, ds_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(GmtEvent, gmtEvent_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->ds_ == nullptr && this->eventName_ == nullptr && this->eventStatus_ == nullptr && this->eventType_ == nullptr && this->gmtEvent_ == nullptr
        && this->id_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->ip_ == nullptr
        && this->level_ == nullptr && this->path_ == nullptr && this->processName_ == nullptr && this->processPath_ == nullptr && this->status_ == nullptr
        && this->uuid_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline List& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // ds Field Functions 
      bool hasDs() const { return this->ds_ != nullptr;};
      void deleteDs() { this->ds_ = nullptr;};
      inline int64_t getDs() const { DARABONBA_PTR_GET_DEFAULT(ds_, 0L) };
      inline List& setDs(int64_t ds) { DARABONBA_PTR_SET_VALUE(ds_, ds) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline List& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventStatus Field Functions 
      bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
      void deleteEventStatus() { this->eventStatus_ = nullptr;};
      inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
      inline List& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline List& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // gmtEvent Field Functions 
      bool hasGmtEvent() const { return this->gmtEvent_ != nullptr;};
      void deleteGmtEvent() { this->gmtEvent_ = nullptr;};
      inline int64_t getGmtEvent() const { DARABONBA_PTR_GET_DEFAULT(gmtEvent_, 0L) };
      inline List& setGmtEvent(int64_t gmtEvent) { DARABONBA_PTR_SET_VALUE(gmtEvent_, gmtEvent) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline List& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline List& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline List& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline List& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline List& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline List& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline List& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // processPath Field Functions 
      bool hasProcessPath() const { return this->processPath_ != nullptr;};
      void deleteProcessPath() { this->processPath_ = nullptr;};
      inline string getProcessPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
      inline List& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline List& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The number of attempts.
      shared_ptr<int64_t> count_ {};
      // The timestamp at which the event on web tamper proofing was first detected.
      shared_ptr<int64_t> ds_ {};
      // The name of the event on web tamper proofing.
      shared_ptr<string> eventName_ {};
      // The status of the event on web tamper proofing. Valid values:
      // 
      // *   **1**: unhandled
      // *   **2**: ignored
      // *   **4**: deprecated
      // *   **8**: marked as false positive
      // *   **10**: added to the whitelist
      // *   **16**: handling
      // *   **32**: defended
      // *   **64**: invalid
      // *   **128**: deleted
      // *   **512**: automatically handled
      shared_ptr<string> eventStatus_ {};
      // The prevention mode. Valid values:
      // 
      // *   **audit**: Interception Mode
      // *   **web_lock**: Alert Mode
      shared_ptr<string> eventType_ {};
      // The timestamp at which the event on web tamper proofing was last detected.
      shared_ptr<int64_t> gmtEvent_ {};
      // The ID of the event on web tamper proofing.
      shared_ptr<int64_t> id_ {};
      // The name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the affected asset.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the asset.
      shared_ptr<string> intranetIp_ {};
      // The IP address of the asset.
      shared_ptr<string> ip_ {};
      // The severity of the event on web tamper proofing. Valid values: **medium**
      shared_ptr<string> level_ {};
      // The file path.
      shared_ptr<string> path_ {};
      // The name of the process.
      shared_ptr<string> processName_ {};
      // The path to the process.
      shared_ptr<string> processPath_ {};
      // The status of the event on web tamper proofing. Valid values:
      // 
      // *   **1**: unhandled
      // *   **2**: ignored
      // *   **4**: deprecated
      // *   **8**: marked as false positive
      // *   **10**: added to the whitelist
      // *   **16**: handling
      // *   **32**: defended
      // *   **64**: invalid
      // *   **128**: deleted
      // *   **512**: automatically handled
      shared_ptr<string> status_ {};
      // The UUID of the asset.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->list_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWebLockFileEventsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeWebLockFileEventsResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeWebLockFileEventsResponseBody::List>) };
    inline vector<DescribeWebLockFileEventsResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<DescribeWebLockFileEventsResponseBody::List>) };
    inline DescribeWebLockFileEventsResponseBody& setList(const vector<DescribeWebLockFileEventsResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeWebLockFileEventsResponseBody& setList(vector<DescribeWebLockFileEventsResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWebLockFileEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockFileEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockFileEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // An array that consists of events on web tamper proofing returned.
    shared_ptr<vector<DescribeWebLockFileEventsResponseBody::List>> list_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of events on web tamper proofing returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
