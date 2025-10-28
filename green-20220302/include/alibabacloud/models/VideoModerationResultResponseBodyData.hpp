// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataAudioResult.hpp>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AudioResult, audioResult_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(FrameResult, frameResult_);
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioResult, audioResult_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(FrameResult, frameResult_);
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    VideoModerationResultResponseBodyData() = default ;
    VideoModerationResultResponseBodyData(const VideoModerationResultResponseBodyData &) = default ;
    VideoModerationResultResponseBodyData(VideoModerationResultResponseBodyData &&) = default ;
    VideoModerationResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyData() = default ;
    VideoModerationResultResponseBodyData& operator=(const VideoModerationResultResponseBodyData &) = default ;
    VideoModerationResultResponseBodyData& operator=(VideoModerationResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioResult_ == nullptr
        && return this->dataId_ == nullptr && return this->frameResult_ == nullptr && return this->liveId_ == nullptr && return this->manualTaskId_ == nullptr && return this->riskLevel_ == nullptr
        && return this->taskId_ == nullptr; };
    // audioResult Field Functions 
    bool hasAudioResult() const { return this->audioResult_ != nullptr;};
    void deleteAudioResult() { this->audioResult_ = nullptr;};
    inline const Models::VideoModerationResultResponseBodyDataAudioResult & audioResult() const { DARABONBA_PTR_GET_CONST(audioResult_, Models::VideoModerationResultResponseBodyDataAudioResult) };
    inline Models::VideoModerationResultResponseBodyDataAudioResult audioResult() { DARABONBA_PTR_GET(audioResult_, Models::VideoModerationResultResponseBodyDataAudioResult) };
    inline VideoModerationResultResponseBodyData& setAudioResult(const Models::VideoModerationResultResponseBodyDataAudioResult & audioResult) { DARABONBA_PTR_SET_VALUE(audioResult_, audioResult) };
    inline VideoModerationResultResponseBodyData& setAudioResult(Models::VideoModerationResultResponseBodyDataAudioResult && audioResult) { DARABONBA_PTR_SET_RVALUE(audioResult_, audioResult) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline VideoModerationResultResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // frameResult Field Functions 
    bool hasFrameResult() const { return this->frameResult_ != nullptr;};
    void deleteFrameResult() { this->frameResult_ = nullptr;};
    inline const Models::VideoModerationResultResponseBodyDataFrameResult & frameResult() const { DARABONBA_PTR_GET_CONST(frameResult_, Models::VideoModerationResultResponseBodyDataFrameResult) };
    inline Models::VideoModerationResultResponseBodyDataFrameResult frameResult() { DARABONBA_PTR_GET(frameResult_, Models::VideoModerationResultResponseBodyDataFrameResult) };
    inline VideoModerationResultResponseBodyData& setFrameResult(const Models::VideoModerationResultResponseBodyDataFrameResult & frameResult) { DARABONBA_PTR_SET_VALUE(frameResult_, frameResult) };
    inline VideoModerationResultResponseBodyData& setFrameResult(Models::VideoModerationResultResponseBodyDataFrameResult && frameResult) { DARABONBA_PTR_SET_RVALUE(frameResult_, frameResult) };


    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline VideoModerationResultResponseBodyData& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // manualTaskId Field Functions 
    bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
    void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
    inline string manualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
    inline VideoModerationResultResponseBodyData& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline VideoModerationResultResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline VideoModerationResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The voice moderation results. The moderation results contain a structure.
    std::shared_ptr<Models::VideoModerationResultResponseBodyDataAudioResult> audioResult_ = nullptr;
    // The value of dataId that is specified in the API request. If this parameter is not specified in the API request, the dataId field is not available in the response.
    std::shared_ptr<string> dataId_ = nullptr;
    // The image moderation results. If the call is successful, the HTTP status code 200 and moderation results are returned. The moderation results contain a structure.
    std::shared_ptr<Models::VideoModerationResultResponseBodyDataFrameResult> frameResult_ = nullptr;
    // The unique ID of the live stream.
    std::shared_ptr<string> liveId_ = nullptr;
    std::shared_ptr<string> manualTaskId_ = nullptr;
    // Risk Level.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
