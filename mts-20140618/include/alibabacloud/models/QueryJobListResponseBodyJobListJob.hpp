// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOB_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobInput.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobMNSMessageResult.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJob& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MNSMessageResult, MNSMessageResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MNSMessageResult, MNSMessageResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
    };
    QueryJobListResponseBodyJobListJob() = default ;
    QueryJobListResponseBodyJobListJob(const QueryJobListResponseBodyJobListJob &) = default ;
    QueryJobListResponseBodyJobListJob(QueryJobListResponseBodyJobListJob &&) = default ;
    QueryJobListResponseBodyJobListJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJob() = default ;
    QueryJobListResponseBodyJobListJob& operator=(const QueryJobListResponseBodyJobListJob &) = default ;
    QueryJobListResponseBodyJobListJob& operator=(QueryJobListResponseBodyJobListJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->creationTime_ == nullptr && return this->finishTime_ == nullptr && return this->input_ == nullptr && return this->jobId_ == nullptr && return this->MNSMessageResult_ == nullptr
        && return this->message_ == nullptr && return this->output_ == nullptr && return this->percent_ == nullptr && return this->pipelineId_ == nullptr && return this->state_ == nullptr
        && return this->submitTime_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryJobListResponseBodyJobListJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QueryJobListResponseBodyJobListJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline QueryJobListResponseBodyJobListJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::QueryJobListResponseBodyJobListJobInput) };
    inline Models::QueryJobListResponseBodyJobListJobInput input() { DARABONBA_PTR_GET(input_, Models::QueryJobListResponseBodyJobListJobInput) };
    inline QueryJobListResponseBodyJobListJob& setInput(const Models::QueryJobListResponseBodyJobListJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QueryJobListResponseBodyJobListJob& setInput(Models::QueryJobListResponseBodyJobListJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryJobListResponseBodyJobListJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // MNSMessageResult Field Functions 
    bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
    void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobMNSMessageResult & MNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, Models::QueryJobListResponseBodyJobListJobMNSMessageResult) };
    inline Models::QueryJobListResponseBodyJobListJobMNSMessageResult MNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, Models::QueryJobListResponseBodyJobListJobMNSMessageResult) };
    inline QueryJobListResponseBodyJobListJob& setMNSMessageResult(const Models::QueryJobListResponseBodyJobListJobMNSMessageResult & MNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, MNSMessageResult) };
    inline QueryJobListResponseBodyJobListJob& setMNSMessageResult(Models::QueryJobListResponseBodyJobListJobMNSMessageResult && MNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, MNSMessageResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryJobListResponseBodyJobListJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::QueryJobListResponseBodyJobListJobOutput) };
    inline Models::QueryJobListResponseBodyJobListJobOutput output() { DARABONBA_PTR_GET(output_, Models::QueryJobListResponseBodyJobListJobOutput) };
    inline QueryJobListResponseBodyJobListJob& setOutput(const Models::QueryJobListResponseBodyJobListJobOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline QueryJobListResponseBodyJobListJob& setOutput(Models::QueryJobListResponseBodyJobListJobOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int64_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0L) };
    inline QueryJobListResponseBodyJobListJob& setPercent(int64_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QueryJobListResponseBodyJobListJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryJobListResponseBodyJobListJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline QueryJobListResponseBodyJobListJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


  protected:
    // The error code returned if the job failed. If the job was successful, this parameter is not returned.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The information about the job input.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobInput> input_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The message sent by Message Service (MNS) to notify users of the job result.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobMNSMessageResult> MNSMessageResult_ = nullptr;
    // The error message returned if the job failed. If the job was successful, this parameter is not returned.
    std::shared_ptr<string> message_ = nullptr;
    // The job output.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutput> output_ = nullptr;
    // The transcoding progress.
    std::shared_ptr<int64_t> percent_ = nullptr;
    // The ID of the MPS queue that is used to run the job.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The job state. Valid values:
    // 
    // *   **Submitted**: The job was submitted.
    // *   **Transcoding**: Transcoding is in process.
    // *   **TranscodeSuccess**: The job was successful.
    // *   **TranscodeFail**: The job failed.
    // *   **TranscodeCancelled**: The job was canceled.
    std::shared_ptr<string> state_ = nullptr;
    // The time when the job was submitted.
    std::shared_ptr<string> submitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
