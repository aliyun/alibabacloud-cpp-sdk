// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGEJOBRESPONSEBODYPACKAGEJOB_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGEJOBRESPONSEBODYPACKAGEJOB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPackageJobResponseBodyPackageJobInputs.hpp>
#include <alibabacloud/models/GetPackageJobResponseBodyPackageJobOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPackageJobResponseBodyPackageJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageJobResponseBodyPackageJob& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageJobResponseBodyPackageJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetPackageJobResponseBodyPackageJob() = default ;
    GetPackageJobResponseBodyPackageJob(const GetPackageJobResponseBodyPackageJob &) = default ;
    GetPackageJobResponseBodyPackageJob(GetPackageJobResponseBodyPackageJob &&) = default ;
    GetPackageJobResponseBodyPackageJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageJobResponseBodyPackageJob() = default ;
    GetPackageJobResponseBodyPackageJob& operator=(const GetPackageJobResponseBodyPackageJob &) = default ;
    GetPackageJobResponseBodyPackageJob& operator=(GetPackageJobResponseBodyPackageJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->createTime_ != nullptr && this->finishTime_ != nullptr && this->inputs_ != nullptr && this->jobId_ != nullptr && this->message_ != nullptr
        && this->modifiedTime_ != nullptr && this->name_ != nullptr && this->output_ != nullptr && this->outputUrl_ != nullptr && this->pipelineId_ != nullptr
        && this->priority_ != nullptr && this->status_ != nullptr && this->submitTime_ != nullptr && this->triggerSource_ != nullptr && this->userData_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPackageJobResponseBodyPackageJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPackageJobResponseBodyPackageJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetPackageJobResponseBodyPackageJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<Models::GetPackageJobResponseBodyPackageJobInputs> & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<Models::GetPackageJobResponseBodyPackageJobInputs>) };
    inline vector<Models::GetPackageJobResponseBodyPackageJobInputs> inputs() { DARABONBA_PTR_GET(inputs_, vector<Models::GetPackageJobResponseBodyPackageJobInputs>) };
    inline GetPackageJobResponseBodyPackageJob& setInputs(const vector<Models::GetPackageJobResponseBodyPackageJobInputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline GetPackageJobResponseBodyPackageJob& setInputs(vector<Models::GetPackageJobResponseBodyPackageJobInputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetPackageJobResponseBodyPackageJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPackageJobResponseBodyPackageJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetPackageJobResponseBodyPackageJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPackageJobResponseBodyPackageJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::GetPackageJobResponseBodyPackageJobOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::GetPackageJobResponseBodyPackageJobOutput) };
    inline Models::GetPackageJobResponseBodyPackageJobOutput output() { DARABONBA_PTR_GET(output_, Models::GetPackageJobResponseBodyPackageJobOutput) };
    inline GetPackageJobResponseBodyPackageJob& setOutput(const Models::GetPackageJobResponseBodyPackageJobOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline GetPackageJobResponseBodyPackageJob& setOutput(Models::GetPackageJobResponseBodyPackageJobOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline GetPackageJobResponseBodyPackageJob& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline GetPackageJobResponseBodyPackageJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetPackageJobResponseBodyPackageJob& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPackageJobResponseBodyPackageJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline GetPackageJobResponseBodyPackageJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline GetPackageJobResponseBodyPackageJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetPackageJobResponseBodyPackageJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code returned if the job fails.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the job was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input of the job.
    std::shared_ptr<vector<Models::GetPackageJobResponseBodyPackageJobInputs>> inputs_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The time when the job was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the job.
    std::shared_ptr<Models::GetPackageJobResponseBodyPackageJobOutput> output_ = nullptr;
    // The URL of the output file.
    std::shared_ptr<string> outputUrl_ = nullptr;
    // The ID of the MPS queue to which the job was submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The priority of the job. Valid values: 1 to 10. The greater the value, the higher the priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The state of the job.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the job was submitted. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> submitTime_ = nullptr;
    // The source of the job. Valid values:
    // 
    // *   API
    // *   WorkFlow
    // *   Console
    std::shared_ptr<string> triggerSource_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
