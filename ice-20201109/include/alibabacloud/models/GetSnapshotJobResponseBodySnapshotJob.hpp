// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOB_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSnapshotJobResponseBodySnapshotJobInput.hpp>
#include <alibabacloud/models/GetSnapshotJobResponseBodySnapshotJobOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSnapshotJobResponseBodySnapshotJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotJobResponseBodySnapshotJob& obj) { 
      DARABONBA_PTR_TO_JSON(Async, async_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotJobResponseBodySnapshotJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Async, async_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetSnapshotJobResponseBodySnapshotJob() = default ;
    GetSnapshotJobResponseBodySnapshotJob(const GetSnapshotJobResponseBodySnapshotJob &) = default ;
    GetSnapshotJobResponseBodySnapshotJob(GetSnapshotJobResponseBodySnapshotJob &&) = default ;
    GetSnapshotJobResponseBodySnapshotJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotJobResponseBodySnapshotJob() = default ;
    GetSnapshotJobResponseBodySnapshotJob& operator=(const GetSnapshotJobResponseBodySnapshotJob &) = default ;
    GetSnapshotJobResponseBodySnapshotJob& operator=(GetSnapshotJobResponseBodySnapshotJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->async_ == nullptr
        && return this->code_ == nullptr && return this->count_ == nullptr && return this->createTime_ == nullptr && return this->finishTime_ == nullptr && return this->input_ == nullptr
        && return this->jobId_ == nullptr && return this->message_ == nullptr && return this->modifiedTime_ == nullptr && return this->name_ == nullptr && return this->output_ == nullptr
        && return this->pipelineId_ == nullptr && return this->status_ == nullptr && return this->submitTime_ == nullptr && return this->templateConfig_ == nullptr && return this->templateId_ == nullptr
        && return this->triggerSource_ == nullptr && return this->type_ == nullptr && return this->userData_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool async() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline GetSnapshotJobResponseBodySnapshotJob& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetSnapshotJobResponseBodySnapshotJob& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::GetSnapshotJobResponseBodySnapshotJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::GetSnapshotJobResponseBodySnapshotJobInput) };
    inline Models::GetSnapshotJobResponseBodySnapshotJobInput input() { DARABONBA_PTR_GET(input_, Models::GetSnapshotJobResponseBodySnapshotJobInput) };
    inline GetSnapshotJobResponseBodySnapshotJob& setInput(const Models::GetSnapshotJobResponseBodySnapshotJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetSnapshotJobResponseBodySnapshotJob& setInput(Models::GetSnapshotJobResponseBodySnapshotJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::GetSnapshotJobResponseBodySnapshotJobOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::GetSnapshotJobResponseBodySnapshotJobOutput) };
    inline Models::GetSnapshotJobResponseBodySnapshotJobOutput output() { DARABONBA_PTR_GET(output_, Models::GetSnapshotJobResponseBodySnapshotJobOutput) };
    inline GetSnapshotJobResponseBodySnapshotJob& setOutput(const Models::GetSnapshotJobResponseBodySnapshotJobOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline GetSnapshotJobResponseBodySnapshotJob& setOutput(Models::GetSnapshotJobResponseBodySnapshotJobOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetSnapshotJobResponseBodySnapshotJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Indicates whether the snapshots were captured in asynchronous mode. Default value: true.
    std::shared_ptr<bool> async_ = nullptr;
    // Error codes
    std::shared_ptr<string> code_ = nullptr;
    // The number of snapshots.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input of the job.
    std::shared_ptr<Models::GetSnapshotJobResponseBodySnapshotJobInput> input_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The time when the job was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the job.
    std::shared_ptr<Models::GetSnapshotJobResponseBodySnapshotJobOutput> output_ = nullptr;
    // The ID of the MPS queue to which the job was submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The state of the job.
    // 
    // Valid values:
    // 
    // *   Init: The job is submitted.
    // *   Success: The job is successful.
    // *   Fail: The job failed.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the job was submitted.
    std::shared_ptr<string> submitTime_ = nullptr;
    // The snapshot template configuration.
    std::shared_ptr<string> templateConfig_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The request trigger source.
    // 
    // Valid values:
    // 
    // *   Console
    // *   Workflow
    // *   API
    std::shared_ptr<string> triggerSource_ = nullptr;
    // Snapshot types
    // 
    // Valid values:
    // 
    // *   WebVtt
    // *   Sprite
    // *   Normal
    std::shared_ptr<string> type_ = nullptr;
    // The user-defined parameters.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
