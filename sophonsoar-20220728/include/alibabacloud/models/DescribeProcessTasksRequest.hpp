// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeProcessTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EntityName, entityName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_TO_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParamContent, paramContent_);
      DARABONBA_PTR_TO_JSON(ProcessActionEnd, processActionEnd_);
      DARABONBA_PTR_TO_JSON(ProcessActionStart, processActionStart_);
      DARABONBA_PTR_TO_JSON(ProcessRemoveEnd, processRemoveEnd_);
      DARABONBA_PTR_TO_JSON(ProcessRemoveStart, processRemoveStart_);
      DARABONBA_PTR_TO_JSON(ProcessStrategyUuid, processStrategyUuid_);
      DARABONBA_PTR_TO_JSON(ReqUuid, reqUuid_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_TO_JSON(YunCode, yunCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_FROM_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParamContent, paramContent_);
      DARABONBA_PTR_FROM_JSON(ProcessActionEnd, processActionEnd_);
      DARABONBA_PTR_FROM_JSON(ProcessActionStart, processActionStart_);
      DARABONBA_PTR_FROM_JSON(ProcessRemoveEnd, processRemoveEnd_);
      DARABONBA_PTR_FROM_JSON(ProcessRemoveStart, processRemoveStart_);
      DARABONBA_PTR_FROM_JSON(ProcessStrategyUuid, processStrategyUuid_);
      DARABONBA_PTR_FROM_JSON(ReqUuid, reqUuid_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_FROM_JSON(YunCode, yunCode_);
    };
    DescribeProcessTasksRequest() = default ;
    DescribeProcessTasksRequest(const DescribeProcessTasksRequest &) = default ;
    DescribeProcessTasksRequest(DescribeProcessTasksRequest &&) = default ;
    DescribeProcessTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessTasksRequest() = default ;
    DescribeProcessTasksRequest& operator=(const DescribeProcessTasksRequest &) = default ;
    DescribeProcessTasksRequest& operator=(DescribeProcessTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->entityName_ == nullptr && this->entityType_ == nullptr && this->entityUuid_ == nullptr && this->eventUuid_ == nullptr && this->orderField_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->paramContent_ == nullptr && this->processActionEnd_ == nullptr && this->processActionStart_ == nullptr
        && this->processRemoveEnd_ == nullptr && this->processRemoveStart_ == nullptr && this->processStrategyUuid_ == nullptr && this->reqUuid_ == nullptr && this->sceneCode_ == nullptr
        && this->scope_ == nullptr && this->source_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr && this->triggerSource_ == nullptr
        && this->yunCode_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeProcessTasksRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline DescribeProcessTasksRequest& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline DescribeProcessTasksRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityUuid Field Functions 
    bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
    void deleteEntityUuid() { this->entityUuid_ = nullptr;};
    inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
    inline DescribeProcessTasksRequest& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    // eventUuid Field Functions 
    bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
    void deleteEventUuid() { this->eventUuid_ = nullptr;};
    inline string getEventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
    inline DescribeProcessTasksRequest& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline DescribeProcessTasksRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeProcessTasksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeProcessTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paramContent Field Functions 
    bool hasParamContent() const { return this->paramContent_ != nullptr;};
    void deleteParamContent() { this->paramContent_ = nullptr;};
    inline string getParamContent() const { DARABONBA_PTR_GET_DEFAULT(paramContent_, "") };
    inline DescribeProcessTasksRequest& setParamContent(string paramContent) { DARABONBA_PTR_SET_VALUE(paramContent_, paramContent) };


    // processActionEnd Field Functions 
    bool hasProcessActionEnd() const { return this->processActionEnd_ != nullptr;};
    void deleteProcessActionEnd() { this->processActionEnd_ = nullptr;};
    inline int64_t getProcessActionEnd() const { DARABONBA_PTR_GET_DEFAULT(processActionEnd_, 0L) };
    inline DescribeProcessTasksRequest& setProcessActionEnd(int64_t processActionEnd) { DARABONBA_PTR_SET_VALUE(processActionEnd_, processActionEnd) };


    // processActionStart Field Functions 
    bool hasProcessActionStart() const { return this->processActionStart_ != nullptr;};
    void deleteProcessActionStart() { this->processActionStart_ = nullptr;};
    inline int64_t getProcessActionStart() const { DARABONBA_PTR_GET_DEFAULT(processActionStart_, 0L) };
    inline DescribeProcessTasksRequest& setProcessActionStart(int64_t processActionStart) { DARABONBA_PTR_SET_VALUE(processActionStart_, processActionStart) };


    // processRemoveEnd Field Functions 
    bool hasProcessRemoveEnd() const { return this->processRemoveEnd_ != nullptr;};
    void deleteProcessRemoveEnd() { this->processRemoveEnd_ = nullptr;};
    inline int64_t getProcessRemoveEnd() const { DARABONBA_PTR_GET_DEFAULT(processRemoveEnd_, 0L) };
    inline DescribeProcessTasksRequest& setProcessRemoveEnd(int64_t processRemoveEnd) { DARABONBA_PTR_SET_VALUE(processRemoveEnd_, processRemoveEnd) };


    // processRemoveStart Field Functions 
    bool hasProcessRemoveStart() const { return this->processRemoveStart_ != nullptr;};
    void deleteProcessRemoveStart() { this->processRemoveStart_ = nullptr;};
    inline int64_t getProcessRemoveStart() const { DARABONBA_PTR_GET_DEFAULT(processRemoveStart_, 0L) };
    inline DescribeProcessTasksRequest& setProcessRemoveStart(int64_t processRemoveStart) { DARABONBA_PTR_SET_VALUE(processRemoveStart_, processRemoveStart) };


    // processStrategyUuid Field Functions 
    bool hasProcessStrategyUuid() const { return this->processStrategyUuid_ != nullptr;};
    void deleteProcessStrategyUuid() { this->processStrategyUuid_ = nullptr;};
    inline string getProcessStrategyUuid() const { DARABONBA_PTR_GET_DEFAULT(processStrategyUuid_, "") };
    inline DescribeProcessTasksRequest& setProcessStrategyUuid(string processStrategyUuid) { DARABONBA_PTR_SET_VALUE(processStrategyUuid_, processStrategyUuid) };


    // reqUuid Field Functions 
    bool hasReqUuid() const { return this->reqUuid_ != nullptr;};
    void deleteReqUuid() { this->reqUuid_ = nullptr;};
    inline string getReqUuid() const { DARABONBA_PTR_GET_DEFAULT(reqUuid_, "") };
    inline DescribeProcessTasksRequest& setReqUuid(string reqUuid) { DARABONBA_PTR_SET_VALUE(reqUuid_, reqUuid) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DescribeProcessTasksRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeProcessTasksRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeProcessTasksRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeProcessTasksRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeProcessTasksRequest& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline DescribeProcessTasksRequest& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // yunCode Field Functions 
    bool hasYunCode() const { return this->yunCode_ != nullptr;};
    void deleteYunCode() { this->yunCode_ = nullptr;};
    inline string getYunCode() const { DARABONBA_PTR_GET_DEFAULT(yunCode_, "") };
    inline DescribeProcessTasksRequest& setYunCode(string yunCode) { DARABONBA_PTR_SET_VALUE(yunCode_, yunCode) };


  protected:
    // The sort order. Valid values:
    // 
    // *   **desc** (default).
    // *   **asc**.
    shared_ptr<string> direction_ {};
    // The name of the handling entity.
    shared_ptr<string> entityName_ {};
    // The type of the handling entity. Valid values:
    // 
    // *   **ip**.
    // *   **file**.
    // *   **process**.
    shared_ptr<string> entityType_ {};
    // The UUID of the handling entity.
    shared_ptr<string> entityUuid_ {};
    // The UUID of the event.
    shared_ptr<string> eventUuid_ {};
    // The field that you use to sort the result.
    // 
    // >  You can obtain the field from the response result.
    shared_ptr<string> orderField_ {};
    // The page number. Default value: 1. Pages start from page 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. If you do not specify the PageSize parameter, 10 entries are returned by default.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The handling entity, handling scenario, or handling parameter that is used for fuzzy match.
    shared_ptr<string> paramContent_ {};
    // The end of the time range for a handling task. The value is a 13-digit timestamp.
    shared_ptr<int64_t> processActionEnd_ {};
    // The beginning of the time range for a handling task. The value is a 13-digit timestamp.
    shared_ptr<int64_t> processActionStart_ {};
    // The end of the time range for an unblocking task. The value is a 13-digit timestamp.
    shared_ptr<int64_t> processRemoveEnd_ {};
    // The beginning of the time range for an unblocking task. The value is a 13-digit timestamp.
    shared_ptr<int64_t> processRemoveStart_ {};
    // The UUID of the handling policy.
    // 
    // >  You can call the [ListDisposeStrategy](https://help.aliyun.com/document_detail/2584440.html) operation to query the UUID of the handling policy.
    shared_ptr<string> processStrategyUuid_ {};
    shared_ptr<string> reqUuid_ {};
    // The scenario code of the handling task.
    // 
    // >  You can call the [DescribeEnumItems](~~DescribeEnumItems~~) operation to query the scenario code of the handling task. This parameter is available when you set **EnumType** to **process**.
    shared_ptr<string> sceneCode_ {};
    // The ID of the Alibaba Cloud account that is specified in the handling task.
    shared_ptr<string> scope_ {};
    // The triggering source of the handling task. The value is a string array. Valid values:
    // 
    // *   **system**: triggered when you manually handle an event.
    // *   **custom**: triggered by an event based on an automatic response rule.
    // *   **custom_alert**: triggered by an alert based on an automatic response rule.
    // *   **soar-manual**: triggered when you use SOAR to manually run a playbook.
    // *   **soar-mdr**: triggered by Managed Security Service.
    shared_ptr<string> source_ {};
    // The unique identifier of the handling task.
    // 
    // >  This parameter is used to query a specific task. You can obtain the value from the response result.
    shared_ptr<string> taskId_ {};
    // The status of the handling task. The value is a string. Valid values:
    // 
    // *   **11**: being handled.
    // *   **21**: being blocked.
    // *   **22**: being quarantined.
    // *   **23**: completed.
    // *   **24**: added to the whitelist.
    // *   **20**: successful.
    // *   **90**: failed.
    // *   **91**: unblocking failed.
    // *   **92**: restoring quarantined files failed
    shared_ptr<string> taskStatus_ {};
    // The triggering source of the handling task. Valid values:
    // 
    // *   **system**: triggered when you manually handle an event.
    // *   **custom**: triggered by an event based on an automatic response rule.
    // *   **custom_alert**: triggered by an alert based on an automatic response rule.
    // *   **soar-manual**: triggered when you use SOAR to manually run a playbook.
    // *   **soar-mdr**: triggered by Managed Security Service.
    shared_ptr<string> triggerSource_ {};
    // The cloud service that is associated with the handling task. The value is a string. Valid values:
    // 
    // *   **WAF**: Web Application Firewall (WAF).
    // *   **CFW**: Cloud Firewall.
    // *   **Aegis**: Security Center.
    shared_ptr<string> yunCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
