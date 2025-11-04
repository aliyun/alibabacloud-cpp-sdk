// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSnapshotJobsResponseBodyJobsInput.hpp>
#include <alibabacloud/models/ListSnapshotJobsResponseBodyJobsOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSnapshotJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(Async, async_);
      DARABONBA_PTR_TO_JSON(Count, count_);
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
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(Async, async_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
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
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListSnapshotJobsResponseBodyJobs() = default ;
    ListSnapshotJobsResponseBodyJobs(const ListSnapshotJobsResponseBodyJobs &) = default ;
    ListSnapshotJobsResponseBodyJobs(ListSnapshotJobsResponseBodyJobs &&) = default ;
    ListSnapshotJobsResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotJobsResponseBodyJobs() = default ;
    ListSnapshotJobsResponseBodyJobs& operator=(const ListSnapshotJobsResponseBodyJobs &) = default ;
    ListSnapshotJobsResponseBodyJobs& operator=(ListSnapshotJobsResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->async_ == nullptr
        && return this->count_ == nullptr && return this->createTime_ == nullptr && return this->finishTime_ == nullptr && return this->input_ == nullptr && return this->jobId_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->name_ == nullptr && return this->output_ == nullptr && return this->pipelineId_ == nullptr && return this->status_ == nullptr
        && return this->submitTime_ == nullptr && return this->templateId_ == nullptr && return this->triggerSource_ == nullptr && return this->type_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool async() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline ListSnapshotJobsResponseBodyJobs& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListSnapshotJobsResponseBodyJobs& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::ListSnapshotJobsResponseBodyJobsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::ListSnapshotJobsResponseBodyJobsInput) };
    inline Models::ListSnapshotJobsResponseBodyJobsInput input() { DARABONBA_PTR_GET(input_, Models::ListSnapshotJobsResponseBodyJobsInput) };
    inline ListSnapshotJobsResponseBodyJobs& setInput(const Models::ListSnapshotJobsResponseBodyJobsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline ListSnapshotJobsResponseBodyJobs& setInput(Models::ListSnapshotJobsResponseBodyJobsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::ListSnapshotJobsResponseBodyJobsOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::ListSnapshotJobsResponseBodyJobsOutput) };
    inline Models::ListSnapshotJobsResponseBodyJobsOutput output() { DARABONBA_PTR_GET(output_, Models::ListSnapshotJobsResponseBodyJobsOutput) };
    inline ListSnapshotJobsResponseBodyJobs& setOutput(const Models::ListSnapshotJobsResponseBodyJobsOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline ListSnapshotJobsResponseBodyJobs& setOutput(Models::ListSnapshotJobsResponseBodyJobsOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSnapshotJobsResponseBodyJobs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the snapshots were captured in asynchronous mode.
    std::shared_ptr<bool> async_ = nullptr;
    // The number of snapshots.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input of the job.
    std::shared_ptr<Models::ListSnapshotJobsResponseBodyJobsInput> input_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The time when the job was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the job.
    std::shared_ptr<Models::ListSnapshotJobsResponseBodyJobsOutput> output_ = nullptr;
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
    // The type of the job.
    // 
    // Valid values:
    // 
    // *   WebVtt
    // *   Sprite
    // *   Normal
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
