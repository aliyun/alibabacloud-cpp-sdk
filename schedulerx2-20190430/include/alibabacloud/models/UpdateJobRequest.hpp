// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateJobRequestContactInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class UpdateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(ClassName, className_);
      DARABONBA_PTR_TO_JSON(ConsumerSize, consumerSize_);
      DARABONBA_PTR_TO_JSON(ContactInfo, contactInfo_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataOffset, dataOffset_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DispatcherSize, dispatcherSize_);
      DARABONBA_PTR_TO_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_TO_JSON(FailEnable, failEnable_);
      DARABONBA_PTR_TO_JSON(FailTimes, failTimes_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(MissWorkerEnable, missWorkerEnable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(QueueSize, queueSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SendChannel, sendChannel_);
      DARABONBA_PTR_TO_JSON(SuccessNoticeEnable, successNoticeEnable_);
      DARABONBA_PTR_TO_JSON(TaskAttemptInterval, taskAttemptInterval_);
      DARABONBA_PTR_TO_JSON(TaskDispatchMode, taskDispatchMode_);
      DARABONBA_PTR_TO_JSON(TaskMaxAttempt, taskMaxAttempt_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(TimeoutEnable, timeoutEnable_);
      DARABONBA_PTR_TO_JSON(TimeoutKillEnable, timeoutKillEnable_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(XAttrs, XAttrs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
      DARABONBA_PTR_FROM_JSON(ConsumerSize, consumerSize_);
      DARABONBA_PTR_FROM_JSON(ContactInfo, contactInfo_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataOffset, dataOffset_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DispatcherSize, dispatcherSize_);
      DARABONBA_PTR_FROM_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_FROM_JSON(FailEnable, failEnable_);
      DARABONBA_PTR_FROM_JSON(FailTimes, failTimes_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(MissWorkerEnable, missWorkerEnable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(QueueSize, queueSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SendChannel, sendChannel_);
      DARABONBA_PTR_FROM_JSON(SuccessNoticeEnable, successNoticeEnable_);
      DARABONBA_PTR_FROM_JSON(TaskAttemptInterval, taskAttemptInterval_);
      DARABONBA_PTR_FROM_JSON(TaskDispatchMode, taskDispatchMode_);
      DARABONBA_PTR_FROM_JSON(TaskMaxAttempt, taskMaxAttempt_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(TimeoutEnable, timeoutEnable_);
      DARABONBA_PTR_FROM_JSON(TimeoutKillEnable, timeoutKillEnable_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(XAttrs, XAttrs_);
    };
    UpdateJobRequest() = default ;
    UpdateJobRequest(const UpdateJobRequest &) = default ;
    UpdateJobRequest(UpdateJobRequest &&) = default ;
    UpdateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobRequest() = default ;
    UpdateJobRequest& operator=(const UpdateJobRequest &) = default ;
    UpdateJobRequest& operator=(UpdateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attemptInterval_ == nullptr
        && return this->calendar_ == nullptr && return this->className_ == nullptr && return this->consumerSize_ == nullptr && return this->contactInfo_ == nullptr && return this->content_ == nullptr
        && return this->dataOffset_ == nullptr && return this->description_ == nullptr && return this->dispatcherSize_ == nullptr && return this->executeMode_ == nullptr && return this->failEnable_ == nullptr
        && return this->failTimes_ == nullptr && return this->groupId_ == nullptr && return this->jobId_ == nullptr && return this->maxAttempt_ == nullptr && return this->maxConcurrency_ == nullptr
        && return this->missWorkerEnable_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->namespaceSource_ == nullptr && return this->pageSize_ == nullptr
        && return this->parameters_ == nullptr && return this->priority_ == nullptr && return this->queueSize_ == nullptr && return this->regionId_ == nullptr && return this->sendChannel_ == nullptr
        && return this->successNoticeEnable_ == nullptr && return this->taskAttemptInterval_ == nullptr && return this->taskDispatchMode_ == nullptr && return this->taskMaxAttempt_ == nullptr && return this->template_ == nullptr
        && return this->timeExpression_ == nullptr && return this->timeType_ == nullptr && return this->timeout_ == nullptr && return this->timeoutEnable_ == nullptr && return this->timeoutKillEnable_ == nullptr
        && return this->timezone_ == nullptr && return this->XAttrs_ == nullptr; };
    // attemptInterval Field Functions 
    bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
    void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
    inline int32_t attemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
    inline UpdateJobRequest& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string calendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline UpdateJobRequest& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline UpdateJobRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // consumerSize Field Functions 
    bool hasConsumerSize() const { return this->consumerSize_ != nullptr;};
    void deleteConsumerSize() { this->consumerSize_ = nullptr;};
    inline int32_t consumerSize() const { DARABONBA_PTR_GET_DEFAULT(consumerSize_, 0) };
    inline UpdateJobRequest& setConsumerSize(int32_t consumerSize) { DARABONBA_PTR_SET_VALUE(consumerSize_, consumerSize) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const vector<UpdateJobRequestContactInfo> & contactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, vector<UpdateJobRequestContactInfo>) };
    inline vector<UpdateJobRequestContactInfo> contactInfo() { DARABONBA_PTR_GET(contactInfo_, vector<UpdateJobRequestContactInfo>) };
    inline UpdateJobRequest& setContactInfo(const vector<UpdateJobRequestContactInfo> & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline UpdateJobRequest& setContactInfo(vector<UpdateJobRequestContactInfo> && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateJobRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataOffset Field Functions 
    bool hasDataOffset() const { return this->dataOffset_ != nullptr;};
    void deleteDataOffset() { this->dataOffset_ = nullptr;};
    inline int32_t dataOffset() const { DARABONBA_PTR_GET_DEFAULT(dataOffset_, 0) };
    inline UpdateJobRequest& setDataOffset(int32_t dataOffset) { DARABONBA_PTR_SET_VALUE(dataOffset_, dataOffset) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dispatcherSize Field Functions 
    bool hasDispatcherSize() const { return this->dispatcherSize_ != nullptr;};
    void deleteDispatcherSize() { this->dispatcherSize_ = nullptr;};
    inline int32_t dispatcherSize() const { DARABONBA_PTR_GET_DEFAULT(dispatcherSize_, 0) };
    inline UpdateJobRequest& setDispatcherSize(int32_t dispatcherSize) { DARABONBA_PTR_SET_VALUE(dispatcherSize_, dispatcherSize) };


    // executeMode Field Functions 
    bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
    void deleteExecuteMode() { this->executeMode_ = nullptr;};
    inline string executeMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, "") };
    inline UpdateJobRequest& setExecuteMode(string executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


    // failEnable Field Functions 
    bool hasFailEnable() const { return this->failEnable_ != nullptr;};
    void deleteFailEnable() { this->failEnable_ = nullptr;};
    inline bool failEnable() const { DARABONBA_PTR_GET_DEFAULT(failEnable_, false) };
    inline UpdateJobRequest& setFailEnable(bool failEnable) { DARABONBA_PTR_SET_VALUE(failEnable_, failEnable) };


    // failTimes Field Functions 
    bool hasFailTimes() const { return this->failTimes_ != nullptr;};
    void deleteFailTimes() { this->failTimes_ = nullptr;};
    inline int32_t failTimes() const { DARABONBA_PTR_GET_DEFAULT(failTimes_, 0) };
    inline UpdateJobRequest& setFailTimes(int32_t failTimes) { DARABONBA_PTR_SET_VALUE(failTimes_, failTimes) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateJobRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline UpdateJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // maxAttempt Field Functions 
    bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
    void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
    inline int32_t maxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
    inline UpdateJobRequest& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline UpdateJobRequest& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // missWorkerEnable Field Functions 
    bool hasMissWorkerEnable() const { return this->missWorkerEnable_ != nullptr;};
    void deleteMissWorkerEnable() { this->missWorkerEnable_ = nullptr;};
    inline bool missWorkerEnable() const { DARABONBA_PTR_GET_DEFAULT(missWorkerEnable_, false) };
    inline UpdateJobRequest& setMissWorkerEnable(bool missWorkerEnable) { DARABONBA_PTR_SET_VALUE(missWorkerEnable_, missWorkerEnable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateJobRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string namespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline UpdateJobRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline UpdateJobRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline UpdateJobRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // queueSize Field Functions 
    bool hasQueueSize() const { return this->queueSize_ != nullptr;};
    void deleteQueueSize() { this->queueSize_ = nullptr;};
    inline int32_t queueSize() const { DARABONBA_PTR_GET_DEFAULT(queueSize_, 0) };
    inline UpdateJobRequest& setQueueSize(int32_t queueSize) { DARABONBA_PTR_SET_VALUE(queueSize_, queueSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sendChannel Field Functions 
    bool hasSendChannel() const { return this->sendChannel_ != nullptr;};
    void deleteSendChannel() { this->sendChannel_ = nullptr;};
    inline string sendChannel() const { DARABONBA_PTR_GET_DEFAULT(sendChannel_, "") };
    inline UpdateJobRequest& setSendChannel(string sendChannel) { DARABONBA_PTR_SET_VALUE(sendChannel_, sendChannel) };


    // successNoticeEnable Field Functions 
    bool hasSuccessNoticeEnable() const { return this->successNoticeEnable_ != nullptr;};
    void deleteSuccessNoticeEnable() { this->successNoticeEnable_ = nullptr;};
    inline bool successNoticeEnable() const { DARABONBA_PTR_GET_DEFAULT(successNoticeEnable_, false) };
    inline UpdateJobRequest& setSuccessNoticeEnable(bool successNoticeEnable) { DARABONBA_PTR_SET_VALUE(successNoticeEnable_, successNoticeEnable) };


    // taskAttemptInterval Field Functions 
    bool hasTaskAttemptInterval() const { return this->taskAttemptInterval_ != nullptr;};
    void deleteTaskAttemptInterval() { this->taskAttemptInterval_ = nullptr;};
    inline int32_t taskAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(taskAttemptInterval_, 0) };
    inline UpdateJobRequest& setTaskAttemptInterval(int32_t taskAttemptInterval) { DARABONBA_PTR_SET_VALUE(taskAttemptInterval_, taskAttemptInterval) };


    // taskDispatchMode Field Functions 
    bool hasTaskDispatchMode() const { return this->taskDispatchMode_ != nullptr;};
    void deleteTaskDispatchMode() { this->taskDispatchMode_ = nullptr;};
    inline string taskDispatchMode() const { DARABONBA_PTR_GET_DEFAULT(taskDispatchMode_, "") };
    inline UpdateJobRequest& setTaskDispatchMode(string taskDispatchMode) { DARABONBA_PTR_SET_VALUE(taskDispatchMode_, taskDispatchMode) };


    // taskMaxAttempt Field Functions 
    bool hasTaskMaxAttempt() const { return this->taskMaxAttempt_ != nullptr;};
    void deleteTaskMaxAttempt() { this->taskMaxAttempt_ = nullptr;};
    inline int32_t taskMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(taskMaxAttempt_, 0) };
    inline UpdateJobRequest& setTaskMaxAttempt(int32_t taskMaxAttempt) { DARABONBA_PTR_SET_VALUE(taskMaxAttempt_, taskMaxAttempt) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline UpdateJobRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string timeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline UpdateJobRequest& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline UpdateJobRequest& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline UpdateJobRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // timeoutEnable Field Functions 
    bool hasTimeoutEnable() const { return this->timeoutEnable_ != nullptr;};
    void deleteTimeoutEnable() { this->timeoutEnable_ = nullptr;};
    inline bool timeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutEnable_, false) };
    inline UpdateJobRequest& setTimeoutEnable(bool timeoutEnable) { DARABONBA_PTR_SET_VALUE(timeoutEnable_, timeoutEnable) };


    // timeoutKillEnable Field Functions 
    bool hasTimeoutKillEnable() const { return this->timeoutKillEnable_ != nullptr;};
    void deleteTimeoutKillEnable() { this->timeoutKillEnable_ = nullptr;};
    inline bool timeoutKillEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutKillEnable_, false) };
    inline UpdateJobRequest& setTimeoutKillEnable(bool timeoutKillEnable) { DARABONBA_PTR_SET_VALUE(timeoutKillEnable_, timeoutKillEnable) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline UpdateJobRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // XAttrs Field Functions 
    bool hasXAttrs() const { return this->XAttrs_ != nullptr;};
    void deleteXAttrs() { this->XAttrs_ = nullptr;};
    inline string XAttrs() const { DARABONBA_PTR_GET_DEFAULT(XAttrs_, "") };
    inline UpdateJobRequest& setXAttrs(string XAttrs) { DARABONBA_PTR_SET_VALUE(XAttrs_, XAttrs) };


  protected:
    // The interval of retries after a job failure. Default value: 30. Unit: seconds.
    std::shared_ptr<int32_t> attemptInterval_ = nullptr;
    // If you set TimeType to 1 (cron), you can specify calendar days.
    std::shared_ptr<string> calendar_ = nullptr;
    // The full path of the job interface class.
    // 
    // This field is available only when you set the job type to java. In this case, you must enter a full path.
    std::shared_ptr<string> className_ = nullptr;
    // The number of threads that are triggered by a single worker at a time. Default value: 5. This parameter is an advanced configuration item of the MapReduce job.
    std::shared_ptr<int32_t> consumerSize_ = nullptr;
    // The information about the alert contact.
    std::shared_ptr<vector<UpdateJobRequestContactInfo>> contactInfo_ = nullptr;
    // The script content. This parameter is required when you set the job type to python, shell, go, or k8s.
    std::shared_ptr<string> content_ = nullptr;
    // If you set TimeType to 1 (cron), you can specify a time offset. Unit: seconds.
    std::shared_ptr<int32_t> dataOffset_ = nullptr;
    // The job description.
    std::shared_ptr<string> description_ = nullptr;
    // The number of task distribution threads. Default value: 5. This parameter is an advanced configuration item of the MapReduce job.
    std::shared_ptr<int32_t> dispatcherSize_ = nullptr;
    // The execution mode of the job. Valid values:
    // 
    // *   **Stand-alone operation**: standalone
    // *   **Broadcast run**: broadcatst
    // *   **Visual MapReduce**: parallel
    // *   **MapReduce**: batch
    // *   **Shard run**: shard
    std::shared_ptr<string> executeMode_ = nullptr;
    // Specifies whether to turn on Failure alarm. If the switch is turned on, an alert will be generated upon a failure. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> failEnable_ = nullptr;
    // The number of consecutive failures. An alert will be received if the number of consecutive failures reaches the value of this parameter.
    std::shared_ptr<int32_t> failTimes_ = nullptr;
    // The application ID. You can obtain the application ID on the Application Management page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The job ID. You can obtain the job ID on the Task Management page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The maximum number of retries after a job failure. This parameter is specified based on your business requirements.
    std::shared_ptr<int32_t> maxAttempt_ = nullptr;
    // The maximum number of concurrent instances. Default value: 1. The default value indicates that only one instance is allowed to run at a time. When an instance is running, another instance is not triggered even if the scheduled time for running the instance is reached.
    std::shared_ptr<int32_t> maxConcurrency_ = nullptr;
    // Specifies whether to turn on No machine alarm available. If the switch is turned on, an alert will be generated when no machine is available for running the job. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> missWorkerEnable_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace ID. You can obtain the namespace ID on the Namespace page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The namespace source. This parameter is required only for a special third party.
    std::shared_ptr<string> namespaceSource_ = nullptr;
    // The number of tasks that can be pulled at a time. Default value: 100. This parameter is an advanced configuration item of the MapReduce job.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The user-defined parameters that you can obtain when the job is running.
    std::shared_ptr<string> parameters_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The maximum number of tasks that can be queued. Default value: 10000. This parameter is an advanced configuration item of the MapReduce job.
    std::shared_ptr<int32_t> queueSize_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The method that is used to send alerts. Only Short Message Service (SMS) is supported.
    std::shared_ptr<string> sendChannel_ = nullptr;
    // Specifies whether to turn on Successful notice. If the switch is turned on, a notice will be sent when a job succeeds.
    std::shared_ptr<bool> successNoticeEnable_ = nullptr;
    // The interval of retries after a task failure. This parameter is an advanced configuration item of the MapReduce job.
    std::shared_ptr<int32_t> taskAttemptInterval_ = nullptr;
    // The job mode. Valid values: push and pull. This parameter is an advanced configuration item of the MapReduce job.
    std::shared_ptr<string> taskDispatchMode_ = nullptr;
    // The number of retries after a task failure. This parameter is an advanced configuration item of the MapReduce job.
    std::shared_ptr<int32_t> taskMaxAttempt_ = nullptr;
    // Custom task template for the k8s task type.
    std::shared_ptr<string> template_ = nullptr;
    // The time expression. Specify the time expression based on the value of TimeType:
    // 
    // *   If you set TimeType to **1** (cron), specify this parameter to a standard CRON expression.
    // *   If you set TimeType to **100** (api), no time expression is required.
    // *   If you set TimeType to **3** (fixed_rate), specify this parameter to a fixed frequency in seconds. For example, if you set this parameter to 30, the system triggers a job every 30 seconds.
    // *   If you set TimeType to **4** (second_delay), specify this parameter to a fixed delay after which the job is triggered. Valid values: 1 to 60. Unit: seconds.
    std::shared_ptr<string> timeExpression_ = nullptr;
    // The time type. Valid values:
    // 
    // *   **1**: cron
    // *   **3**: fix_rate
    // *   **4**: second_delay
    // *   **100**: api
    std::shared_ptr<int32_t> timeType_ = nullptr;
    // The timeout threshold. Unit: seconds.
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // Specifies whether to turn on Timeout alarm. If the switch is turned on, an alert will be generated upon a timeout. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> timeoutEnable_ = nullptr;
    // Specifies whether to turn on Timeout termination. If the switch is turned on, the job will be terminated upon a timeout. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> timeoutKillEnable_ = nullptr;
    // Time zone.
    std::shared_ptr<string> timezone_ = nullptr;
    // If you set JobType to k8s, this parameter is required. xxljob task: {"resource":"job"} shell task: {"image":"busybox","resource":"shell"}
    std::shared_ptr<string> XAttrs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
