// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOB_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobInputFile.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobMNSMessageResult.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJob& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisConfig, analysisConfig_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(MNSMessageResult, MNSMessageResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TemplateList, templateList_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJob& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisConfig, analysisConfig_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(MNSMessageResult, MNSMessageResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TemplateList, templateList_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJob() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJob(const SubmitAnalysisJobResponseBodyAnalysisJob &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJob(SubmitAnalysisJobResponseBodyAnalysisJob &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJob() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJob& operator=(const SubmitAnalysisJobResponseBodyAnalysisJob &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJob& operator=(SubmitAnalysisJobResponseBodyAnalysisJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisConfig_ == nullptr
        && return this->code_ == nullptr && return this->creationTime_ == nullptr && return this->id_ == nullptr && return this->inputFile_ == nullptr && return this->MNSMessageResult_ == nullptr
        && return this->message_ == nullptr && return this->percent_ == nullptr && return this->pipelineId_ == nullptr && return this->priority_ == nullptr && return this->state_ == nullptr
        && return this->templateList_ == nullptr && return this->userData_ == nullptr; };
    // analysisConfig Field Functions 
    bool hasAnalysisConfig() const { return this->analysisConfig_ != nullptr;};
    void deleteAnalysisConfig() { this->analysisConfig_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig & analysisConfig() const { DARABONBA_PTR_GET_CONST(analysisConfig_, Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig analysisConfig() { DARABONBA_PTR_GET(analysisConfig_, Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setAnalysisConfig(const Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig & analysisConfig) { DARABONBA_PTR_SET_VALUE(analysisConfig_, analysisConfig) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setAnalysisConfig(Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig && analysisConfig) { DARABONBA_PTR_SET_RVALUE(analysisConfig_, analysisConfig) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobInputFile & inputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, Models::SubmitAnalysisJobResponseBodyAnalysisJobInputFile) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobInputFile inputFile() { DARABONBA_PTR_GET(inputFile_, Models::SubmitAnalysisJobResponseBodyAnalysisJobInputFile) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setInputFile(const Models::SubmitAnalysisJobResponseBodyAnalysisJobInputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setInputFile(Models::SubmitAnalysisJobResponseBodyAnalysisJobInputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


    // MNSMessageResult Field Functions 
    bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
    void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobMNSMessageResult & MNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, Models::SubmitAnalysisJobResponseBodyAnalysisJobMNSMessageResult) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobMNSMessageResult MNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, Models::SubmitAnalysisJobResponseBodyAnalysisJobMNSMessageResult) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setMNSMessageResult(const Models::SubmitAnalysisJobResponseBodyAnalysisJobMNSMessageResult & MNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, MNSMessageResult) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setMNSMessageResult(Models::SubmitAnalysisJobResponseBodyAnalysisJobMNSMessageResult && MNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, MNSMessageResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int64_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0L) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setPercent(int64_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // templateList Field Functions 
    bool hasTemplateList() const { return this->templateList_ != nullptr;};
    void deleteTemplateList() { this->templateList_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateList & templateList() const { DARABONBA_PTR_GET_CONST(templateList_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateList) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateList templateList() { DARABONBA_PTR_GET(templateList_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateList) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setTemplateList(const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateList & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setTemplateList(Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateList && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The job configurations.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig> analysisConfig_ = nullptr;
    // The error code returned if the job failed. This parameter is not returned if the job was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the template analysis job.
    std::shared_ptr<string> id_ = nullptr;
    // The information about the job input.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobInputFile> inputFile_ = nullptr;
    // The message sent by MNS to notify users of the job result.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobMNSMessageResult> MNSMessageResult_ = nullptr;
    // The error message returned if the job failed.
    std::shared_ptr<string> message_ = nullptr;
    // The transcoding progress.
    std::shared_ptr<int64_t> percent_ = nullptr;
    // The ID of the MPS queue to which the analysis job was submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The priority of the job in the MPS queue to which the job was submitted.
    // 
    // *   Valid values: **1 to 10**. A value of 10 indicates the highest priority.
    // *   Default value: **10**.
    std::shared_ptr<string> priority_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   **Submitted**: The job is submitted.
    // *   **Analyzing**: The job is being run.
    // *   **Success**: The job is successful.
    // *   **Fail**: The job fails.
    std::shared_ptr<string> state_ = nullptr;
    // The matched preset templates.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateList> templateList_ = nullptr;
    // The custom data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
