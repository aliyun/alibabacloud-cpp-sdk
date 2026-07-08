// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncCreateClipsTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncCreateClipsTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptMode, adaptMode_);
      DARABONBA_PTR_TO_JSON(Alignment, alignment_);
      DARABONBA_PTR_TO_JSON(CloseMusic, closeMusic_);
      DARABONBA_PTR_TO_JSON(CloseSubtitle, closeSubtitle_);
      DARABONBA_PTR_TO_JSON(CloseVoice, closeVoice_);
      DARABONBA_PTR_TO_JSON(ClosingCreditsUrl, closingCreditsUrl_);
      DARABONBA_PTR_TO_JSON(ColorWords, colorWordsShrink_);
      DARABONBA_PTR_TO_JSON(CosyVoiceAppKey, cosyVoiceAppKey_);
      DARABONBA_PTR_TO_JSON(CosyVoiceToken, cosyVoiceToken_);
      DARABONBA_PTR_TO_JSON(CustomVoiceStyle, customVoiceStyle_);
      DARABONBA_PTR_TO_JSON(CustomVoiceUrl, customVoiceUrl_);
      DARABONBA_PTR_TO_JSON(CustomVoiceVolume, customVoiceVolume_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(HighDefSourceVideos, highDefSourceVideosShrink_);
      DARABONBA_PTR_TO_JSON(MusicStyle, musicStyle_);
      DARABONBA_PTR_TO_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_TO_JSON(MusicVolume, musicVolume_);
      DARABONBA_PTR_TO_JSON(OpeningCreditsUrl, openingCreditsUrl_);
      DARABONBA_PTR_TO_JSON(Stickers, stickersShrink_);
      DARABONBA_PTR_TO_JSON(SubtitleFontSize, subtitleFontSize_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TextWidth, textWidth_);
      DARABONBA_PTR_TO_JSON(VoiceStyle, voiceStyle_);
      DARABONBA_PTR_TO_JSON(VoiceVolume, voiceVolume_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncCreateClipsTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptMode, adaptMode_);
      DARABONBA_PTR_FROM_JSON(Alignment, alignment_);
      DARABONBA_PTR_FROM_JSON(CloseMusic, closeMusic_);
      DARABONBA_PTR_FROM_JSON(CloseSubtitle, closeSubtitle_);
      DARABONBA_PTR_FROM_JSON(CloseVoice, closeVoice_);
      DARABONBA_PTR_FROM_JSON(ClosingCreditsUrl, closingCreditsUrl_);
      DARABONBA_PTR_FROM_JSON(ColorWords, colorWordsShrink_);
      DARABONBA_PTR_FROM_JSON(CosyVoiceAppKey, cosyVoiceAppKey_);
      DARABONBA_PTR_FROM_JSON(CosyVoiceToken, cosyVoiceToken_);
      DARABONBA_PTR_FROM_JSON(CustomVoiceStyle, customVoiceStyle_);
      DARABONBA_PTR_FROM_JSON(CustomVoiceUrl, customVoiceUrl_);
      DARABONBA_PTR_FROM_JSON(CustomVoiceVolume, customVoiceVolume_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(HighDefSourceVideos, highDefSourceVideosShrink_);
      DARABONBA_PTR_FROM_JSON(MusicStyle, musicStyle_);
      DARABONBA_PTR_FROM_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_FROM_JSON(MusicVolume, musicVolume_);
      DARABONBA_PTR_FROM_JSON(OpeningCreditsUrl, openingCreditsUrl_);
      DARABONBA_PTR_FROM_JSON(Stickers, stickersShrink_);
      DARABONBA_PTR_FROM_JSON(SubtitleFontSize, subtitleFontSize_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TextWidth, textWidth_);
      DARABONBA_PTR_FROM_JSON(VoiceStyle, voiceStyle_);
      DARABONBA_PTR_FROM_JSON(VoiceVolume, voiceVolume_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncCreateClipsTaskShrinkRequest() = default ;
    AsyncCreateClipsTaskShrinkRequest(const AsyncCreateClipsTaskShrinkRequest &) = default ;
    AsyncCreateClipsTaskShrinkRequest(AsyncCreateClipsTaskShrinkRequest &&) = default ;
    AsyncCreateClipsTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncCreateClipsTaskShrinkRequest() = default ;
    AsyncCreateClipsTaskShrinkRequest& operator=(const AsyncCreateClipsTaskShrinkRequest &) = default ;
    AsyncCreateClipsTaskShrinkRequest& operator=(AsyncCreateClipsTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptMode_ == nullptr
        && this->alignment_ == nullptr && this->closeMusic_ == nullptr && this->closeSubtitle_ == nullptr && this->closeVoice_ == nullptr && this->closingCreditsUrl_ == nullptr
        && this->colorWordsShrink_ == nullptr && this->cosyVoiceAppKey_ == nullptr && this->cosyVoiceToken_ == nullptr && this->customVoiceStyle_ == nullptr && this->customVoiceUrl_ == nullptr
        && this->customVoiceVolume_ == nullptr && this->height_ == nullptr && this->highDefSourceVideosShrink_ == nullptr && this->musicStyle_ == nullptr && this->musicUrl_ == nullptr
        && this->musicVolume_ == nullptr && this->openingCreditsUrl_ == nullptr && this->stickersShrink_ == nullptr && this->subtitleFontSize_ == nullptr && this->taskId_ == nullptr
        && this->textWidth_ == nullptr && this->voiceStyle_ == nullptr && this->voiceVolume_ == nullptr && this->width_ == nullptr && this->workspaceId_ == nullptr; };
    // adaptMode Field Functions 
    bool hasAdaptMode() const { return this->adaptMode_ != nullptr;};
    void deleteAdaptMode() { this->adaptMode_ = nullptr;};
    inline string getAdaptMode() const { DARABONBA_PTR_GET_DEFAULT(adaptMode_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setAdaptMode(string adaptMode) { DARABONBA_PTR_SET_VALUE(adaptMode_, adaptMode) };


    // alignment Field Functions 
    bool hasAlignment() const { return this->alignment_ != nullptr;};
    void deleteAlignment() { this->alignment_ = nullptr;};
    inline string getAlignment() const { DARABONBA_PTR_GET_DEFAULT(alignment_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setAlignment(string alignment) { DARABONBA_PTR_SET_VALUE(alignment_, alignment) };


    // closeMusic Field Functions 
    bool hasCloseMusic() const { return this->closeMusic_ != nullptr;};
    void deleteCloseMusic() { this->closeMusic_ = nullptr;};
    inline bool getCloseMusic() const { DARABONBA_PTR_GET_DEFAULT(closeMusic_, false) };
    inline AsyncCreateClipsTaskShrinkRequest& setCloseMusic(bool closeMusic) { DARABONBA_PTR_SET_VALUE(closeMusic_, closeMusic) };


    // closeSubtitle Field Functions 
    bool hasCloseSubtitle() const { return this->closeSubtitle_ != nullptr;};
    void deleteCloseSubtitle() { this->closeSubtitle_ = nullptr;};
    inline bool getCloseSubtitle() const { DARABONBA_PTR_GET_DEFAULT(closeSubtitle_, false) };
    inline AsyncCreateClipsTaskShrinkRequest& setCloseSubtitle(bool closeSubtitle) { DARABONBA_PTR_SET_VALUE(closeSubtitle_, closeSubtitle) };


    // closeVoice Field Functions 
    bool hasCloseVoice() const { return this->closeVoice_ != nullptr;};
    void deleteCloseVoice() { this->closeVoice_ = nullptr;};
    inline bool getCloseVoice() const { DARABONBA_PTR_GET_DEFAULT(closeVoice_, false) };
    inline AsyncCreateClipsTaskShrinkRequest& setCloseVoice(bool closeVoice) { DARABONBA_PTR_SET_VALUE(closeVoice_, closeVoice) };


    // closingCreditsUrl Field Functions 
    bool hasClosingCreditsUrl() const { return this->closingCreditsUrl_ != nullptr;};
    void deleteClosingCreditsUrl() { this->closingCreditsUrl_ = nullptr;};
    inline string getClosingCreditsUrl() const { DARABONBA_PTR_GET_DEFAULT(closingCreditsUrl_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setClosingCreditsUrl(string closingCreditsUrl) { DARABONBA_PTR_SET_VALUE(closingCreditsUrl_, closingCreditsUrl) };


    // colorWordsShrink Field Functions 
    bool hasColorWordsShrink() const { return this->colorWordsShrink_ != nullptr;};
    void deleteColorWordsShrink() { this->colorWordsShrink_ = nullptr;};
    inline string getColorWordsShrink() const { DARABONBA_PTR_GET_DEFAULT(colorWordsShrink_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setColorWordsShrink(string colorWordsShrink) { DARABONBA_PTR_SET_VALUE(colorWordsShrink_, colorWordsShrink) };


    // cosyVoiceAppKey Field Functions 
    bool hasCosyVoiceAppKey() const { return this->cosyVoiceAppKey_ != nullptr;};
    void deleteCosyVoiceAppKey() { this->cosyVoiceAppKey_ = nullptr;};
    inline string getCosyVoiceAppKey() const { DARABONBA_PTR_GET_DEFAULT(cosyVoiceAppKey_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setCosyVoiceAppKey(string cosyVoiceAppKey) { DARABONBA_PTR_SET_VALUE(cosyVoiceAppKey_, cosyVoiceAppKey) };


    // cosyVoiceToken Field Functions 
    bool hasCosyVoiceToken() const { return this->cosyVoiceToken_ != nullptr;};
    void deleteCosyVoiceToken() { this->cosyVoiceToken_ = nullptr;};
    inline string getCosyVoiceToken() const { DARABONBA_PTR_GET_DEFAULT(cosyVoiceToken_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setCosyVoiceToken(string cosyVoiceToken) { DARABONBA_PTR_SET_VALUE(cosyVoiceToken_, cosyVoiceToken) };


    // customVoiceStyle Field Functions 
    bool hasCustomVoiceStyle() const { return this->customVoiceStyle_ != nullptr;};
    void deleteCustomVoiceStyle() { this->customVoiceStyle_ = nullptr;};
    inline string getCustomVoiceStyle() const { DARABONBA_PTR_GET_DEFAULT(customVoiceStyle_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setCustomVoiceStyle(string customVoiceStyle) { DARABONBA_PTR_SET_VALUE(customVoiceStyle_, customVoiceStyle) };


    // customVoiceUrl Field Functions 
    bool hasCustomVoiceUrl() const { return this->customVoiceUrl_ != nullptr;};
    void deleteCustomVoiceUrl() { this->customVoiceUrl_ = nullptr;};
    inline string getCustomVoiceUrl() const { DARABONBA_PTR_GET_DEFAULT(customVoiceUrl_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setCustomVoiceUrl(string customVoiceUrl) { DARABONBA_PTR_SET_VALUE(customVoiceUrl_, customVoiceUrl) };


    // customVoiceVolume Field Functions 
    bool hasCustomVoiceVolume() const { return this->customVoiceVolume_ != nullptr;};
    void deleteCustomVoiceVolume() { this->customVoiceVolume_ = nullptr;};
    inline int32_t getCustomVoiceVolume() const { DARABONBA_PTR_GET_DEFAULT(customVoiceVolume_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setCustomVoiceVolume(int32_t customVoiceVolume) { DARABONBA_PTR_SET_VALUE(customVoiceVolume_, customVoiceVolume) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // highDefSourceVideosShrink Field Functions 
    bool hasHighDefSourceVideosShrink() const { return this->highDefSourceVideosShrink_ != nullptr;};
    void deleteHighDefSourceVideosShrink() { this->highDefSourceVideosShrink_ = nullptr;};
    inline string getHighDefSourceVideosShrink() const { DARABONBA_PTR_GET_DEFAULT(highDefSourceVideosShrink_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setHighDefSourceVideosShrink(string highDefSourceVideosShrink) { DARABONBA_PTR_SET_VALUE(highDefSourceVideosShrink_, highDefSourceVideosShrink) };


    // musicStyle Field Functions 
    bool hasMusicStyle() const { return this->musicStyle_ != nullptr;};
    void deleteMusicStyle() { this->musicStyle_ = nullptr;};
    inline string getMusicStyle() const { DARABONBA_PTR_GET_DEFAULT(musicStyle_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setMusicStyle(string musicStyle) { DARABONBA_PTR_SET_VALUE(musicStyle_, musicStyle) };


    // musicUrl Field Functions 
    bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
    void deleteMusicUrl() { this->musicUrl_ = nullptr;};
    inline string getMusicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


    // musicVolume Field Functions 
    bool hasMusicVolume() const { return this->musicVolume_ != nullptr;};
    void deleteMusicVolume() { this->musicVolume_ = nullptr;};
    inline int32_t getMusicVolume() const { DARABONBA_PTR_GET_DEFAULT(musicVolume_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setMusicVolume(int32_t musicVolume) { DARABONBA_PTR_SET_VALUE(musicVolume_, musicVolume) };


    // openingCreditsUrl Field Functions 
    bool hasOpeningCreditsUrl() const { return this->openingCreditsUrl_ != nullptr;};
    void deleteOpeningCreditsUrl() { this->openingCreditsUrl_ = nullptr;};
    inline string getOpeningCreditsUrl() const { DARABONBA_PTR_GET_DEFAULT(openingCreditsUrl_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setOpeningCreditsUrl(string openingCreditsUrl) { DARABONBA_PTR_SET_VALUE(openingCreditsUrl_, openingCreditsUrl) };


    // stickersShrink Field Functions 
    bool hasStickersShrink() const { return this->stickersShrink_ != nullptr;};
    void deleteStickersShrink() { this->stickersShrink_ = nullptr;};
    inline string getStickersShrink() const { DARABONBA_PTR_GET_DEFAULT(stickersShrink_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setStickersShrink(string stickersShrink) { DARABONBA_PTR_SET_VALUE(stickersShrink_, stickersShrink) };


    // subtitleFontSize Field Functions 
    bool hasSubtitleFontSize() const { return this->subtitleFontSize_ != nullptr;};
    void deleteSubtitleFontSize() { this->subtitleFontSize_ = nullptr;};
    inline int32_t getSubtitleFontSize() const { DARABONBA_PTR_GET_DEFAULT(subtitleFontSize_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setSubtitleFontSize(int32_t subtitleFontSize) { DARABONBA_PTR_SET_VALUE(subtitleFontSize_, subtitleFontSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // textWidth Field Functions 
    bool hasTextWidth() const { return this->textWidth_ != nullptr;};
    void deleteTextWidth() { this->textWidth_ = nullptr;};
    inline string getTextWidth() const { DARABONBA_PTR_GET_DEFAULT(textWidth_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setTextWidth(string textWidth) { DARABONBA_PTR_SET_VALUE(textWidth_, textWidth) };


    // voiceStyle Field Functions 
    bool hasVoiceStyle() const { return this->voiceStyle_ != nullptr;};
    void deleteVoiceStyle() { this->voiceStyle_ = nullptr;};
    inline string getVoiceStyle() const { DARABONBA_PTR_GET_DEFAULT(voiceStyle_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setVoiceStyle(string voiceStyle) { DARABONBA_PTR_SET_VALUE(voiceStyle_, voiceStyle) };


    // voiceVolume Field Functions 
    bool hasVoiceVolume() const { return this->voiceVolume_ != nullptr;};
    void deleteVoiceVolume() { this->voiceVolume_ = nullptr;};
    inline int32_t getVoiceVolume() const { DARABONBA_PTR_GET_DEFAULT(voiceVolume_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setVoiceVolume(int32_t voiceVolume) { DARABONBA_PTR_SET_VALUE(voiceVolume_, voiceVolume) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> adaptMode_ {};
    shared_ptr<string> alignment_ {};
    // Specifies whether to disable the background music.
    shared_ptr<bool> closeMusic_ {};
    // Specifies whether to disable the subtitles.
    shared_ptr<bool> closeSubtitle_ {};
    // Specifies whether to disable the narration voice.
    shared_ptr<bool> closeVoice_ {};
    // The URL of the closing credits video.
    shared_ptr<string> closingCreditsUrl_ {};
    // The array of animated text elements.
    shared_ptr<string> colorWordsShrink_ {};
    // The AppKey of CosyVoice.
    shared_ptr<string> cosyVoiceAppKey_ {};
    // The token of CosyVoice.
    shared_ptr<string> cosyVoiceToken_ {};
    // The voice tone of CosyVoice.
    shared_ptr<string> customVoiceStyle_ {};
    // The URL of the custom audio track.
    shared_ptr<string> customVoiceUrl_ {};
    // The volume of the custom audio track.
    shared_ptr<int32_t> customVoiceVolume_ {};
    // The height of the video.
    shared_ptr<int32_t> height_ {};
    // The list of high-definition video structures.
    shared_ptr<string> highDefSourceVideosShrink_ {};
    // The type of recommended music.
    shared_ptr<string> musicStyle_ {};
    // The URL of the background music.
    shared_ptr<string> musicUrl_ {};
    // The volume of the background music.
    shared_ptr<int32_t> musicVolume_ {};
    // The URL of the opening credits video.
    shared_ptr<string> openingCreditsUrl_ {};
    // The array of sticker structures.
    shared_ptr<string> stickersShrink_ {};
    // The font size of the subtitles.
    shared_ptr<int32_t> subtitleFontSize_ {};
    // The unique ID of the task.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<string> textWidth_ {};
    // The type of narration voice.
    shared_ptr<string> voiceStyle_ {};
    // The volume of the narration voice.
    shared_ptr<int32_t> voiceVolume_ {};
    // The width of the video.
    shared_ptr<int32_t> width_ {};
    // The [Bailian workspace ID](https://help.aliyun.com/document_detail/2782167.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
