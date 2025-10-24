// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLISTSNAPSHOTJOB_HPP_
#define ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLISTSNAPSHOTJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobInput.hpp>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobMNSMessageResult.hpp>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& obj) { 
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
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob(const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob(QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob &&) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& operator=(const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& operator=(QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob &&) = default ;
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
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobInput) };
    inline Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobInput input() { DARABONBA_PTR_GET(input_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobInput) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setInput(const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setInput(Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // MNSMessageResult Field Functions 
    bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
    void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
    inline const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobMNSMessageResult & MNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobMNSMessageResult) };
    inline Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobMNSMessageResult MNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobMNSMessageResult) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setMNSMessageResult(const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobMNSMessageResult & MNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, MNSMessageResult) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setMNSMessageResult(Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobMNSMessageResult && MNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, MNSMessageResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // snapshotConfig Field Functions 
    bool hasSnapshotConfig() const { return this->snapshotConfig_ != nullptr;};
    void deleteSnapshotConfig() { this->snapshotConfig_ = nullptr;};
    inline const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig & snapshotConfig() const { DARABONBA_PTR_GET_CONST(snapshotConfig_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig) };
    inline Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig snapshotConfig() { DARABONBA_PTR_GET(snapshotConfig_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setSnapshotConfig(const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig & snapshotConfig) { DARABONBA_PTR_SET_VALUE(snapshotConfig_, snapshotConfig) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setSnapshotConfig(Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig && snapshotConfig) { DARABONBA_PTR_SET_RVALUE(snapshotConfig_, snapshotConfig) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tileCount Field Functions 
    bool hasTileCount() const { return this->tileCount_ != nullptr;};
    void deleteTileCount() { this->tileCount_ = nullptr;};
    inline string tileCount() const { DARABONBA_PTR_GET_DEFAULT(tileCount_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setTileCount(string tileCount) { DARABONBA_PTR_SET_VALUE(tileCount_, tileCount) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // You can call this operation to query up to 10 snapshot jobs at a time.
    // 
    // 
    // ## Limits on QPS
    // 
    // You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
    std::shared_ptr<string> code_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> count_ = nullptr;
    // The stride of a single image.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The OSS output file of the tiling job.
    std::shared_ptr<string> id_ = nullptr;
    // The number of snapshots that are contained in the tiled image.
    std::shared_ptr<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobInput> input_ = nullptr;
    // The OSS object that is used as the input file.
    std::shared_ptr<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobMNSMessageResult> MNSMessageResult_ = nullptr;
    // The ARN of the specified RAM role. Format: acs:ram::$accountID:role/$roleName.
    std::shared_ptr<string> message_ = nullptr;
    // The start time for taking snapshots. Unit: milliseconds.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The height of a single image. The default value is the height of the output snapshot.
    std::shared_ptr<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig> snapshotConfig_ = nullptr;
    // The information about the job input.
    std::shared_ptr<string> state_ = nullptr;
    // The snapshot job IDs that do not exist. This parameter is not returned if all specified snapshot jobs are found.
    std::shared_ptr<string> tileCount_ = nullptr;
    // The token that is used to retrieve the next page of the query results. The value is a 32-bit UUID. If the returned query results cannot be displayed within one page, this parameter is returned. The value of this parameter is updated for each query.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
