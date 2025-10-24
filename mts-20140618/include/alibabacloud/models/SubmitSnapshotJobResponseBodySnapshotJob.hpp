// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOB_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSnapshotJobResponseBodySnapshotJobInput.hpp>
#include <alibabacloud/models/SubmitSnapshotJobResponseBodySnapshotJobMNSMessageResult.hpp>
#include <alibabacloud/models/SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitSnapshotJobResponseBodySnapshotJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobResponseBodySnapshotJob& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(MNSMessageResult, MNSMessageResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(SnapshotConfig, snapshotConfig_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TileCount, tileCount_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobResponseBodySnapshotJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(MNSMessageResult, MNSMessageResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(SnapshotConfig, snapshotConfig_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TileCount, tileCount_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSnapshotJobResponseBodySnapshotJob() = default ;
    SubmitSnapshotJobResponseBodySnapshotJob(const SubmitSnapshotJobResponseBodySnapshotJob &) = default ;
    SubmitSnapshotJobResponseBodySnapshotJob(SubmitSnapshotJobResponseBodySnapshotJob &&) = default ;
    SubmitSnapshotJobResponseBodySnapshotJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobResponseBodySnapshotJob() = default ;
    SubmitSnapshotJobResponseBodySnapshotJob& operator=(const SubmitSnapshotJobResponseBodySnapshotJob &) = default ;
    SubmitSnapshotJobResponseBodySnapshotJob& operator=(SubmitSnapshotJobResponseBodySnapshotJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->count_ == nullptr && return this->creationTime_ == nullptr && return this->id_ == nullptr && return this->input_ == nullptr && return this->MNSMessageResult_ == nullptr
        && return this->message_ == nullptr && return this->pipelineId_ == nullptr && return this->snapshotConfig_ == nullptr && return this->state_ == nullptr && return this->tileCount_ == nullptr
        && return this->userData_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::SubmitSnapshotJobResponseBodySnapshotJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::SubmitSnapshotJobResponseBodySnapshotJobInput) };
    inline Models::SubmitSnapshotJobResponseBodySnapshotJobInput input() { DARABONBA_PTR_GET(input_, Models::SubmitSnapshotJobResponseBodySnapshotJobInput) };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setInput(const Models::SubmitSnapshotJobResponseBodySnapshotJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setInput(Models::SubmitSnapshotJobResponseBodySnapshotJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // MNSMessageResult Field Functions 
    bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
    void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
    inline const Models::SubmitSnapshotJobResponseBodySnapshotJobMNSMessageResult & MNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, Models::SubmitSnapshotJobResponseBodySnapshotJobMNSMessageResult) };
    inline Models::SubmitSnapshotJobResponseBodySnapshotJobMNSMessageResult MNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, Models::SubmitSnapshotJobResponseBodySnapshotJobMNSMessageResult) };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setMNSMessageResult(const Models::SubmitSnapshotJobResponseBodySnapshotJobMNSMessageResult & MNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, MNSMessageResult) };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setMNSMessageResult(Models::SubmitSnapshotJobResponseBodySnapshotJobMNSMessageResult && MNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, MNSMessageResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // snapshotConfig Field Functions 
    bool hasSnapshotConfig() const { return this->snapshotConfig_ != nullptr;};
    void deleteSnapshotConfig() { this->snapshotConfig_ = nullptr;};
    inline const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig & snapshotConfig() const { DARABONBA_PTR_GET_CONST(snapshotConfig_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig) };
    inline Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig snapshotConfig() { DARABONBA_PTR_GET(snapshotConfig_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig) };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setSnapshotConfig(const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig & snapshotConfig) { DARABONBA_PTR_SET_VALUE(snapshotConfig_, snapshotConfig) };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setSnapshotConfig(Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig && snapshotConfig) { DARABONBA_PTR_SET_RVALUE(snapshotConfig_, snapshotConfig) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tileCount Field Functions 
    bool hasTileCount() const { return this->tileCount_ != nullptr;};
    void deleteTileCount() { this->tileCount_ = nullptr;};
    inline string tileCount() const { DARABONBA_PTR_GET_DEFAULT(tileCount_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setTileCount(string tileCount) { DARABONBA_PTR_SET_VALUE(tileCount_, tileCount) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code returned if the job fails. This parameter is not returned if the job is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The number of snapshots that are captured.
    std::shared_ptr<string> count_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the snapshot job.
    std::shared_ptr<string> id_ = nullptr;
    // The information about the job input.
    std::shared_ptr<Models::SubmitSnapshotJobResponseBodySnapshotJobInput> input_ = nullptr;
    // The message sent by MNS to notify the user of the job result.
    std::shared_ptr<Models::SubmitSnapshotJobResponseBodySnapshotJobMNSMessageResult> MNSMessageResult_ = nullptr;
    // The error message returned if the job fails. This parameter is not returned if the job is successful.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the MPS queue to which the snapshot job is submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The snapshot configurations.
    std::shared_ptr<Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig> snapshotConfig_ = nullptr;
    // The status of the snapshot job. Valid values:
    // 
    // *   **Submitted**: The job is submitted.
    // *   **Snapshoting**: The job is being processed.
    // *   **Success**: The job is successful.
    // *   **Fail**: The job fails.
    std::shared_ptr<string> state_ = nullptr;
    // The number of single images that are contained in the tiled image.
    std::shared_ptr<string> tileCount_ = nullptr;
    // The custom data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
