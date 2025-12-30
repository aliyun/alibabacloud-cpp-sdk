// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIAQUALITYANALYSISJOB_HPP_
#define ALIBABACLOUD_MODELS_MEDIAQUALITYANALYSISJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaQualityAnalysisJobVqaResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaQualityAnalysisJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaQualityAnalysisJob& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VqaResult, vqaResult_);
    };
    friend void from_json(const Darabonba::Json& j, MediaQualityAnalysisJob& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VqaResult, vqaResult_);
    };
    MediaQualityAnalysisJob() = default ;
    MediaQualityAnalysisJob(const MediaQualityAnalysisJob &) = default ;
    MediaQualityAnalysisJob(MediaQualityAnalysisJob &&) = default ;
    MediaQualityAnalysisJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaQualityAnalysisJob() = default ;
    MediaQualityAnalysisJob& operator=(const MediaQualityAnalysisJob &) = default ;
    MediaQualityAnalysisJob& operator=(MediaQualityAnalysisJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateConfig& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      TemplateConfig() = default ;
      TemplateConfig(const TemplateConfig &) = default ;
      TemplateConfig(TemplateConfig &&) = default ;
      TemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateConfig() = default ;
      TemplateConfig& operator=(const TemplateConfig &) = default ;
      TemplateConfig& operator=(TemplateConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->templateId_ == nullptr; };
      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline TemplateConfig& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<string> templateId_ {};
    };

    class ScheduleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
      };
      ScheduleConfig() = default ;
      ScheduleConfig(const ScheduleConfig &) = default ;
      ScheduleConfig(ScheduleConfig &&) = default ;
      ScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleConfig() = default ;
      ScheduleConfig& operator=(const ScheduleConfig &) = default ;
      ScheduleConfig& operator=(ScheduleConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pipelineId_ == nullptr
        && this->priority_ == nullptr; };
      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline ScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline ScheduleConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    protected:
      shared_ptr<string> pipelineId_ {};
      shared_ptr<int32_t> priority_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Input() = default ;
      Input(const Input &) = default ;
      Input(Input &&) = default ;
      Input(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Input() = default ;
      Input& operator=(const Input &) = default ;
      Input& operator=(Input &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> media_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->input_ == nullptr && this->jobId_ == nullptr && this->name_ == nullptr && this->scheduleConfig_ == nullptr
        && this->state_ == nullptr && this->templateConfig_ == nullptr && this->userData_ == nullptr && this->vqaResult_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MediaQualityAnalysisJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline MediaQualityAnalysisJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const MediaQualityAnalysisJob::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, MediaQualityAnalysisJob::Input) };
    inline MediaQualityAnalysisJob::Input getInput() { DARABONBA_PTR_GET(input_, MediaQualityAnalysisJob::Input) };
    inline MediaQualityAnalysisJob& setInput(const MediaQualityAnalysisJob::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline MediaQualityAnalysisJob& setInput(MediaQualityAnalysisJob::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline MediaQualityAnalysisJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaQualityAnalysisJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const MediaQualityAnalysisJob::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, MediaQualityAnalysisJob::ScheduleConfig) };
    inline MediaQualityAnalysisJob::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, MediaQualityAnalysisJob::ScheduleConfig) };
    inline MediaQualityAnalysisJob& setScheduleConfig(const MediaQualityAnalysisJob::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline MediaQualityAnalysisJob& setScheduleConfig(MediaQualityAnalysisJob::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline MediaQualityAnalysisJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const MediaQualityAnalysisJob::TemplateConfig & getTemplateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, MediaQualityAnalysisJob::TemplateConfig) };
    inline MediaQualityAnalysisJob::TemplateConfig getTemplateConfig() { DARABONBA_PTR_GET(templateConfig_, MediaQualityAnalysisJob::TemplateConfig) };
    inline MediaQualityAnalysisJob& setTemplateConfig(const MediaQualityAnalysisJob::TemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline MediaQualityAnalysisJob& setTemplateConfig(MediaQualityAnalysisJob::TemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline MediaQualityAnalysisJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vqaResult Field Functions 
    bool hasVqaResult() const { return this->vqaResult_ != nullptr;};
    void deleteVqaResult() { this->vqaResult_ = nullptr;};
    inline const MediaQualityAnalysisJobVqaResult & getVqaResult() const { DARABONBA_PTR_GET_CONST(vqaResult_, MediaQualityAnalysisJobVqaResult) };
    inline MediaQualityAnalysisJobVqaResult getVqaResult() { DARABONBA_PTR_GET(vqaResult_, MediaQualityAnalysisJobVqaResult) };
    inline MediaQualityAnalysisJob& setVqaResult(const MediaQualityAnalysisJobVqaResult & vqaResult) { DARABONBA_PTR_SET_VALUE(vqaResult_, vqaResult) };
    inline MediaQualityAnalysisJob& setVqaResult(MediaQualityAnalysisJobVqaResult && vqaResult) { DARABONBA_PTR_SET_RVALUE(vqaResult_, vqaResult) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> finishTime_ {};
    shared_ptr<MediaQualityAnalysisJob::Input> input_ {};
    shared_ptr<string> jobId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<MediaQualityAnalysisJob::ScheduleConfig> scheduleConfig_ {};
    shared_ptr<string> state_ {};
    shared_ptr<MediaQualityAnalysisJob::TemplateConfig> templateConfig_ {};
    shared_ptr<string> userData_ {};
    shared_ptr<MediaQualityAnalysisJobVqaResult> vqaResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
