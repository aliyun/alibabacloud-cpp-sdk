// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUEST_HPP_
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
  class SubmitSmartClipTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(ExtendParam, extendParam_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(ExtendParam, extendParam_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitSmartClipTaskRequest() = default ;
    SubmitSmartClipTaskRequest(const SubmitSmartClipTaskRequest &) = default ;
    SubmitSmartClipTaskRequest(SubmitSmartClipTaskRequest &&) = default ;
    SubmitSmartClipTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequest() = default ;
    SubmitSmartClipTaskRequest& operator=(const SubmitSmartClipTaskRequest &) = default ;
    SubmitSmartClipTaskRequest& operator=(SubmitSmartClipTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OutputConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutputConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(MaxDuration, maxDuration_);
        DARABONBA_PTR_TO_JSON(SaveToGeneratedContent, saveToGeneratedContent_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, OutputConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(MaxDuration, maxDuration_);
        DARABONBA_PTR_FROM_JSON(SaveToGeneratedContent, saveToGeneratedContent_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      OutputConfig() = default ;
      OutputConfig(const OutputConfig &) = default ;
      OutputConfig(OutputConfig &&) = default ;
      OutputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutputConfig() = default ;
      OutputConfig& operator=(const OutputConfig &) = default ;
      OutputConfig& operator=(OutputConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->fileName_ == nullptr && this->height_ == nullptr && this->maxDuration_ == nullptr && this->saveToGeneratedContent_ == nullptr && this->width_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline OutputConfig& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline OutputConfig& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
      inline OutputConfig& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // maxDuration Field Functions 
      bool hasMaxDuration() const { return this->maxDuration_ != nullptr;};
      void deleteMaxDuration() { this->maxDuration_ = nullptr;};
      inline int32_t getMaxDuration() const { DARABONBA_PTR_GET_DEFAULT(maxDuration_, 0) };
      inline OutputConfig& setMaxDuration(int32_t maxDuration) { DARABONBA_PTR_SET_VALUE(maxDuration_, maxDuration) };


      // saveToGeneratedContent Field Functions 
      bool hasSaveToGeneratedContent() const { return this->saveToGeneratedContent_ != nullptr;};
      void deleteSaveToGeneratedContent() { this->saveToGeneratedContent_ = nullptr;};
      inline bool getSaveToGeneratedContent() const { DARABONBA_PTR_GET_DEFAULT(saveToGeneratedContent_, false) };
      inline OutputConfig& setSaveToGeneratedContent(bool saveToGeneratedContent) { DARABONBA_PTR_SET_VALUE(saveToGeneratedContent_, saveToGeneratedContent) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
      inline OutputConfig& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<int32_t> height_ {};
      shared_ptr<int32_t> maxDuration_ {};
      shared_ptr<bool> saveToGeneratedContent_ {};
      shared_ptr<int32_t> width_ {};
    };

    class InputConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InputConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BackgroundMusics, backgroundMusics_);
        DARABONBA_PTR_TO_JSON(SpeechTexts, speechTexts_);
        DARABONBA_PTR_TO_JSON(Stickers, stickers_);
        DARABONBA_PTR_TO_JSON(Titles, titles_);
        DARABONBA_PTR_TO_JSON(VideoIds, videoIds_);
      };
      friend void from_json(const Darabonba::Json& j, InputConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BackgroundMusics, backgroundMusics_);
        DARABONBA_PTR_FROM_JSON(SpeechTexts, speechTexts_);
        DARABONBA_PTR_FROM_JSON(Stickers, stickers_);
        DARABONBA_PTR_FROM_JSON(Titles, titles_);
        DARABONBA_PTR_FROM_JSON(VideoIds, videoIds_);
      };
      InputConfig() = default ;
      InputConfig(const InputConfig &) = default ;
      InputConfig(InputConfig &&) = default ;
      InputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InputConfig() = default ;
      InputConfig& operator=(const InputConfig &) = default ;
      InputConfig& operator=(InputConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoIds& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, VideoIds& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        VideoIds() = default ;
        VideoIds(const VideoIds &) = default ;
        VideoIds(VideoIds &&) = default ;
        VideoIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoIds() = default ;
        VideoIds& operator=(const VideoIds &) = default ;
        VideoIds& operator=(VideoIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline VideoIds& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline VideoIds& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // This parameter is required.
        shared_ptr<string> id_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      class Stickers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stickers& obj) { 
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(StickerId, stickerId_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Stickers& obj) { 
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(StickerId, stickerId_);
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
        class StickerId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StickerId& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, StickerId& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          StickerId() = default ;
          StickerId(const StickerId &) = default ;
          StickerId(StickerId &&) = default ;
          StickerId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StickerId() = default ;
          StickerId& operator=(const StickerId &) = default ;
          StickerId& operator=(StickerId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline StickerId& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline StickerId& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // This parameter is required.
          shared_ptr<string> id_ {};
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->height_ == nullptr
        && this->stickerId_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Stickers& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // stickerId Field Functions 
        bool hasStickerId() const { return this->stickerId_ != nullptr;};
        void deleteStickerId() { this->stickerId_ = nullptr;};
        inline const Stickers::StickerId & getStickerId() const { DARABONBA_PTR_GET_CONST(stickerId_, Stickers::StickerId) };
        inline Stickers::StickerId getStickerId() { DARABONBA_PTR_GET(stickerId_, Stickers::StickerId) };
        inline Stickers& setStickerId(const Stickers::StickerId & stickerId) { DARABONBA_PTR_SET_VALUE(stickerId_, stickerId) };
        inline Stickers& setStickerId(Stickers::StickerId && stickerId) { DARABONBA_PTR_SET_RVALUE(stickerId_, stickerId) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline double getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Stickers& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Stickers& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Stickers& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        // This parameter is required.
        shared_ptr<double> height_ {};
        // This parameter is required.
        shared_ptr<Stickers::StickerId> stickerId_ {};
        // This parameter is required.
        shared_ptr<double> width_ {};
        // This parameter is required.
        shared_ptr<double> x_ {};
        // This parameter is required.
        shared_ptr<double> y_ {};
      };

      class BackgroundMusics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackgroundMusics& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, BackgroundMusics& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        BackgroundMusics() = default ;
        BackgroundMusics(const BackgroundMusics &) = default ;
        BackgroundMusics(BackgroundMusics &&) = default ;
        BackgroundMusics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackgroundMusics() = default ;
        BackgroundMusics& operator=(const BackgroundMusics &) = default ;
        BackgroundMusics& operator=(BackgroundMusics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline BackgroundMusics& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BackgroundMusics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // This parameter is required.
        shared_ptr<string> id_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->backgroundMusics_ == nullptr
        && this->speechTexts_ == nullptr && this->stickers_ == nullptr && this->titles_ == nullptr && this->videoIds_ == nullptr; };
      // backgroundMusics Field Functions 
      bool hasBackgroundMusics() const { return this->backgroundMusics_ != nullptr;};
      void deleteBackgroundMusics() { this->backgroundMusics_ = nullptr;};
      inline const vector<InputConfig::BackgroundMusics> & getBackgroundMusics() const { DARABONBA_PTR_GET_CONST(backgroundMusics_, vector<InputConfig::BackgroundMusics>) };
      inline vector<InputConfig::BackgroundMusics> getBackgroundMusics() { DARABONBA_PTR_GET(backgroundMusics_, vector<InputConfig::BackgroundMusics>) };
      inline InputConfig& setBackgroundMusics(const vector<InputConfig::BackgroundMusics> & backgroundMusics) { DARABONBA_PTR_SET_VALUE(backgroundMusics_, backgroundMusics) };
      inline InputConfig& setBackgroundMusics(vector<InputConfig::BackgroundMusics> && backgroundMusics) { DARABONBA_PTR_SET_RVALUE(backgroundMusics_, backgroundMusics) };


      // speechTexts Field Functions 
      bool hasSpeechTexts() const { return this->speechTexts_ != nullptr;};
      void deleteSpeechTexts() { this->speechTexts_ = nullptr;};
      inline const vector<string> & getSpeechTexts() const { DARABONBA_PTR_GET_CONST(speechTexts_, vector<string>) };
      inline vector<string> getSpeechTexts() { DARABONBA_PTR_GET(speechTexts_, vector<string>) };
      inline InputConfig& setSpeechTexts(const vector<string> & speechTexts) { DARABONBA_PTR_SET_VALUE(speechTexts_, speechTexts) };
      inline InputConfig& setSpeechTexts(vector<string> && speechTexts) { DARABONBA_PTR_SET_RVALUE(speechTexts_, speechTexts) };


      // stickers Field Functions 
      bool hasStickers() const { return this->stickers_ != nullptr;};
      void deleteStickers() { this->stickers_ = nullptr;};
      inline const vector<InputConfig::Stickers> & getStickers() const { DARABONBA_PTR_GET_CONST(stickers_, vector<InputConfig::Stickers>) };
      inline vector<InputConfig::Stickers> getStickers() { DARABONBA_PTR_GET(stickers_, vector<InputConfig::Stickers>) };
      inline InputConfig& setStickers(const vector<InputConfig::Stickers> & stickers) { DARABONBA_PTR_SET_VALUE(stickers_, stickers) };
      inline InputConfig& setStickers(vector<InputConfig::Stickers> && stickers) { DARABONBA_PTR_SET_RVALUE(stickers_, stickers) };


      // titles Field Functions 
      bool hasTitles() const { return this->titles_ != nullptr;};
      void deleteTitles() { this->titles_ = nullptr;};
      inline const vector<string> & getTitles() const { DARABONBA_PTR_GET_CONST(titles_, vector<string>) };
      inline vector<string> getTitles() { DARABONBA_PTR_GET(titles_, vector<string>) };
      inline InputConfig& setTitles(const vector<string> & titles) { DARABONBA_PTR_SET_VALUE(titles_, titles) };
      inline InputConfig& setTitles(vector<string> && titles) { DARABONBA_PTR_SET_RVALUE(titles_, titles) };


      // videoIds Field Functions 
      bool hasVideoIds() const { return this->videoIds_ != nullptr;};
      void deleteVideoIds() { this->videoIds_ = nullptr;};
      inline const vector<InputConfig::VideoIds> & getVideoIds() const { DARABONBA_PTR_GET_CONST(videoIds_, vector<InputConfig::VideoIds>) };
      inline vector<InputConfig::VideoIds> getVideoIds() { DARABONBA_PTR_GET(videoIds_, vector<InputConfig::VideoIds>) };
      inline InputConfig& setVideoIds(const vector<InputConfig::VideoIds> & videoIds) { DARABONBA_PTR_SET_VALUE(videoIds_, videoIds) };
      inline InputConfig& setVideoIds(vector<InputConfig::VideoIds> && videoIds) { DARABONBA_PTR_SET_RVALUE(videoIds_, videoIds) };


    protected:
      shared_ptr<vector<InputConfig::BackgroundMusics>> backgroundMusics_ {};
      shared_ptr<vector<string>> speechTexts_ {};
      shared_ptr<vector<InputConfig::Stickers>> stickers_ {};
      shared_ptr<vector<string>> titles_ {};
      // This parameter is required.
      shared_ptr<vector<InputConfig::VideoIds>> videoIds_ {};
    };

    class EditingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EditingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BackgroundMusicConfig, backgroundMusicConfig_);
        DARABONBA_PTR_TO_JSON(MediaConfig, mediaConfig_);
        DARABONBA_PTR_TO_JSON(SpeechConfig, speechConfig_);
        DARABONBA_PTR_TO_JSON(TitleConfig, titleConfig_);
      };
      friend void from_json(const Darabonba::Json& j, EditingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BackgroundMusicConfig, backgroundMusicConfig_);
        DARABONBA_PTR_FROM_JSON(MediaConfig, mediaConfig_);
        DARABONBA_PTR_FROM_JSON(SpeechConfig, speechConfig_);
        DARABONBA_PTR_FROM_JSON(TitleConfig, titleConfig_);
      };
      EditingConfig() = default ;
      EditingConfig(const EditingConfig &) = default ;
      EditingConfig(EditingConfig &&) = default ;
      EditingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EditingConfig() = default ;
      EditingConfig& operator=(const EditingConfig &) = default ;
      EditingConfig& operator=(EditingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TitleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TitleConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Alignment, alignment_);
          DARABONBA_PTR_TO_JSON(TimelineIn, timelineIn_);
          DARABONBA_PTR_TO_JSON(TimelineOut, timelineOut_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, TitleConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Alignment, alignment_);
          DARABONBA_PTR_FROM_JSON(TimelineIn, timelineIn_);
          DARABONBA_PTR_FROM_JSON(TimelineOut, timelineOut_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
        };
        TitleConfig() = default ;
        TitleConfig(const TitleConfig &) = default ;
        TitleConfig(TitleConfig &&) = default ;
        TitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TitleConfig() = default ;
        TitleConfig& operator=(const TitleConfig &) = default ;
        TitleConfig& operator=(TitleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alignment_ == nullptr
        && this->timelineIn_ == nullptr && this->timelineOut_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
        // alignment Field Functions 
        bool hasAlignment() const { return this->alignment_ != nullptr;};
        void deleteAlignment() { this->alignment_ = nullptr;};
        inline string getAlignment() const { DARABONBA_PTR_GET_DEFAULT(alignment_, "") };
        inline TitleConfig& setAlignment(string alignment) { DARABONBA_PTR_SET_VALUE(alignment_, alignment) };


        // timelineIn Field Functions 
        bool hasTimelineIn() const { return this->timelineIn_ != nullptr;};
        void deleteTimelineIn() { this->timelineIn_ = nullptr;};
        inline float getTimelineIn() const { DARABONBA_PTR_GET_DEFAULT(timelineIn_, 0.0) };
        inline TitleConfig& setTimelineIn(float timelineIn) { DARABONBA_PTR_SET_VALUE(timelineIn_, timelineIn) };


        // timelineOut Field Functions 
        bool hasTimelineOut() const { return this->timelineOut_ != nullptr;};
        void deleteTimelineOut() { this->timelineOut_ = nullptr;};
        inline float getTimelineOut() const { DARABONBA_PTR_GET_DEFAULT(timelineOut_, 0.0) };
        inline TitleConfig& setTimelineOut(float timelineOut) { DARABONBA_PTR_SET_VALUE(timelineOut_, timelineOut) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline TitleConfig& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline TitleConfig& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        shared_ptr<string> alignment_ {};
        shared_ptr<float> timelineIn_ {};
        shared_ptr<float> timelineOut_ {};
        shared_ptr<float> x_ {};
        shared_ptr<float> y_ {};
      };

      class SpeechConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpeechConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
          DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_TO_JSON(Style, style_);
          DARABONBA_PTR_TO_JSON(Voice, voice_);
          DARABONBA_PTR_TO_JSON(Volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, SpeechConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
          DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_FROM_JSON(Style, style_);
          DARABONBA_PTR_FROM_JSON(Voice, voice_);
          DARABONBA_PTR_FROM_JSON(Volume, volume_);
        };
        SpeechConfig() = default ;
        SpeechConfig(const SpeechConfig &) = default ;
        SpeechConfig(SpeechConfig &&) = default ;
        SpeechConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpeechConfig() = default ;
        SpeechConfig& operator=(const SpeechConfig &) = default ;
        SpeechConfig& operator=(SpeechConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AsrConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AsrConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Alignment, alignment_);
            DARABONBA_PTR_TO_JSON(Font, font_);
            DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
            DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
            DARABONBA_PTR_TO_JSON(Spacing, spacing_);
            DARABONBA_PTR_TO_JSON(X, x_);
            DARABONBA_PTR_TO_JSON(Y, y_);
          };
          friend void from_json(const Darabonba::Json& j, AsrConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Alignment, alignment_);
            DARABONBA_PTR_FROM_JSON(Font, font_);
            DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
            DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
            DARABONBA_PTR_FROM_JSON(Spacing, spacing_);
            DARABONBA_PTR_FROM_JSON(X, x_);
            DARABONBA_PTR_FROM_JSON(Y, y_);
          };
          AsrConfig() = default ;
          AsrConfig(const AsrConfig &) = default ;
          AsrConfig(AsrConfig &&) = default ;
          AsrConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AsrConfig() = default ;
          AsrConfig& operator=(const AsrConfig &) = default ;
          AsrConfig& operator=(AsrConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alignment_ == nullptr
        && this->font_ == nullptr && this->fontColor_ == nullptr && this->fontSize_ == nullptr && this->spacing_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr; };
          // alignment Field Functions 
          bool hasAlignment() const { return this->alignment_ != nullptr;};
          void deleteAlignment() { this->alignment_ = nullptr;};
          inline string getAlignment() const { DARABONBA_PTR_GET_DEFAULT(alignment_, "") };
          inline AsrConfig& setAlignment(string alignment) { DARABONBA_PTR_SET_VALUE(alignment_, alignment) };


          // font Field Functions 
          bool hasFont() const { return this->font_ != nullptr;};
          void deleteFont() { this->font_ = nullptr;};
          inline string getFont() const { DARABONBA_PTR_GET_DEFAULT(font_, "") };
          inline AsrConfig& setFont(string font) { DARABONBA_PTR_SET_VALUE(font_, font) };


          // fontColor Field Functions 
          bool hasFontColor() const { return this->fontColor_ != nullptr;};
          void deleteFontColor() { this->fontColor_ = nullptr;};
          inline string getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
          inline AsrConfig& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


          // fontSize Field Functions 
          bool hasFontSize() const { return this->fontSize_ != nullptr;};
          void deleteFontSize() { this->fontSize_ = nullptr;};
          inline string getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, "") };
          inline AsrConfig& setFontSize(string fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


          // spacing Field Functions 
          bool hasSpacing() const { return this->spacing_ != nullptr;};
          void deleteSpacing() { this->spacing_ = nullptr;};
          inline string getSpacing() const { DARABONBA_PTR_GET_DEFAULT(spacing_, "") };
          inline AsrConfig& setSpacing(string spacing) { DARABONBA_PTR_SET_VALUE(spacing_, spacing) };


          // x Field Functions 
          bool hasX() const { return this->x_ != nullptr;};
          void deleteX() { this->x_ = nullptr;};
          inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
          inline AsrConfig& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


          // y Field Functions 
          bool hasY() const { return this->y_ != nullptr;};
          void deleteY() { this->y_ = nullptr;};
          inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
          inline AsrConfig& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        protected:
          shared_ptr<string> alignment_ {};
          shared_ptr<string> font_ {};
          shared_ptr<string> fontColor_ {};
          shared_ptr<string> fontSize_ {};
          shared_ptr<string> spacing_ {};
          shared_ptr<float> x_ {};
          shared_ptr<float> y_ {};
        };

        virtual bool empty() const override { return this->asrConfig_ == nullptr
        && this->speechRate_ == nullptr && this->style_ == nullptr && this->voice_ == nullptr && this->volume_ == nullptr; };
        // asrConfig Field Functions 
        bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
        void deleteAsrConfig() { this->asrConfig_ = nullptr;};
        inline const SpeechConfig::AsrConfig & getAsrConfig() const { DARABONBA_PTR_GET_CONST(asrConfig_, SpeechConfig::AsrConfig) };
        inline SpeechConfig::AsrConfig getAsrConfig() { DARABONBA_PTR_GET(asrConfig_, SpeechConfig::AsrConfig) };
        inline SpeechConfig& setAsrConfig(const SpeechConfig::AsrConfig & asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };
        inline SpeechConfig& setAsrConfig(SpeechConfig::AsrConfig && asrConfig) { DARABONBA_PTR_SET_RVALUE(asrConfig_, asrConfig) };


        // speechRate Field Functions 
        bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
        void deleteSpeechRate() { this->speechRate_ = nullptr;};
        inline double getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0.0) };
        inline SpeechConfig& setSpeechRate(double speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


        // style Field Functions 
        bool hasStyle() const { return this->style_ != nullptr;};
        void deleteStyle() { this->style_ = nullptr;};
        inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
        inline SpeechConfig& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


        // voice Field Functions 
        bool hasVoice() const { return this->voice_ != nullptr;};
        void deleteVoice() { this->voice_ = nullptr;};
        inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
        inline SpeechConfig& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline double getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0.0) };
        inline SpeechConfig& setVolume(double volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<SpeechConfig::AsrConfig> asrConfig_ {};
        shared_ptr<double> speechRate_ {};
        shared_ptr<string> style_ {};
        shared_ptr<string> voice_ {};
        shared_ptr<double> volume_ {};
      };

      class MediaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, MediaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Volume, volume_);
        };
        MediaConfig() = default ;
        MediaConfig(const MediaConfig &) = default ;
        MediaConfig(MediaConfig &&) = default ;
        MediaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaConfig() = default ;
        MediaConfig& operator=(const MediaConfig &) = default ;
        MediaConfig& operator=(MediaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->volume_ == nullptr; };
        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline double getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0.0) };
        inline MediaConfig& setVolume(double volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<double> volume_ {};
      };

      class BackgroundMusicConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackgroundMusicConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Style, style_);
          DARABONBA_PTR_TO_JSON(Volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, BackgroundMusicConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Style, style_);
          DARABONBA_PTR_FROM_JSON(Volume, volume_);
        };
        BackgroundMusicConfig() = default ;
        BackgroundMusicConfig(const BackgroundMusicConfig &) = default ;
        BackgroundMusicConfig(BackgroundMusicConfig &&) = default ;
        BackgroundMusicConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackgroundMusicConfig() = default ;
        BackgroundMusicConfig& operator=(const BackgroundMusicConfig &) = default ;
        BackgroundMusicConfig& operator=(BackgroundMusicConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->style_ == nullptr
        && this->volume_ == nullptr; };
        // style Field Functions 
        bool hasStyle() const { return this->style_ != nullptr;};
        void deleteStyle() { this->style_ = nullptr;};
        inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
        inline BackgroundMusicConfig& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline double getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0.0) };
        inline BackgroundMusicConfig& setVolume(double volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<string> style_ {};
        shared_ptr<double> volume_ {};
      };

      virtual bool empty() const override { return this->backgroundMusicConfig_ == nullptr
        && this->mediaConfig_ == nullptr && this->speechConfig_ == nullptr && this->titleConfig_ == nullptr; };
      // backgroundMusicConfig Field Functions 
      bool hasBackgroundMusicConfig() const { return this->backgroundMusicConfig_ != nullptr;};
      void deleteBackgroundMusicConfig() { this->backgroundMusicConfig_ = nullptr;};
      inline const EditingConfig::BackgroundMusicConfig & getBackgroundMusicConfig() const { DARABONBA_PTR_GET_CONST(backgroundMusicConfig_, EditingConfig::BackgroundMusicConfig) };
      inline EditingConfig::BackgroundMusicConfig getBackgroundMusicConfig() { DARABONBA_PTR_GET(backgroundMusicConfig_, EditingConfig::BackgroundMusicConfig) };
      inline EditingConfig& setBackgroundMusicConfig(const EditingConfig::BackgroundMusicConfig & backgroundMusicConfig) { DARABONBA_PTR_SET_VALUE(backgroundMusicConfig_, backgroundMusicConfig) };
      inline EditingConfig& setBackgroundMusicConfig(EditingConfig::BackgroundMusicConfig && backgroundMusicConfig) { DARABONBA_PTR_SET_RVALUE(backgroundMusicConfig_, backgroundMusicConfig) };


      // mediaConfig Field Functions 
      bool hasMediaConfig() const { return this->mediaConfig_ != nullptr;};
      void deleteMediaConfig() { this->mediaConfig_ = nullptr;};
      inline const EditingConfig::MediaConfig & getMediaConfig() const { DARABONBA_PTR_GET_CONST(mediaConfig_, EditingConfig::MediaConfig) };
      inline EditingConfig::MediaConfig getMediaConfig() { DARABONBA_PTR_GET(mediaConfig_, EditingConfig::MediaConfig) };
      inline EditingConfig& setMediaConfig(const EditingConfig::MediaConfig & mediaConfig) { DARABONBA_PTR_SET_VALUE(mediaConfig_, mediaConfig) };
      inline EditingConfig& setMediaConfig(EditingConfig::MediaConfig && mediaConfig) { DARABONBA_PTR_SET_RVALUE(mediaConfig_, mediaConfig) };


      // speechConfig Field Functions 
      bool hasSpeechConfig() const { return this->speechConfig_ != nullptr;};
      void deleteSpeechConfig() { this->speechConfig_ = nullptr;};
      inline const EditingConfig::SpeechConfig & getSpeechConfig() const { DARABONBA_PTR_GET_CONST(speechConfig_, EditingConfig::SpeechConfig) };
      inline EditingConfig::SpeechConfig getSpeechConfig() { DARABONBA_PTR_GET(speechConfig_, EditingConfig::SpeechConfig) };
      inline EditingConfig& setSpeechConfig(const EditingConfig::SpeechConfig & speechConfig) { DARABONBA_PTR_SET_VALUE(speechConfig_, speechConfig) };
      inline EditingConfig& setSpeechConfig(EditingConfig::SpeechConfig && speechConfig) { DARABONBA_PTR_SET_RVALUE(speechConfig_, speechConfig) };


      // titleConfig Field Functions 
      bool hasTitleConfig() const { return this->titleConfig_ != nullptr;};
      void deleteTitleConfig() { this->titleConfig_ = nullptr;};
      inline const EditingConfig::TitleConfig & getTitleConfig() const { DARABONBA_PTR_GET_CONST(titleConfig_, EditingConfig::TitleConfig) };
      inline EditingConfig::TitleConfig getTitleConfig() { DARABONBA_PTR_GET(titleConfig_, EditingConfig::TitleConfig) };
      inline EditingConfig& setTitleConfig(const EditingConfig::TitleConfig & titleConfig) { DARABONBA_PTR_SET_VALUE(titleConfig_, titleConfig) };
      inline EditingConfig& setTitleConfig(EditingConfig::TitleConfig && titleConfig) { DARABONBA_PTR_SET_RVALUE(titleConfig_, titleConfig) };


    protected:
      shared_ptr<EditingConfig::BackgroundMusicConfig> backgroundMusicConfig_ {};
      shared_ptr<EditingConfig::MediaConfig> mediaConfig_ {};
      shared_ptr<EditingConfig::SpeechConfig> speechConfig_ {};
      shared_ptr<EditingConfig::TitleConfig> titleConfig_ {};
    };

    virtual bool empty() const override { return this->editingConfig_ == nullptr
        && this->extendParam_ == nullptr && this->inputConfig_ == nullptr && this->outputConfig_ == nullptr && this->workspaceId_ == nullptr; };
    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline const SubmitSmartClipTaskRequest::EditingConfig & getEditingConfig() const { DARABONBA_PTR_GET_CONST(editingConfig_, SubmitSmartClipTaskRequest::EditingConfig) };
    inline SubmitSmartClipTaskRequest::EditingConfig getEditingConfig() { DARABONBA_PTR_GET(editingConfig_, SubmitSmartClipTaskRequest::EditingConfig) };
    inline SubmitSmartClipTaskRequest& setEditingConfig(const SubmitSmartClipTaskRequest::EditingConfig & editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };
    inline SubmitSmartClipTaskRequest& setEditingConfig(SubmitSmartClipTaskRequest::EditingConfig && editingConfig) { DARABONBA_PTR_SET_RVALUE(editingConfig_, editingConfig) };


    // extendParam Field Functions 
    bool hasExtendParam() const { return this->extendParam_ != nullptr;};
    void deleteExtendParam() { this->extendParam_ = nullptr;};
    inline string getExtendParam() const { DARABONBA_PTR_GET_DEFAULT(extendParam_, "") };
    inline SubmitSmartClipTaskRequest& setExtendParam(string extendParam) { DARABONBA_PTR_SET_VALUE(extendParam_, extendParam) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline const SubmitSmartClipTaskRequest::InputConfig & getInputConfig() const { DARABONBA_PTR_GET_CONST(inputConfig_, SubmitSmartClipTaskRequest::InputConfig) };
    inline SubmitSmartClipTaskRequest::InputConfig getInputConfig() { DARABONBA_PTR_GET(inputConfig_, SubmitSmartClipTaskRequest::InputConfig) };
    inline SubmitSmartClipTaskRequest& setInputConfig(const SubmitSmartClipTaskRequest::InputConfig & inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };
    inline SubmitSmartClipTaskRequest& setInputConfig(SubmitSmartClipTaskRequest::InputConfig && inputConfig) { DARABONBA_PTR_SET_RVALUE(inputConfig_, inputConfig) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline const SubmitSmartClipTaskRequest::OutputConfig & getOutputConfig() const { DARABONBA_PTR_GET_CONST(outputConfig_, SubmitSmartClipTaskRequest::OutputConfig) };
    inline SubmitSmartClipTaskRequest::OutputConfig getOutputConfig() { DARABONBA_PTR_GET(outputConfig_, SubmitSmartClipTaskRequest::OutputConfig) };
    inline SubmitSmartClipTaskRequest& setOutputConfig(const SubmitSmartClipTaskRequest::OutputConfig & outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };
    inline SubmitSmartClipTaskRequest& setOutputConfig(SubmitSmartClipTaskRequest::OutputConfig && outputConfig) { DARABONBA_PTR_SET_RVALUE(outputConfig_, outputConfig) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitSmartClipTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<SubmitSmartClipTaskRequest::EditingConfig> editingConfig_ {};
    shared_ptr<string> extendParam_ {};
    // This parameter is required.
    shared_ptr<SubmitSmartClipTaskRequest::InputConfig> inputConfig_ {};
    shared_ptr<SubmitSmartClipTaskRequest::OutputConfig> outputConfig_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
