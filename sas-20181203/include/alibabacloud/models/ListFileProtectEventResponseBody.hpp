// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTEVENTRESPONSEBODY_HPP_
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
  class ListFileProtectEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFileProtectEventResponseBody() = default ;
    ListFileProtectEventResponseBody(const ListFileProtectEventResponseBody &) = default ;
    ListFileProtectEventResponseBody(ListFileProtectEventResponseBody &&) = default ;
    ListFileProtectEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectEventResponseBody() = default ;
    ListFileProtectEventResponseBody& operator=(const ListFileProtectEventResponseBody &) = default ;
    ListFileProtectEventResponseBody& operator=(ListFileProtectEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
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
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class EventList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventList& obj) { 
        DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_TO_JSON(CmdLine, cmdLine_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(HandleTime, handleTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LatestTime, latestTime_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(ProcPath, procPath_);
        DARABONBA_PTR_TO_JSON(ProcPermission, procPermission_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, EventList& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_FROM_JSON(CmdLine, cmdLine_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(HandleTime, handleTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LatestTime, latestTime_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(ProcPath, procPath_);
        DARABONBA_PTR_FROM_JSON(ProcPermission, procPermission_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      EventList() = default ;
      EventList(const EventList &) = default ;
      EventList(EventList &&) = default ;
      EventList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventList() = default ;
      EventList& operator=(const EventList &) = default ;
      EventList& operator=(EventList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertLevel_ == nullptr
        && this->cmdLine_ == nullptr && this->filePath_ == nullptr && this->handleTime_ == nullptr && this->id_ == nullptr && this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->latestTime_ == nullptr && this->operation_ == nullptr && this->platform_ == nullptr
        && this->procPath_ == nullptr && this->procPermission_ == nullptr && this->processId_ == nullptr && this->remark_ == nullptr && this->ruleName_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr; };
      // alertLevel Field Functions 
      bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
      void deleteAlertLevel() { this->alertLevel_ = nullptr;};
      inline int32_t getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
      inline EventList& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


      // cmdLine Field Functions 
      bool hasCmdLine() const { return this->cmdLine_ != nullptr;};
      void deleteCmdLine() { this->cmdLine_ = nullptr;};
      inline string getCmdLine() const { DARABONBA_PTR_GET_DEFAULT(cmdLine_, "") };
      inline EventList& setCmdLine(string cmdLine) { DARABONBA_PTR_SET_VALUE(cmdLine_, cmdLine) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline EventList& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // handleTime Field Functions 
      bool hasHandleTime() const { return this->handleTime_ != nullptr;};
      void deleteHandleTime() { this->handleTime_ = nullptr;};
      inline int64_t getHandleTime() const { DARABONBA_PTR_GET_DEFAULT(handleTime_, 0L) };
      inline EventList& setHandleTime(int64_t handleTime) { DARABONBA_PTR_SET_VALUE(handleTime_, handleTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline EventList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline EventList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline EventList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline EventList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // latestTime Field Functions 
      bool hasLatestTime() const { return this->latestTime_ != nullptr;};
      void deleteLatestTime() { this->latestTime_ = nullptr;};
      inline int64_t getLatestTime() const { DARABONBA_PTR_GET_DEFAULT(latestTime_, 0L) };
      inline EventList& setLatestTime(int64_t latestTime) { DARABONBA_PTR_SET_VALUE(latestTime_, latestTime) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline EventList& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline EventList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // procPath Field Functions 
      bool hasProcPath() const { return this->procPath_ != nullptr;};
      void deleteProcPath() { this->procPath_ = nullptr;};
      inline string getProcPath() const { DARABONBA_PTR_GET_DEFAULT(procPath_, "") };
      inline EventList& setProcPath(string procPath) { DARABONBA_PTR_SET_VALUE(procPath_, procPath) };


      // procPermission Field Functions 
      bool hasProcPermission() const { return this->procPermission_ != nullptr;};
      void deleteProcPermission() { this->procPermission_ = nullptr;};
      inline string getProcPermission() const { DARABONBA_PTR_GET_DEFAULT(procPermission_, "") };
      inline EventList& setProcPermission(string procPermission) { DARABONBA_PTR_SET_VALUE(procPermission_, procPermission) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline EventList& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline EventList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline EventList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline EventList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline EventList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The severity of the alert. Valid values:
      // 
      // *   0: no alerts
      // *   1: reminder
      // *   2: suspicious
      // *   3: high-risk
      shared_ptr<int32_t> alertLevel_ {};
      // The command line of the event.
      shared_ptr<string> cmdLine_ {};
      // The path to the file that is managed by the process.
      shared_ptr<string> filePath_ {};
      // The time when the event was handled.
      shared_ptr<int64_t> handleTime_ {};
      // The ID of the event.
      shared_ptr<int64_t> id_ {};
      // The instance name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The time when the event last occurred.
      shared_ptr<int64_t> latestTime_ {};
      // The operation performed by the process on the file.
      shared_ptr<string> operation_ {};
      // The type of the operating system. Valid values:
      // 
      // *   **windows**: Windows
      // *   **linux**: Linux
      shared_ptr<string> platform_ {};
      // The path to the process.
      shared_ptr<string> procPath_ {};
      // The permissions required to start the process.
      shared_ptr<string> procPermission_ {};
      // The ID of the process.
      shared_ptr<string> processId_ {};
      // The description.
      shared_ptr<string> remark_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The status of the event. Valid values:
      // 
      // *   0: unhandled
      // *   1: handled
      // *   2: added to the whitelist
      // *   3: ignored
      shared_ptr<int32_t> status_ {};
      // The UUID of the server that is associated with the process.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->eventList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<ListFileProtectEventResponseBody::EventList> & getEventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<ListFileProtectEventResponseBody::EventList>) };
    inline vector<ListFileProtectEventResponseBody::EventList> getEventList() { DARABONBA_PTR_GET(eventList_, vector<ListFileProtectEventResponseBody::EventList>) };
    inline ListFileProtectEventResponseBody& setEventList(const vector<ListFileProtectEventResponseBody::EventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline ListFileProtectEventResponseBody& setEventList(vector<ListFileProtectEventResponseBody::EventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListFileProtectEventResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListFileProtectEventResponseBody::PageInfo) };
    inline ListFileProtectEventResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListFileProtectEventResponseBody::PageInfo) };
    inline ListFileProtectEventResponseBody& setPageInfo(const ListFileProtectEventResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListFileProtectEventResponseBody& setPageInfo(ListFileProtectEventResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileProtectEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The events.
    shared_ptr<vector<ListFileProtectEventResponseBody::EventList>> eventList_ {};
    // The pagination information.
    shared_ptr<ListFileProtectEventResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
