// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKSRESPONSEBODY_HPP_
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
  class DescribeProcessTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(ProcessTasks, processTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(ProcessTasks, processTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProcessTasksResponseBody() = default ;
    DescribeProcessTasksResponseBody(const DescribeProcessTasksResponseBody &) = default ;
    DescribeProcessTasksResponseBody(DescribeProcessTasksResponseBody &&) = default ;
    DescribeProcessTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessTasksResponseBody() = default ;
    DescribeProcessTasksResponseBody& operator=(const DescribeProcessTasksResponseBody &) = default ;
    DescribeProcessTasksResponseBody& operator=(DescribeProcessTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProcessTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProcessTasks& obj) { 
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(EntityName, entityName_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
        DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
        DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_TO_JSON(ErrTip, errTip_);
        DARABONBA_PTR_TO_JSON(EventUuid, eventUuid_);
        DARABONBA_PTR_TO_JSON(GmtCreateMillis, gmtCreateMillis_);
        DARABONBA_PTR_TO_JSON(GmtModifiedMillis, gmtModifiedMillis_);
        DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
        DARABONBA_PTR_TO_JSON(ProcessStrategyUuid, processStrategyUuid_);
        DARABONBA_PTR_TO_JSON(ProcessTime, processTime_);
        DARABONBA_PTR_TO_JSON(RemoveTime, removeTime_);
        DARABONBA_PTR_TO_JSON(ReqUuid, reqUuid_);
        DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
        DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_TO_JSON(YunCode, yunCode_);
      };
      friend void from_json(const Darabonba::Json& j, ProcessTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
        DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
        DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_FROM_JSON(ErrTip, errTip_);
        DARABONBA_PTR_FROM_JSON(EventUuid, eventUuid_);
        DARABONBA_PTR_FROM_JSON(GmtCreateMillis, gmtCreateMillis_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedMillis, gmtModifiedMillis_);
        DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
        DARABONBA_PTR_FROM_JSON(ProcessStrategyUuid, processStrategyUuid_);
        DARABONBA_PTR_FROM_JSON(ProcessTime, processTime_);
        DARABONBA_PTR_FROM_JSON(RemoveTime, removeTime_);
        DARABONBA_PTR_FROM_JSON(ReqUuid, reqUuid_);
        DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
        DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_FROM_JSON(YunCode, yunCode_);
      };
      ProcessTasks() = default ;
      ProcessTasks(const ProcessTasks &) = default ;
      ProcessTasks(ProcessTasks &&) = default ;
      ProcessTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProcessTasks() = default ;
      ProcessTasks& operator=(const ProcessTasks &) = default ;
      ProcessTasks& operator=(ProcessTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creator_ == nullptr
        && this->entityName_ == nullptr && this->entityType_ == nullptr && this->entityUuid_ == nullptr && this->errCode_ == nullptr && this->errMsg_ == nullptr
        && this->errTip_ == nullptr && this->eventUuid_ == nullptr && this->gmtCreateMillis_ == nullptr && this->gmtModifiedMillis_ == nullptr && this->inputParams_ == nullptr
        && this->processStrategyUuid_ == nullptr && this->processTime_ == nullptr && this->removeTime_ == nullptr && this->reqUuid_ == nullptr && this->sceneCode_ == nullptr
        && this->sceneName_ == nullptr && this->scope_ == nullptr && this->source_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr
        && this->triggerSource_ == nullptr && this->yunCode_ == nullptr; };
      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline ProcessTasks& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // entityName Field Functions 
      bool hasEntityName() const { return this->entityName_ != nullptr;};
      void deleteEntityName() { this->entityName_ = nullptr;};
      inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
      inline ProcessTasks& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline ProcessTasks& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // entityUuid Field Functions 
      bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
      void deleteEntityUuid() { this->entityUuid_ = nullptr;};
      inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
      inline ProcessTasks& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


      // errCode Field Functions 
      bool hasErrCode() const { return this->errCode_ != nullptr;};
      void deleteErrCode() { this->errCode_ = nullptr;};
      inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
      inline ProcessTasks& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


      // errMsg Field Functions 
      bool hasErrMsg() const { return this->errMsg_ != nullptr;};
      void deleteErrMsg() { this->errMsg_ = nullptr;};
      inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
      inline ProcessTasks& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


      // errTip Field Functions 
      bool hasErrTip() const { return this->errTip_ != nullptr;};
      void deleteErrTip() { this->errTip_ = nullptr;};
      inline string getErrTip() const { DARABONBA_PTR_GET_DEFAULT(errTip_, "") };
      inline ProcessTasks& setErrTip(string errTip) { DARABONBA_PTR_SET_VALUE(errTip_, errTip) };


      // eventUuid Field Functions 
      bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
      void deleteEventUuid() { this->eventUuid_ = nullptr;};
      inline string getEventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
      inline ProcessTasks& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


      // gmtCreateMillis Field Functions 
      bool hasGmtCreateMillis() const { return this->gmtCreateMillis_ != nullptr;};
      void deleteGmtCreateMillis() { this->gmtCreateMillis_ = nullptr;};
      inline int64_t getGmtCreateMillis() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateMillis_, 0L) };
      inline ProcessTasks& setGmtCreateMillis(int64_t gmtCreateMillis) { DARABONBA_PTR_SET_VALUE(gmtCreateMillis_, gmtCreateMillis) };


      // gmtModifiedMillis Field Functions 
      bool hasGmtModifiedMillis() const { return this->gmtModifiedMillis_ != nullptr;};
      void deleteGmtModifiedMillis() { this->gmtModifiedMillis_ = nullptr;};
      inline int64_t getGmtModifiedMillis() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedMillis_, 0L) };
      inline ProcessTasks& setGmtModifiedMillis(int64_t gmtModifiedMillis) { DARABONBA_PTR_SET_VALUE(gmtModifiedMillis_, gmtModifiedMillis) };


      // inputParams Field Functions 
      bool hasInputParams() const { return this->inputParams_ != nullptr;};
      void deleteInputParams() { this->inputParams_ = nullptr;};
      inline string getInputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
      inline ProcessTasks& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


      // processStrategyUuid Field Functions 
      bool hasProcessStrategyUuid() const { return this->processStrategyUuid_ != nullptr;};
      void deleteProcessStrategyUuid() { this->processStrategyUuid_ = nullptr;};
      inline string getProcessStrategyUuid() const { DARABONBA_PTR_GET_DEFAULT(processStrategyUuid_, "") };
      inline ProcessTasks& setProcessStrategyUuid(string processStrategyUuid) { DARABONBA_PTR_SET_VALUE(processStrategyUuid_, processStrategyUuid) };


      // processTime Field Functions 
      bool hasProcessTime() const { return this->processTime_ != nullptr;};
      void deleteProcessTime() { this->processTime_ = nullptr;};
      inline int64_t getProcessTime() const { DARABONBA_PTR_GET_DEFAULT(processTime_, 0L) };
      inline ProcessTasks& setProcessTime(int64_t processTime) { DARABONBA_PTR_SET_VALUE(processTime_, processTime) };


      // removeTime Field Functions 
      bool hasRemoveTime() const { return this->removeTime_ != nullptr;};
      void deleteRemoveTime() { this->removeTime_ = nullptr;};
      inline int64_t getRemoveTime() const { DARABONBA_PTR_GET_DEFAULT(removeTime_, 0L) };
      inline ProcessTasks& setRemoveTime(int64_t removeTime) { DARABONBA_PTR_SET_VALUE(removeTime_, removeTime) };


      // reqUuid Field Functions 
      bool hasReqUuid() const { return this->reqUuid_ != nullptr;};
      void deleteReqUuid() { this->reqUuid_ = nullptr;};
      inline string getReqUuid() const { DARABONBA_PTR_GET_DEFAULT(reqUuid_, "") };
      inline ProcessTasks& setReqUuid(string reqUuid) { DARABONBA_PTR_SET_VALUE(reqUuid_, reqUuid) };


      // sceneCode Field Functions 
      bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
      void deleteSceneCode() { this->sceneCode_ = nullptr;};
      inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
      inline ProcessTasks& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline ProcessTasks& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline ProcessTasks& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ProcessTasks& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ProcessTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
      inline ProcessTasks& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // triggerSource Field Functions 
      bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
      void deleteTriggerSource() { this->triggerSource_ = nullptr;};
      inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
      inline ProcessTasks& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


      // yunCode Field Functions 
      bool hasYunCode() const { return this->yunCode_ != nullptr;};
      void deleteYunCode() { this->yunCode_ = nullptr;};
      inline string getYunCode() const { DARABONBA_PTR_GET_DEFAULT(yunCode_, "") };
      inline ProcessTasks& setYunCode(string yunCode) { DARABONBA_PTR_SET_VALUE(yunCode_, yunCode) };


    protected:
      // The ID of the Alibaba Cloud account that is used to submit the handling task.
      shared_ptr<string> creator_ {};
      // The name of the handling entity.
      shared_ptr<string> entityName_ {};
      // The type of the handling entity.
      shared_ptr<string> entityType_ {};
      // The UUID of the handling entity.
      shared_ptr<string> entityUuid_ {};
      // The error code returned if the call failed.
      shared_ptr<string> errCode_ {};
      // The error message returned if the call failed.
      shared_ptr<string> errMsg_ {};
      // The error tip returned if the call failed.
      shared_ptr<string> errTip_ {};
      // The UUID of the event.
      shared_ptr<string> eventUuid_ {};
      // The creation time of the handling task. The value is a 13-digit timestamp.
      shared_ptr<int64_t> gmtCreateMillis_ {};
      // The modification time of the handling task. The value is a 13-digit timestamp.
      shared_ptr<int64_t> gmtModifiedMillis_ {};
      // The input parameter of the handling task.
      shared_ptr<string> inputParams_ {};
      // The ID of the associated policy.
      shared_ptr<string> processStrategyUuid_ {};
      // The delivery time of the handling task. The value is a 13-digit timestamp.
      shared_ptr<int64_t> processTime_ {};
      // The unblocking time of the handling task. The value is a 13-digit timestamp.
      shared_ptr<int64_t> removeTime_ {};
      // The UUID of the playbook execution record.
      shared_ptr<string> reqUuid_ {};
      // The scenario code of the handling task.
      shared_ptr<string> sceneCode_ {};
      // The scenario name of the handling task.
      shared_ptr<string> sceneName_ {};
      // The ID of the Alibaba Cloud account that is specified in the handling task.
      shared_ptr<string> scope_ {};
      // The submission source of the handling task.
      shared_ptr<string> source_ {};
      // The unique identifier of the handling task.
      shared_ptr<string> taskId_ {};
      // The status of the handling task.
      shared_ptr<int32_t> taskStatus_ {};
      // The triggering source of the handling task. Valid values:
      // 
      // *   **system**: triggered when you manually handle an event.
      // *   **custom**: triggered by an event based on an automatic response rule.
      // *   **custom_alert**: triggered by an alert based on an automatic response rule.
      // *   **soar-manual**: triggered when you use SOAR to manually run a playbook.
      // *   **soar-mdr**: triggered by Managed Security Service.
      shared_ptr<string> triggerSource_ {};
      // The code of the cloud service that is associated with the handling task.
      shared_ptr<string> yunCode_ {};
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
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->page_ == nullptr
        && this->processTasks_ == nullptr && this->requestId_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeProcessTasksResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribeProcessTasksResponseBody::Page) };
    inline DescribeProcessTasksResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribeProcessTasksResponseBody::Page) };
    inline DescribeProcessTasksResponseBody& setPage(const DescribeProcessTasksResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeProcessTasksResponseBody& setPage(DescribeProcessTasksResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // processTasks Field Functions 
    bool hasProcessTasks() const { return this->processTasks_ != nullptr;};
    void deleteProcessTasks() { this->processTasks_ = nullptr;};
    inline const vector<DescribeProcessTasksResponseBody::ProcessTasks> & getProcessTasks() const { DARABONBA_PTR_GET_CONST(processTasks_, vector<DescribeProcessTasksResponseBody::ProcessTasks>) };
    inline vector<DescribeProcessTasksResponseBody::ProcessTasks> getProcessTasks() { DARABONBA_PTR_GET(processTasks_, vector<DescribeProcessTasksResponseBody::ProcessTasks>) };
    inline DescribeProcessTasksResponseBody& setProcessTasks(const vector<DescribeProcessTasksResponseBody::ProcessTasks> & processTasks) { DARABONBA_PTR_SET_VALUE(processTasks_, processTasks) };
    inline DescribeProcessTasksResponseBody& setProcessTasks(vector<DescribeProcessTasksResponseBody::ProcessTasks> && processTasks) { DARABONBA_PTR_SET_RVALUE(processTasks_, processTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProcessTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribeProcessTasksResponseBody::Page> page_ {};
    // The handling tasks.
    shared_ptr<vector<DescribeProcessTasksResponseBody::ProcessTasks>> processTasks_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
