// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOB_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobAudioCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobBarrageCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobInput.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& obj) { 
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
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob &&) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& operator=(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& operator=(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob &&) = default ;
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
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobAudioCensorResult & audioCensorResult() const { DARABONBA_PTR_GET_CONST(audioCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobAudioCensorResult) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobAudioCensorResult audioCensorResult() { DARABONBA_PTR_GET(audioCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobAudioCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setAudioCensorResult(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobAudioCensorResult & audioCensorResult) { DARABONBA_PTR_SET_VALUE(audioCensorResult_, audioCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setAudioCensorResult(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobAudioCensorResult && audioCensorResult) { DARABONBA_PTR_SET_RVALUE(audioCensorResult_, audioCensorResult) };


    // barrageCensorResult Field Functions 
    bool hasBarrageCensorResult() const { return this->barrageCensorResult_ != nullptr;};
    void deleteBarrageCensorResult() { this->barrageCensorResult_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobBarrageCensorResult & barrageCensorResult() const { DARABONBA_PTR_GET_CONST(barrageCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobBarrageCensorResult) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobBarrageCensorResult barrageCensorResult() { DARABONBA_PTR_GET(barrageCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobBarrageCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setBarrageCensorResult(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobBarrageCensorResult & barrageCensorResult) { DARABONBA_PTR_SET_VALUE(barrageCensorResult_, barrageCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setBarrageCensorResult(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobBarrageCensorResult && barrageCensorResult) { DARABONBA_PTR_SET_RVALUE(barrageCensorResult_, barrageCensorResult) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // coverImageCensorResults Field Functions 
    bool hasCoverImageCensorResults() const { return this->coverImageCensorResults_ != nullptr;};
    void deleteCoverImageCensorResults() { this->coverImageCensorResults_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults & coverImageCensorResults() const { DARABONBA_PTR_GET_CONST(coverImageCensorResults_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults coverImageCensorResults() { DARABONBA_PTR_GET(coverImageCensorResults_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setCoverImageCensorResults(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults & coverImageCensorResults) { DARABONBA_PTR_SET_VALUE(coverImageCensorResults_, coverImageCensorResults) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setCoverImageCensorResults(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults && coverImageCensorResults) { DARABONBA_PTR_SET_RVALUE(coverImageCensorResults_, coverImageCensorResults) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // descCensorResult Field Functions 
    bool hasDescCensorResult() const { return this->descCensorResult_ != nullptr;};
    void deleteDescCensorResult() { this->descCensorResult_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult & descCensorResult() const { DARABONBA_PTR_GET_CONST(descCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult descCensorResult() { DARABONBA_PTR_GET(descCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setDescCensorResult(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult & descCensorResult) { DARABONBA_PTR_SET_VALUE(descCensorResult_, descCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setDescCensorResult(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult && descCensorResult) { DARABONBA_PTR_SET_RVALUE(descCensorResult_, descCensorResult) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobInput) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobInput input() { DARABONBA_PTR_GET(input_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobInput) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setInput(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setInput(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // titleCensorResult Field Functions 
    bool hasTitleCensorResult() const { return this->titleCensorResult_ != nullptr;};
    void deleteTitleCensorResult() { this->titleCensorResult_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult & titleCensorResult() const { DARABONBA_PTR_GET_CONST(titleCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult titleCensorResult() { DARABONBA_PTR_GET(titleCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setTitleCensorResult(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult & titleCensorResult) { DARABONBA_PTR_SET_VALUE(titleCensorResult_, titleCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setTitleCensorResult(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult && titleCensorResult) { DARABONBA_PTR_SET_RVALUE(titleCensorResult_, titleCensorResult) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vensorCensorResult Field Functions 
    bool hasVensorCensorResult() const { return this->vensorCensorResult_ != nullptr;};
    void deleteVensorCensorResult() { this->vensorCensorResult_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult & vensorCensorResult() const { DARABONBA_PTR_GET_CONST(vensorCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult vensorCensorResult() { DARABONBA_PTR_GET(vensorCensorResult_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setVensorCensorResult(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult & vensorCensorResult) { DARABONBA_PTR_SET_VALUE(vensorCensorResult_, vensorCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setVensorCensorResult(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult && vensorCensorResult) { DARABONBA_PTR_SET_RVALUE(vensorCensorResult_, vensorCensorResult) };


    // videoCensorConfig Field Functions 
    bool hasVideoCensorConfig() const { return this->videoCensorConfig_ != nullptr;};
    void deleteVideoCensorConfig() { this->videoCensorConfig_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig & videoCensorConfig() const { DARABONBA_PTR_GET_CONST(videoCensorConfig_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig videoCensorConfig() { DARABONBA_PTR_GET(videoCensorConfig_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setVideoCensorConfig(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig & videoCensorConfig) { DARABONBA_PTR_SET_VALUE(videoCensorConfig_, videoCensorConfig) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJob& setVideoCensorConfig(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig && videoCensorConfig) { DARABONBA_PTR_SET_RVALUE(videoCensorConfig_, videoCensorConfig) };


  protected:
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobAudioCensorResult> audioCensorResult_ = nullptr;
    // The moderation result of live comments.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobBarrageCensorResult> barrageCensorResult_ = nullptr;
    // The error code returned if the job fails. This parameter is not returned if the job is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The moderation results of thumbnails.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults> coverImageCensorResults_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The moderation result of the description.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobDescCensorResult> descCensorResult_ = nullptr;
    // The time when the job was completed.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The information about the job input.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobInput> input_ = nullptr;
    // The ID of the content moderation job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The error message returned if the job fails. This parameter is not returned if the job is successful.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the MPS queue that is used to run the job.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The status of the job.
    std::shared_ptr<string> state_ = nullptr;
    // The recommended subsequent operation. Valid values:
    // 
    // *   **pass**: The content passes the moderation.
    // *   **review**: The content needs to be manually reviewed again.
    // *   **block**: The content needs to be blocked.
    std::shared_ptr<string> suggestion_ = nullptr;
    // The moderation result of the title.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobTitleCensorResult> titleCensorResult_ = nullptr;
    // The custom data.
    std::shared_ptr<string> userData_ = nullptr;
    // The moderation results of the video.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVensorCensorResult> vensorCensorResult_ = nullptr;
    // The video moderation configurations.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig> videoCensorConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
