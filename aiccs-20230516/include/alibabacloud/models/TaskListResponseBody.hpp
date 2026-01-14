// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class TaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, TaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    TaskListResponseBody() = default ;
    TaskListResponseBody(const TaskListResponseBody &) = default ;
    TaskListResponseBody(TaskListResponseBody &&) = default ;
    TaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskListResponseBody() = default ;
    TaskListResponseBody& operator=(const TaskListResponseBody &) = default ;
    TaskListResponseBody& operator=(TaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(AllowCallTime, allowCallTime_);
        DARABONBA_PTR_TO_JSON(AllowCallTimeFormat, allowCallTimeFormat_);
        DARABONBA_PTR_TO_JSON(AllowDayOfWeek, allowDayOfWeek_);
        DARABONBA_PTR_TO_JSON(CallType, callType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FlashSmsTemplateId, flashSmsTemplateId_);
        DARABONBA_PTR_TO_JSON(FlashSmsTemplateName, flashSmsTemplateName_);
        DARABONBA_PTR_TO_JSON(FlashSmsType, flashSmsType_);
        DARABONBA_PTR_TO_JSON(ImportTime, importTime_);
        DARABONBA_PTR_TO_JSON(IntentTags, intentTags_);
        DARABONBA_PTR_TO_JSON(InvalidReCall, invalidReCall_);
        DARABONBA_PTR_TO_JSON(LastCallTime, lastCallTime_);
        DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
        DARABONBA_PTR_TO_JSON(PersonalityTags, personalityTags_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(RecallType, recallType_);
        DARABONBA_PTR_TO_JSON(SendSms, sendSms_);
        DARABONBA_PTR_TO_JSON(SmsName, smsName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowCallTime, allowCallTime_);
        DARABONBA_PTR_FROM_JSON(AllowCallTimeFormat, allowCallTimeFormat_);
        DARABONBA_PTR_FROM_JSON(AllowDayOfWeek, allowDayOfWeek_);
        DARABONBA_PTR_FROM_JSON(CallType, callType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FlashSmsTemplateId, flashSmsTemplateId_);
        DARABONBA_PTR_FROM_JSON(FlashSmsTemplateName, flashSmsTemplateName_);
        DARABONBA_PTR_FROM_JSON(FlashSmsType, flashSmsType_);
        DARABONBA_PTR_FROM_JSON(ImportTime, importTime_);
        DARABONBA_PTR_FROM_JSON(IntentTags, intentTags_);
        DARABONBA_PTR_FROM_JSON(InvalidReCall, invalidReCall_);
        DARABONBA_PTR_FROM_JSON(LastCallTime, lastCallTime_);
        DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
        DARABONBA_PTR_FROM_JSON(PersonalityTags, personalityTags_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
        DARABONBA_PTR_FROM_JSON(SendSms, sendSms_);
        DARABONBA_PTR_FROM_JSON(SmsName, smsName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IntentTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IntentTags& obj) { 
          DARABONBA_PTR_TO_JSON(IntentDescription, intentDescription_);
          DARABONBA_PTR_TO_JSON(IntentTag, intentTag_);
        };
        friend void from_json(const Darabonba::Json& j, IntentTags& obj) { 
          DARABONBA_PTR_FROM_JSON(IntentDescription, intentDescription_);
          DARABONBA_PTR_FROM_JSON(IntentTag, intentTag_);
        };
        IntentTags() = default ;
        IntentTags(const IntentTags &) = default ;
        IntentTags(IntentTags &&) = default ;
        IntentTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IntentTags() = default ;
        IntentTags& operator=(const IntentTags &) = default ;
        IntentTags& operator=(IntentTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->intentDescription_ == nullptr
        && this->intentTag_ == nullptr; };
        // intentDescription Field Functions 
        bool hasIntentDescription() const { return this->intentDescription_ != nullptr;};
        void deleteIntentDescription() { this->intentDescription_ = nullptr;};
        inline string getIntentDescription() const { DARABONBA_PTR_GET_DEFAULT(intentDescription_, "") };
        inline IntentTags& setIntentDescription(string intentDescription) { DARABONBA_PTR_SET_VALUE(intentDescription_, intentDescription) };


        // intentTag Field Functions 
        bool hasIntentTag() const { return this->intentTag_ != nullptr;};
        void deleteIntentTag() { this->intentTag_ = nullptr;};
        inline string getIntentTag() const { DARABONBA_PTR_GET_DEFAULT(intentTag_, "") };
        inline IntentTags& setIntentTag(string intentTag) { DARABONBA_PTR_SET_VALUE(intentTag_, intentTag) };


      protected:
        // 意向标签描述
        shared_ptr<string> intentDescription_ {};
        // 意向标签ID
        shared_ptr<string> intentTag_ {};
      };

      virtual bool empty() const override { return this->allowCallTime_ == nullptr
        && this->allowCallTimeFormat_ == nullptr && this->allowDayOfWeek_ == nullptr && this->callType_ == nullptr && this->createTime_ == nullptr && this->flashSmsTemplateId_ == nullptr
        && this->flashSmsTemplateName_ == nullptr && this->flashSmsType_ == nullptr && this->importTime_ == nullptr && this->intentTags_ == nullptr && this->invalidReCall_ == nullptr
        && this->lastCallTime_ == nullptr && this->maxConcurrency_ == nullptr && this->personalityTags_ == nullptr && this->priority_ == nullptr && this->properties_ == nullptr
        && this->recallType_ == nullptr && this->sendSms_ == nullptr && this->smsName_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
      // allowCallTime Field Functions 
      bool hasAllowCallTime() const { return this->allowCallTime_ != nullptr;};
      void deleteAllowCallTime() { this->allowCallTime_ = nullptr;};
      inline string getAllowCallTime() const { DARABONBA_PTR_GET_DEFAULT(allowCallTime_, "") };
      inline Model& setAllowCallTime(string allowCallTime) { DARABONBA_PTR_SET_VALUE(allowCallTime_, allowCallTime) };


      // allowCallTimeFormat Field Functions 
      bool hasAllowCallTimeFormat() const { return this->allowCallTimeFormat_ != nullptr;};
      void deleteAllowCallTimeFormat() { this->allowCallTimeFormat_ = nullptr;};
      inline string getAllowCallTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(allowCallTimeFormat_, "") };
      inline Model& setAllowCallTimeFormat(string allowCallTimeFormat) { DARABONBA_PTR_SET_VALUE(allowCallTimeFormat_, allowCallTimeFormat) };


      // allowDayOfWeek Field Functions 
      bool hasAllowDayOfWeek() const { return this->allowDayOfWeek_ != nullptr;};
      void deleteAllowDayOfWeek() { this->allowDayOfWeek_ = nullptr;};
      inline string getAllowDayOfWeek() const { DARABONBA_PTR_GET_DEFAULT(allowDayOfWeek_, "") };
      inline Model& setAllowDayOfWeek(string allowDayOfWeek) { DARABONBA_PTR_SET_VALUE(allowDayOfWeek_, allowDayOfWeek) };


      // callType Field Functions 
      bool hasCallType() const { return this->callType_ != nullptr;};
      void deleteCallType() { this->callType_ = nullptr;};
      inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
      inline Model& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Model& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // flashSmsTemplateId Field Functions 
      bool hasFlashSmsTemplateId() const { return this->flashSmsTemplateId_ != nullptr;};
      void deleteFlashSmsTemplateId() { this->flashSmsTemplateId_ = nullptr;};
      inline int64_t getFlashSmsTemplateId() const { DARABONBA_PTR_GET_DEFAULT(flashSmsTemplateId_, 0L) };
      inline Model& setFlashSmsTemplateId(int64_t flashSmsTemplateId) { DARABONBA_PTR_SET_VALUE(flashSmsTemplateId_, flashSmsTemplateId) };


      // flashSmsTemplateName Field Functions 
      bool hasFlashSmsTemplateName() const { return this->flashSmsTemplateName_ != nullptr;};
      void deleteFlashSmsTemplateName() { this->flashSmsTemplateName_ = nullptr;};
      inline string getFlashSmsTemplateName() const { DARABONBA_PTR_GET_DEFAULT(flashSmsTemplateName_, "") };
      inline Model& setFlashSmsTemplateName(string flashSmsTemplateName) { DARABONBA_PTR_SET_VALUE(flashSmsTemplateName_, flashSmsTemplateName) };


      // flashSmsType Field Functions 
      bool hasFlashSmsType() const { return this->flashSmsType_ != nullptr;};
      void deleteFlashSmsType() { this->flashSmsType_ = nullptr;};
      inline int64_t getFlashSmsType() const { DARABONBA_PTR_GET_DEFAULT(flashSmsType_, 0L) };
      inline Model& setFlashSmsType(int64_t flashSmsType) { DARABONBA_PTR_SET_VALUE(flashSmsType_, flashSmsType) };


      // importTime Field Functions 
      bool hasImportTime() const { return this->importTime_ != nullptr;};
      void deleteImportTime() { this->importTime_ = nullptr;};
      inline string getImportTime() const { DARABONBA_PTR_GET_DEFAULT(importTime_, "") };
      inline Model& setImportTime(string importTime) { DARABONBA_PTR_SET_VALUE(importTime_, importTime) };


      // intentTags Field Functions 
      bool hasIntentTags() const { return this->intentTags_ != nullptr;};
      void deleteIntentTags() { this->intentTags_ = nullptr;};
      inline const vector<Model::IntentTags> & getIntentTags() const { DARABONBA_PTR_GET_CONST(intentTags_, vector<Model::IntentTags>) };
      inline vector<Model::IntentTags> getIntentTags() { DARABONBA_PTR_GET(intentTags_, vector<Model::IntentTags>) };
      inline Model& setIntentTags(const vector<Model::IntentTags> & intentTags) { DARABONBA_PTR_SET_VALUE(intentTags_, intentTags) };
      inline Model& setIntentTags(vector<Model::IntentTags> && intentTags) { DARABONBA_PTR_SET_RVALUE(intentTags_, intentTags) };


      // invalidReCall Field Functions 
      bool hasInvalidReCall() const { return this->invalidReCall_ != nullptr;};
      void deleteInvalidReCall() { this->invalidReCall_ = nullptr;};
      inline int64_t getInvalidReCall() const { DARABONBA_PTR_GET_DEFAULT(invalidReCall_, 0L) };
      inline Model& setInvalidReCall(int64_t invalidReCall) { DARABONBA_PTR_SET_VALUE(invalidReCall_, invalidReCall) };


      // lastCallTime Field Functions 
      bool hasLastCallTime() const { return this->lastCallTime_ != nullptr;};
      void deleteLastCallTime() { this->lastCallTime_ = nullptr;};
      inline string getLastCallTime() const { DARABONBA_PTR_GET_DEFAULT(lastCallTime_, "") };
      inline Model& setLastCallTime(string lastCallTime) { DARABONBA_PTR_SET_VALUE(lastCallTime_, lastCallTime) };


      // maxConcurrency Field Functions 
      bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
      void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
      inline int64_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0L) };
      inline Model& setMaxConcurrency(int64_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


      // personalityTags Field Functions 
      bool hasPersonalityTags() const { return this->personalityTags_ != nullptr;};
      void deletePersonalityTags() { this->personalityTags_ = nullptr;};
      inline const vector<string> & getPersonalityTags() const { DARABONBA_PTR_GET_CONST(personalityTags_, vector<string>) };
      inline vector<string> getPersonalityTags() { DARABONBA_PTR_GET(personalityTags_, vector<string>) };
      inline Model& setPersonalityTags(const vector<string> & personalityTags) { DARABONBA_PTR_SET_VALUE(personalityTags_, personalityTags) };
      inline Model& setPersonalityTags(vector<string> && personalityTags) { DARABONBA_PTR_SET_RVALUE(personalityTags_, personalityTags) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline Model& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
      inline Model& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


      // recallType Field Functions 
      bool hasRecallType() const { return this->recallType_ != nullptr;};
      void deleteRecallType() { this->recallType_ = nullptr;};
      inline int64_t getRecallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, 0L) };
      inline Model& setRecallType(int64_t recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


      // sendSms Field Functions 
      bool hasSendSms() const { return this->sendSms_ != nullptr;};
      void deleteSendSms() { this->sendSms_ = nullptr;};
      inline int64_t getSendSms() const { DARABONBA_PTR_GET_DEFAULT(sendSms_, 0L) };
      inline Model& setSendSms(int64_t sendSms) { DARABONBA_PTR_SET_VALUE(sendSms_, sendSms) };


      // smsName Field Functions 
      bool hasSmsName() const { return this->smsName_ != nullptr;};
      void deleteSmsName() { this->smsName_ = nullptr;};
      inline string getSmsName() const { DARABONBA_PTR_GET_DEFAULT(smsName_, "") };
      inline Model& setSmsName(string smsName) { DARABONBA_PTR_SET_VALUE(smsName_, smsName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline Model& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Model& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Model& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Model& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Model& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // 外呼时间段
      shared_ptr<string> allowCallTime_ {};
      // 外呼时间段格式化
      shared_ptr<string> allowCallTimeFormat_ {};
      // 外呼时间
      shared_ptr<string> allowDayOfWeek_ {};
      // 外呼类型
      shared_ptr<int64_t> callType_ {};
      // 创建时间
      shared_ptr<string> createTime_ {};
      // 闪信模板id
      shared_ptr<int64_t> flashSmsTemplateId_ {};
      // 闪信模板名称
      shared_ptr<string> flashSmsTemplateName_ {};
      // 发送闪信配置，可选0，1；0表示否，1表示是
      shared_ptr<int64_t> flashSmsType_ {};
      // 最近导入时间
      shared_ptr<string> importTime_ {};
      // 意向标签列表
      shared_ptr<vector<Model::IntentTags>> intentTags_ {};
      // 接通重呼次数
      shared_ptr<int64_t> invalidReCall_ {};
      // 最后外呼时间
      shared_ptr<string> lastCallTime_ {};
      // 最大并发数
      shared_ptr<int64_t> maxConcurrency_ {};
      // 个性标签列表
      shared_ptr<vector<string>> personalityTags_ {};
      // 优先任务
      shared_ptr<int64_t> priority_ {};
      // 任务所需参数
      shared_ptr<string> properties_ {};
      // 自动重呼
      shared_ptr<int64_t> recallType_ {};
      // 发送短信
      shared_ptr<int64_t> sendSms_ {};
      // 短信模板
      shared_ptr<string> smsName_ {};
      // 任务状态
      shared_ptr<int64_t> status_ {};
      // 任务ID
      shared_ptr<int64_t> taskId_ {};
      // 任务名称
      shared_ptr<string> taskName_ {};
      // 话术模板Id
      shared_ptr<string> templateId_ {};
      // 话术模板名称
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->timestamp_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline TaskListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline TaskListResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TaskListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const vector<TaskListResponseBody::Model> & getModel() const { DARABONBA_PTR_GET_CONST(model_, vector<TaskListResponseBody::Model>) };
    inline vector<TaskListResponseBody::Model> getModel() { DARABONBA_PTR_GET(model_, vector<TaskListResponseBody::Model>) };
    inline TaskListResponseBody& setModel(const vector<TaskListResponseBody::Model> & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline TaskListResponseBody& setModel(vector<TaskListResponseBody::Model> && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TaskListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline TaskListResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<TaskListResponseBody::Model>> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
