// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIJobDetail, AIJobDetail_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotJobDetail, snapshotJobDetail_);
      DARABONBA_PTR_TO_JSON(TranscodeJobDetail, transcodeJobDetail_);
      DARABONBA_PTR_TO_JSON(WorkflowTaskDetail, workflowTaskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIJobDetail, AIJobDetail_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotJobDetail, snapshotJobDetail_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobDetail, transcodeJobDetail_);
      DARABONBA_PTR_FROM_JSON(WorkflowTaskDetail, workflowTaskDetail_);
    };
    GetJobDetailResponseBody() = default ;
    GetJobDetailResponseBody(const GetJobDetailResponseBody &) = default ;
    GetJobDetailResponseBody(GetJobDetailResponseBody &&) = default ;
    GetJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDetailResponseBody() = default ;
    GetJobDetailResponseBody& operator=(const GetJobDetailResponseBody &) = default ;
    GetJobDetailResponseBody& operator=(GetJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkflowTaskDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkflowTaskDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityResults, activityResults_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskInput, taskInput_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(Workflow, workflow_);
      };
      friend void from_json(const Darabonba::Json& j, WorkflowTaskDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityResults, activityResults_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskInput, taskInput_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
      };
      WorkflowTaskDetail() = default ;
      WorkflowTaskDetail(const WorkflowTaskDetail &) = default ;
      WorkflowTaskDetail(WorkflowTaskDetail &&) = default ;
      WorkflowTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkflowTaskDetail() = default ;
      WorkflowTaskDetail& operator=(const WorkflowTaskDetail &) = default ;
      WorkflowTaskDetail& operator=(WorkflowTaskDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Workflow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Workflow& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
        };
        friend void from_json(const Darabonba::Json& j, Workflow& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
        };
        Workflow() = default ;
        Workflow(const Workflow &) = default ;
        Workflow(Workflow &&) = default ;
        Workflow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Workflow() = default ;
        Workflow& operator=(const Workflow &) = default ;
        Workflow& operator=(Workflow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->createTime_ == nullptr && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->workflowId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Workflow& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Workflow& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Workflow& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Workflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Workflow& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Workflow& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // workflowId Field Functions 
        bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
        void deleteWorkflowId() { this->workflowId_ = nullptr;};
        inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
        inline Workflow& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> workflowId_ {};
      };

      virtual bool empty() const override { return this->activityResults_ == nullptr
        && this->createTime_ == nullptr && this->finishTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskInput_ == nullptr
        && this->userData_ == nullptr && this->workflow_ == nullptr; };
      // activityResults Field Functions 
      bool hasActivityResults() const { return this->activityResults_ != nullptr;};
      void deleteActivityResults() { this->activityResults_ = nullptr;};
      inline string getActivityResults() const { DARABONBA_PTR_GET_DEFAULT(activityResults_, "") };
      inline WorkflowTaskDetail& setActivityResults(string activityResults) { DARABONBA_PTR_SET_VALUE(activityResults_, activityResults) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline WorkflowTaskDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline WorkflowTaskDetail& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline WorkflowTaskDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline WorkflowTaskDetail& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskInput Field Functions 
      bool hasTaskInput() const { return this->taskInput_ != nullptr;};
      void deleteTaskInput() { this->taskInput_ = nullptr;};
      inline string getTaskInput() const { DARABONBA_PTR_GET_DEFAULT(taskInput_, "") };
      inline WorkflowTaskDetail& setTaskInput(string taskInput) { DARABONBA_PTR_SET_VALUE(taskInput_, taskInput) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline WorkflowTaskDetail& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // workflow Field Functions 
      bool hasWorkflow() const { return this->workflow_ != nullptr;};
      void deleteWorkflow() { this->workflow_ = nullptr;};
      inline const WorkflowTaskDetail::Workflow & getWorkflow() const { DARABONBA_PTR_GET_CONST(workflow_, WorkflowTaskDetail::Workflow) };
      inline WorkflowTaskDetail::Workflow getWorkflow() { DARABONBA_PTR_GET(workflow_, WorkflowTaskDetail::Workflow) };
      inline WorkflowTaskDetail& setWorkflow(const WorkflowTaskDetail::Workflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
      inline WorkflowTaskDetail& setWorkflow(WorkflowTaskDetail::Workflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


    protected:
      shared_ptr<string> activityResults_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> finishTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskInput_ {};
      shared_ptr<string> userData_ {};
      shared_ptr<WorkflowTaskDetail::Workflow> workflow_ {};
    };

    class TranscodeJobDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeJobDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Definition, definition_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeJobDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Definition, definition_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      TranscodeJobDetail() = default ;
      TranscodeJobDetail(const TranscodeJobDetail &) = default ;
      TranscodeJobDetail(TranscodeJobDetail &&) = default ;
      TranscodeJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeJobDetail() = default ;
      TranscodeJobDetail& operator=(const TranscodeJobDetail &) = default ;
      TranscodeJobDetail& operator=(TranscodeJobDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->createTime_ == nullptr && this->definition_ == nullptr && this->jobId_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr
        && this->userId_ == nullptr && this->videoId_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline TranscodeJobDetail& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TranscodeJobDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // definition Field Functions 
      bool hasDefinition() const { return this->definition_ != nullptr;};
      void deleteDefinition() { this->definition_ = nullptr;};
      inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
      inline TranscodeJobDetail& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline TranscodeJobDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TranscodeJobDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline TranscodeJobDetail& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline TranscodeJobDetail& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline TranscodeJobDetail& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The time when the task was complete.
      shared_ptr<string> completeTime_ {};
      // The time when the task was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The definition.
      shared_ptr<string> definition_ {};
      // The ID of the task.
      shared_ptr<string> jobId_ {};
      // The status of the task. Valid values:
      // 
      // *   Submitted
      // *   Transcoding
      // *   TranscodeSuccess
      // *   TranscodeFail
      // *   TranscodeCancelled
      shared_ptr<string> status_ {};
      // The ID of the template.
      shared_ptr<string> templateId_ {};
      // The ID of the user who submitted the task.
      shared_ptr<int64_t> userId_ {};
      // The ID of the media asset.
      shared_ptr<string> videoId_ {};
    };

    class SnapshotJobDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotJobDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(NormalConfig, normalConfig_);
        DARABONBA_PTR_TO_JSON(SpriteConfig, spriteConfig_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotJobDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(NormalConfig, normalConfig_);
        DARABONBA_PTR_FROM_JSON(SpriteConfig, spriteConfig_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      SnapshotJobDetail() = default ;
      SnapshotJobDetail(const SnapshotJobDetail &) = default ;
      SnapshotJobDetail(SnapshotJobDetail &&) = default ;
      SnapshotJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotJobDetail() = default ;
      SnapshotJobDetail& operator=(const SnapshotJobDetail &) = default ;
      SnapshotJobDetail& operator=(SnapshotJobDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->createTime_ == nullptr && this->jobId_ == nullptr && this->normalConfig_ == nullptr && this->spriteConfig_ == nullptr && this->status_ == nullptr
        && this->trigger_ == nullptr && this->userId_ == nullptr && this->videoId_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline SnapshotJobDetail& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SnapshotJobDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline SnapshotJobDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // normalConfig Field Functions 
      bool hasNormalConfig() const { return this->normalConfig_ != nullptr;};
      void deleteNormalConfig() { this->normalConfig_ = nullptr;};
      inline string getNormalConfig() const { DARABONBA_PTR_GET_DEFAULT(normalConfig_, "") };
      inline SnapshotJobDetail& setNormalConfig(string normalConfig) { DARABONBA_PTR_SET_VALUE(normalConfig_, normalConfig) };


      // spriteConfig Field Functions 
      bool hasSpriteConfig() const { return this->spriteConfig_ != nullptr;};
      void deleteSpriteConfig() { this->spriteConfig_ = nullptr;};
      inline string getSpriteConfig() const { DARABONBA_PTR_GET_DEFAULT(spriteConfig_, "") };
      inline SnapshotJobDetail& setSpriteConfig(string spriteConfig) { DARABONBA_PTR_SET_VALUE(spriteConfig_, spriteConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SnapshotJobDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline string getTrigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
      inline SnapshotJobDetail& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline SnapshotJobDetail& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline SnapshotJobDetail& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The time when the task was complete.
      shared_ptr<string> completeTime_ {};
      // The time when the task was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the task.
      shared_ptr<string> jobId_ {};
      // Configuration of normal snapshots.
      shared_ptr<string> normalConfig_ {};
      // The sprite configuration.
      shared_ptr<string> spriteConfig_ {};
      // The status of the task. Valid values:
      // 
      // *   Processing
      // *   Fail
      // *   Success
      shared_ptr<string> status_ {};
      // The trigger mode. Valid values:
      // 
      // *   Auto
      // *   Manual
      shared_ptr<string> trigger_ {};
      // The ID of the user who submitted the task.
      shared_ptr<int64_t> userId_ {};
      // The ID of the media asset.
      shared_ptr<string> videoId_ {};
    };

    class AIJobDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AIJobDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, AIJobDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      AIJobDetail() = default ;
      AIJobDetail(const AIJobDetail &) = default ;
      AIJobDetail(AIJobDetail &&) = default ;
      AIJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AIJobDetail() = default ;
      AIJobDetail& operator=(const AIJobDetail &) = default ;
      AIJobDetail& operator=(AIJobDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->createTime_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr && this->mediaId_ == nullptr && this->status_ == nullptr
        && this->templateConfig_ == nullptr && this->trigger_ == nullptr && this->userId_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline AIJobDetail& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AIJobDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline AIJobDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline AIJobDetail& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline AIJobDetail& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AIJobDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline AIJobDetail& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline string getTrigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
      inline AIJobDetail& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline AIJobDetail& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The end time of the task.
      shared_ptr<string> completeTime_ {};
      // The time when the task was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the task.
      shared_ptr<string> jobId_ {};
      // The type of the AI task.
      shared_ptr<string> jobType_ {};
      // The ID of the media asset.
      shared_ptr<string> mediaId_ {};
      // The status of the task. Valid values:
      // 
      // *   reserved
      // *   init
      // *   success
      // *   fail
      // *   processing
      // *   analysing
      shared_ptr<string> status_ {};
      // The template configuration.
      shared_ptr<string> templateConfig_ {};
      // The trigger mode. Valid values:
      // 
      // *   Auto
      // *   Manual
      shared_ptr<string> trigger_ {};
      // The ID of the user who submitted the task.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->AIJobDetail_ == nullptr
        && this->jobType_ == nullptr && this->requestId_ == nullptr && this->snapshotJobDetail_ == nullptr && this->transcodeJobDetail_ == nullptr && this->workflowTaskDetail_ == nullptr; };
    // AIJobDetail Field Functions 
    bool hasAIJobDetail() const { return this->AIJobDetail_ != nullptr;};
    void deleteAIJobDetail() { this->AIJobDetail_ = nullptr;};
    inline const GetJobDetailResponseBody::AIJobDetail & getAIJobDetail() const { DARABONBA_PTR_GET_CONST(AIJobDetail_, GetJobDetailResponseBody::AIJobDetail) };
    inline GetJobDetailResponseBody::AIJobDetail getAIJobDetail() { DARABONBA_PTR_GET(AIJobDetail_, GetJobDetailResponseBody::AIJobDetail) };
    inline GetJobDetailResponseBody& setAIJobDetail(const GetJobDetailResponseBody::AIJobDetail & aIJobDetail) { DARABONBA_PTR_SET_VALUE(AIJobDetail_, aIJobDetail) };
    inline GetJobDetailResponseBody& setAIJobDetail(GetJobDetailResponseBody::AIJobDetail && aIJobDetail) { DARABONBA_PTR_SET_RVALUE(AIJobDetail_, aIJobDetail) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobDetailResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotJobDetail Field Functions 
    bool hasSnapshotJobDetail() const { return this->snapshotJobDetail_ != nullptr;};
    void deleteSnapshotJobDetail() { this->snapshotJobDetail_ = nullptr;};
    inline const GetJobDetailResponseBody::SnapshotJobDetail & getSnapshotJobDetail() const { DARABONBA_PTR_GET_CONST(snapshotJobDetail_, GetJobDetailResponseBody::SnapshotJobDetail) };
    inline GetJobDetailResponseBody::SnapshotJobDetail getSnapshotJobDetail() { DARABONBA_PTR_GET(snapshotJobDetail_, GetJobDetailResponseBody::SnapshotJobDetail) };
    inline GetJobDetailResponseBody& setSnapshotJobDetail(const GetJobDetailResponseBody::SnapshotJobDetail & snapshotJobDetail) { DARABONBA_PTR_SET_VALUE(snapshotJobDetail_, snapshotJobDetail) };
    inline GetJobDetailResponseBody& setSnapshotJobDetail(GetJobDetailResponseBody::SnapshotJobDetail && snapshotJobDetail) { DARABONBA_PTR_SET_RVALUE(snapshotJobDetail_, snapshotJobDetail) };


    // transcodeJobDetail Field Functions 
    bool hasTranscodeJobDetail() const { return this->transcodeJobDetail_ != nullptr;};
    void deleteTranscodeJobDetail() { this->transcodeJobDetail_ = nullptr;};
    inline const GetJobDetailResponseBody::TranscodeJobDetail & getTranscodeJobDetail() const { DARABONBA_PTR_GET_CONST(transcodeJobDetail_, GetJobDetailResponseBody::TranscodeJobDetail) };
    inline GetJobDetailResponseBody::TranscodeJobDetail getTranscodeJobDetail() { DARABONBA_PTR_GET(transcodeJobDetail_, GetJobDetailResponseBody::TranscodeJobDetail) };
    inline GetJobDetailResponseBody& setTranscodeJobDetail(const GetJobDetailResponseBody::TranscodeJobDetail & transcodeJobDetail) { DARABONBA_PTR_SET_VALUE(transcodeJobDetail_, transcodeJobDetail) };
    inline GetJobDetailResponseBody& setTranscodeJobDetail(GetJobDetailResponseBody::TranscodeJobDetail && transcodeJobDetail) { DARABONBA_PTR_SET_RVALUE(transcodeJobDetail_, transcodeJobDetail) };


    // workflowTaskDetail Field Functions 
    bool hasWorkflowTaskDetail() const { return this->workflowTaskDetail_ != nullptr;};
    void deleteWorkflowTaskDetail() { this->workflowTaskDetail_ = nullptr;};
    inline const GetJobDetailResponseBody::WorkflowTaskDetail & getWorkflowTaskDetail() const { DARABONBA_PTR_GET_CONST(workflowTaskDetail_, GetJobDetailResponseBody::WorkflowTaskDetail) };
    inline GetJobDetailResponseBody::WorkflowTaskDetail getWorkflowTaskDetail() { DARABONBA_PTR_GET(workflowTaskDetail_, GetJobDetailResponseBody::WorkflowTaskDetail) };
    inline GetJobDetailResponseBody& setWorkflowTaskDetail(const GetJobDetailResponseBody::WorkflowTaskDetail & workflowTaskDetail) { DARABONBA_PTR_SET_VALUE(workflowTaskDetail_, workflowTaskDetail) };
    inline GetJobDetailResponseBody& setWorkflowTaskDetail(GetJobDetailResponseBody::WorkflowTaskDetail && workflowTaskDetail) { DARABONBA_PTR_SET_RVALUE(workflowTaskDetail_, workflowTaskDetail) };


  protected:
    // The details of the AI task. This parameter takes effect only when the TaskType parameter is set to AI.
    shared_ptr<GetJobDetailResponseBody::AIJobDetail> AIJobDetail_ {};
    // The type of the task. Valid values:
    shared_ptr<string> jobType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the snapshot task. This parameter takes effect only when the jobType parameter is set to Snapshot.
    shared_ptr<GetJobDetailResponseBody::SnapshotJobDetail> snapshotJobDetail_ {};
    // The details of the transcoding task. This parameter takes effect only when the jobType parameter is set to Transcode.
    shared_ptr<GetJobDetailResponseBody::TranscodeJobDetail> transcodeJobDetail_ {};
    shared_ptr<GetJobDetailResponseBody::WorkflowTaskDetail> workflowTaskDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
