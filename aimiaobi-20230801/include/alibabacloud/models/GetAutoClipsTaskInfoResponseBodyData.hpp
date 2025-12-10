// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAutoClipsTaskInfoResponseBodyDataColorWords.hpp>
#include <alibabacloud/models/GetAutoClipsTaskInfoResponseBodyDataStickers.hpp>
#include <alibabacloud/models/GetAutoClipsTaskInfoResponseBodyDataTimelines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetAutoClipsTaskInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoClipsTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CloseMusic, closeMusic_);
      DARABONBA_PTR_TO_JSON(CloseSubtitle, closeSubtitle_);
      DARABONBA_PTR_TO_JSON(CloseVoice, closeVoice_);
      DARABONBA_PTR_TO_JSON(ColorWords, colorWords_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CustomVoiceUrl, customVoiceUrl_);
      DARABONBA_PTR_TO_JSON(CustomVoiceVolume, customVoiceVolume_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(MediaCloudTimeline, mediaCloudTimeline_);
      DARABONBA_PTR_TO_JSON(MusicStyle, musicStyle_);
      DARABONBA_PTR_TO_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_TO_JSON(MusicVolume, musicVolume_);
      DARABONBA_PTR_TO_JSON(OutputVideoUrl, outputVideoUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(Stickers, stickers_);
      DARABONBA_PTR_TO_JSON(SubtitleFontSize, subtitleFontSize_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Timelines, timelines_);
      DARABONBA_PTR_TO_JSON(VoiceStyle, voiceStyle_);
      DARABONBA_PTR_TO_JSON(VoiceVolume, voiceVolume_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoClipsTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CloseMusic, closeMusic_);
      DARABONBA_PTR_FROM_JSON(CloseSubtitle, closeSubtitle_);
      DARABONBA_PTR_FROM_JSON(CloseVoice, closeVoice_);
      DARABONBA_PTR_FROM_JSON(ColorWords, colorWords_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CustomVoiceUrl, customVoiceUrl_);
      DARABONBA_PTR_FROM_JSON(CustomVoiceVolume, customVoiceVolume_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(MediaCloudTimeline, mediaCloudTimeline_);
      DARABONBA_PTR_FROM_JSON(MusicStyle, musicStyle_);
      DARABONBA_PTR_FROM_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_FROM_JSON(MusicVolume, musicVolume_);
      DARABONBA_PTR_FROM_JSON(OutputVideoUrl, outputVideoUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(Stickers, stickers_);
      DARABONBA_PTR_FROM_JSON(SubtitleFontSize, subtitleFontSize_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Timelines, timelines_);
      DARABONBA_PTR_FROM_JSON(VoiceStyle, voiceStyle_);
      DARABONBA_PTR_FROM_JSON(VoiceVolume, voiceVolume_);
    };
    GetAutoClipsTaskInfoResponseBodyData() = default ;
    GetAutoClipsTaskInfoResponseBodyData(const GetAutoClipsTaskInfoResponseBodyData &) = default ;
    GetAutoClipsTaskInfoResponseBodyData(GetAutoClipsTaskInfoResponseBodyData &&) = default ;
    GetAutoClipsTaskInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoClipsTaskInfoResponseBodyData() = default ;
    GetAutoClipsTaskInfoResponseBodyData& operator=(const GetAutoClipsTaskInfoResponseBodyData &) = default ;
    GetAutoClipsTaskInfoResponseBodyData& operator=(GetAutoClipsTaskInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->closeMusic_ == nullptr
        && return this->closeSubtitle_ == nullptr && return this->closeVoice_ == nullptr && return this->colorWords_ == nullptr && return this->content_ == nullptr && return this->customVoiceUrl_ == nullptr
        && return this->customVoiceVolume_ == nullptr && return this->errorMessage_ == nullptr && return this->mediaCloudTimeline_ == nullptr && return this->musicStyle_ == nullptr && return this->musicUrl_ == nullptr
        && return this->musicVolume_ == nullptr && return this->outputVideoUrl_ == nullptr && return this->status_ == nullptr && return this->step_ == nullptr && return this->stickers_ == nullptr
        && return this->subtitleFontSize_ == nullptr && return this->taskId_ == nullptr && return this->timelines_ == nullptr && return this->voiceStyle_ == nullptr && return this->voiceVolume_ == nullptr; };
    // closeMusic Field Functions 
    bool hasCloseMusic() const { return this->closeMusic_ != nullptr;};
    void deleteCloseMusic() { this->closeMusic_ = nullptr;};
    inline bool closeMusic() const { DARABONBA_PTR_GET_DEFAULT(closeMusic_, false) };
    inline GetAutoClipsTaskInfoResponseBodyData& setCloseMusic(bool closeMusic) { DARABONBA_PTR_SET_VALUE(closeMusic_, closeMusic) };


    // closeSubtitle Field Functions 
    bool hasCloseSubtitle() const { return this->closeSubtitle_ != nullptr;};
    void deleteCloseSubtitle() { this->closeSubtitle_ = nullptr;};
    inline bool closeSubtitle() const { DARABONBA_PTR_GET_DEFAULT(closeSubtitle_, false) };
    inline GetAutoClipsTaskInfoResponseBodyData& setCloseSubtitle(bool closeSubtitle) { DARABONBA_PTR_SET_VALUE(closeSubtitle_, closeSubtitle) };


    // closeVoice Field Functions 
    bool hasCloseVoice() const { return this->closeVoice_ != nullptr;};
    void deleteCloseVoice() { this->closeVoice_ = nullptr;};
    inline bool closeVoice() const { DARABONBA_PTR_GET_DEFAULT(closeVoice_, false) };
    inline GetAutoClipsTaskInfoResponseBodyData& setCloseVoice(bool closeVoice) { DARABONBA_PTR_SET_VALUE(closeVoice_, closeVoice) };


    // colorWords Field Functions 
    bool hasColorWords() const { return this->colorWords_ != nullptr;};
    void deleteColorWords() { this->colorWords_ = nullptr;};
    inline const vector<Models::GetAutoClipsTaskInfoResponseBodyDataColorWords> & colorWords() const { DARABONBA_PTR_GET_CONST(colorWords_, vector<Models::GetAutoClipsTaskInfoResponseBodyDataColorWords>) };
    inline vector<Models::GetAutoClipsTaskInfoResponseBodyDataColorWords> colorWords() { DARABONBA_PTR_GET(colorWords_, vector<Models::GetAutoClipsTaskInfoResponseBodyDataColorWords>) };
    inline GetAutoClipsTaskInfoResponseBodyData& setColorWords(const vector<Models::GetAutoClipsTaskInfoResponseBodyDataColorWords> & colorWords) { DARABONBA_PTR_SET_VALUE(colorWords_, colorWords) };
    inline GetAutoClipsTaskInfoResponseBodyData& setColorWords(vector<Models::GetAutoClipsTaskInfoResponseBodyDataColorWords> && colorWords) { DARABONBA_PTR_SET_RVALUE(colorWords_, colorWords) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // customVoiceUrl Field Functions 
    bool hasCustomVoiceUrl() const { return this->customVoiceUrl_ != nullptr;};
    void deleteCustomVoiceUrl() { this->customVoiceUrl_ = nullptr;};
    inline string customVoiceUrl() const { DARABONBA_PTR_GET_DEFAULT(customVoiceUrl_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setCustomVoiceUrl(string customVoiceUrl) { DARABONBA_PTR_SET_VALUE(customVoiceUrl_, customVoiceUrl) };


    // customVoiceVolume Field Functions 
    bool hasCustomVoiceVolume() const { return this->customVoiceVolume_ != nullptr;};
    void deleteCustomVoiceVolume() { this->customVoiceVolume_ = nullptr;};
    inline int32_t customVoiceVolume() const { DARABONBA_PTR_GET_DEFAULT(customVoiceVolume_, 0) };
    inline GetAutoClipsTaskInfoResponseBodyData& setCustomVoiceVolume(int32_t customVoiceVolume) { DARABONBA_PTR_SET_VALUE(customVoiceVolume_, customVoiceVolume) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // mediaCloudTimeline Field Functions 
    bool hasMediaCloudTimeline() const { return this->mediaCloudTimeline_ != nullptr;};
    void deleteMediaCloudTimeline() { this->mediaCloudTimeline_ = nullptr;};
    inline string mediaCloudTimeline() const { DARABONBA_PTR_GET_DEFAULT(mediaCloudTimeline_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setMediaCloudTimeline(string mediaCloudTimeline) { DARABONBA_PTR_SET_VALUE(mediaCloudTimeline_, mediaCloudTimeline) };


    // musicStyle Field Functions 
    bool hasMusicStyle() const { return this->musicStyle_ != nullptr;};
    void deleteMusicStyle() { this->musicStyle_ = nullptr;};
    inline string musicStyle() const { DARABONBA_PTR_GET_DEFAULT(musicStyle_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setMusicStyle(string musicStyle) { DARABONBA_PTR_SET_VALUE(musicStyle_, musicStyle) };


    // musicUrl Field Functions 
    bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
    void deleteMusicUrl() { this->musicUrl_ = nullptr;};
    inline string musicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


    // musicVolume Field Functions 
    bool hasMusicVolume() const { return this->musicVolume_ != nullptr;};
    void deleteMusicVolume() { this->musicVolume_ = nullptr;};
    inline int32_t musicVolume() const { DARABONBA_PTR_GET_DEFAULT(musicVolume_, 0) };
    inline GetAutoClipsTaskInfoResponseBodyData& setMusicVolume(int32_t musicVolume) { DARABONBA_PTR_SET_VALUE(musicVolume_, musicVolume) };


    // outputVideoUrl Field Functions 
    bool hasOutputVideoUrl() const { return this->outputVideoUrl_ != nullptr;};
    void deleteOutputVideoUrl() { this->outputVideoUrl_ = nullptr;};
    inline string outputVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(outputVideoUrl_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setOutputVideoUrl(string outputVideoUrl) { DARABONBA_PTR_SET_VALUE(outputVideoUrl_, outputVideoUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAutoClipsTaskInfoResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // stickers Field Functions 
    bool hasStickers() const { return this->stickers_ != nullptr;};
    void deleteStickers() { this->stickers_ = nullptr;};
    inline const vector<Models::GetAutoClipsTaskInfoResponseBodyDataStickers> & stickers() const { DARABONBA_PTR_GET_CONST(stickers_, vector<Models::GetAutoClipsTaskInfoResponseBodyDataStickers>) };
    inline vector<Models::GetAutoClipsTaskInfoResponseBodyDataStickers> stickers() { DARABONBA_PTR_GET(stickers_, vector<Models::GetAutoClipsTaskInfoResponseBodyDataStickers>) };
    inline GetAutoClipsTaskInfoResponseBodyData& setStickers(const vector<Models::GetAutoClipsTaskInfoResponseBodyDataStickers> & stickers) { DARABONBA_PTR_SET_VALUE(stickers_, stickers) };
    inline GetAutoClipsTaskInfoResponseBodyData& setStickers(vector<Models::GetAutoClipsTaskInfoResponseBodyDataStickers> && stickers) { DARABONBA_PTR_SET_RVALUE(stickers_, stickers) };


    // subtitleFontSize Field Functions 
    bool hasSubtitleFontSize() const { return this->subtitleFontSize_ != nullptr;};
    void deleteSubtitleFontSize() { this->subtitleFontSize_ = nullptr;};
    inline int32_t subtitleFontSize() const { DARABONBA_PTR_GET_DEFAULT(subtitleFontSize_, 0) };
    inline GetAutoClipsTaskInfoResponseBodyData& setSubtitleFontSize(int32_t subtitleFontSize) { DARABONBA_PTR_SET_VALUE(subtitleFontSize_, subtitleFontSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timelines Field Functions 
    bool hasTimelines() const { return this->timelines_ != nullptr;};
    void deleteTimelines() { this->timelines_ = nullptr;};
    inline const vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelines> & timelines() const { DARABONBA_PTR_GET_CONST(timelines_, vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelines>) };
    inline vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelines> timelines() { DARABONBA_PTR_GET(timelines_, vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelines>) };
    inline GetAutoClipsTaskInfoResponseBodyData& setTimelines(const vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelines> & timelines) { DARABONBA_PTR_SET_VALUE(timelines_, timelines) };
    inline GetAutoClipsTaskInfoResponseBodyData& setTimelines(vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelines> && timelines) { DARABONBA_PTR_SET_RVALUE(timelines_, timelines) };


    // voiceStyle Field Functions 
    bool hasVoiceStyle() const { return this->voiceStyle_ != nullptr;};
    void deleteVoiceStyle() { this->voiceStyle_ = nullptr;};
    inline string voiceStyle() const { DARABONBA_PTR_GET_DEFAULT(voiceStyle_, "") };
    inline GetAutoClipsTaskInfoResponseBodyData& setVoiceStyle(string voiceStyle) { DARABONBA_PTR_SET_VALUE(voiceStyle_, voiceStyle) };


    // voiceVolume Field Functions 
    bool hasVoiceVolume() const { return this->voiceVolume_ != nullptr;};
    void deleteVoiceVolume() { this->voiceVolume_ = nullptr;};
    inline int32_t voiceVolume() const { DARABONBA_PTR_GET_DEFAULT(voiceVolume_, 0) };
    inline GetAutoClipsTaskInfoResponseBodyData& setVoiceVolume(int32_t voiceVolume) { DARABONBA_PTR_SET_VALUE(voiceVolume_, voiceVolume) };


  protected:
    std::shared_ptr<bool> closeMusic_ = nullptr;
    std::shared_ptr<bool> closeSubtitle_ = nullptr;
    std::shared_ptr<bool> closeVoice_ = nullptr;
    std::shared_ptr<vector<Models::GetAutoClipsTaskInfoResponseBodyDataColorWords>> colorWords_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> customVoiceUrl_ = nullptr;
    std::shared_ptr<int32_t> customVoiceVolume_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> mediaCloudTimeline_ = nullptr;
    std::shared_ptr<string> musicStyle_ = nullptr;
    std::shared_ptr<string> musicUrl_ = nullptr;
    std::shared_ptr<int32_t> musicVolume_ = nullptr;
    std::shared_ptr<string> outputVideoUrl_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> step_ = nullptr;
    std::shared_ptr<vector<Models::GetAutoClipsTaskInfoResponseBodyDataStickers>> stickers_ = nullptr;
    std::shared_ptr<int32_t> subtitleFontSize_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelines>> timelines_ = nullptr;
    std::shared_ptr<string> voiceStyle_ = nullptr;
    std::shared_ptr<int32_t> voiceVolume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
