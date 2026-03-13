// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARRECORDSRESPONSEBODY_HPP_
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
  class DescribeSoarRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SoarExecuteRecords, soarExecuteRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SoarExecuteRecords, soarExecuteRecords_);
    };
    DescribeSoarRecordsResponseBody() = default ;
    DescribeSoarRecordsResponseBody(const DescribeSoarRecordsResponseBody &) = default ;
    DescribeSoarRecordsResponseBody(DescribeSoarRecordsResponseBody &&) = default ;
    DescribeSoarRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarRecordsResponseBody() = default ;
    DescribeSoarRecordsResponseBody& operator=(const DescribeSoarRecordsResponseBody &) = default ;
    DescribeSoarRecordsResponseBody& operator=(DescribeSoarRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SoarExecuteRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SoarExecuteRecords& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(OutputList, outputList_);
        DARABONBA_PTR_TO_JSON(RawEventReq, rawEventReq_);
        DARABONBA_PTR_TO_JSON(RequestUuid, requestUuid_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskflowMd5, taskflowMd5_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(TriggerUser, triggerUser_);
      };
      friend void from_json(const Darabonba::Json& j, SoarExecuteRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(OutputList, outputList_);
        DARABONBA_PTR_FROM_JSON(RawEventReq, rawEventReq_);
        DARABONBA_PTR_FROM_JSON(RequestUuid, requestUuid_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskflowMd5, taskflowMd5_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(TriggerUser, triggerUser_);
      };
      SoarExecuteRecords() = default ;
      SoarExecuteRecords(const SoarExecuteRecords &) = default ;
      SoarExecuteRecords(SoarExecuteRecords &&) = default ;
      SoarExecuteRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SoarExecuteRecords() = default ;
      SoarExecuteRecords& operator=(const SoarExecuteRecords &) = default ;
      SoarExecuteRecords& operator=(SoarExecuteRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OutputList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputList& obj) { 
          DARABONBA_PTR_TO_JSON(ActionUuid, actionUuid_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        };
        friend void from_json(const Darabonba::Json& j, OutputList& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionUuid, actionUuid_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        };
        OutputList() = default ;
        OutputList(const OutputList &) = default ;
        OutputList(OutputList &&) = default ;
        OutputList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputList() = default ;
        OutputList& operator=(const OutputList &) = default ;
        OutputList& operator=(OutputList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionUuid_ == nullptr
        && this->content_ == nullptr && this->nodeName_ == nullptr; };
        // actionUuid Field Functions 
        bool hasActionUuid() const { return this->actionUuid_ != nullptr;};
        void deleteActionUuid() { this->actionUuid_ = nullptr;};
        inline string getActionUuid() const { DARABONBA_PTR_GET_DEFAULT(actionUuid_, "") };
        inline OutputList& setActionUuid(string actionUuid) { DARABONBA_PTR_SET_VALUE(actionUuid_, actionUuid) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline OutputList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline OutputList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      protected:
        shared_ptr<string> actionUuid_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> nodeName_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->errorMsg_ == nullptr && this->outputList_ == nullptr && this->rawEventReq_ == nullptr && this->requestUuid_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->taskName_ == nullptr && this->taskflowMd5_ == nullptr && this->triggerType_ == nullptr && this->triggerUser_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline SoarExecuteRecords& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline SoarExecuteRecords& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // outputList Field Functions 
      bool hasOutputList() const { return this->outputList_ != nullptr;};
      void deleteOutputList() { this->outputList_ = nullptr;};
      inline const vector<SoarExecuteRecords::OutputList> & getOutputList() const { DARABONBA_PTR_GET_CONST(outputList_, vector<SoarExecuteRecords::OutputList>) };
      inline vector<SoarExecuteRecords::OutputList> getOutputList() { DARABONBA_PTR_GET(outputList_, vector<SoarExecuteRecords::OutputList>) };
      inline SoarExecuteRecords& setOutputList(const vector<SoarExecuteRecords::OutputList> & outputList) { DARABONBA_PTR_SET_VALUE(outputList_, outputList) };
      inline SoarExecuteRecords& setOutputList(vector<SoarExecuteRecords::OutputList> && outputList) { DARABONBA_PTR_SET_RVALUE(outputList_, outputList) };


      // rawEventReq Field Functions 
      bool hasRawEventReq() const { return this->rawEventReq_ != nullptr;};
      void deleteRawEventReq() { this->rawEventReq_ = nullptr;};
      inline string getRawEventReq() const { DARABONBA_PTR_GET_DEFAULT(rawEventReq_, "") };
      inline SoarExecuteRecords& setRawEventReq(string rawEventReq) { DARABONBA_PTR_SET_VALUE(rawEventReq_, rawEventReq) };


      // requestUuid Field Functions 
      bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
      void deleteRequestUuid() { this->requestUuid_ = nullptr;};
      inline string getRequestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
      inline SoarExecuteRecords& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline SoarExecuteRecords& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SoarExecuteRecords& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline SoarExecuteRecords& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskflowMd5 Field Functions 
      bool hasTaskflowMd5() const { return this->taskflowMd5_ != nullptr;};
      void deleteTaskflowMd5() { this->taskflowMd5_ = nullptr;};
      inline string getTaskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskflowMd5_, "") };
      inline SoarExecuteRecords& setTaskflowMd5(string taskflowMd5) { DARABONBA_PTR_SET_VALUE(taskflowMd5_, taskflowMd5) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline SoarExecuteRecords& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // triggerUser Field Functions 
      bool hasTriggerUser() const { return this->triggerUser_ != nullptr;};
      void deleteTriggerUser() { this->triggerUser_ = nullptr;};
      inline string getTriggerUser() const { DARABONBA_PTR_GET_DEFAULT(triggerUser_, "") };
      inline SoarExecuteRecords& setTriggerUser(string triggerUser) { DARABONBA_PTR_SET_VALUE(triggerUser_, triggerUser) };


    protected:
      // The end time of the component execution, in 13-digit timestamp format.
      shared_ptr<int64_t> endTime_ {};
      // The error message of the playbook task. This field is empty when the task succeeds.
      shared_ptr<string> errorMsg_ {};
      shared_ptr<vector<SoarExecuteRecords::OutputList>> outputList_ {};
      // The request parameters of the playbook task.
      shared_ptr<string> rawEventReq_ {};
      // The request ID of the playbook task, a unique ID for each task run.
      shared_ptr<string> requestUuid_ {};
      // The start time of the task execution, in 13-digit timestamp format.
      shared_ptr<int64_t> startTime_ {};
      // The status of the playbook task. Values:
      // 
      // - **success**: Indicates successful execution.
      // - **fail**: Indicates failed execution.
      // - **running**: Indicates the task is running
      shared_ptr<string> status_ {};
      // The name of the playbook task, which is the same as the playbook\\"s UUID.
      shared_ptr<string> taskName_ {};
      // The MD5 value of the playbook configuration.
      shared_ptr<string> taskflowMd5_ {};
      // The type of the playbook task. Values:
      // 
      // - **debug**: Indicates a debugging task.
      // - **manual**: Indicates a manual task.
      // - **siem**: Indicates a task triggered by an event or alert.
      shared_ptr<string> triggerType_ {};
      // The Alibaba Cloud account ID that executes the playbook task.
      shared_ptr<string> triggerUser_ {};
    };

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
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Page& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The current page number in paginated queries.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of items per page in paginated queries.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of queried items.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->page_ == nullptr
        && this->requestId_ == nullptr && this->soarExecuteRecords_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeSoarRecordsResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribeSoarRecordsResponseBody::Page) };
    inline DescribeSoarRecordsResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribeSoarRecordsResponseBody::Page) };
    inline DescribeSoarRecordsResponseBody& setPage(const DescribeSoarRecordsResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeSoarRecordsResponseBody& setPage(DescribeSoarRecordsResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // soarExecuteRecords Field Functions 
    bool hasSoarExecuteRecords() const { return this->soarExecuteRecords_ != nullptr;};
    void deleteSoarExecuteRecords() { this->soarExecuteRecords_ = nullptr;};
    inline const vector<DescribeSoarRecordsResponseBody::SoarExecuteRecords> & getSoarExecuteRecords() const { DARABONBA_PTR_GET_CONST(soarExecuteRecords_, vector<DescribeSoarRecordsResponseBody::SoarExecuteRecords>) };
    inline vector<DescribeSoarRecordsResponseBody::SoarExecuteRecords> getSoarExecuteRecords() { DARABONBA_PTR_GET(soarExecuteRecords_, vector<DescribeSoarRecordsResponseBody::SoarExecuteRecords>) };
    inline DescribeSoarRecordsResponseBody& setSoarExecuteRecords(const vector<DescribeSoarRecordsResponseBody::SoarExecuteRecords> & soarExecuteRecords) { DARABONBA_PTR_SET_VALUE(soarExecuteRecords_, soarExecuteRecords) };
    inline DescribeSoarRecordsResponseBody& setSoarExecuteRecords(vector<DescribeSoarRecordsResponseBody::SoarExecuteRecords> && soarExecuteRecords) { DARABONBA_PTR_SET_RVALUE(soarExecuteRecords_, soarExecuteRecords) };


  protected:
    // Information displayed on the page.
    // 
    // This parameter is required.
    shared_ptr<DescribeSoarRecordsResponseBody::Page> page_ {};
    // The ID of the current request, generated by Alibaba Cloud as a unique identifier for the request, which can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // Execution record result set.
    shared_ptr<vector<DescribeSoarRecordsResponseBody::SoarExecuteRecords>> soarExecuteRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
