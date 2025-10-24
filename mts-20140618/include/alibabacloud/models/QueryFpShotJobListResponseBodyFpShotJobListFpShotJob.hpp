// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOB_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobInputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobListFpShotJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(FpShotConfig, fpShotConfig_);
      DARABONBA_PTR_TO_JSON(FpShotResult, fpShotResult_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(FpShotConfig, fpShotConfig_);
      DARABONBA_PTR_FROM_JSON(FpShotResult, fpShotResult_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJob() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJob(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJob &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJob(QueryFpShotJobListResponseBodyFpShotJobListFpShotJob &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobListFpShotJob() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& operator=(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJob &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& operator=(QueryFpShotJobListResponseBodyFpShotJobListFpShotJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->creationTime_ == nullptr && return this->duration_ == nullptr && return this->fileId_ == nullptr && return this->finishTime_ == nullptr && return this->fpShotConfig_ == nullptr
        && return this->fpShotResult_ == nullptr && return this->id_ == nullptr && return this->input_ == nullptr && return this->inputFile_ == nullptr && return this->message_ == nullptr
        && return this->pipelineId_ == nullptr && return this->state_ == nullptr && return this->userData_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // fpShotConfig Field Functions 
    bool hasFpShotConfig() const { return this->fpShotConfig_ != nullptr;};
    void deleteFpShotConfig() { this->fpShotConfig_ = nullptr;};
    inline const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig & fpShotConfig() const { DARABONBA_PTR_GET_CONST(fpShotConfig_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig) };
    inline Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig fpShotConfig() { DARABONBA_PTR_GET(fpShotConfig_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setFpShotConfig(const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig & fpShotConfig) { DARABONBA_PTR_SET_VALUE(fpShotConfig_, fpShotConfig) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setFpShotConfig(Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig && fpShotConfig) { DARABONBA_PTR_SET_RVALUE(fpShotConfig_, fpShotConfig) };


    // fpShotResult Field Functions 
    bool hasFpShotResult() const { return this->fpShotResult_ != nullptr;};
    void deleteFpShotResult() { this->fpShotResult_ = nullptr;};
    inline const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult & fpShotResult() const { DARABONBA_PTR_GET_CONST(fpShotResult_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult) };
    inline Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult fpShotResult() { DARABONBA_PTR_GET(fpShotResult_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setFpShotResult(const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult & fpShotResult) { DARABONBA_PTR_SET_VALUE(fpShotResult_, fpShotResult) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setFpShotResult(Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult && fpShotResult) { DARABONBA_PTR_SET_RVALUE(fpShotResult_, fpShotResult) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobInputFile & inputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobInputFile) };
    inline Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobInputFile inputFile() { DARABONBA_PTR_GET(inputFile_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobInputFile) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setInputFile(const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobInputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setInputFile(Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobInputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code returned if the job fails.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The length of the input file.
    // Unit: seconds.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The ID of the uploaded file.
    std::shared_ptr<string> fileId_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The configurations of the job.
    std::shared_ptr<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotConfig> fpShotConfig_ = nullptr;
    // The results of the media fingerprint analysis job.
    std::shared_ptr<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult> fpShotResult_ = nullptr;
    // The ID of the job.
    std::shared_ptr<string> id_ = nullptr;
    // The information about the job input.
    std::shared_ptr<string> input_ = nullptr;
    // The information about the job input.
    std::shared_ptr<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobInputFile> inputFile_ = nullptr;
    // The error message returned if the job fails. This parameter is not returned if the job is successful.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the MPS queue to which the analysis job is submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   **Queuing**: The job is waiting in the queue.
    // *   **Analysing**: The job is in progress.
    // *   **Success**: The job is successful.
    // *   **Fail**: The job fails.
    std::shared_ptr<string> state_ = nullptr;
    // The custom data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
