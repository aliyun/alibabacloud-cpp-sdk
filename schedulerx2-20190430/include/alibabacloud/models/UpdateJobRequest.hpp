// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
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
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
    class ContactInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Ding, ding_);
        DARABONBA_PTR_TO_JSON(UserMail, userMail_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(UserPhone, userPhone_);
      };
      friend void from_json(const Darabonba::Json& j, ContactInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Ding, ding_);
        DARABONBA_PTR_FROM_JSON(UserMail, userMail_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(UserPhone, userPhone_);
      };
      ContactInfo() = default ;
      ContactInfo(const ContactInfo &) = default ;
      ContactInfo(ContactInfo &&) = default ;
      ContactInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactInfo() = default ;
      ContactInfo& operator=(const ContactInfo &) = default ;
      ContactInfo& operator=(ContactInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ding_ == nullptr
        && this->userMail_ == nullptr && this->userName_ == nullptr && this->userPhone_ == nullptr; };
      // ding Field Functions 
      bool hasDing() const { return this->ding_ != nullptr;};
      void deleteDing() { this->ding_ = nullptr;};
      inline string getDing() const { DARABONBA_PTR_GET_DEFAULT(ding_, "") };
      inline ContactInfo& setDing(string ding) { DARABONBA_PTR_SET_VALUE(ding_, ding) };


      // userMail Field Functions 
      bool hasUserMail() const { return this->userMail_ != nullptr;};
      void deleteUserMail() { this->userMail_ = nullptr;};
      inline string getUserMail() const { DARABONBA_PTR_GET_DEFAULT(userMail_, "") };
      inline ContactInfo& setUserMail(string userMail) { DARABONBA_PTR_SET_VALUE(userMail_, userMail) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline ContactInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userPhone Field Functions 
      bool hasUserPhone() const { return this->userPhone_ != nullptr;};
      void deleteUserPhone() { this->userPhone_ = nullptr;};
      inline string getUserPhone() const { DARABONBA_PTR_GET_DEFAULT(userPhone_, "") };
      inline ContactInfo& setUserPhone(string userPhone) { DARABONBA_PTR_SET_VALUE(userPhone_, userPhone) };


    protected:
      // The webhook URL of the DingTalk chatbot in the DingTalk group for alert contacts. References: [DingTalk development documentation](https://open.dingtalk.com/document/org/application-types).
      shared_ptr<string> ding_ {};
      // The email address of the user.
      shared_ptr<string> userMail_ {};
      // The username.
      shared_ptr<string> userName_ {};
      // The mobile phone number of the user.
      shared_ptr<string> userPhone_ {};
    };

    virtual bool empty() const override { return this->attemptInterval_ == nullptr
        && this->calendar_ == nullptr && this->className_ == nullptr && this->consumerSize_ == nullptr && this->contactInfo_ == nullptr && this->content_ == nullptr
        && this->dataOffset_ == nullptr && this->description_ == nullptr && this->dispatcherSize_ == nullptr && this->executeMode_ == nullptr && this->failEnable_ == nullptr
        && this->failTimes_ == nullptr && this->groupId_ == nullptr && this->jobId_ == nullptr && this->maxAttempt_ == nullptr && this->maxConcurrency_ == nullptr
        && this->missWorkerEnable_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->namespaceSource_ == nullptr && this->pageSize_ == nullptr
        && this->parameters_ == nullptr && this->priority_ == nullptr && this->queueSize_ == nullptr && this->regionId_ == nullptr && this->sendChannel_ == nullptr
        && this->startTime_ == nullptr && this->successNoticeEnable_ == nullptr && this->taskAttemptInterval_ == nullptr && this->taskDispatchMode_ == nullptr && this->taskMaxAttempt_ == nullptr
        && this->template_ == nullptr && this->timeExpression_ == nullptr && this->timeType_ == nullptr && this->timeout_ == nullptr && this->timeoutEnable_ == nullptr
        && this->timeoutKillEnable_ == nullptr && this->timezone_ == nullptr && this->XAttrs_ == nullptr; };
    // attemptInterval Field Functions 
    bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
    void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
    inline int32_t getAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
    inline UpdateJobRequest& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string getCalendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline UpdateJobRequest& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline UpdateJobRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // consumerSize Field Functions 
    bool hasConsumerSize() const { return this->consumerSize_ != nullptr;};
    void deleteConsumerSize() { this->consumerSize_ = nullptr;};
    inline int32_t getConsumerSize() const { DARABONBA_PTR_GET_DEFAULT(consumerSize_, 0) };
    inline UpdateJobRequest& setConsumerSize(int32_t consumerSize) { DARABONBA_PTR_SET_VALUE(consumerSize_, consumerSize) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const vector<UpdateJobRequest::ContactInfo> & getContactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, vector<UpdateJobRequest::ContactInfo>) };
    inline vector<UpdateJobRequest::ContactInfo> getContactInfo() { DARABONBA_PTR_GET(contactInfo_, vector<UpdateJobRequest::ContactInfo>) };
    inline UpdateJobRequest& setContactInfo(const vector<UpdateJobRequest::ContactInfo> & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline UpdateJobRequest& setContactInfo(vector<UpdateJobRequest::ContactInfo> && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateJobRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataOffset Field Functions 
    bool hasDataOffset() const { return this->dataOffset_ != nullptr;};
    void deleteDataOffset() { this->dataOffset_ = nullptr;};
    inline int32_t getDataOffset() const { DARABONBA_PTR_GET_DEFAULT(dataOffset_, 0) };
    inline UpdateJobRequest& setDataOffset(int32_t dataOffset) { DARABONBA_PTR_SET_VALUE(dataOffset_, dataOffset) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dispatcherSize Field Functions 
    bool hasDispatcherSize() const { return this->dispatcherSize_ != nullptr;};
    void deleteDispatcherSize() { this->dispatcherSize_ = nullptr;};
    inline int32_t getDispatcherSize() const { DARABONBA_PTR_GET_DEFAULT(dispatcherSize_, 0) };
    inline UpdateJobRequest& setDispatcherSize(int32_t dispatcherSize) { DARABONBA_PTR_SET_VALUE(dispatcherSize_, dispatcherSize) };


    // executeMode Field Functions 
    bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
    void deleteExecuteMode() { this->executeMode_ = nullptr;};
    inline string getExecuteMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, "") };
    inline UpdateJobRequest& setExecuteMode(string executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


    // failEnable Field Functions 
    bool hasFailEnable() const { return this->failEnable_ != nullptr;};
    void deleteFailEnable() { this->failEnable_ = nullptr;};
    inline bool getFailEnable() const { DARABONBA_PTR_GET_DEFAULT(failEnable_, false) };
    inline UpdateJobRequest& setFailEnable(bool failEnable) { DARABONBA_PTR_SET_VALUE(failEnable_, failEnable) };


    // failTimes Field Functions 
    bool hasFailTimes() const { return this->failTimes_ != nullptr;};
    void deleteFailTimes() { this->failTimes_ = nullptr;};
    inline int32_t getFailTimes() const { DARABONBA_PTR_GET_DEFAULT(failTimes_, 0) };
    inline UpdateJobRequest& setFailTimes(int32_t failTimes) { DARABONBA_PTR_SET_VALUE(failTimes_, failTimes) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateJobRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline UpdateJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // maxAttempt Field Functions 
    bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
    void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
    inline int32_t getMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
    inline UpdateJobRequest& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline UpdateJobRequest& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // missWorkerEnable Field Functions 
    bool hasMissWorkerEnable() const { return this->missWorkerEnable_ != nullptr;};
    void deleteMissWorkerEnable() { this->missWorkerEnable_ = nullptr;};
    inline bool getMissWorkerEnable() const { DARABONBA_PTR_GET_DEFAULT(missWorkerEnable_, false) };
    inline UpdateJobRequest& setMissWorkerEnable(bool missWorkerEnable) { DARABONBA_PTR_SET_VALUE(missWorkerEnable_, missWorkerEnable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateJobRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string getNamespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline UpdateJobRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline UpdateJobRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline UpdateJobRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // queueSize Field Functions 
    bool hasQueueSize() const { return this->queueSize_ != nullptr;};
    void deleteQueueSize() { this->queueSize_ = nullptr;};
    inline int32_t getQueueSize() const { DARABONBA_PTR_GET_DEFAULT(queueSize_, 0) };
    inline UpdateJobRequest& setQueueSize(int32_t queueSize) { DARABONBA_PTR_SET_VALUE(queueSize_, queueSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sendChannel Field Functions 
    bool hasSendChannel() const { return this->sendChannel_ != nullptr;};
    void deleteSendChannel() { this->sendChannel_ = nullptr;};
    inline string getSendChannel() const { DARABONBA_PTR_GET_DEFAULT(sendChannel_, "") };
    inline UpdateJobRequest& setSendChannel(string sendChannel) { DARABONBA_PTR_SET_VALUE(sendChannel_, sendChannel) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline UpdateJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // successNoticeEnable Field Functions 
    bool hasSuccessNoticeEnable() const { return this->successNoticeEnable_ != nullptr;};
    void deleteSuccessNoticeEnable() { this->successNoticeEnable_ = nullptr;};
    inline bool getSuccessNoticeEnable() const { DARABONBA_PTR_GET_DEFAULT(successNoticeEnable_, false) };
    inline UpdateJobRequest& setSuccessNoticeEnable(bool successNoticeEnable) { DARABONBA_PTR_SET_VALUE(successNoticeEnable_, successNoticeEnable) };


    // taskAttemptInterval Field Functions 
    bool hasTaskAttemptInterval() const { return this->taskAttemptInterval_ != nullptr;};
    void deleteTaskAttemptInterval() { this->taskAttemptInterval_ = nullptr;};
    inline int32_t getTaskAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(taskAttemptInterval_, 0) };
    inline UpdateJobRequest& setTaskAttemptInterval(int32_t taskAttemptInterval) { DARABONBA_PTR_SET_VALUE(taskAttemptInterval_, taskAttemptInterval) };


    // taskDispatchMode Field Functions 
    bool hasTaskDispatchMode() const { return this->taskDispatchMode_ != nullptr;};
    void deleteTaskDispatchMode() { this->taskDispatchMode_ = nullptr;};
    inline string getTaskDispatchMode() const { DARABONBA_PTR_GET_DEFAULT(taskDispatchMode_, "") };
    inline UpdateJobRequest& setTaskDispatchMode(string taskDispatchMode) { DARABONBA_PTR_SET_VALUE(taskDispatchMode_, taskDispatchMode) };


    // taskMaxAttempt Field Functions 
    bool hasTaskMaxAttempt() const { return this->taskMaxAttempt_ != nullptr;};
    void deleteTaskMaxAttempt() { this->taskMaxAttempt_ = nullptr;};
    inline int32_t getTaskMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(taskMaxAttempt_, 0) };
    inline UpdateJobRequest& setTaskMaxAttempt(int32_t taskMaxAttempt) { DARABONBA_PTR_SET_VALUE(taskMaxAttempt_, taskMaxAttempt) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline UpdateJobRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string getTimeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline UpdateJobRequest& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline UpdateJobRequest& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline UpdateJobRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // timeoutEnable Field Functions 
    bool hasTimeoutEnable() const { return this->timeoutEnable_ != nullptr;};
    void deleteTimeoutEnable() { this->timeoutEnable_ = nullptr;};
    inline bool getTimeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutEnable_, false) };
    inline UpdateJobRequest& setTimeoutEnable(bool timeoutEnable) { DARABONBA_PTR_SET_VALUE(timeoutEnable_, timeoutEnable) };


    // timeoutKillEnable Field Functions 
    bool hasTimeoutKillEnable() const { return this->timeoutKillEnable_ != nullptr;};
    void deleteTimeoutKillEnable() { this->timeoutKillEnable_ = nullptr;};
    inline bool getTimeoutKillEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutKillEnable_, false) };
    inline UpdateJobRequest& setTimeoutKillEnable(bool timeoutKillEnable) { DARABONBA_PTR_SET_VALUE(timeoutKillEnable_, timeoutKillEnable) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline UpdateJobRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // XAttrs Field Functions 
    bool hasXAttrs() const { return this->XAttrs_ != nullptr;};
    void deleteXAttrs() { this->XAttrs_ = nullptr;};
    inline string getXAttrs() const { DARABONBA_PTR_GET_DEFAULT(XAttrs_, "") };
    inline UpdateJobRequest& setXAttrs(string XAttrs) { DARABONBA_PTR_SET_VALUE(XAttrs_, XAttrs) };


  protected:
    // The retry interval on errors. Unit: seconds. Default value: 30.
    shared_ptr<int32_t> attemptInterval_ {};
    // The custom calendar that can be optionally specified for the cron type.
    shared_ptr<string> calendar_ {};
    // The full path of the node interface class.
    // 
    // This field is required only for Java node types, and the full path must be specified.
    shared_ptr<string> className_ {};
    // The advanced configuration for parallel grid tasks. The number of threads for a single trigger on a single machine. Default value: 5.
    shared_ptr<int32_t> consumerSize_ {};
    // The contact information for the node.
    // >Notice: This field is deprecated.</notice>
    shared_ptr<vector<UpdateJobRequest::ContactInfo>> contactInfo_ {};
    // - If the node type is python, shell, or k8s, specify the corresponding script content.
    // - If the node type is golang, the content format example is {"jobName":"HelloWorld"}.
    shared_ptr<string> content_ {};
    // The time offset that can be optionally specified for the cron type. Unit: seconds.
    shared_ptr<int32_t> dataOffset_ {};
    // The node description.
    shared_ptr<string> description_ {};
    // The advanced configuration for parallel grid tasks. The number of subtask dispatch threads. Default value: 5.
    shared_ptr<int32_t> dispatcherSize_ {};
    // The node execution mode. Valid values:
    // 
    // - **standalone**: standalone
    // - **broadcatst**: broadcast
    // - **parallel**: visual MapReduce
    // - **batch**: MapReduce
    // - **shard**: shard
    shared_ptr<string> executeMode_ {};
    // Specifies whether to enable the failure alert. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> failEnable_ {};
    // The number of consecutive failures before an alert is triggered.
    shared_ptr<int32_t> failTimes_ {};
    // The application ID. You can obtain the application ID on the Application Management page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The node ID. You can obtain the node ID on the Task Management page in the console.
    // 
    // This parameter is required.
    shared_ptr<int64_t> jobId_ {};
    // The maximum number of retries on errors. Set this parameter based on your business requirements.
    shared_ptr<int32_t> maxAttempt_ {};
    // The maximum number of concurrently running instances. Default value: 1. This means that if the previous trigger has not finished running, the next trigger is not performed even if the scheduled time has arrived.
    shared_ptr<int32_t> maxConcurrency_ {};
    // Specifies whether to enable the no-available-machine alert. Valid values:
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> missWorkerEnable_ {};
    // The node name.
    shared_ptr<string> name_ {};
    // The namespace ID. You can obtain the namespace ID on the Namespace page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // This parameter is required only for special third-party users.
    shared_ptr<string> namespaceSource_ {};
    // The advanced configuration for parallel grid tasks. The number of subtasks pulled per request. Default value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The user-defined parameters that can be obtained at runtime.
    shared_ptr<string> parameters_ {};
    // The node priority. Valid values:
    // - **1**: low
    // - **5**: medium
    // - **10**: high
    // - **15**: very high
    shared_ptr<int32_t> priority_ {};
    // The advanced configuration for parallel grid tasks. The maximum cache size of the subtask queue. Default value: 10000.
    shared_ptr<int32_t> queueSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The alert notification method. Currently, only sms is supported.
    shared_ptr<string> sendChannel_ {};
    shared_ptr<int64_t> startTime_ {};
    // Specifies whether to enable the success notification.
    shared_ptr<bool> successNoticeEnable_ {};
    // The advanced configuration for parallel grid tasks. The retry interval for failed subtasks.
    shared_ptr<int32_t> taskAttemptInterval_ {};
    // The advanced configuration for parallel grid tasks. Specifies the push model or pull model.
    shared_ptr<string> taskDispatchMode_ {};
    // The advanced configuration for parallel grid tasks. The number of retries for failed subtasks.
    shared_ptr<int32_t> taskMaxAttempt_ {};
    // The custom task template for k8s node types.
    shared_ptr<string> template_ {};
    // The time expression. Set the time expression based on the selected time type.
    // 
    // - **cron**: Specify a standard cron expression. Online verification is supported.
    // - **api**: No time expression is required.
    // - **fixed_rate**: Specify a fixed frequency value in seconds. For example, 30 indicates that the node is triggered every 30 seconds.
    // - **second_delay**: Specify a fixed delay in seconds before each execution (1s to 60s).
    shared_ptr<string> timeExpression_ {};
    // The time configuration type. Valid values:
    // 
    // - **1**: cron
    // - **3**: fix_rate
    // - **4**: second_delay
    // - **5**: one_time
    // - **100**: api
    shared_ptr<int32_t> timeType_ {};
    // The timeout threshold. Unit: seconds.
    shared_ptr<int64_t> timeout_ {};
    // Specifies whether to enable the timeout alert. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> timeoutEnable_ {};
    // Specifies whether to enable the timeout termination for the current trigger. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> timeoutKillEnable_ {};
    // The time zone.
    shared_ptr<string> timezone_ {};
    // The parameter that must be configured for k8s node types.
    // Job task: {"resource":"job"}
    // Shell task: {"image":"busybox","resource":"shell"}
    shared_ptr<string> XAttrs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
