// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKSRESPONSEBODYPROCESSTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKSRESPONSEBODYPROCESSTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeProcessTasksResponseBodyProcessTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessTasksResponseBodyProcessTasks& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeProcessTasksResponseBodyProcessTasks& obj) { 
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
    DescribeProcessTasksResponseBodyProcessTasks() = default ;
    DescribeProcessTasksResponseBodyProcessTasks(const DescribeProcessTasksResponseBodyProcessTasks &) = default ;
    DescribeProcessTasksResponseBodyProcessTasks(DescribeProcessTasksResponseBodyProcessTasks &&) = default ;
    DescribeProcessTasksResponseBodyProcessTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessTasksResponseBodyProcessTasks() = default ;
    DescribeProcessTasksResponseBodyProcessTasks& operator=(const DescribeProcessTasksResponseBodyProcessTasks &) = default ;
    DescribeProcessTasksResponseBodyProcessTasks& operator=(DescribeProcessTasksResponseBodyProcessTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->entityName_ == nullptr && return this->entityType_ == nullptr && return this->entityUuid_ == nullptr && return this->errCode_ == nullptr && return this->errMsg_ == nullptr
        && return this->errTip_ == nullptr && return this->eventUuid_ == nullptr && return this->gmtCreateMillis_ == nullptr && return this->gmtModifiedMillis_ == nullptr && return this->inputParams_ == nullptr
        && return this->processStrategyUuid_ == nullptr && return this->processTime_ == nullptr && return this->removeTime_ == nullptr && return this->reqUuid_ == nullptr && return this->sceneCode_ == nullptr
        && return this->sceneName_ == nullptr && return this->scope_ == nullptr && return this->source_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr
        && return this->triggerSource_ == nullptr && return this->yunCode_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string entityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityUuid Field Functions 
    bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
    void deleteEntityUuid() { this->entityUuid_ = nullptr;};
    inline string entityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // errTip Field Functions 
    bool hasErrTip() const { return this->errTip_ != nullptr;};
    void deleteErrTip() { this->errTip_ = nullptr;};
    inline string errTip() const { DARABONBA_PTR_GET_DEFAULT(errTip_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setErrTip(string errTip) { DARABONBA_PTR_SET_VALUE(errTip_, errTip) };


    // eventUuid Field Functions 
    bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
    void deleteEventUuid() { this->eventUuid_ = nullptr;};
    inline string eventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


    // gmtCreateMillis Field Functions 
    bool hasGmtCreateMillis() const { return this->gmtCreateMillis_ != nullptr;};
    void deleteGmtCreateMillis() { this->gmtCreateMillis_ = nullptr;};
    inline int64_t gmtCreateMillis() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateMillis_, 0L) };
    inline DescribeProcessTasksResponseBodyProcessTasks& setGmtCreateMillis(int64_t gmtCreateMillis) { DARABONBA_PTR_SET_VALUE(gmtCreateMillis_, gmtCreateMillis) };


    // gmtModifiedMillis Field Functions 
    bool hasGmtModifiedMillis() const { return this->gmtModifiedMillis_ != nullptr;};
    void deleteGmtModifiedMillis() { this->gmtModifiedMillis_ = nullptr;};
    inline int64_t gmtModifiedMillis() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedMillis_, 0L) };
    inline DescribeProcessTasksResponseBodyProcessTasks& setGmtModifiedMillis(int64_t gmtModifiedMillis) { DARABONBA_PTR_SET_VALUE(gmtModifiedMillis_, gmtModifiedMillis) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string inputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // processStrategyUuid Field Functions 
    bool hasProcessStrategyUuid() const { return this->processStrategyUuid_ != nullptr;};
    void deleteProcessStrategyUuid() { this->processStrategyUuid_ = nullptr;};
    inline string processStrategyUuid() const { DARABONBA_PTR_GET_DEFAULT(processStrategyUuid_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setProcessStrategyUuid(string processStrategyUuid) { DARABONBA_PTR_SET_VALUE(processStrategyUuid_, processStrategyUuid) };


    // processTime Field Functions 
    bool hasProcessTime() const { return this->processTime_ != nullptr;};
    void deleteProcessTime() { this->processTime_ = nullptr;};
    inline int64_t processTime() const { DARABONBA_PTR_GET_DEFAULT(processTime_, 0L) };
    inline DescribeProcessTasksResponseBodyProcessTasks& setProcessTime(int64_t processTime) { DARABONBA_PTR_SET_VALUE(processTime_, processTime) };


    // removeTime Field Functions 
    bool hasRemoveTime() const { return this->removeTime_ != nullptr;};
    void deleteRemoveTime() { this->removeTime_ = nullptr;};
    inline int64_t removeTime() const { DARABONBA_PTR_GET_DEFAULT(removeTime_, 0L) };
    inline DescribeProcessTasksResponseBodyProcessTasks& setRemoveTime(int64_t removeTime) { DARABONBA_PTR_SET_VALUE(removeTime_, removeTime) };


    // reqUuid Field Functions 
    bool hasReqUuid() const { return this->reqUuid_ != nullptr;};
    void deleteReqUuid() { this->reqUuid_ = nullptr;};
    inline string reqUuid() const { DARABONBA_PTR_GET_DEFAULT(reqUuid_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setReqUuid(string reqUuid) { DARABONBA_PTR_SET_VALUE(reqUuid_, reqUuid) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline DescribeProcessTasksResponseBodyProcessTasks& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // yunCode Field Functions 
    bool hasYunCode() const { return this->yunCode_ != nullptr;};
    void deleteYunCode() { this->yunCode_ = nullptr;};
    inline string yunCode() const { DARABONBA_PTR_GET_DEFAULT(yunCode_, "") };
    inline DescribeProcessTasksResponseBodyProcessTasks& setYunCode(string yunCode) { DARABONBA_PTR_SET_VALUE(yunCode_, yunCode) };


  protected:
    // The ID of the Alibaba Cloud account that is used to submit the handling task.
    std::shared_ptr<string> creator_ = nullptr;
    // The name of the handling entity.
    std::shared_ptr<string> entityName_ = nullptr;
    // The type of the handling entity.
    std::shared_ptr<string> entityType_ = nullptr;
    // The UUID of the handling entity.
    std::shared_ptr<string> entityUuid_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMsg_ = nullptr;
    // The error tip returned if the call failed.
    std::shared_ptr<string> errTip_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> eventUuid_ = nullptr;
    // The creation time of the handling task. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> gmtCreateMillis_ = nullptr;
    // The modification time of the handling task. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> gmtModifiedMillis_ = nullptr;
    // The input parameter of the handling task.
    std::shared_ptr<string> inputParams_ = nullptr;
    // The ID of the associated policy.
    std::shared_ptr<string> processStrategyUuid_ = nullptr;
    // The delivery time of the handling task. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> processTime_ = nullptr;
    // The unblocking time of the handling task. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> removeTime_ = nullptr;
    // The UUID of the playbook execution record.
    std::shared_ptr<string> reqUuid_ = nullptr;
    // The scenario code of the handling task.
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The scenario name of the handling task.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The ID of the Alibaba Cloud account that is specified in the handling task.
    std::shared_ptr<string> scope_ = nullptr;
    // The submission source of the handling task.
    std::shared_ptr<string> source_ = nullptr;
    // The unique identifier of the handling task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The status of the handling task.
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    // The triggering source of the handling task. Valid values:
    // 
    // *   **system**: triggered when you manually handle an event.
    // *   **custom**: triggered by an event based on an automatic response rule.
    // *   **custom_alert**: triggered by an alert based on an automatic response rule.
    // *   **soar-manual**: triggered when you use SOAR to manually run a playbook.
    // *   **soar-mdr**: triggered by Managed Security Service.
    std::shared_ptr<string> triggerSource_ = nullptr;
    // The code of the cloud service that is associated with the handling task.
    std::shared_ptr<string> yunCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
