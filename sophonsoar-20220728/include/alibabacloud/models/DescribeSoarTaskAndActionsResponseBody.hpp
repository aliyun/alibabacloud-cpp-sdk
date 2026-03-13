// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarTaskAndActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarTaskAndActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarTaskAndActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSoarTaskAndActionsResponseBody() = default ;
    DescribeSoarTaskAndActionsResponseBody(const DescribeSoarTaskAndActionsResponseBody &) = default ;
    DescribeSoarTaskAndActionsResponseBody(DescribeSoarTaskAndActionsResponseBody &&) = default ;
    DescribeSoarTaskAndActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarTaskAndActionsResponseBody() = default ;
    DescribeSoarTaskAndActionsResponseBody& operator=(const DescribeSoarTaskAndActionsResponseBody &) = default ;
    DescribeSoarTaskAndActionsResponseBody& operator=(DescribeSoarTaskAndActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
      inline Page& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Page& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline Page& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> pageNumber_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<string> totalCount_ {};
    };

    class Details : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Details& obj) { 
        DARABONBA_PTR_TO_JSON(ActionLogNum, actionLogNum_);
        DARABONBA_PTR_TO_JSON(Actions, actions_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(RawEventReq, rawEventReq_);
        DARABONBA_PTR_TO_JSON(RequestUuid, requestUuid_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskFlowMd5, taskFlowMd5_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(TriggerUser, triggerUser_);
      };
      friend void from_json(const Darabonba::Json& j, Details& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionLogNum, actionLogNum_);
        DARABONBA_PTR_FROM_JSON(Actions, actions_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(RawEventReq, rawEventReq_);
        DARABONBA_PTR_FROM_JSON(RequestUuid, requestUuid_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskFlowMd5, taskFlowMd5_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(TriggerUser, triggerUser_);
      };
      Details() = default ;
      Details(const Details &) = default ;
      Details(Details &&) = default ;
      Details(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Details() = default ;
      Details& operator=(const Details &) = default ;
      Details& operator=(Details &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Actions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Actions& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ActionUuid, actionUuid_);
          DARABONBA_PTR_TO_JSON(AssetName, assetName_);
          DARABONBA_PTR_TO_JSON(Component, component_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Actions& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ActionUuid, actionUuid_);
          DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
          DARABONBA_PTR_FROM_JSON(Component, component_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Actions() = default ;
        Actions(const Actions &) = default ;
        Actions(Actions &&) = default ;
        Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Actions() = default ;
        Actions& operator=(const Actions &) = default ;
        Actions& operator=(Actions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->actionUuid_ == nullptr && this->assetName_ == nullptr && this->component_ == nullptr && this->endTime_ == nullptr && this->nodeName_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Actions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // actionUuid Field Functions 
        bool hasActionUuid() const { return this->actionUuid_ != nullptr;};
        void deleteActionUuid() { this->actionUuid_ = nullptr;};
        inline string getActionUuid() const { DARABONBA_PTR_GET_DEFAULT(actionUuid_, "") };
        inline Actions& setActionUuid(string actionUuid) { DARABONBA_PTR_SET_VALUE(actionUuid_, actionUuid) };


        // assetName Field Functions 
        bool hasAssetName() const { return this->assetName_ != nullptr;};
        void deleteAssetName() { this->assetName_ = nullptr;};
        inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
        inline Actions& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


        // component Field Functions 
        bool hasComponent() const { return this->component_ != nullptr;};
        void deleteComponent() { this->component_ = nullptr;};
        inline string getComponent() const { DARABONBA_PTR_GET_DEFAULT(component_, "") };
        inline Actions& setComponent(string component) { DARABONBA_PTR_SET_VALUE(component_, component) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Actions& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline Actions& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Actions& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Actions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The action name of the component.
        shared_ptr<string> action_ {};
        // The UUID of the component execution record.
        shared_ptr<string> actionUuid_ {};
        // The name of the asset that is used by the component.
        shared_ptr<string> assetName_ {};
        // The component name.
        shared_ptr<string> component_ {};
        // The end of the time range during which the component is run. The value is a 13-digit timestamp.
        shared_ptr<int64_t> endTime_ {};
        // The custom name of the node in the component.
        shared_ptr<string> nodeName_ {};
        // The beginning of the time range during which the component is run. The value is a 13-digit timestamp.
        shared_ptr<int64_t> startTime_ {};
        // The running result of the component. Valid values:
        // 
        // *   **success**
        // *   **fail**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->actionLogNum_ == nullptr
        && this->actions_ == nullptr && this->endTime_ == nullptr && this->errorMsg_ == nullptr && this->rawEventReq_ == nullptr && this->requestUuid_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->taskFlowMd5_ == nullptr && this->taskName_ == nullptr && this->triggerType_ == nullptr
        && this->triggerUser_ == nullptr; };
      // actionLogNum Field Functions 
      bool hasActionLogNum() const { return this->actionLogNum_ != nullptr;};
      void deleteActionLogNum() { this->actionLogNum_ = nullptr;};
      inline int32_t getActionLogNum() const { DARABONBA_PTR_GET_DEFAULT(actionLogNum_, 0) };
      inline Details& setActionLogNum(int32_t actionLogNum) { DARABONBA_PTR_SET_VALUE(actionLogNum_, actionLogNum) };


      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const vector<Details::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Details::Actions>) };
      inline vector<Details::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<Details::Actions>) };
      inline Details& setActions(const vector<Details::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline Details& setActions(vector<Details::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Details& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Details& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // rawEventReq Field Functions 
      bool hasRawEventReq() const { return this->rawEventReq_ != nullptr;};
      void deleteRawEventReq() { this->rawEventReq_ = nullptr;};
      inline string getRawEventReq() const { DARABONBA_PTR_GET_DEFAULT(rawEventReq_, "") };
      inline Details& setRawEventReq(string rawEventReq) { DARABONBA_PTR_SET_VALUE(rawEventReq_, rawEventReq) };


      // requestUuid Field Functions 
      bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
      void deleteRequestUuid() { this->requestUuid_ = nullptr;};
      inline string getRequestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
      inline Details& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Details& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Details& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskFlowMd5 Field Functions 
      bool hasTaskFlowMd5() const { return this->taskFlowMd5_ != nullptr;};
      void deleteTaskFlowMd5() { this->taskFlowMd5_ = nullptr;};
      inline string getTaskFlowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskFlowMd5_, "") };
      inline Details& setTaskFlowMd5(string taskFlowMd5) { DARABONBA_PTR_SET_VALUE(taskFlowMd5_, taskFlowMd5) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Details& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline Details& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // triggerUser Field Functions 
      bool hasTriggerUser() const { return this->triggerUser_ != nullptr;};
      void deleteTriggerUser() { this->triggerUser_ = nullptr;};
      inline string getTriggerUser() const { DARABONBA_PTR_GET_DEFAULT(triggerUser_, "") };
      inline Details& setTriggerUser(string triggerUser) { DARABONBA_PTR_SET_VALUE(triggerUser_, triggerUser) };


    protected:
      shared_ptr<int32_t> actionLogNum_ {};
      // The list of component actions during the running of the playbook.
      shared_ptr<vector<Details::Actions>> actions_ {};
      // The end of the time range during which the playbook is run. The value is a 13-digit timestamp.
      shared_ptr<int64_t> endTime_ {};
      // The error message of the task. If the task is successful, this field is empty.
      shared_ptr<string> errorMsg_ {};
      // The request parameters of the task.
      shared_ptr<string> rawEventReq_ {};
      // The request ID of the task. The value is unique.
      shared_ptr<string> requestUuid_ {};
      // The beginning of the time range during which the playbook is run. The value is a 13-digit timestamp.
      shared_ptr<int64_t> startTime_ {};
      // The task status. Valid values:
      // 
      // *   **success**
      // *   **fail**
      // *   **running**
      shared_ptr<string> status_ {};
      // The MD5 value of the playbook.
      shared_ptr<string> taskFlowMd5_ {};
      // The name of the task. The value is the same as the playbook UUID.
      shared_ptr<string> taskName_ {};
      // The task type. Valid values:
      // 
      // *   **debug**: a debugging task
      // *   **manual**: a manual task
      // *   **siem**: an event-triggered task
      shared_ptr<string> triggerType_ {};
      // The ID of the Alibaba Cloud account that triggers the task.
      shared_ptr<string> triggerUser_ {};
    };

    virtual bool empty() const override { return this->details_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const DescribeSoarTaskAndActionsResponseBody::Details & getDetails() const { DARABONBA_PTR_GET_CONST(details_, DescribeSoarTaskAndActionsResponseBody::Details) };
    inline DescribeSoarTaskAndActionsResponseBody::Details getDetails() { DARABONBA_PTR_GET(details_, DescribeSoarTaskAndActionsResponseBody::Details) };
    inline DescribeSoarTaskAndActionsResponseBody& setDetails(const DescribeSoarTaskAndActionsResponseBody::Details & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeSoarTaskAndActionsResponseBody& setDetails(DescribeSoarTaskAndActionsResponseBody::Details && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeSoarTaskAndActionsResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribeSoarTaskAndActionsResponseBody::Page) };
    inline DescribeSoarTaskAndActionsResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribeSoarTaskAndActionsResponseBody::Page) };
    inline DescribeSoarTaskAndActionsResponseBody& setPage(const DescribeSoarTaskAndActionsResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeSoarTaskAndActionsResponseBody& setPage(DescribeSoarTaskAndActionsResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarTaskAndActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The execution details of each task.
    shared_ptr<DescribeSoarTaskAndActionsResponseBody::Details> details_ {};
    shared_ptr<DescribeSoarTaskAndActionsResponseBody::Page> page_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
