// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICIMAGEJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICIMAGEJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDynamicImageJobsResponseBodyJobsInput.hpp>
#include <alibabacloud/models/ListDynamicImageJobsResponseBodyJobsOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListDynamicImageJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicImageJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicImageJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
    };
    ListDynamicImageJobsResponseBodyJobs() = default ;
    ListDynamicImageJobsResponseBodyJobs(const ListDynamicImageJobsResponseBodyJobs &) = default ;
    ListDynamicImageJobsResponseBodyJobs(ListDynamicImageJobsResponseBodyJobs &&) = default ;
    ListDynamicImageJobsResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicImageJobsResponseBodyJobs() = default ;
    ListDynamicImageJobsResponseBodyJobs& operator=(const ListDynamicImageJobsResponseBodyJobs &) = default ;
    ListDynamicImageJobsResponseBodyJobs& operator=(ListDynamicImageJobsResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->finishTime_ == nullptr && return this->input_ == nullptr && return this->jobId_ == nullptr && return this->modifiedTime_ == nullptr && return this->name_ == nullptr
        && return this->output_ == nullptr && return this->pipelineId_ == nullptr && return this->status_ == nullptr && return this->submitTime_ == nullptr && return this->templateId_ == nullptr
        && return this->triggerSource_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::ListDynamicImageJobsResponseBodyJobsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::ListDynamicImageJobsResponseBodyJobsInput) };
    inline Models::ListDynamicImageJobsResponseBodyJobsInput input() { DARABONBA_PTR_GET(input_, Models::ListDynamicImageJobsResponseBodyJobsInput) };
    inline ListDynamicImageJobsResponseBodyJobs& setInput(const Models::ListDynamicImageJobsResponseBodyJobsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline ListDynamicImageJobsResponseBodyJobs& setInput(Models::ListDynamicImageJobsResponseBodyJobsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::ListDynamicImageJobsResponseBodyJobsOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::ListDynamicImageJobsResponseBodyJobsOutput) };
    inline Models::ListDynamicImageJobsResponseBodyJobsOutput output() { DARABONBA_PTR_GET(output_, Models::ListDynamicImageJobsResponseBodyJobsOutput) };
    inline ListDynamicImageJobsResponseBodyJobs& setOutput(const Models::ListDynamicImageJobsResponseBodyJobsOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline ListDynamicImageJobsResponseBodyJobs& setOutput(Models::ListDynamicImageJobsResponseBodyJobsOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline ListDynamicImageJobsResponseBodyJobs& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


  protected:
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input of the job.
    std::shared_ptr<Models::ListDynamicImageJobsResponseBodyJobsInput> input_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The time when the job was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the job.
    std::shared_ptr<Models::ListDynamicImageJobsResponseBodyJobsOutput> output_ = nullptr;
    // The ID of the MPS queue to which the job was submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The state of the job.
    // 
    // *   **Success**: The job is successful.
    // *   **Fail**: The job failed.
    // *   **Init**: The job is submitted.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the job was submitted.
    std::shared_ptr<string> submitTime_ = nullptr;
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
