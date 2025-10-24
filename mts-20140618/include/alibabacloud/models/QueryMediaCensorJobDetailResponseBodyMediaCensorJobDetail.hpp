// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAIL_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailBarrageCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailDescCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailInput.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailTitleCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AudioCensorResult, audioCensorResult_);
      DARABONBA_PTR_TO_JSON(BarrageCensorResult, barrageCensorResult_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CoverImageCensorResults, coverImageCensorResults_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DescCensorResult, descCensorResult_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TitleCensorResult, titleCensorResult_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VensorCensorResult, vensorCensorResult_);
      DARABONBA_PTR_TO_JSON(VideoCensorConfig, videoCensorConfig_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioCensorResult, audioCensorResult_);
      DARABONBA_PTR_FROM_JSON(BarrageCensorResult, barrageCensorResult_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CoverImageCensorResults, coverImageCensorResults_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DescCensorResult, descCensorResult_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TitleCensorResult, titleCensorResult_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VensorCensorResult, vensorCensorResult_);
      DARABONBA_PTR_FROM_JSON(VideoCensorConfig, videoCensorConfig_);
    };
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail &&) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& operator=(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& operator=(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioCensorResult_ == nullptr
        && return this->barrageCensorResult_ == nullptr && return this->code_ == nullptr && return this->coverImageCensorResults_ == nullptr && return this->creationTime_ == nullptr && return this->descCensorResult_ == nullptr
        && return this->finishTime_ == nullptr && return this->input_ == nullptr && return this->jobId_ == nullptr && return this->message_ == nullptr && return this->pipelineId_ == nullptr
        && return this->state_ == nullptr && return this->suggestion_ == nullptr && return this->titleCensorResult_ == nullptr && return this->userData_ == nullptr && return this->vensorCensorResult_ == nullptr
        && return this->videoCensorConfig_ == nullptr; };
    // audioCensorResult Field Functions 
    bool hasAudioCensorResult() const { return this->audioCensorResult_ != nullptr;};
    void deleteAudioCensorResult() { this->audioCensorResult_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult & audioCensorResult() const { DARABONBA_PTR_GET_CONST(audioCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult audioCensorResult() { DARABONBA_PTR_GET(audioCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setAudioCensorResult(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult & audioCensorResult) { DARABONBA_PTR_SET_VALUE(audioCensorResult_, audioCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setAudioCensorResult(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult && audioCensorResult) { DARABONBA_PTR_SET_RVALUE(audioCensorResult_, audioCensorResult) };


    // barrageCensorResult Field Functions 
    bool hasBarrageCensorResult() const { return this->barrageCensorResult_ != nullptr;};
    void deleteBarrageCensorResult() { this->barrageCensorResult_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailBarrageCensorResult & barrageCensorResult() const { DARABONBA_PTR_GET_CONST(barrageCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailBarrageCensorResult) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailBarrageCensorResult barrageCensorResult() { DARABONBA_PTR_GET(barrageCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailBarrageCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setBarrageCensorResult(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailBarrageCensorResult & barrageCensorResult) { DARABONBA_PTR_SET_VALUE(barrageCensorResult_, barrageCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setBarrageCensorResult(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailBarrageCensorResult && barrageCensorResult) { DARABONBA_PTR_SET_RVALUE(barrageCensorResult_, barrageCensorResult) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // coverImageCensorResults Field Functions 
    bool hasCoverImageCensorResults() const { return this->coverImageCensorResults_ != nullptr;};
    void deleteCoverImageCensorResults() { this->coverImageCensorResults_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults & coverImageCensorResults() const { DARABONBA_PTR_GET_CONST(coverImageCensorResults_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults coverImageCensorResults() { DARABONBA_PTR_GET(coverImageCensorResults_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setCoverImageCensorResults(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults & coverImageCensorResults) { DARABONBA_PTR_SET_VALUE(coverImageCensorResults_, coverImageCensorResults) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setCoverImageCensorResults(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults && coverImageCensorResults) { DARABONBA_PTR_SET_RVALUE(coverImageCensorResults_, coverImageCensorResults) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // descCensorResult Field Functions 
    bool hasDescCensorResult() const { return this->descCensorResult_ != nullptr;};
    void deleteDescCensorResult() { this->descCensorResult_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailDescCensorResult & descCensorResult() const { DARABONBA_PTR_GET_CONST(descCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailDescCensorResult) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailDescCensorResult descCensorResult() { DARABONBA_PTR_GET(descCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailDescCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setDescCensorResult(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailDescCensorResult & descCensorResult) { DARABONBA_PTR_SET_VALUE(descCensorResult_, descCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setDescCensorResult(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailDescCensorResult && descCensorResult) { DARABONBA_PTR_SET_RVALUE(descCensorResult_, descCensorResult) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailInput) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailInput input() { DARABONBA_PTR_GET(input_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailInput) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setInput(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setInput(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // titleCensorResult Field Functions 
    bool hasTitleCensorResult() const { return this->titleCensorResult_ != nullptr;};
    void deleteTitleCensorResult() { this->titleCensorResult_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailTitleCensorResult & titleCensorResult() const { DARABONBA_PTR_GET_CONST(titleCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailTitleCensorResult) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailTitleCensorResult titleCensorResult() { DARABONBA_PTR_GET(titleCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailTitleCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setTitleCensorResult(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailTitleCensorResult & titleCensorResult) { DARABONBA_PTR_SET_VALUE(titleCensorResult_, titleCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setTitleCensorResult(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailTitleCensorResult && titleCensorResult) { DARABONBA_PTR_SET_RVALUE(titleCensorResult_, titleCensorResult) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vensorCensorResult Field Functions 
    bool hasVensorCensorResult() const { return this->vensorCensorResult_ != nullptr;};
    void deleteVensorCensorResult() { this->vensorCensorResult_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult & vensorCensorResult() const { DARABONBA_PTR_GET_CONST(vensorCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult vensorCensorResult() { DARABONBA_PTR_GET(vensorCensorResult_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setVensorCensorResult(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult & vensorCensorResult) { DARABONBA_PTR_SET_VALUE(vensorCensorResult_, vensorCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setVensorCensorResult(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult && vensorCensorResult) { DARABONBA_PTR_SET_RVALUE(vensorCensorResult_, vensorCensorResult) };


    // videoCensorConfig Field Functions 
    bool hasVideoCensorConfig() const { return this->videoCensorConfig_ != nullptr;};
    void deleteVideoCensorConfig() { this->videoCensorConfig_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig & videoCensorConfig() const { DARABONBA_PTR_GET_CONST(videoCensorConfig_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig videoCensorConfig() { DARABONBA_PTR_GET(videoCensorConfig_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setVideoCensorConfig(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig & videoCensorConfig) { DARABONBA_PTR_SET_VALUE(videoCensorConfig_, videoCensorConfig) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetail& setVideoCensorConfig(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig && videoCensorConfig) { DARABONBA_PTR_SET_RVALUE(videoCensorConfig_, videoCensorConfig) };


  protected:
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailAudioCensorResult> audioCensorResult_ = nullptr;
    // The moderation result of live comments.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailBarrageCensorResult> barrageCensorResult_ = nullptr;
    // The error code returned if the job fails. This parameter is not returned if the job is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The moderation results of thumbnails.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults> coverImageCensorResults_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The moderation result of the description.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailDescCensorResult> descCensorResult_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The information about the job input.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailInput> input_ = nullptr;
    // The ID of the content moderation job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The error message returned if the job fails. This parameter is not returned if the job is successful.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the ApsaraVideo Media Processing (MPS) queue to which the content moderation job is submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The status of the job. Valid values:
    std::shared_ptr<string> state_ = nullptr;
    // The overall result of the job. Valid values:
    // 
    // *   **pass**: The content passes the moderation.
    // *   **review**: The content needs to be manually reviewed again.
    // *   **block**: The content needs to be blocked.
    // 
    // If the moderation result of one type of the moderated content is review, the overall result is review. If the moderation result of one type of the moderated content is block, the overall result is block.
    std::shared_ptr<string> suggestion_ = nullptr;
    // The moderation result of the title.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailTitleCensorResult> titleCensorResult_ = nullptr;
    // The custom data.
    std::shared_ptr<string> userData_ = nullptr;
    // The moderation results of the video.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResult> vensorCensorResult_ = nullptr;
    // The video moderation configurations.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig> videoCensorConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
