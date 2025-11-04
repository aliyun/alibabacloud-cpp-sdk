// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDYNAMICIMAGEJOBRESPONSEBODYDYNAMICIMAGEJOB_HPP_
#define ALIBABACLOUD_MODELS_GETDYNAMICIMAGEJOBRESPONSEBODYDYNAMICIMAGEJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDynamicImageJobResponseBodyDynamicImageJobInput.hpp>
#include <alibabacloud/models/GetDynamicImageJobResponseBodyDynamicImageJobOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDynamicImageJobResponseBodyDynamicImageJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDynamicImageJobResponseBodyDynamicImageJob& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetDynamicImageJobResponseBodyDynamicImageJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetDynamicImageJobResponseBodyDynamicImageJob() = default ;
    GetDynamicImageJobResponseBodyDynamicImageJob(const GetDynamicImageJobResponseBodyDynamicImageJob &) = default ;
    GetDynamicImageJobResponseBodyDynamicImageJob(GetDynamicImageJobResponseBodyDynamicImageJob &&) = default ;
    GetDynamicImageJobResponseBodyDynamicImageJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDynamicImageJobResponseBodyDynamicImageJob() = default ;
    GetDynamicImageJobResponseBodyDynamicImageJob& operator=(const GetDynamicImageJobResponseBodyDynamicImageJob &) = default ;
    GetDynamicImageJobResponseBodyDynamicImageJob& operator=(GetDynamicImageJobResponseBodyDynamicImageJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->createTime_ == nullptr && return this->finishTime_ == nullptr && return this->input_ == nullptr && return this->jobId_ == nullptr && return this->message_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->name_ == nullptr && return this->output_ == nullptr && return this->outputUrl_ == nullptr && return this->pipelineId_ == nullptr
        && return this->status_ == nullptr && return this->submitTime_ == nullptr && return this->templateConfig_ == nullptr && return this->templateId_ == nullptr && return this->triggerSource_ == nullptr
        && return this->userData_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::GetDynamicImageJobResponseBodyDynamicImageJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::GetDynamicImageJobResponseBodyDynamicImageJobInput) };
    inline Models::GetDynamicImageJobResponseBodyDynamicImageJobInput input() { DARABONBA_PTR_GET(input_, Models::GetDynamicImageJobResponseBodyDynamicImageJobInput) };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setInput(const Models::GetDynamicImageJobResponseBodyDynamicImageJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setInput(Models::GetDynamicImageJobResponseBodyDynamicImageJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::GetDynamicImageJobResponseBodyDynamicImageJobOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::GetDynamicImageJobResponseBodyDynamicImageJobOutput) };
    inline Models::GetDynamicImageJobResponseBodyDynamicImageJobOutput output() { DARABONBA_PTR_GET(output_, Models::GetDynamicImageJobResponseBodyDynamicImageJobOutput) };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setOutput(const Models::GetDynamicImageJobResponseBodyDynamicImageJobOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setOutput(Models::GetDynamicImageJobResponseBodyDynamicImageJobOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Error codes
    std::shared_ptr<string> code_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input of the job.
    std::shared_ptr<Models::GetDynamicImageJobResponseBodyDynamicImageJobInput> input_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The time when the job was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the job.
    std::shared_ptr<Models::GetDynamicImageJobResponseBodyDynamicImageJobOutput> output_ = nullptr;
    // The URL of the output animated image.
    std::shared_ptr<string> outputUrl_ = nullptr;
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
    // The animation template configuration.
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
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
