// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFORESPONSEBODY_HPP_
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
  class GetAutoClipsTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoClipsTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoClipsTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAutoClipsTaskInfoResponseBody() = default ;
    GetAutoClipsTaskInfoResponseBody(const GetAutoClipsTaskInfoResponseBody &) = default ;
    GetAutoClipsTaskInfoResponseBody(GetAutoClipsTaskInfoResponseBody &&) = default ;
    GetAutoClipsTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoClipsTaskInfoResponseBody() = default ;
    GetAutoClipsTaskInfoResponseBody& operator=(const GetAutoClipsTaskInfoResponseBody &) = default ;
    GetAutoClipsTaskInfoResponseBody& operator=(GetAutoClipsTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Timelines : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Timelines& obj) { 
          DARABONBA_PTR_TO_JSON(Clips, clips_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(TimelineId, timelineId_);
        };
        friend void from_json(const Darabonba::Json& j, Timelines& obj) { 
          DARABONBA_PTR_FROM_JSON(Clips, clips_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(TimelineId, timelineId_);
        };
        Timelines() = default ;
        Timelines(const Timelines &) = default ;
        Timelines(Timelines &&) = default ;
        Timelines(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Timelines() = default ;
        Timelines& operator=(const Timelines &) = default ;
        Timelines& operator=(Timelines &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Clips : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Clips& obj) { 
            DARABONBA_PTR_TO_JSON(ClipId, clipId_);
            DARABONBA_PTR_TO_JSON(ContentInner, contentInner_);
            DARABONBA_PTR_TO_JSON(In, in_);
            DARABONBA_PTR_TO_JSON(InEx, inEx_);
            DARABONBA_PTR_TO_JSON(Out, out_);
            DARABONBA_PTR_TO_JSON(OutEx, outEx_);
            DARABONBA_PTR_TO_JSON(VideoId, videoId_);
            DARABONBA_PTR_TO_JSON(VideoName, videoName_);
          };
          friend void from_json(const Darabonba::Json& j, Clips& obj) { 
            DARABONBA_PTR_FROM_JSON(ClipId, clipId_);
            DARABONBA_PTR_FROM_JSON(ContentInner, contentInner_);
            DARABONBA_PTR_FROM_JSON(In, in_);
            DARABONBA_PTR_FROM_JSON(InEx, inEx_);
            DARABONBA_PTR_FROM_JSON(Out, out_);
            DARABONBA_PTR_FROM_JSON(OutEx, outEx_);
            DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
            DARABONBA_PTR_FROM_JSON(VideoName, videoName_);
          };
          Clips() = default ;
          Clips(const Clips &) = default ;
          Clips(Clips &&) = default ;
          Clips(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Clips() = default ;
          Clips& operator=(const Clips &) = default ;
          Clips& operator=(Clips &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clipId_ == nullptr
        && this->contentInner_ == nullptr && this->in_ == nullptr && this->inEx_ == nullptr && this->out_ == nullptr && this->outEx_ == nullptr
        && this->videoId_ == nullptr && this->videoName_ == nullptr; };
          // clipId Field Functions 
          bool hasClipId() const { return this->clipId_ != nullptr;};
          void deleteClipId() { this->clipId_ = nullptr;};
          inline string getClipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
          inline Clips& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


          // contentInner Field Functions 
          bool hasContentInner() const { return this->contentInner_ != nullptr;};
          void deleteContentInner() { this->contentInner_ = nullptr;};
          inline string getContentInner() const { DARABONBA_PTR_GET_DEFAULT(contentInner_, "") };
          inline Clips& setContentInner(string contentInner) { DARABONBA_PTR_SET_VALUE(contentInner_, contentInner) };


          // in Field Functions 
          bool hasIn() const { return this->in_ != nullptr;};
          void deleteIn() { this->in_ = nullptr;};
          inline int32_t getIn() const { DARABONBA_PTR_GET_DEFAULT(in_, 0) };
          inline Clips& setIn(int32_t in) { DARABONBA_PTR_SET_VALUE(in_, in) };


          // inEx Field Functions 
          bool hasInEx() const { return this->inEx_ != nullptr;};
          void deleteInEx() { this->inEx_ = nullptr;};
          inline float getInEx() const { DARABONBA_PTR_GET_DEFAULT(inEx_, 0.0) };
          inline Clips& setInEx(float inEx) { DARABONBA_PTR_SET_VALUE(inEx_, inEx) };


          // out Field Functions 
          bool hasOut() const { return this->out_ != nullptr;};
          void deleteOut() { this->out_ = nullptr;};
          inline int32_t getOut() const { DARABONBA_PTR_GET_DEFAULT(out_, 0) };
          inline Clips& setOut(int32_t out) { DARABONBA_PTR_SET_VALUE(out_, out) };


          // outEx Field Functions 
          bool hasOutEx() const { return this->outEx_ != nullptr;};
          void deleteOutEx() { this->outEx_ = nullptr;};
          inline float getOutEx() const { DARABONBA_PTR_GET_DEFAULT(outEx_, 0.0) };
          inline Clips& setOutEx(float outEx) { DARABONBA_PTR_SET_VALUE(outEx_, outEx) };


          // videoId Field Functions 
          bool hasVideoId() const { return this->videoId_ != nullptr;};
          void deleteVideoId() { this->videoId_ = nullptr;};
          inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
          inline Clips& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


          // videoName Field Functions 
          bool hasVideoName() const { return this->videoName_ != nullptr;};
          void deleteVideoName() { this->videoName_ = nullptr;};
          inline string getVideoName() const { DARABONBA_PTR_GET_DEFAULT(videoName_, "") };
          inline Clips& setVideoName(string videoName) { DARABONBA_PTR_SET_VALUE(videoName_, videoName) };


        protected:
          shared_ptr<string> clipId_ {};
          shared_ptr<string> contentInner_ {};
          shared_ptr<int32_t> in_ {};
          shared_ptr<float> inEx_ {};
          shared_ptr<int32_t> out_ {};
          shared_ptr<float> outEx_ {};
          shared_ptr<string> videoId_ {};
          shared_ptr<string> videoName_ {};
        };

        virtual bool empty() const override { return this->clips_ == nullptr
        && this->content_ == nullptr && this->timelineId_ == nullptr; };
        // clips Field Functions 
        bool hasClips() const { return this->clips_ != nullptr;};
        void deleteClips() { this->clips_ = nullptr;};
        inline const vector<Timelines::Clips> & getClips() const { DARABONBA_PTR_GET_CONST(clips_, vector<Timelines::Clips>) };
        inline vector<Timelines::Clips> getClips() { DARABONBA_PTR_GET(clips_, vector<Timelines::Clips>) };
        inline Timelines& setClips(const vector<Timelines::Clips> & clips) { DARABONBA_PTR_SET_VALUE(clips_, clips) };
        inline Timelines& setClips(vector<Timelines::Clips> && clips) { DARABONBA_PTR_SET_RVALUE(clips_, clips) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Timelines& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // timelineId Field Functions 
        bool hasTimelineId() const { return this->timelineId_ != nullptr;};
        void deleteTimelineId() { this->timelineId_ = nullptr;};
        inline string getTimelineId() const { DARABONBA_PTR_GET_DEFAULT(timelineId_, "") };
        inline Timelines& setTimelineId(string timelineId) { DARABONBA_PTR_SET_VALUE(timelineId_, timelineId) };


      protected:
        shared_ptr<vector<Timelines::Clips>> clips_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> timelineId_ {};
      };

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
        && this->closeSubtitle_ == nullptr && this->closeVoice_ == nullptr && this->colorWords_ == nullptr && this->content_ == nullptr && this->customVoiceUrl_ == nullptr
        && this->customVoiceVolume_ == nullptr && this->errorMessage_ == nullptr && this->mediaCloudTimeline_ == nullptr && this->musicStyle_ == nullptr && this->musicUrl_ == nullptr
        && this->musicVolume_ == nullptr && this->outputVideoUrl_ == nullptr && this->status_ == nullptr && this->step_ == nullptr && this->stickers_ == nullptr
        && this->subtitleFontSize_ == nullptr && this->taskId_ == nullptr && this->timelines_ == nullptr && this->voiceStyle_ == nullptr && this->voiceVolume_ == nullptr; };
      // closeMusic Field Functions 
      bool hasCloseMusic() const { return this->closeMusic_ != nullptr;};
      void deleteCloseMusic() { this->closeMusic_ = nullptr;};
      inline bool getCloseMusic() const { DARABONBA_PTR_GET_DEFAULT(closeMusic_, false) };
      inline Data& setCloseMusic(bool closeMusic) { DARABONBA_PTR_SET_VALUE(closeMusic_, closeMusic) };


      // closeSubtitle Field Functions 
      bool hasCloseSubtitle() const { return this->closeSubtitle_ != nullptr;};
      void deleteCloseSubtitle() { this->closeSubtitle_ = nullptr;};
      inline bool getCloseSubtitle() const { DARABONBA_PTR_GET_DEFAULT(closeSubtitle_, false) };
      inline Data& setCloseSubtitle(bool closeSubtitle) { DARABONBA_PTR_SET_VALUE(closeSubtitle_, closeSubtitle) };


      // closeVoice Field Functions 
      bool hasCloseVoice() const { return this->closeVoice_ != nullptr;};
      void deleteCloseVoice() { this->closeVoice_ = nullptr;};
      inline bool getCloseVoice() const { DARABONBA_PTR_GET_DEFAULT(closeVoice_, false) };
      inline Data& setCloseVoice(bool closeVoice) { DARABONBA_PTR_SET_VALUE(closeVoice_, closeVoice) };


      // colorWords Field Functions 
      bool hasColorWords() const { return this->colorWords_ != nullptr;};
      void deleteColorWords() { this->colorWords_ = nullptr;};
      inline const vector<Data::ColorWords> & getColorWords() const { DARABONBA_PTR_GET_CONST(colorWords_, vector<Data::ColorWords>) };
      inline vector<Data::ColorWords> getColorWords() { DARABONBA_PTR_GET(colorWords_, vector<Data::ColorWords>) };
      inline Data& setColorWords(const vector<Data::ColorWords> & colorWords) { DARABONBA_PTR_SET_VALUE(colorWords_, colorWords) };
      inline Data& setColorWords(vector<Data::ColorWords> && colorWords) { DARABONBA_PTR_SET_RVALUE(colorWords_, colorWords) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // customVoiceUrl Field Functions 
      bool hasCustomVoiceUrl() const { return this->customVoiceUrl_ != nullptr;};
      void deleteCustomVoiceUrl() { this->customVoiceUrl_ = nullptr;};
      inline string getCustomVoiceUrl() const { DARABONBA_PTR_GET_DEFAULT(customVoiceUrl_, "") };
      inline Data& setCustomVoiceUrl(string customVoiceUrl) { DARABONBA_PTR_SET_VALUE(customVoiceUrl_, customVoiceUrl) };


      // customVoiceVolume Field Functions 
      bool hasCustomVoiceVolume() const { return this->customVoiceVolume_ != nullptr;};
      void deleteCustomVoiceVolume() { this->customVoiceVolume_ = nullptr;};
      inline int32_t getCustomVoiceVolume() const { DARABONBA_PTR_GET_DEFAULT(customVoiceVolume_, 0) };
      inline Data& setCustomVoiceVolume(int32_t customVoiceVolume) { DARABONBA_PTR_SET_VALUE(customVoiceVolume_, customVoiceVolume) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // mediaCloudTimeline Field Functions 
      bool hasMediaCloudTimeline() const { return this->mediaCloudTimeline_ != nullptr;};
      void deleteMediaCloudTimeline() { this->mediaCloudTimeline_ = nullptr;};
      inline string getMediaCloudTimeline() const { DARABONBA_PTR_GET_DEFAULT(mediaCloudTimeline_, "") };
      inline Data& setMediaCloudTimeline(string mediaCloudTimeline) { DARABONBA_PTR_SET_VALUE(mediaCloudTimeline_, mediaCloudTimeline) };


      // musicStyle Field Functions 
      bool hasMusicStyle() const { return this->musicStyle_ != nullptr;};
      void deleteMusicStyle() { this->musicStyle_ = nullptr;};
      inline string getMusicStyle() const { DARABONBA_PTR_GET_DEFAULT(musicStyle_, "") };
      inline Data& setMusicStyle(string musicStyle) { DARABONBA_PTR_SET_VALUE(musicStyle_, musicStyle) };


      // musicUrl Field Functions 
      bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
      void deleteMusicUrl() { this->musicUrl_ = nullptr;};
      inline string getMusicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
      inline Data& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


      // musicVolume Field Functions 
      bool hasMusicVolume() const { return this->musicVolume_ != nullptr;};
      void deleteMusicVolume() { this->musicVolume_ = nullptr;};
      inline int32_t getMusicVolume() const { DARABONBA_PTR_GET_DEFAULT(musicVolume_, 0) };
      inline Data& setMusicVolume(int32_t musicVolume) { DARABONBA_PTR_SET_VALUE(musicVolume_, musicVolume) };


      // outputVideoUrl Field Functions 
      bool hasOutputVideoUrl() const { return this->outputVideoUrl_ != nullptr;};
      void deleteOutputVideoUrl() { this->outputVideoUrl_ = nullptr;};
      inline string getOutputVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(outputVideoUrl_, "") };
      inline Data& setOutputVideoUrl(string outputVideoUrl) { DARABONBA_PTR_SET_VALUE(outputVideoUrl_, outputVideoUrl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // step Field Functions 
      bool hasStep() const { return this->step_ != nullptr;};
      void deleteStep() { this->step_ = nullptr;};
      inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
      inline Data& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      // stickers Field Functions 
      bool hasStickers() const { return this->stickers_ != nullptr;};
      void deleteStickers() { this->stickers_ = nullptr;};
      inline const vector<Data::Stickers> & getStickers() const { DARABONBA_PTR_GET_CONST(stickers_, vector<Data::Stickers>) };
      inline vector<Data::Stickers> getStickers() { DARABONBA_PTR_GET(stickers_, vector<Data::Stickers>) };
      inline Data& setStickers(const vector<Data::Stickers> & stickers) { DARABONBA_PTR_SET_VALUE(stickers_, stickers) };
      inline Data& setStickers(vector<Data::Stickers> && stickers) { DARABONBA_PTR_SET_RVALUE(stickers_, stickers) };


      // subtitleFontSize Field Functions 
      bool hasSubtitleFontSize() const { return this->subtitleFontSize_ != nullptr;};
      void deleteSubtitleFontSize() { this->subtitleFontSize_ = nullptr;};
      inline int32_t getSubtitleFontSize() const { DARABONBA_PTR_GET_DEFAULT(subtitleFontSize_, 0) };
      inline Data& setSubtitleFontSize(int32_t subtitleFontSize) { DARABONBA_PTR_SET_VALUE(subtitleFontSize_, subtitleFontSize) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // timelines Field Functions 
      bool hasTimelines() const { return this->timelines_ != nullptr;};
      void deleteTimelines() { this->timelines_ = nullptr;};
      inline const vector<Data::Timelines> & getTimelines() const { DARABONBA_PTR_GET_CONST(timelines_, vector<Data::Timelines>) };
      inline vector<Data::Timelines> getTimelines() { DARABONBA_PTR_GET(timelines_, vector<Data::Timelines>) };
      inline Data& setTimelines(const vector<Data::Timelines> & timelines) { DARABONBA_PTR_SET_VALUE(timelines_, timelines) };
      inline Data& setTimelines(vector<Data::Timelines> && timelines) { DARABONBA_PTR_SET_RVALUE(timelines_, timelines) };


      // voiceStyle Field Functions 
      bool hasVoiceStyle() const { return this->voiceStyle_ != nullptr;};
      void deleteVoiceStyle() { this->voiceStyle_ = nullptr;};
      inline string getVoiceStyle() const { DARABONBA_PTR_GET_DEFAULT(voiceStyle_, "") };
      inline Data& setVoiceStyle(string voiceStyle) { DARABONBA_PTR_SET_VALUE(voiceStyle_, voiceStyle) };


      // voiceVolume Field Functions 
      bool hasVoiceVolume() const { return this->voiceVolume_ != nullptr;};
      void deleteVoiceVolume() { this->voiceVolume_ = nullptr;};
      inline int32_t getVoiceVolume() const { DARABONBA_PTR_GET_DEFAULT(voiceVolume_, 0) };
      inline Data& setVoiceVolume(int32_t voiceVolume) { DARABONBA_PTR_SET_VALUE(voiceVolume_, voiceVolume) };


    protected:
      shared_ptr<bool> closeMusic_ {};
      shared_ptr<bool> closeSubtitle_ {};
      shared_ptr<bool> closeVoice_ {};
      shared_ptr<vector<Data::ColorWords>> colorWords_ {};
      shared_ptr<string> content_ {};
      shared_ptr<string> customVoiceUrl_ {};
      shared_ptr<int32_t> customVoiceVolume_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> mediaCloudTimeline_ {};
      shared_ptr<string> musicStyle_ {};
      shared_ptr<string> musicUrl_ {};
      shared_ptr<int32_t> musicVolume_ {};
      shared_ptr<string> outputVideoUrl_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> step_ {};
      shared_ptr<vector<Data::Stickers>> stickers_ {};
      shared_ptr<int32_t> subtitleFontSize_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<vector<Data::Timelines>> timelines_ {};
      shared_ptr<string> voiceStyle_ {};
      shared_ptr<int32_t> voiceVolume_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAutoClipsTaskInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAutoClipsTaskInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAutoClipsTaskInfoResponseBody::Data) };
    inline GetAutoClipsTaskInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAutoClipsTaskInfoResponseBody::Data) };
    inline GetAutoClipsTaskInfoResponseBody& setData(const GetAutoClipsTaskInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAutoClipsTaskInfoResponseBody& setData(GetAutoClipsTaskInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAutoClipsTaskInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAutoClipsTaskInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoClipsTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAutoClipsTaskInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAutoClipsTaskInfoResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
