// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTMPUTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTMPUTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartMPUTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartMPUTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(CropMode, cropMode_);
      DARABONBA_PTR_TO_JSON(EnhancedParam, enhancedParam_);
      DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(MixMode, mixMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayloadType, payloadType_);
      DARABONBA_PTR_TO_JSON(ReportVad, reportVad_);
      DARABONBA_PTR_TO_JSON(RtpExtInfo, rtpExtInfo_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_TO_JSON(SubSpecAudioUsers, subSpecAudioUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecCameraUsers, subSpecCameraUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecShareScreenUsers, subSpecShareScreenUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecUsers, subSpecUsers_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TimeStampRef, timeStampRef_);
      DARABONBA_PTR_TO_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
      DARABONBA_PTR_TO_JSON(VadInterval, vadInterval_);
      DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
    };
    friend void from_json(const Darabonba::Json& j, StartMPUTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(CropMode, cropMode_);
      DARABONBA_PTR_FROM_JSON(EnhancedParam, enhancedParam_);
      DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(MixMode, mixMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayloadType, payloadType_);
      DARABONBA_PTR_FROM_JSON(ReportVad, reportVad_);
      DARABONBA_PTR_FROM_JSON(RtpExtInfo, rtpExtInfo_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_FROM_JSON(SubSpecAudioUsers, subSpecAudioUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecCameraUsers, subSpecCameraUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecShareScreenUsers, subSpecShareScreenUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecUsers, subSpecUsers_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TimeStampRef, timeStampRef_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
      DARABONBA_PTR_FROM_JSON(VadInterval, vadInterval_);
      DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
    };
    StartMPUTaskRequest() = default ;
    StartMPUTaskRequest(const StartMPUTaskRequest &) = default ;
    StartMPUTaskRequest(StartMPUTaskRequest &&) = default ;
    StartMPUTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartMPUTaskRequest() = default ;
    StartMPUTaskRequest& operator=(const StartMPUTaskRequest &) = default ;
    StartMPUTaskRequest& operator=(StartMPUTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Watermarks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Watermarks& obj) { 
        DARABONBA_PTR_TO_JSON(Alpha, alpha_);
        DARABONBA_PTR_TO_JSON(Display, display_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
        DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
      };
      friend void from_json(const Darabonba::Json& j, Watermarks& obj) { 
        DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
        DARABONBA_PTR_FROM_JSON(Display, display_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
        DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
      };
      Watermarks() = default ;
      Watermarks(const Watermarks &) = default ;
      Watermarks(Watermarks &&) = default ;
      Watermarks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Watermarks() = default ;
      Watermarks& operator=(const Watermarks &) = default ;
      Watermarks& operator=(Watermarks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alpha_ == nullptr
        && this->display_ == nullptr && this->height_ == nullptr && this->url_ == nullptr && this->width_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr && this->ZOrder_ == nullptr; };
      // alpha Field Functions 
      bool hasAlpha() const { return this->alpha_ != nullptr;};
      void deleteAlpha() { this->alpha_ = nullptr;};
      inline float getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
      inline Watermarks& setAlpha(float alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


      // display Field Functions 
      bool hasDisplay() const { return this->display_ != nullptr;};
      void deleteDisplay() { this->display_ = nullptr;};
      inline int32_t getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, 0) };
      inline Watermarks& setDisplay(int32_t display) { DARABONBA_PTR_SET_VALUE(display_, display) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Watermarks& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Watermarks& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Watermarks& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Watermarks& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Watermarks& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      // ZOrder Field Functions 
      bool hasZOrder() const { return this->ZOrder_ != nullptr;};
      void deleteZOrder() { this->ZOrder_ = nullptr;};
      inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
      inline Watermarks& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


    protected:
      shared_ptr<float> alpha_ {};
      shared_ptr<int32_t> display_ {};
      shared_ptr<float> height_ {};
      shared_ptr<string> url_ {};
      shared_ptr<float> width_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
      shared_ptr<int32_t> ZOrder_ {};
    };

    class UserPanes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserPanes& obj) { 
        DARABONBA_PTR_TO_JSON(Images, images_);
        DARABONBA_PTR_TO_JSON(PaneId, paneId_);
        DARABONBA_PTR_TO_JSON(SegmentType, segmentType_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Texts, texts_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserPanes& obj) { 
        DARABONBA_PTR_FROM_JSON(Images, images_);
        DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
        DARABONBA_PTR_FROM_JSON(SegmentType, segmentType_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Texts, texts_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      UserPanes() = default ;
      UserPanes(const UserPanes &) = default ;
      UserPanes(UserPanes &&) = default ;
      UserPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserPanes() = default ;
      UserPanes& operator=(const UserPanes &) = default ;
      UserPanes& operator=(UserPanes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Texts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Texts& obj) { 
          DARABONBA_PTR_TO_JSON(Alpha, alpha_);
          DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
          DARABONBA_PTR_TO_JSON(BorderWidth, borderWidth_);
          DARABONBA_PTR_TO_JSON(Box, box_);
          DARABONBA_PTR_TO_JSON(BoxBorderWidth, boxBorderWidth_);
          DARABONBA_PTR_TO_JSON(BoxColor, boxColor_);
          DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
          DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
          DARABONBA_PTR_TO_JSON(FontType, fontType_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
          DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
        };
        friend void from_json(const Darabonba::Json& j, Texts& obj) { 
          DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
          DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
          DARABONBA_PTR_FROM_JSON(BorderWidth, borderWidth_);
          DARABONBA_PTR_FROM_JSON(Box, box_);
          DARABONBA_PTR_FROM_JSON(BoxBorderWidth, boxBorderWidth_);
          DARABONBA_PTR_FROM_JSON(BoxColor, boxColor_);
          DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
          DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
          DARABONBA_PTR_FROM_JSON(FontType, fontType_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
          DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
        };
        Texts() = default ;
        Texts(const Texts &) = default ;
        Texts(Texts &&) = default ;
        Texts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Texts() = default ;
        Texts& operator=(const Texts &) = default ;
        Texts& operator=(Texts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alpha_ == nullptr
        && this->borderColor_ == nullptr && this->borderWidth_ == nullptr && this->box_ == nullptr && this->boxBorderWidth_ == nullptr && this->boxColor_ == nullptr
        && this->fontColor_ == nullptr && this->fontSize_ == nullptr && this->fontType_ == nullptr && this->text_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr && this->ZOrder_ == nullptr; };
        // alpha Field Functions 
        bool hasAlpha() const { return this->alpha_ != nullptr;};
        void deleteAlpha() { this->alpha_ = nullptr;};
        inline float getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
        inline Texts& setAlpha(float alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


        // borderColor Field Functions 
        bool hasBorderColor() const { return this->borderColor_ != nullptr;};
        void deleteBorderColor() { this->borderColor_ = nullptr;};
        inline int64_t getBorderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, 0L) };
        inline Texts& setBorderColor(int64_t borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


        // borderWidth Field Functions 
        bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
        void deleteBorderWidth() { this->borderWidth_ = nullptr;};
        inline int32_t getBorderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, 0) };
        inline Texts& setBorderWidth(int32_t borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


        // box Field Functions 
        bool hasBox() const { return this->box_ != nullptr;};
        void deleteBox() { this->box_ = nullptr;};
        inline bool getBox() const { DARABONBA_PTR_GET_DEFAULT(box_, false) };
        inline Texts& setBox(bool box) { DARABONBA_PTR_SET_VALUE(box_, box) };


        // boxBorderWidth Field Functions 
        bool hasBoxBorderWidth() const { return this->boxBorderWidth_ != nullptr;};
        void deleteBoxBorderWidth() { this->boxBorderWidth_ = nullptr;};
        inline int32_t getBoxBorderWidth() const { DARABONBA_PTR_GET_DEFAULT(boxBorderWidth_, 0) };
        inline Texts& setBoxBorderWidth(int32_t boxBorderWidth) { DARABONBA_PTR_SET_VALUE(boxBorderWidth_, boxBorderWidth) };


        // boxColor Field Functions 
        bool hasBoxColor() const { return this->boxColor_ != nullptr;};
        void deleteBoxColor() { this->boxColor_ = nullptr;};
        inline int64_t getBoxColor() const { DARABONBA_PTR_GET_DEFAULT(boxColor_, 0L) };
        inline Texts& setBoxColor(int64_t boxColor) { DARABONBA_PTR_SET_VALUE(boxColor_, boxColor) };


        // fontColor Field Functions 
        bool hasFontColor() const { return this->fontColor_ != nullptr;};
        void deleteFontColor() { this->fontColor_ = nullptr;};
        inline int32_t getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, 0) };
        inline Texts& setFontColor(int32_t fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


        // fontSize Field Functions 
        bool hasFontSize() const { return this->fontSize_ != nullptr;};
        void deleteFontSize() { this->fontSize_ = nullptr;};
        inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
        inline Texts& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


        // fontType Field Functions 
        bool hasFontType() const { return this->fontType_ != nullptr;};
        void deleteFontType() { this->fontType_ = nullptr;};
        inline int32_t getFontType() const { DARABONBA_PTR_GET_DEFAULT(fontType_, 0) };
        inline Texts& setFontType(int32_t fontType) { DARABONBA_PTR_SET_VALUE(fontType_, fontType) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Texts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Texts& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Texts& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        // ZOrder Field Functions 
        bool hasZOrder() const { return this->ZOrder_ != nullptr;};
        void deleteZOrder() { this->ZOrder_ = nullptr;};
        inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
        inline Texts& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


      protected:
        shared_ptr<float> alpha_ {};
        shared_ptr<int64_t> borderColor_ {};
        shared_ptr<int32_t> borderWidth_ {};
        shared_ptr<bool> box_ {};
        shared_ptr<int32_t> boxBorderWidth_ {};
        shared_ptr<int64_t> boxColor_ {};
        shared_ptr<int32_t> fontColor_ {};
        shared_ptr<int32_t> fontSize_ {};
        shared_ptr<int32_t> fontType_ {};
        shared_ptr<string> text_ {};
        shared_ptr<float> x_ {};
        shared_ptr<float> y_ {};
        shared_ptr<int32_t> ZOrder_ {};
      };

      class Images : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Images& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
          DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
        };
        friend void from_json(const Darabonba::Json& j, Images& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
          DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
        };
        Images() = default ;
        Images(const Images &) = default ;
        Images(Images &&) = default ;
        Images(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Images() = default ;
        Images& operator=(const Images &) = default ;
        Images& operator=(Images &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->height_ == nullptr && this->url_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr
        && this->ZOrder_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline int32_t getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, 0) };
        inline Images& setDisplay(int32_t display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Images& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Images& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Images& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Images& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Images& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        // ZOrder Field Functions 
        bool hasZOrder() const { return this->ZOrder_ != nullptr;};
        void deleteZOrder() { this->ZOrder_ = nullptr;};
        inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
        inline Images& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


      protected:
        shared_ptr<int32_t> display_ {};
        shared_ptr<float> height_ {};
        shared_ptr<string> url_ {};
        shared_ptr<float> width_ {};
        shared_ptr<float> x_ {};
        shared_ptr<float> y_ {};
        shared_ptr<int32_t> ZOrder_ {};
      };

      virtual bool empty() const override { return this->images_ == nullptr
        && this->paneId_ == nullptr && this->segmentType_ == nullptr && this->sourceType_ == nullptr && this->texts_ == nullptr && this->userId_ == nullptr; };
      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<UserPanes::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<UserPanes::Images>) };
      inline vector<UserPanes::Images> getImages() { DARABONBA_PTR_GET(images_, vector<UserPanes::Images>) };
      inline UserPanes& setImages(const vector<UserPanes::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline UserPanes& setImages(vector<UserPanes::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // paneId Field Functions 
      bool hasPaneId() const { return this->paneId_ != nullptr;};
      void deletePaneId() { this->paneId_ = nullptr;};
      inline int32_t getPaneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0) };
      inline UserPanes& setPaneId(int32_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


      // segmentType Field Functions 
      bool hasSegmentType() const { return this->segmentType_ != nullptr;};
      void deleteSegmentType() { this->segmentType_ = nullptr;};
      inline int32_t getSegmentType() const { DARABONBA_PTR_GET_DEFAULT(segmentType_, 0) };
      inline UserPanes& setSegmentType(int32_t segmentType) { DARABONBA_PTR_SET_VALUE(segmentType_, segmentType) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline UserPanes& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // texts Field Functions 
      bool hasTexts() const { return this->texts_ != nullptr;};
      void deleteTexts() { this->texts_ = nullptr;};
      inline const vector<UserPanes::Texts> & getTexts() const { DARABONBA_PTR_GET_CONST(texts_, vector<UserPanes::Texts>) };
      inline vector<UserPanes::Texts> getTexts() { DARABONBA_PTR_GET(texts_, vector<UserPanes::Texts>) };
      inline UserPanes& setTexts(const vector<UserPanes::Texts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
      inline UserPanes& setTexts(vector<UserPanes::Texts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserPanes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<UserPanes::Images>> images_ {};
      shared_ptr<int32_t> paneId_ {};
      shared_ptr<int32_t> segmentType_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<vector<UserPanes::Texts>> texts_ {};
      shared_ptr<string> userId_ {};
    };

    class EnhancedParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnhancedParam& obj) { 
        DARABONBA_PTR_TO_JSON(EnablePortraitSegmentation, enablePortraitSegmentation_);
      };
      friend void from_json(const Darabonba::Json& j, EnhancedParam& obj) { 
        DARABONBA_PTR_FROM_JSON(EnablePortraitSegmentation, enablePortraitSegmentation_);
      };
      EnhancedParam() = default ;
      EnhancedParam(const EnhancedParam &) = default ;
      EnhancedParam(EnhancedParam &&) = default ;
      EnhancedParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnhancedParam() = default ;
      EnhancedParam& operator=(const EnhancedParam &) = default ;
      EnhancedParam& operator=(EnhancedParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enablePortraitSegmentation_ == nullptr; };
      // enablePortraitSegmentation Field Functions 
      bool hasEnablePortraitSegmentation() const { return this->enablePortraitSegmentation_ != nullptr;};
      void deleteEnablePortraitSegmentation() { this->enablePortraitSegmentation_ = nullptr;};
      inline bool getEnablePortraitSegmentation() const { DARABONBA_PTR_GET_DEFAULT(enablePortraitSegmentation_, false) };
      inline EnhancedParam& setEnablePortraitSegmentation(bool enablePortraitSegmentation) { DARABONBA_PTR_SET_VALUE(enablePortraitSegmentation_, enablePortraitSegmentation) };


    protected:
      shared_ptr<bool> enablePortraitSegmentation_ {};
    };

    class ClockWidgets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClockWidgets& obj) { 
        DARABONBA_PTR_TO_JSON(Alpha, alpha_);
        DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
        DARABONBA_PTR_TO_JSON(BorderWidth, borderWidth_);
        DARABONBA_PTR_TO_JSON(Box, box_);
        DARABONBA_PTR_TO_JSON(BoxBorderWidth, boxBorderWidth_);
        DARABONBA_PTR_TO_JSON(BoxColor, boxColor_);
        DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
        DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
        DARABONBA_PTR_TO_JSON(FontType, fontType_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
        DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
      };
      friend void from_json(const Darabonba::Json& j, ClockWidgets& obj) { 
        DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
        DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
        DARABONBA_PTR_FROM_JSON(BorderWidth, borderWidth_);
        DARABONBA_PTR_FROM_JSON(Box, box_);
        DARABONBA_PTR_FROM_JSON(BoxBorderWidth, boxBorderWidth_);
        DARABONBA_PTR_FROM_JSON(BoxColor, boxColor_);
        DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
        DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
        DARABONBA_PTR_FROM_JSON(FontType, fontType_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
        DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
      };
      ClockWidgets() = default ;
      ClockWidgets(const ClockWidgets &) = default ;
      ClockWidgets(ClockWidgets &&) = default ;
      ClockWidgets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClockWidgets() = default ;
      ClockWidgets& operator=(const ClockWidgets &) = default ;
      ClockWidgets& operator=(ClockWidgets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alpha_ == nullptr
        && this->borderColor_ == nullptr && this->borderWidth_ == nullptr && this->box_ == nullptr && this->boxBorderWidth_ == nullptr && this->boxColor_ == nullptr
        && this->fontColor_ == nullptr && this->fontSize_ == nullptr && this->fontType_ == nullptr && this->x_ == nullptr && this->y_ == nullptr
        && this->ZOrder_ == nullptr; };
      // alpha Field Functions 
      bool hasAlpha() const { return this->alpha_ != nullptr;};
      void deleteAlpha() { this->alpha_ = nullptr;};
      inline float getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
      inline ClockWidgets& setAlpha(float alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


      // borderColor Field Functions 
      bool hasBorderColor() const { return this->borderColor_ != nullptr;};
      void deleteBorderColor() { this->borderColor_ = nullptr;};
      inline int64_t getBorderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, 0L) };
      inline ClockWidgets& setBorderColor(int64_t borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


      // borderWidth Field Functions 
      bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
      void deleteBorderWidth() { this->borderWidth_ = nullptr;};
      inline int32_t getBorderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, 0) };
      inline ClockWidgets& setBorderWidth(int32_t borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


      // box Field Functions 
      bool hasBox() const { return this->box_ != nullptr;};
      void deleteBox() { this->box_ = nullptr;};
      inline bool getBox() const { DARABONBA_PTR_GET_DEFAULT(box_, false) };
      inline ClockWidgets& setBox(bool box) { DARABONBA_PTR_SET_VALUE(box_, box) };


      // boxBorderWidth Field Functions 
      bool hasBoxBorderWidth() const { return this->boxBorderWidth_ != nullptr;};
      void deleteBoxBorderWidth() { this->boxBorderWidth_ = nullptr;};
      inline int32_t getBoxBorderWidth() const { DARABONBA_PTR_GET_DEFAULT(boxBorderWidth_, 0) };
      inline ClockWidgets& setBoxBorderWidth(int32_t boxBorderWidth) { DARABONBA_PTR_SET_VALUE(boxBorderWidth_, boxBorderWidth) };


      // boxColor Field Functions 
      bool hasBoxColor() const { return this->boxColor_ != nullptr;};
      void deleteBoxColor() { this->boxColor_ = nullptr;};
      inline int64_t getBoxColor() const { DARABONBA_PTR_GET_DEFAULT(boxColor_, 0L) };
      inline ClockWidgets& setBoxColor(int64_t boxColor) { DARABONBA_PTR_SET_VALUE(boxColor_, boxColor) };


      // fontColor Field Functions 
      bool hasFontColor() const { return this->fontColor_ != nullptr;};
      void deleteFontColor() { this->fontColor_ = nullptr;};
      inline int32_t getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, 0) };
      inline ClockWidgets& setFontColor(int32_t fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


      // fontSize Field Functions 
      bool hasFontSize() const { return this->fontSize_ != nullptr;};
      void deleteFontSize() { this->fontSize_ = nullptr;};
      inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
      inline ClockWidgets& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


      // fontType Field Functions 
      bool hasFontType() const { return this->fontType_ != nullptr;};
      void deleteFontType() { this->fontType_ = nullptr;};
      inline int32_t getFontType() const { DARABONBA_PTR_GET_DEFAULT(fontType_, 0) };
      inline ClockWidgets& setFontType(int32_t fontType) { DARABONBA_PTR_SET_VALUE(fontType_, fontType) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline ClockWidgets& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline ClockWidgets& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      // ZOrder Field Functions 
      bool hasZOrder() const { return this->ZOrder_ != nullptr;};
      void deleteZOrder() { this->ZOrder_ = nullptr;};
      inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
      inline ClockWidgets& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


    protected:
      shared_ptr<float> alpha_ {};
      shared_ptr<int64_t> borderColor_ {};
      shared_ptr<int32_t> borderWidth_ {};
      shared_ptr<bool> box_ {};
      shared_ptr<int32_t> boxBorderWidth_ {};
      shared_ptr<int64_t> boxColor_ {};
      shared_ptr<int32_t> fontColor_ {};
      shared_ptr<int32_t> fontSize_ {};
      shared_ptr<int32_t> fontType_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
      shared_ptr<int32_t> ZOrder_ {};
    };

    class Backgrounds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Backgrounds& obj) { 
        DARABONBA_PTR_TO_JSON(Display, display_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
        DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
      };
      friend void from_json(const Darabonba::Json& j, Backgrounds& obj) { 
        DARABONBA_PTR_FROM_JSON(Display, display_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
        DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
      };
      Backgrounds() = default ;
      Backgrounds(const Backgrounds &) = default ;
      Backgrounds(Backgrounds &&) = default ;
      Backgrounds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Backgrounds() = default ;
      Backgrounds& operator=(const Backgrounds &) = default ;
      Backgrounds& operator=(Backgrounds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->display_ == nullptr
        && this->height_ == nullptr && this->url_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr
        && this->ZOrder_ == nullptr; };
      // display Field Functions 
      bool hasDisplay() const { return this->display_ != nullptr;};
      void deleteDisplay() { this->display_ = nullptr;};
      inline int32_t getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, 0) };
      inline Backgrounds& setDisplay(int32_t display) { DARABONBA_PTR_SET_VALUE(display_, display) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Backgrounds& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Backgrounds& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Backgrounds& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Backgrounds& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Backgrounds& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      // ZOrder Field Functions 
      bool hasZOrder() const { return this->ZOrder_ != nullptr;};
      void deleteZOrder() { this->ZOrder_ = nullptr;};
      inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
      inline Backgrounds& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


    protected:
      shared_ptr<int32_t> display_ {};
      shared_ptr<float> height_ {};
      shared_ptr<string> url_ {};
      shared_ptr<float> width_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
      shared_ptr<int32_t> ZOrder_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->backgroundColor_ == nullptr && this->backgrounds_ == nullptr && this->channelId_ == nullptr && this->clockWidgets_ == nullptr && this->cropMode_ == nullptr
        && this->enhancedParam_ == nullptr && this->layoutIds_ == nullptr && this->mediaEncode_ == nullptr && this->mixMode_ == nullptr && this->ownerId_ == nullptr
        && this->payloadType_ == nullptr && this->reportVad_ == nullptr && this->rtpExtInfo_ == nullptr && this->sourceType_ == nullptr && this->streamType_ == nullptr
        && this->streamURL_ == nullptr && this->subSpecAudioUsers_ == nullptr && this->subSpecCameraUsers_ == nullptr && this->subSpecShareScreenUsers_ == nullptr && this->subSpecUsers_ == nullptr
        && this->taskId_ == nullptr && this->taskType_ == nullptr && this->timeStampRef_ == nullptr && this->unsubSpecAudioUsers_ == nullptr && this->unsubSpecCameraUsers_ == nullptr
        && this->unsubSpecShareScreenUsers_ == nullptr && this->userPanes_ == nullptr && this->vadInterval_ == nullptr && this->watermarks_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartMPUTaskRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline int32_t getBackgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, 0) };
    inline StartMPUTaskRequest& setBackgroundColor(int32_t backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<StartMPUTaskRequest::Backgrounds> & getBackgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<StartMPUTaskRequest::Backgrounds>) };
    inline vector<StartMPUTaskRequest::Backgrounds> getBackgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<StartMPUTaskRequest::Backgrounds>) };
    inline StartMPUTaskRequest& setBackgrounds(const vector<StartMPUTaskRequest::Backgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline StartMPUTaskRequest& setBackgrounds(vector<StartMPUTaskRequest::Backgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartMPUTaskRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<StartMPUTaskRequest::ClockWidgets> & getClockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<StartMPUTaskRequest::ClockWidgets>) };
    inline vector<StartMPUTaskRequest::ClockWidgets> getClockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<StartMPUTaskRequest::ClockWidgets>) };
    inline StartMPUTaskRequest& setClockWidgets(const vector<StartMPUTaskRequest::ClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline StartMPUTaskRequest& setClockWidgets(vector<StartMPUTaskRequest::ClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t getCropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline StartMPUTaskRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // enhancedParam Field Functions 
    bool hasEnhancedParam() const { return this->enhancedParam_ != nullptr;};
    void deleteEnhancedParam() { this->enhancedParam_ = nullptr;};
    inline const StartMPUTaskRequest::EnhancedParam & getEnhancedParam() const { DARABONBA_PTR_GET_CONST(enhancedParam_, StartMPUTaskRequest::EnhancedParam) };
    inline StartMPUTaskRequest::EnhancedParam getEnhancedParam() { DARABONBA_PTR_GET(enhancedParam_, StartMPUTaskRequest::EnhancedParam) };
    inline StartMPUTaskRequest& setEnhancedParam(const StartMPUTaskRequest::EnhancedParam & enhancedParam) { DARABONBA_PTR_SET_VALUE(enhancedParam_, enhancedParam) };
    inline StartMPUTaskRequest& setEnhancedParam(StartMPUTaskRequest::EnhancedParam && enhancedParam) { DARABONBA_PTR_SET_RVALUE(enhancedParam_, enhancedParam) };


    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<int64_t> & getLayoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<int64_t>) };
    inline vector<int64_t> getLayoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<int64_t>) };
    inline StartMPUTaskRequest& setLayoutIds(const vector<int64_t> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline StartMPUTaskRequest& setLayoutIds(vector<int64_t> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t getMediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline StartMPUTaskRequest& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline int32_t getMixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, 0) };
    inline StartMPUTaskRequest& setMixMode(int32_t mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartMPUTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payloadType Field Functions 
    bool hasPayloadType() const { return this->payloadType_ != nullptr;};
    void deletePayloadType() { this->payloadType_ = nullptr;};
    inline int32_t getPayloadType() const { DARABONBA_PTR_GET_DEFAULT(payloadType_, 0) };
    inline StartMPUTaskRequest& setPayloadType(int32_t payloadType) { DARABONBA_PTR_SET_VALUE(payloadType_, payloadType) };


    // reportVad Field Functions 
    bool hasReportVad() const { return this->reportVad_ != nullptr;};
    void deleteReportVad() { this->reportVad_ = nullptr;};
    inline int32_t getReportVad() const { DARABONBA_PTR_GET_DEFAULT(reportVad_, 0) };
    inline StartMPUTaskRequest& setReportVad(int32_t reportVad) { DARABONBA_PTR_SET_VALUE(reportVad_, reportVad) };


    // rtpExtInfo Field Functions 
    bool hasRtpExtInfo() const { return this->rtpExtInfo_ != nullptr;};
    void deleteRtpExtInfo() { this->rtpExtInfo_ = nullptr;};
    inline int32_t getRtpExtInfo() const { DARABONBA_PTR_GET_DEFAULT(rtpExtInfo_, 0) };
    inline StartMPUTaskRequest& setRtpExtInfo(int32_t rtpExtInfo) { DARABONBA_PTR_SET_VALUE(rtpExtInfo_, rtpExtInfo) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline StartMPUTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline StartMPUTaskRequest& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string getStreamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline StartMPUTaskRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // subSpecAudioUsers Field Functions 
    bool hasSubSpecAudioUsers() const { return this->subSpecAudioUsers_ != nullptr;};
    void deleteSubSpecAudioUsers() { this->subSpecAudioUsers_ = nullptr;};
    inline const vector<string> & getSubSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(subSpecAudioUsers_, vector<string>) };
    inline vector<string> getSubSpecAudioUsers() { DARABONBA_PTR_GET(subSpecAudioUsers_, vector<string>) };
    inline StartMPUTaskRequest& setSubSpecAudioUsers(const vector<string> & subSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(subSpecAudioUsers_, subSpecAudioUsers) };
    inline StartMPUTaskRequest& setSubSpecAudioUsers(vector<string> && subSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(subSpecAudioUsers_, subSpecAudioUsers) };


    // subSpecCameraUsers Field Functions 
    bool hasSubSpecCameraUsers() const { return this->subSpecCameraUsers_ != nullptr;};
    void deleteSubSpecCameraUsers() { this->subSpecCameraUsers_ = nullptr;};
    inline const vector<string> & getSubSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(subSpecCameraUsers_, vector<string>) };
    inline vector<string> getSubSpecCameraUsers() { DARABONBA_PTR_GET(subSpecCameraUsers_, vector<string>) };
    inline StartMPUTaskRequest& setSubSpecCameraUsers(const vector<string> & subSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(subSpecCameraUsers_, subSpecCameraUsers) };
    inline StartMPUTaskRequest& setSubSpecCameraUsers(vector<string> && subSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(subSpecCameraUsers_, subSpecCameraUsers) };


    // subSpecShareScreenUsers Field Functions 
    bool hasSubSpecShareScreenUsers() const { return this->subSpecShareScreenUsers_ != nullptr;};
    void deleteSubSpecShareScreenUsers() { this->subSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & getSubSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(subSpecShareScreenUsers_, vector<string>) };
    inline vector<string> getSubSpecShareScreenUsers() { DARABONBA_PTR_GET(subSpecShareScreenUsers_, vector<string>) };
    inline StartMPUTaskRequest& setSubSpecShareScreenUsers(const vector<string> & subSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };
    inline StartMPUTaskRequest& setSubSpecShareScreenUsers(vector<string> && subSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };


    // subSpecUsers Field Functions 
    bool hasSubSpecUsers() const { return this->subSpecUsers_ != nullptr;};
    void deleteSubSpecUsers() { this->subSpecUsers_ = nullptr;};
    inline const vector<string> & getSubSpecUsers() const { DARABONBA_PTR_GET_CONST(subSpecUsers_, vector<string>) };
    inline vector<string> getSubSpecUsers() { DARABONBA_PTR_GET(subSpecUsers_, vector<string>) };
    inline StartMPUTaskRequest& setSubSpecUsers(const vector<string> & subSpecUsers) { DARABONBA_PTR_SET_VALUE(subSpecUsers_, subSpecUsers) };
    inline StartMPUTaskRequest& setSubSpecUsers(vector<string> && subSpecUsers) { DARABONBA_PTR_SET_RVALUE(subSpecUsers_, subSpecUsers) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartMPUTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline StartMPUTaskRequest& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // timeStampRef Field Functions 
    bool hasTimeStampRef() const { return this->timeStampRef_ != nullptr;};
    void deleteTimeStampRef() { this->timeStampRef_ = nullptr;};
    inline int64_t getTimeStampRef() const { DARABONBA_PTR_GET_DEFAULT(timeStampRef_, 0L) };
    inline StartMPUTaskRequest& setTimeStampRef(int64_t timeStampRef) { DARABONBA_PTR_SET_VALUE(timeStampRef_, timeStampRef) };


    // unsubSpecAudioUsers Field Functions 
    bool hasUnsubSpecAudioUsers() const { return this->unsubSpecAudioUsers_ != nullptr;};
    void deleteUnsubSpecAudioUsers() { this->unsubSpecAudioUsers_ = nullptr;};
    inline const vector<string> & getUnsubSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecAudioUsers_, vector<string>) };
    inline vector<string> getUnsubSpecAudioUsers() { DARABONBA_PTR_GET(unsubSpecAudioUsers_, vector<string>) };
    inline StartMPUTaskRequest& setUnsubSpecAudioUsers(const vector<string> & unsubSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };
    inline StartMPUTaskRequest& setUnsubSpecAudioUsers(vector<string> && unsubSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };


    // unsubSpecCameraUsers Field Functions 
    bool hasUnsubSpecCameraUsers() const { return this->unsubSpecCameraUsers_ != nullptr;};
    void deleteUnsubSpecCameraUsers() { this->unsubSpecCameraUsers_ = nullptr;};
    inline const vector<string> & getUnsubSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecCameraUsers_, vector<string>) };
    inline vector<string> getUnsubSpecCameraUsers() { DARABONBA_PTR_GET(unsubSpecCameraUsers_, vector<string>) };
    inline StartMPUTaskRequest& setUnsubSpecCameraUsers(const vector<string> & unsubSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };
    inline StartMPUTaskRequest& setUnsubSpecCameraUsers(vector<string> && unsubSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };


    // unsubSpecShareScreenUsers Field Functions 
    bool hasUnsubSpecShareScreenUsers() const { return this->unsubSpecShareScreenUsers_ != nullptr;};
    void deleteUnsubSpecShareScreenUsers() { this->unsubSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & getUnsubSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecShareScreenUsers_, vector<string>) };
    inline vector<string> getUnsubSpecShareScreenUsers() { DARABONBA_PTR_GET(unsubSpecShareScreenUsers_, vector<string>) };
    inline StartMPUTaskRequest& setUnsubSpecShareScreenUsers(const vector<string> & unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };
    inline StartMPUTaskRequest& setUnsubSpecShareScreenUsers(vector<string> && unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };


    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<StartMPUTaskRequest::UserPanes> & getUserPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<StartMPUTaskRequest::UserPanes>) };
    inline vector<StartMPUTaskRequest::UserPanes> getUserPanes() { DARABONBA_PTR_GET(userPanes_, vector<StartMPUTaskRequest::UserPanes>) };
    inline StartMPUTaskRequest& setUserPanes(const vector<StartMPUTaskRequest::UserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline StartMPUTaskRequest& setUserPanes(vector<StartMPUTaskRequest::UserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


    // vadInterval Field Functions 
    bool hasVadInterval() const { return this->vadInterval_ != nullptr;};
    void deleteVadInterval() { this->vadInterval_ = nullptr;};
    inline int64_t getVadInterval() const { DARABONBA_PTR_GET_DEFAULT(vadInterval_, 0L) };
    inline StartMPUTaskRequest& setVadInterval(int64_t vadInterval) { DARABONBA_PTR_SET_VALUE(vadInterval_, vadInterval) };


    // watermarks Field Functions 
    bool hasWatermarks() const { return this->watermarks_ != nullptr;};
    void deleteWatermarks() { this->watermarks_ = nullptr;};
    inline const vector<StartMPUTaskRequest::Watermarks> & getWatermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<StartMPUTaskRequest::Watermarks>) };
    inline vector<StartMPUTaskRequest::Watermarks> getWatermarks() { DARABONBA_PTR_GET(watermarks_, vector<StartMPUTaskRequest::Watermarks>) };
    inline StartMPUTaskRequest& setWatermarks(const vector<StartMPUTaskRequest::Watermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
    inline StartMPUTaskRequest& setWatermarks(vector<StartMPUTaskRequest::Watermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<int32_t> backgroundColor_ {};
    shared_ptr<vector<StartMPUTaskRequest::Backgrounds>> backgrounds_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<vector<StartMPUTaskRequest::ClockWidgets>> clockWidgets_ {};
    shared_ptr<int32_t> cropMode_ {};
    shared_ptr<StartMPUTaskRequest::EnhancedParam> enhancedParam_ {};
    shared_ptr<vector<int64_t>> layoutIds_ {};
    shared_ptr<int32_t> mediaEncode_ {};
    shared_ptr<int32_t> mixMode_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int32_t> payloadType_ {};
    shared_ptr<int32_t> reportVad_ {};
    shared_ptr<int32_t> rtpExtInfo_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<int32_t> streamType_ {};
    shared_ptr<string> streamURL_ {};
    shared_ptr<vector<string>> subSpecAudioUsers_ {};
    shared_ptr<vector<string>> subSpecCameraUsers_ {};
    shared_ptr<vector<string>> subSpecShareScreenUsers_ {};
    shared_ptr<vector<string>> subSpecUsers_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<int32_t> taskType_ {};
    shared_ptr<int64_t> timeStampRef_ {};
    shared_ptr<vector<string>> unsubSpecAudioUsers_ {};
    shared_ptr<vector<string>> unsubSpecCameraUsers_ {};
    shared_ptr<vector<string>> unsubSpecShareScreenUsers_ {};
    shared_ptr<vector<StartMPUTaskRequest::UserPanes>> userPanes_ {};
    shared_ptr<int64_t> vadInterval_ {};
    shared_ptr<vector<StartMPUTaskRequest::Watermarks>> watermarks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
