// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncCreateClipsTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncCreateClipsTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloseMusic, closeMusic_);
      DARABONBA_PTR_TO_JSON(CloseSubtitle, closeSubtitle_);
      DARABONBA_PTR_TO_JSON(CloseVoice, closeVoice_);
      DARABONBA_PTR_TO_JSON(ColorWords, colorWords_);
      DARABONBA_PTR_TO_JSON(CustomVoiceUrl, customVoiceUrl_);
      DARABONBA_PTR_TO_JSON(CustomVoiceVolume, customVoiceVolume_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_TO_JSON(MusicVolume, musicVolume_);
      DARABONBA_PTR_TO_JSON(Stickers, stickers_);
      DARABONBA_PTR_TO_JSON(SubtitleFontSize, subtitleFontSize_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VoiceStyle, voiceStyle_);
      DARABONBA_PTR_TO_JSON(VoiceVolume, voiceVolume_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncCreateClipsTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloseMusic, closeMusic_);
      DARABONBA_PTR_FROM_JSON(CloseSubtitle, closeSubtitle_);
      DARABONBA_PTR_FROM_JSON(CloseVoice, closeVoice_);
      DARABONBA_PTR_FROM_JSON(ColorWords, colorWords_);
      DARABONBA_PTR_FROM_JSON(CustomVoiceUrl, customVoiceUrl_);
      DARABONBA_PTR_FROM_JSON(CustomVoiceVolume, customVoiceVolume_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_FROM_JSON(MusicVolume, musicVolume_);
      DARABONBA_PTR_FROM_JSON(Stickers, stickers_);
      DARABONBA_PTR_FROM_JSON(SubtitleFontSize, subtitleFontSize_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VoiceStyle, voiceStyle_);
      DARABONBA_PTR_FROM_JSON(VoiceVolume, voiceVolume_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncCreateClipsTaskRequest() = default ;
    AsyncCreateClipsTaskRequest(const AsyncCreateClipsTaskRequest &) = default ;
    AsyncCreateClipsTaskRequest(AsyncCreateClipsTaskRequest &&) = default ;
    AsyncCreateClipsTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncCreateClipsTaskRequest() = default ;
    AsyncCreateClipsTaskRequest& operator=(const AsyncCreateClipsTaskRequest &) = default ;
    AsyncCreateClipsTaskRequest& operator=(AsyncCreateClipsTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Stickers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Stickers& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(DyncFrames, dyncFrames_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(TimelineIn, timelineIn_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, Stickers& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(DyncFrames, dyncFrames_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(TimelineIn, timelineIn_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
      };
      Stickers() = default ;
      Stickers(const Stickers &) = default ;
      Stickers(Stickers &&) = default ;
      Stickers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Stickers() = default ;
      Stickers& operator=(const Stickers &) = default ;
      Stickers& operator=(Stickers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->dyncFrames_ == nullptr && this->height_ == nullptr && this->timelineIn_ == nullptr && this->url_ == nullptr && this->width_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline Stickers& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // dyncFrames Field Functions 
      bool hasDyncFrames() const { return this->dyncFrames_ != nullptr;};
      void deleteDyncFrames() { this->dyncFrames_ = nullptr;};
      inline int32_t getDyncFrames() const { DARABONBA_PTR_GET_DEFAULT(dyncFrames_, 0) };
      inline Stickers& setDyncFrames(int32_t dyncFrames) { DARABONBA_PTR_SET_VALUE(dyncFrames_, dyncFrames) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
      inline Stickers& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // timelineIn Field Functions 
      bool hasTimelineIn() const { return this->timelineIn_ != nullptr;};
      void deleteTimelineIn() { this->timelineIn_ = nullptr;};
      inline int32_t getTimelineIn() const { DARABONBA_PTR_GET_DEFAULT(timelineIn_, 0) };
      inline Stickers& setTimelineIn(int32_t timelineIn) { DARABONBA_PTR_SET_VALUE(timelineIn_, timelineIn) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Stickers& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
      inline Stickers& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Stickers& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Stickers& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    protected:
      shared_ptr<int32_t> duration_ {};
      shared_ptr<int32_t> dyncFrames_ {};
      shared_ptr<int32_t> height_ {};
      shared_ptr<int32_t> timelineIn_ {};
      shared_ptr<string> url_ {};
      shared_ptr<int32_t> width_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
    };

    class ColorWords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ColorWords& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(EffectColorStyle, effectColorStyle_);
        DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
        DARABONBA_PTR_TO_JSON(TimelineIn, timelineIn_);
        DARABONBA_PTR_TO_JSON(TimelineOut, timelineOut_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, ColorWords& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(EffectColorStyle, effectColorStyle_);
        DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
        DARABONBA_PTR_FROM_JSON(TimelineIn, timelineIn_);
        DARABONBA_PTR_FROM_JSON(TimelineOut, timelineOut_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
      };
      ColorWords() = default ;
      ColorWords(const ColorWords &) = default ;
      ColorWords(ColorWords &&) = default ;
      ColorWords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ColorWords() = default ;
      ColorWords& operator=(const ColorWords &) = default ;
      ColorWords& operator=(ColorWords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->effectColorStyle_ == nullptr && this->fontSize_ == nullptr && this->timelineIn_ == nullptr && this->timelineOut_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ColorWords& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // effectColorStyle Field Functions 
      bool hasEffectColorStyle() const { return this->effectColorStyle_ != nullptr;};
      void deleteEffectColorStyle() { this->effectColorStyle_ = nullptr;};
      inline string getEffectColorStyle() const { DARABONBA_PTR_GET_DEFAULT(effectColorStyle_, "") };
      inline ColorWords& setEffectColorStyle(string effectColorStyle) { DARABONBA_PTR_SET_VALUE(effectColorStyle_, effectColorStyle) };


      // fontSize Field Functions 
      bool hasFontSize() const { return this->fontSize_ != nullptr;};
      void deleteFontSize() { this->fontSize_ = nullptr;};
      inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
      inline ColorWords& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


      // timelineIn Field Functions 
      bool hasTimelineIn() const { return this->timelineIn_ != nullptr;};
      void deleteTimelineIn() { this->timelineIn_ = nullptr;};
      inline int32_t getTimelineIn() const { DARABONBA_PTR_GET_DEFAULT(timelineIn_, 0) };
      inline ColorWords& setTimelineIn(int32_t timelineIn) { DARABONBA_PTR_SET_VALUE(timelineIn_, timelineIn) };


      // timelineOut Field Functions 
      bool hasTimelineOut() const { return this->timelineOut_ != nullptr;};
      void deleteTimelineOut() { this->timelineOut_ = nullptr;};
      inline int32_t getTimelineOut() const { DARABONBA_PTR_GET_DEFAULT(timelineOut_, 0) };
      inline ColorWords& setTimelineOut(int32_t timelineOut) { DARABONBA_PTR_SET_VALUE(timelineOut_, timelineOut) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline ColorWords& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline ColorWords& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> effectColorStyle_ {};
      shared_ptr<int32_t> fontSize_ {};
      shared_ptr<int32_t> timelineIn_ {};
      shared_ptr<int32_t> timelineOut_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
    };

    virtual bool empty() const override { return this->closeMusic_ == nullptr
        && this->closeSubtitle_ == nullptr && this->closeVoice_ == nullptr && this->colorWords_ == nullptr && this->customVoiceUrl_ == nullptr && this->customVoiceVolume_ == nullptr
        && this->height_ == nullptr && this->musicUrl_ == nullptr && this->musicVolume_ == nullptr && this->stickers_ == nullptr && this->subtitleFontSize_ == nullptr
        && this->taskId_ == nullptr && this->voiceStyle_ == nullptr && this->voiceVolume_ == nullptr && this->width_ == nullptr && this->workspaceId_ == nullptr; };
    // closeMusic Field Functions 
    bool hasCloseMusic() const { return this->closeMusic_ != nullptr;};
    void deleteCloseMusic() { this->closeMusic_ = nullptr;};
    inline bool getCloseMusic() const { DARABONBA_PTR_GET_DEFAULT(closeMusic_, false) };
    inline AsyncCreateClipsTaskRequest& setCloseMusic(bool closeMusic) { DARABONBA_PTR_SET_VALUE(closeMusic_, closeMusic) };


    // closeSubtitle Field Functions 
    bool hasCloseSubtitle() const { return this->closeSubtitle_ != nullptr;};
    void deleteCloseSubtitle() { this->closeSubtitle_ = nullptr;};
    inline bool getCloseSubtitle() const { DARABONBA_PTR_GET_DEFAULT(closeSubtitle_, false) };
    inline AsyncCreateClipsTaskRequest& setCloseSubtitle(bool closeSubtitle) { DARABONBA_PTR_SET_VALUE(closeSubtitle_, closeSubtitle) };


    // closeVoice Field Functions 
    bool hasCloseVoice() const { return this->closeVoice_ != nullptr;};
    void deleteCloseVoice() { this->closeVoice_ = nullptr;};
    inline bool getCloseVoice() const { DARABONBA_PTR_GET_DEFAULT(closeVoice_, false) };
    inline AsyncCreateClipsTaskRequest& setCloseVoice(bool closeVoice) { DARABONBA_PTR_SET_VALUE(closeVoice_, closeVoice) };


    // colorWords Field Functions 
    bool hasColorWords() const { return this->colorWords_ != nullptr;};
    void deleteColorWords() { this->colorWords_ = nullptr;};
    inline const vector<AsyncCreateClipsTaskRequest::ColorWords> & getColorWords() const { DARABONBA_PTR_GET_CONST(colorWords_, vector<AsyncCreateClipsTaskRequest::ColorWords>) };
    inline vector<AsyncCreateClipsTaskRequest::ColorWords> getColorWords() { DARABONBA_PTR_GET(colorWords_, vector<AsyncCreateClipsTaskRequest::ColorWords>) };
    inline AsyncCreateClipsTaskRequest& setColorWords(const vector<AsyncCreateClipsTaskRequest::ColorWords> & colorWords) { DARABONBA_PTR_SET_VALUE(colorWords_, colorWords) };
    inline AsyncCreateClipsTaskRequest& setColorWords(vector<AsyncCreateClipsTaskRequest::ColorWords> && colorWords) { DARABONBA_PTR_SET_RVALUE(colorWords_, colorWords) };


    // customVoiceUrl Field Functions 
    bool hasCustomVoiceUrl() const { return this->customVoiceUrl_ != nullptr;};
    void deleteCustomVoiceUrl() { this->customVoiceUrl_ = nullptr;};
    inline string getCustomVoiceUrl() const { DARABONBA_PTR_GET_DEFAULT(customVoiceUrl_, "") };
    inline AsyncCreateClipsTaskRequest& setCustomVoiceUrl(string customVoiceUrl) { DARABONBA_PTR_SET_VALUE(customVoiceUrl_, customVoiceUrl) };


    // customVoiceVolume Field Functions 
    bool hasCustomVoiceVolume() const { return this->customVoiceVolume_ != nullptr;};
    void deleteCustomVoiceVolume() { this->customVoiceVolume_ = nullptr;};
    inline int32_t getCustomVoiceVolume() const { DARABONBA_PTR_GET_DEFAULT(customVoiceVolume_, 0) };
    inline AsyncCreateClipsTaskRequest& setCustomVoiceVolume(int32_t customVoiceVolume) { DARABONBA_PTR_SET_VALUE(customVoiceVolume_, customVoiceVolume) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline AsyncCreateClipsTaskRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // musicUrl Field Functions 
    bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
    void deleteMusicUrl() { this->musicUrl_ = nullptr;};
    inline string getMusicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
    inline AsyncCreateClipsTaskRequest& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


    // musicVolume Field Functions 
    bool hasMusicVolume() const { return this->musicVolume_ != nullptr;};
    void deleteMusicVolume() { this->musicVolume_ = nullptr;};
    inline int32_t getMusicVolume() const { DARABONBA_PTR_GET_DEFAULT(musicVolume_, 0) };
    inline AsyncCreateClipsTaskRequest& setMusicVolume(int32_t musicVolume) { DARABONBA_PTR_SET_VALUE(musicVolume_, musicVolume) };


    // stickers Field Functions 
    bool hasStickers() const { return this->stickers_ != nullptr;};
    void deleteStickers() { this->stickers_ = nullptr;};
    inline const vector<AsyncCreateClipsTaskRequest::Stickers> & getStickers() const { DARABONBA_PTR_GET_CONST(stickers_, vector<AsyncCreateClipsTaskRequest::Stickers>) };
    inline vector<AsyncCreateClipsTaskRequest::Stickers> getStickers() { DARABONBA_PTR_GET(stickers_, vector<AsyncCreateClipsTaskRequest::Stickers>) };
    inline AsyncCreateClipsTaskRequest& setStickers(const vector<AsyncCreateClipsTaskRequest::Stickers> & stickers) { DARABONBA_PTR_SET_VALUE(stickers_, stickers) };
    inline AsyncCreateClipsTaskRequest& setStickers(vector<AsyncCreateClipsTaskRequest::Stickers> && stickers) { DARABONBA_PTR_SET_RVALUE(stickers_, stickers) };


    // subtitleFontSize Field Functions 
    bool hasSubtitleFontSize() const { return this->subtitleFontSize_ != nullptr;};
    void deleteSubtitleFontSize() { this->subtitleFontSize_ = nullptr;};
    inline int32_t getSubtitleFontSize() const { DARABONBA_PTR_GET_DEFAULT(subtitleFontSize_, 0) };
    inline AsyncCreateClipsTaskRequest& setSubtitleFontSize(int32_t subtitleFontSize) { DARABONBA_PTR_SET_VALUE(subtitleFontSize_, subtitleFontSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncCreateClipsTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // voiceStyle Field Functions 
    bool hasVoiceStyle() const { return this->voiceStyle_ != nullptr;};
    void deleteVoiceStyle() { this->voiceStyle_ = nullptr;};
    inline string getVoiceStyle() const { DARABONBA_PTR_GET_DEFAULT(voiceStyle_, "") };
    inline AsyncCreateClipsTaskRequest& setVoiceStyle(string voiceStyle) { DARABONBA_PTR_SET_VALUE(voiceStyle_, voiceStyle) };


    // voiceVolume Field Functions 
    bool hasVoiceVolume() const { return this->voiceVolume_ != nullptr;};
    void deleteVoiceVolume() { this->voiceVolume_ = nullptr;};
    inline int32_t getVoiceVolume() const { DARABONBA_PTR_GET_DEFAULT(voiceVolume_, 0) };
    inline AsyncCreateClipsTaskRequest& setVoiceVolume(int32_t voiceVolume) { DARABONBA_PTR_SET_VALUE(voiceVolume_, voiceVolume) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline AsyncCreateClipsTaskRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncCreateClipsTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<bool> closeMusic_ {};
    shared_ptr<bool> closeSubtitle_ {};
    shared_ptr<bool> closeVoice_ {};
    shared_ptr<vector<AsyncCreateClipsTaskRequest::ColorWords>> colorWords_ {};
    shared_ptr<string> customVoiceUrl_ {};
    shared_ptr<int32_t> customVoiceVolume_ {};
    shared_ptr<int32_t> height_ {};
    shared_ptr<string> musicUrl_ {};
    shared_ptr<int32_t> musicVolume_ {};
    shared_ptr<vector<AsyncCreateClipsTaskRequest::Stickers>> stickers_ {};
    shared_ptr<int32_t> subtitleFontSize_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<string> voiceStyle_ {};
    shared_ptr<int32_t> voiceVolume_ {};
    shared_ptr<int32_t> width_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
