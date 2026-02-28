// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSTREAMINGOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSTREAMINGOUTREQUEST_HPP_
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
  class StartStreamingOutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartStreamingOutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotation, annotation_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(CropMode, cropMode_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsers_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
      DARABONBA_PTR_TO_JSON(RegionColor, regionColor_);
      DARABONBA_PTR_TO_JSON(ReservePaneForNoCameraUser, reservePaneForNoCameraUser_);
      DARABONBA_PTR_TO_JSON(ShowDefaultBackgroundOnMute, showDefaultBackgroundOnMute_);
      DARABONBA_PTR_TO_JSON(SpecMixedUserList, specMixedUserList_);
      DARABONBA_PTR_TO_JSON(StartWithoutChannel, startWithoutChannel_);
      DARABONBA_PTR_TO_JSON(StartWithoutChannelWaitTime, startWithoutChannelWaitTime_);
      DARABONBA_PTR_TO_JSON(SubHighResolutionStream, subHighResolutionStream_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, StartStreamingOutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotation, annotation_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(CropMode, cropMode_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsers_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
      DARABONBA_PTR_FROM_JSON(RegionColor, regionColor_);
      DARABONBA_PTR_FROM_JSON(ReservePaneForNoCameraUser, reservePaneForNoCameraUser_);
      DARABONBA_PTR_FROM_JSON(ShowDefaultBackgroundOnMute, showDefaultBackgroundOnMute_);
      DARABONBA_PTR_FROM_JSON(SpecMixedUserList, specMixedUserList_);
      DARABONBA_PTR_FROM_JSON(StartWithoutChannel, startWithoutChannel_);
      DARABONBA_PTR_FROM_JSON(StartWithoutChannelWaitTime, startWithoutChannelWaitTime_);
      DARABONBA_PTR_FROM_JSON(SubHighResolutionStream, subHighResolutionStream_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    StartStreamingOutRequest() = default ;
    StartStreamingOutRequest(const StartStreamingOutRequest &) = default ;
    StartStreamingOutRequest(StartStreamingOutRequest &&) = default ;
    StartStreamingOutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartStreamingOutRequest() = default ;
    StartStreamingOutRequest& operator=(const StartStreamingOutRequest &) = default ;
    StartStreamingOutRequest& operator=(StartStreamingOutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Texts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Texts& obj) { 
        DARABONBA_PTR_TO_JSON(Alpha, alpha_);
        DARABONBA_PTR_TO_JSON(BoxAlpha, boxAlpha_);
        DARABONBA_PTR_TO_JSON(BoxBorderw, boxBorderw_);
        DARABONBA_PTR_TO_JSON(BoxColor, boxColor_);
        DARABONBA_PTR_TO_JSON(Font, font_);
        DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
        DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
        DARABONBA_PTR_TO_JSON(HasBox, hasBox_);
        DARABONBA_PTR_TO_JSON(Layer, layer_);
        DARABONBA_PTR_TO_JSON(Texture, texture_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, Texts& obj) { 
        DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
        DARABONBA_PTR_FROM_JSON(BoxAlpha, boxAlpha_);
        DARABONBA_PTR_FROM_JSON(BoxBorderw, boxBorderw_);
        DARABONBA_PTR_FROM_JSON(BoxColor, boxColor_);
        DARABONBA_PTR_FROM_JSON(Font, font_);
        DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
        DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
        DARABONBA_PTR_FROM_JSON(HasBox, hasBox_);
        DARABONBA_PTR_FROM_JSON(Layer, layer_);
        DARABONBA_PTR_FROM_JSON(Texture, texture_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
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
      class FontColor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FontColor& obj) { 
          DARABONBA_PTR_TO_JSON(B, b_);
          DARABONBA_PTR_TO_JSON(G, g_);
          DARABONBA_PTR_TO_JSON(R, r_);
        };
        friend void from_json(const Darabonba::Json& j, FontColor& obj) { 
          DARABONBA_PTR_FROM_JSON(B, b_);
          DARABONBA_PTR_FROM_JSON(G, g_);
          DARABONBA_PTR_FROM_JSON(R, r_);
        };
        FontColor() = default ;
        FontColor(const FontColor &) = default ;
        FontColor(FontColor &&) = default ;
        FontColor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FontColor() = default ;
        FontColor& operator=(const FontColor &) = default ;
        FontColor& operator=(FontColor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
        // b Field Functions 
        bool hasB() const { return this->b_ != nullptr;};
        void deleteB() { this->b_ = nullptr;};
        inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
        inline FontColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


        // g Field Functions 
        bool hasG() const { return this->g_ != nullptr;};
        void deleteG() { this->g_ = nullptr;};
        inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
        inline FontColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


        // r Field Functions 
        bool hasR() const { return this->r_ != nullptr;};
        void deleteR() { this->r_ = nullptr;};
        inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
        inline FontColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


      protected:
        shared_ptr<int32_t> b_ {};
        shared_ptr<int32_t> g_ {};
        shared_ptr<int32_t> r_ {};
      };

      class BoxColor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BoxColor& obj) { 
          DARABONBA_PTR_TO_JSON(B, b_);
          DARABONBA_PTR_TO_JSON(G, g_);
          DARABONBA_PTR_TO_JSON(R, r_);
        };
        friend void from_json(const Darabonba::Json& j, BoxColor& obj) { 
          DARABONBA_PTR_FROM_JSON(B, b_);
          DARABONBA_PTR_FROM_JSON(G, g_);
          DARABONBA_PTR_FROM_JSON(R, r_);
        };
        BoxColor() = default ;
        BoxColor(const BoxColor &) = default ;
        BoxColor(BoxColor &&) = default ;
        BoxColor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BoxColor() = default ;
        BoxColor& operator=(const BoxColor &) = default ;
        BoxColor& operator=(BoxColor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
        // b Field Functions 
        bool hasB() const { return this->b_ != nullptr;};
        void deleteB() { this->b_ = nullptr;};
        inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
        inline BoxColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


        // g Field Functions 
        bool hasG() const { return this->g_ != nullptr;};
        void deleteG() { this->g_ = nullptr;};
        inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
        inline BoxColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


        // r Field Functions 
        bool hasR() const { return this->r_ != nullptr;};
        void deleteR() { this->r_ = nullptr;};
        inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
        inline BoxColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


      protected:
        shared_ptr<int32_t> b_ {};
        shared_ptr<int32_t> g_ {};
        shared_ptr<int32_t> r_ {};
      };

      virtual bool empty() const override { return this->alpha_ == nullptr
        && this->boxAlpha_ == nullptr && this->boxBorderw_ == nullptr && this->boxColor_ == nullptr && this->font_ == nullptr && this->fontColor_ == nullptr
        && this->fontSize_ == nullptr && this->hasBox_ == nullptr && this->layer_ == nullptr && this->texture_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr; };
      // alpha Field Functions 
      bool hasAlpha() const { return this->alpha_ != nullptr;};
      void deleteAlpha() { this->alpha_ = nullptr;};
      inline double getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
      inline Texts& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


      // boxAlpha Field Functions 
      bool hasBoxAlpha() const { return this->boxAlpha_ != nullptr;};
      void deleteBoxAlpha() { this->boxAlpha_ = nullptr;};
      inline double getBoxAlpha() const { DARABONBA_PTR_GET_DEFAULT(boxAlpha_, 0.0) };
      inline Texts& setBoxAlpha(double boxAlpha) { DARABONBA_PTR_SET_VALUE(boxAlpha_, boxAlpha) };


      // boxBorderw Field Functions 
      bool hasBoxBorderw() const { return this->boxBorderw_ != nullptr;};
      void deleteBoxBorderw() { this->boxBorderw_ = nullptr;};
      inline int32_t getBoxBorderw() const { DARABONBA_PTR_GET_DEFAULT(boxBorderw_, 0) };
      inline Texts& setBoxBorderw(int32_t boxBorderw) { DARABONBA_PTR_SET_VALUE(boxBorderw_, boxBorderw) };


      // boxColor Field Functions 
      bool hasBoxColor() const { return this->boxColor_ != nullptr;};
      void deleteBoxColor() { this->boxColor_ = nullptr;};
      inline const Texts::BoxColor & getBoxColor() const { DARABONBA_PTR_GET_CONST(boxColor_, Texts::BoxColor) };
      inline Texts::BoxColor getBoxColor() { DARABONBA_PTR_GET(boxColor_, Texts::BoxColor) };
      inline Texts& setBoxColor(const Texts::BoxColor & boxColor) { DARABONBA_PTR_SET_VALUE(boxColor_, boxColor) };
      inline Texts& setBoxColor(Texts::BoxColor && boxColor) { DARABONBA_PTR_SET_RVALUE(boxColor_, boxColor) };


      // font Field Functions 
      bool hasFont() const { return this->font_ != nullptr;};
      void deleteFont() { this->font_ = nullptr;};
      inline int32_t getFont() const { DARABONBA_PTR_GET_DEFAULT(font_, 0) };
      inline Texts& setFont(int32_t font) { DARABONBA_PTR_SET_VALUE(font_, font) };


      // fontColor Field Functions 
      bool hasFontColor() const { return this->fontColor_ != nullptr;};
      void deleteFontColor() { this->fontColor_ = nullptr;};
      inline const Texts::FontColor & getFontColor() const { DARABONBA_PTR_GET_CONST(fontColor_, Texts::FontColor) };
      inline Texts::FontColor getFontColor() { DARABONBA_PTR_GET(fontColor_, Texts::FontColor) };
      inline Texts& setFontColor(const Texts::FontColor & fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };
      inline Texts& setFontColor(Texts::FontColor && fontColor) { DARABONBA_PTR_SET_RVALUE(fontColor_, fontColor) };


      // fontSize Field Functions 
      bool hasFontSize() const { return this->fontSize_ != nullptr;};
      void deleteFontSize() { this->fontSize_ = nullptr;};
      inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
      inline Texts& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


      // hasBox Field Functions 
      bool hasHasBox() const { return this->hasBox_ != nullptr;};
      void deleteHasBox() { this->hasBox_ = nullptr;};
      inline bool getHasBox() const { DARABONBA_PTR_GET_DEFAULT(hasBox_, false) };
      inline Texts& setHasBox(bool hasBox) { DARABONBA_PTR_SET_VALUE(hasBox_, hasBox) };


      // layer Field Functions 
      bool hasLayer() const { return this->layer_ != nullptr;};
      void deleteLayer() { this->layer_ = nullptr;};
      inline int32_t getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
      inline Texts& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


      // texture Field Functions 
      bool hasTexture() const { return this->texture_ != nullptr;};
      void deleteTexture() { this->texture_ = nullptr;};
      inline string getTexture() const { DARABONBA_PTR_GET_DEFAULT(texture_, "") };
      inline Texts& setTexture(string texture) { DARABONBA_PTR_SET_VALUE(texture_, texture) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Texts& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Texts& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    protected:
      shared_ptr<double> alpha_ {};
      shared_ptr<double> boxAlpha_ {};
      shared_ptr<int32_t> boxBorderw_ {};
      shared_ptr<Texts::BoxColor> boxColor_ {};
      shared_ptr<int32_t> font_ {};
      shared_ptr<Texts::FontColor> fontColor_ {};
      shared_ptr<int32_t> fontSize_ {};
      shared_ptr<bool> hasBox_ {};
      shared_ptr<int32_t> layer_ {};
      // This parameter is required.
      shared_ptr<string> texture_ {};
      // This parameter is required.
      shared_ptr<double> x_ {};
      // This parameter is required.
      shared_ptr<double> y_ {};
    };

    class RegionColor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionColor& obj) { 
        DARABONBA_PTR_TO_JSON(B, b_);
        DARABONBA_PTR_TO_JSON(G, g_);
        DARABONBA_PTR_TO_JSON(R, r_);
      };
      friend void from_json(const Darabonba::Json& j, RegionColor& obj) { 
        DARABONBA_PTR_FROM_JSON(B, b_);
        DARABONBA_PTR_FROM_JSON(G, g_);
        DARABONBA_PTR_FROM_JSON(R, r_);
      };
      RegionColor() = default ;
      RegionColor(const RegionColor &) = default ;
      RegionColor(RegionColor &&) = default ;
      RegionColor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionColor() = default ;
      RegionColor& operator=(const RegionColor &) = default ;
      RegionColor& operator=(RegionColor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
      // b Field Functions 
      bool hasB() const { return this->b_ != nullptr;};
      void deleteB() { this->b_ = nullptr;};
      inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
      inline RegionColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


      // g Field Functions 
      bool hasG() const { return this->g_ != nullptr;};
      void deleteG() { this->g_ = nullptr;};
      inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
      inline RegionColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


      // r Field Functions 
      bool hasR() const { return this->r_ != nullptr;};
      void deleteR() { this->r_ = nullptr;};
      inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
      inline RegionColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


    protected:
      shared_ptr<int32_t> b_ {};
      shared_ptr<int32_t> g_ {};
      shared_ptr<int32_t> r_ {};
    };

    class Panes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Panes& obj) { 
        DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
        DARABONBA_PTR_TO_JSON(Images, images_);
        DARABONBA_PTR_TO_JSON(PaneCropMode, paneCropMode_);
        DARABONBA_PTR_TO_JSON(PaneId, paneId_);
        DARABONBA_PTR_TO_JSON(ReservePaneForOfflineUser, reservePaneForOfflineUser_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Texts, texts_);
        DARABONBA_PTR_TO_JSON(VideoOrder, videoOrder_);
        DARABONBA_PTR_TO_JSON(Whiteboard, whiteboard_);
      };
      friend void from_json(const Darabonba::Json& j, Panes& obj) { 
        DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
        DARABONBA_PTR_FROM_JSON(Images, images_);
        DARABONBA_PTR_FROM_JSON(PaneCropMode, paneCropMode_);
        DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
        DARABONBA_PTR_FROM_JSON(ReservePaneForOfflineUser, reservePaneForOfflineUser_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Texts, texts_);
        DARABONBA_PTR_FROM_JSON(VideoOrder, videoOrder_);
        DARABONBA_PTR_FROM_JSON(Whiteboard, whiteboard_);
      };
      Panes() = default ;
      Panes(const Panes &) = default ;
      Panes(Panes &&) = default ;
      Panes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Panes() = default ;
      Panes& operator=(const Panes &) = default ;
      Panes& operator=(Panes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Whiteboard : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Whiteboard& obj) { 
          DARABONBA_PTR_TO_JSON(WhiteboardId, whiteboardId_);
        };
        friend void from_json(const Darabonba::Json& j, Whiteboard& obj) { 
          DARABONBA_PTR_FROM_JSON(WhiteboardId, whiteboardId_);
        };
        Whiteboard() = default ;
        Whiteboard(const Whiteboard &) = default ;
        Whiteboard(Whiteboard &&) = default ;
        Whiteboard(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Whiteboard() = default ;
        Whiteboard& operator=(const Whiteboard &) = default ;
        Whiteboard& operator=(Whiteboard &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->whiteboardId_ == nullptr; };
        // whiteboardId Field Functions 
        bool hasWhiteboardId() const { return this->whiteboardId_ != nullptr;};
        void deleteWhiteboardId() { this->whiteboardId_ = nullptr;};
        inline string getWhiteboardId() const { DARABONBA_PTR_GET_DEFAULT(whiteboardId_, "") };
        inline Whiteboard& setWhiteboardId(string whiteboardId) { DARABONBA_PTR_SET_VALUE(whiteboardId_, whiteboardId) };


      protected:
        shared_ptr<string> whiteboardId_ {};
      };

      class Texts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Texts& obj) { 
          DARABONBA_PTR_TO_JSON(Alpha, alpha_);
          DARABONBA_PTR_TO_JSON(BoxAlpha, boxAlpha_);
          DARABONBA_PTR_TO_JSON(BoxBorderw, boxBorderw_);
          DARABONBA_PTR_TO_JSON(BoxColor, boxColor_);
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(Font, font_);
          DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
          DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
          DARABONBA_PTR_TO_JSON(HasBox, hasBox_);
          DARABONBA_PTR_TO_JSON(Layer, layer_);
          DARABONBA_PTR_TO_JSON(Texture, texture_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Texts& obj) { 
          DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
          DARABONBA_PTR_FROM_JSON(BoxAlpha, boxAlpha_);
          DARABONBA_PTR_FROM_JSON(BoxBorderw, boxBorderw_);
          DARABONBA_PTR_FROM_JSON(BoxColor, boxColor_);
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(Font, font_);
          DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
          DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
          DARABONBA_PTR_FROM_JSON(HasBox, hasBox_);
          DARABONBA_PTR_FROM_JSON(Layer, layer_);
          DARABONBA_PTR_FROM_JSON(Texture, texture_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
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
        class FontColor : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FontColor& obj) { 
            DARABONBA_PTR_TO_JSON(B, b_);
            DARABONBA_PTR_TO_JSON(G, g_);
            DARABONBA_PTR_TO_JSON(R, r_);
          };
          friend void from_json(const Darabonba::Json& j, FontColor& obj) { 
            DARABONBA_PTR_FROM_JSON(B, b_);
            DARABONBA_PTR_FROM_JSON(G, g_);
            DARABONBA_PTR_FROM_JSON(R, r_);
          };
          FontColor() = default ;
          FontColor(const FontColor &) = default ;
          FontColor(FontColor &&) = default ;
          FontColor(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FontColor() = default ;
          FontColor& operator=(const FontColor &) = default ;
          FontColor& operator=(FontColor &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
          // b Field Functions 
          bool hasB() const { return this->b_ != nullptr;};
          void deleteB() { this->b_ = nullptr;};
          inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
          inline FontColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


          // g Field Functions 
          bool hasG() const { return this->g_ != nullptr;};
          void deleteG() { this->g_ = nullptr;};
          inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
          inline FontColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


          // r Field Functions 
          bool hasR() const { return this->r_ != nullptr;};
          void deleteR() { this->r_ = nullptr;};
          inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
          inline FontColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


        protected:
          shared_ptr<int32_t> b_ {};
          shared_ptr<int32_t> g_ {};
          shared_ptr<int32_t> r_ {};
        };

        class BoxColor : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BoxColor& obj) { 
            DARABONBA_PTR_TO_JSON(B, b_);
            DARABONBA_PTR_TO_JSON(G, g_);
            DARABONBA_PTR_TO_JSON(R, r_);
          };
          friend void from_json(const Darabonba::Json& j, BoxColor& obj) { 
            DARABONBA_PTR_FROM_JSON(B, b_);
            DARABONBA_PTR_FROM_JSON(G, g_);
            DARABONBA_PTR_FROM_JSON(R, r_);
          };
          BoxColor() = default ;
          BoxColor(const BoxColor &) = default ;
          BoxColor(BoxColor &&) = default ;
          BoxColor(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BoxColor() = default ;
          BoxColor& operator=(const BoxColor &) = default ;
          BoxColor& operator=(BoxColor &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
          // b Field Functions 
          bool hasB() const { return this->b_ != nullptr;};
          void deleteB() { this->b_ = nullptr;};
          inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
          inline BoxColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


          // g Field Functions 
          bool hasG() const { return this->g_ != nullptr;};
          void deleteG() { this->g_ = nullptr;};
          inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
          inline BoxColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


          // r Field Functions 
          bool hasR() const { return this->r_ != nullptr;};
          void deleteR() { this->r_ = nullptr;};
          inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
          inline BoxColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


        protected:
          shared_ptr<int32_t> b_ {};
          shared_ptr<int32_t> g_ {};
          shared_ptr<int32_t> r_ {};
        };

        virtual bool empty() const override { return this->alpha_ == nullptr
        && this->boxAlpha_ == nullptr && this->boxBorderw_ == nullptr && this->boxColor_ == nullptr && this->display_ == nullptr && this->font_ == nullptr
        && this->fontColor_ == nullptr && this->fontSize_ == nullptr && this->hasBox_ == nullptr && this->layer_ == nullptr && this->texture_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr; };
        // alpha Field Functions 
        bool hasAlpha() const { return this->alpha_ != nullptr;};
        void deleteAlpha() { this->alpha_ = nullptr;};
        inline double getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
        inline Texts& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


        // boxAlpha Field Functions 
        bool hasBoxAlpha() const { return this->boxAlpha_ != nullptr;};
        void deleteBoxAlpha() { this->boxAlpha_ = nullptr;};
        inline double getBoxAlpha() const { DARABONBA_PTR_GET_DEFAULT(boxAlpha_, 0.0) };
        inline Texts& setBoxAlpha(double boxAlpha) { DARABONBA_PTR_SET_VALUE(boxAlpha_, boxAlpha) };


        // boxBorderw Field Functions 
        bool hasBoxBorderw() const { return this->boxBorderw_ != nullptr;};
        void deleteBoxBorderw() { this->boxBorderw_ = nullptr;};
        inline int32_t getBoxBorderw() const { DARABONBA_PTR_GET_DEFAULT(boxBorderw_, 0) };
        inline Texts& setBoxBorderw(int32_t boxBorderw) { DARABONBA_PTR_SET_VALUE(boxBorderw_, boxBorderw) };


        // boxColor Field Functions 
        bool hasBoxColor() const { return this->boxColor_ != nullptr;};
        void deleteBoxColor() { this->boxColor_ = nullptr;};
        inline const Texts::BoxColor & getBoxColor() const { DARABONBA_PTR_GET_CONST(boxColor_, Texts::BoxColor) };
        inline Texts::BoxColor getBoxColor() { DARABONBA_PTR_GET(boxColor_, Texts::BoxColor) };
        inline Texts& setBoxColor(const Texts::BoxColor & boxColor) { DARABONBA_PTR_SET_VALUE(boxColor_, boxColor) };
        inline Texts& setBoxColor(Texts::BoxColor && boxColor) { DARABONBA_PTR_SET_RVALUE(boxColor_, boxColor) };


        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
        inline Texts& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // font Field Functions 
        bool hasFont() const { return this->font_ != nullptr;};
        void deleteFont() { this->font_ = nullptr;};
        inline int32_t getFont() const { DARABONBA_PTR_GET_DEFAULT(font_, 0) };
        inline Texts& setFont(int32_t font) { DARABONBA_PTR_SET_VALUE(font_, font) };


        // fontColor Field Functions 
        bool hasFontColor() const { return this->fontColor_ != nullptr;};
        void deleteFontColor() { this->fontColor_ = nullptr;};
        inline const Texts::FontColor & getFontColor() const { DARABONBA_PTR_GET_CONST(fontColor_, Texts::FontColor) };
        inline Texts::FontColor getFontColor() { DARABONBA_PTR_GET(fontColor_, Texts::FontColor) };
        inline Texts& setFontColor(const Texts::FontColor & fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };
        inline Texts& setFontColor(Texts::FontColor && fontColor) { DARABONBA_PTR_SET_RVALUE(fontColor_, fontColor) };


        // fontSize Field Functions 
        bool hasFontSize() const { return this->fontSize_ != nullptr;};
        void deleteFontSize() { this->fontSize_ = nullptr;};
        inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
        inline Texts& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


        // hasBox Field Functions 
        bool hasHasBox() const { return this->hasBox_ != nullptr;};
        void deleteHasBox() { this->hasBox_ = nullptr;};
        inline bool getHasBox() const { DARABONBA_PTR_GET_DEFAULT(hasBox_, false) };
        inline Texts& setHasBox(bool hasBox) { DARABONBA_PTR_SET_VALUE(hasBox_, hasBox) };


        // layer Field Functions 
        bool hasLayer() const { return this->layer_ != nullptr;};
        void deleteLayer() { this->layer_ = nullptr;};
        inline int32_t getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
        inline Texts& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


        // texture Field Functions 
        bool hasTexture() const { return this->texture_ != nullptr;};
        void deleteTexture() { this->texture_ = nullptr;};
        inline string getTexture() const { DARABONBA_PTR_GET_DEFAULT(texture_, "") };
        inline Texts& setTexture(string texture) { DARABONBA_PTR_SET_VALUE(texture_, texture) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Texts& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Texts& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        shared_ptr<double> alpha_ {};
        shared_ptr<double> boxAlpha_ {};
        shared_ptr<int32_t> boxBorderw_ {};
        shared_ptr<Texts::BoxColor> boxColor_ {};
        shared_ptr<string> display_ {};
        shared_ptr<int32_t> font_ {};
        shared_ptr<Texts::FontColor> fontColor_ {};
        shared_ptr<int32_t> fontSize_ {};
        shared_ptr<bool> hasBox_ {};
        shared_ptr<int32_t> layer_ {};
        // This parameter is required.
        shared_ptr<string> texture_ {};
        // This parameter is required.
        shared_ptr<double> x_ {};
        // This parameter is required.
        shared_ptr<double> y_ {};
      };

      class Images : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Images& obj) { 
          DARABONBA_PTR_TO_JSON(Alpha, alpha_);
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Layer, layer_);
          DARABONBA_PTR_TO_JSON(PaneImageCropMode, paneImageCropMode_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Images& obj) { 
          DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Layer, layer_);
          DARABONBA_PTR_FROM_JSON(PaneImageCropMode, paneImageCropMode_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
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
        virtual bool empty() const override { return this->alpha_ == nullptr
        && this->display_ == nullptr && this->height_ == nullptr && this->layer_ == nullptr && this->paneImageCropMode_ == nullptr && this->url_ == nullptr
        && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
        // alpha Field Functions 
        bool hasAlpha() const { return this->alpha_ != nullptr;};
        void deleteAlpha() { this->alpha_ = nullptr;};
        inline double getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
        inline Images& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
        inline Images& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Images& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // layer Field Functions 
        bool hasLayer() const { return this->layer_ != nullptr;};
        void deleteLayer() { this->layer_ = nullptr;};
        inline int32_t getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
        inline Images& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


        // paneImageCropMode Field Functions 
        bool hasPaneImageCropMode() const { return this->paneImageCropMode_ != nullptr;};
        void deletePaneImageCropMode() { this->paneImageCropMode_ = nullptr;};
        inline int32_t getPaneImageCropMode() const { DARABONBA_PTR_GET_DEFAULT(paneImageCropMode_, 0) };
        inline Images& setPaneImageCropMode(int32_t paneImageCropMode) { DARABONBA_PTR_SET_VALUE(paneImageCropMode_, paneImageCropMode) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Images& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline double getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Images& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Images& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Images& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        shared_ptr<double> alpha_ {};
        shared_ptr<string> display_ {};
        // This parameter is required.
        shared_ptr<double> height_ {};
        shared_ptr<int32_t> layer_ {};
        shared_ptr<int32_t> paneImageCropMode_ {};
        // This parameter is required.
        shared_ptr<string> url_ {};
        // This parameter is required.
        shared_ptr<double> width_ {};
        // This parameter is required.
        shared_ptr<double> x_ {};
        // This parameter is required.
        shared_ptr<double> y_ {};
      };

      class Backgrounds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Backgrounds& obj) { 
          DARABONBA_PTR_TO_JSON(Alpha, alpha_);
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Layer, layer_);
          DARABONBA_PTR_TO_JSON(PaneBackgroundCropMode, paneBackgroundCropMode_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Backgrounds& obj) { 
          DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Layer, layer_);
          DARABONBA_PTR_FROM_JSON(PaneBackgroundCropMode, paneBackgroundCropMode_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
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
        virtual bool empty() const override { return this->alpha_ == nullptr
        && this->display_ == nullptr && this->height_ == nullptr && this->layer_ == nullptr && this->paneBackgroundCropMode_ == nullptr && this->url_ == nullptr
        && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
        // alpha Field Functions 
        bool hasAlpha() const { return this->alpha_ != nullptr;};
        void deleteAlpha() { this->alpha_ = nullptr;};
        inline double getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
        inline Backgrounds& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
        inline Backgrounds& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Backgrounds& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // layer Field Functions 
        bool hasLayer() const { return this->layer_ != nullptr;};
        void deleteLayer() { this->layer_ = nullptr;};
        inline int32_t getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
        inline Backgrounds& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


        // paneBackgroundCropMode Field Functions 
        bool hasPaneBackgroundCropMode() const { return this->paneBackgroundCropMode_ != nullptr;};
        void deletePaneBackgroundCropMode() { this->paneBackgroundCropMode_ = nullptr;};
        inline int32_t getPaneBackgroundCropMode() const { DARABONBA_PTR_GET_DEFAULT(paneBackgroundCropMode_, 0) };
        inline Backgrounds& setPaneBackgroundCropMode(int32_t paneBackgroundCropMode) { DARABONBA_PTR_SET_VALUE(paneBackgroundCropMode_, paneBackgroundCropMode) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Backgrounds& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline double getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Backgrounds& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Backgrounds& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Backgrounds& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        shared_ptr<double> alpha_ {};
        shared_ptr<string> display_ {};
        // This parameter is required.
        shared_ptr<double> height_ {};
        shared_ptr<int32_t> layer_ {};
        shared_ptr<int32_t> paneBackgroundCropMode_ {};
        // This parameter is required.
        shared_ptr<string> url_ {};
        // This parameter is required.
        shared_ptr<double> width_ {};
        // This parameter is required.
        shared_ptr<double> x_ {};
        // This parameter is required.
        shared_ptr<double> y_ {};
      };

      virtual bool empty() const override { return this->backgrounds_ == nullptr
        && this->images_ == nullptr && this->paneCropMode_ == nullptr && this->paneId_ == nullptr && this->reservePaneForOfflineUser_ == nullptr && this->source_ == nullptr
        && this->sourceType_ == nullptr && this->texts_ == nullptr && this->videoOrder_ == nullptr && this->whiteboard_ == nullptr; };
      // backgrounds Field Functions 
      bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
      void deleteBackgrounds() { this->backgrounds_ = nullptr;};
      inline const vector<Panes::Backgrounds> & getBackgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<Panes::Backgrounds>) };
      inline vector<Panes::Backgrounds> getBackgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<Panes::Backgrounds>) };
      inline Panes& setBackgrounds(const vector<Panes::Backgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
      inline Panes& setBackgrounds(vector<Panes::Backgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<Panes::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<Panes::Images>) };
      inline vector<Panes::Images> getImages() { DARABONBA_PTR_GET(images_, vector<Panes::Images>) };
      inline Panes& setImages(const vector<Panes::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline Panes& setImages(vector<Panes::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // paneCropMode Field Functions 
      bool hasPaneCropMode() const { return this->paneCropMode_ != nullptr;};
      void deletePaneCropMode() { this->paneCropMode_ = nullptr;};
      inline int32_t getPaneCropMode() const { DARABONBA_PTR_GET_DEFAULT(paneCropMode_, 0) };
      inline Panes& setPaneCropMode(int32_t paneCropMode) { DARABONBA_PTR_SET_VALUE(paneCropMode_, paneCropMode) };


      // paneId Field Functions 
      bool hasPaneId() const { return this->paneId_ != nullptr;};
      void deletePaneId() { this->paneId_ = nullptr;};
      inline string getPaneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, "") };
      inline Panes& setPaneId(string paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


      // reservePaneForOfflineUser Field Functions 
      bool hasReservePaneForOfflineUser() const { return this->reservePaneForOfflineUser_ != nullptr;};
      void deleteReservePaneForOfflineUser() { this->reservePaneForOfflineUser_ = nullptr;};
      inline bool getReservePaneForOfflineUser() const { DARABONBA_PTR_GET_DEFAULT(reservePaneForOfflineUser_, false) };
      inline Panes& setReservePaneForOfflineUser(bool reservePaneForOfflineUser) { DARABONBA_PTR_SET_VALUE(reservePaneForOfflineUser_, reservePaneForOfflineUser) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Panes& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Panes& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // texts Field Functions 
      bool hasTexts() const { return this->texts_ != nullptr;};
      void deleteTexts() { this->texts_ = nullptr;};
      inline const vector<Panes::Texts> & getTexts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Panes::Texts>) };
      inline vector<Panes::Texts> getTexts() { DARABONBA_PTR_GET(texts_, vector<Panes::Texts>) };
      inline Panes& setTexts(const vector<Panes::Texts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
      inline Panes& setTexts(vector<Panes::Texts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


      // videoOrder Field Functions 
      bool hasVideoOrder() const { return this->videoOrder_ != nullptr;};
      void deleteVideoOrder() { this->videoOrder_ = nullptr;};
      inline string getVideoOrder() const { DARABONBA_PTR_GET_DEFAULT(videoOrder_, "") };
      inline Panes& setVideoOrder(string videoOrder) { DARABONBA_PTR_SET_VALUE(videoOrder_, videoOrder) };


      // whiteboard Field Functions 
      bool hasWhiteboard() const { return this->whiteboard_ != nullptr;};
      void deleteWhiteboard() { this->whiteboard_ = nullptr;};
      inline const Panes::Whiteboard & getWhiteboard() const { DARABONBA_PTR_GET_CONST(whiteboard_, Panes::Whiteboard) };
      inline Panes::Whiteboard getWhiteboard() { DARABONBA_PTR_GET(whiteboard_, Panes::Whiteboard) };
      inline Panes& setWhiteboard(const Panes::Whiteboard & whiteboard) { DARABONBA_PTR_SET_VALUE(whiteboard_, whiteboard) };
      inline Panes& setWhiteboard(Panes::Whiteboard && whiteboard) { DARABONBA_PTR_SET_RVALUE(whiteboard_, whiteboard) };


    protected:
      shared_ptr<vector<Panes::Backgrounds>> backgrounds_ {};
      shared_ptr<vector<Panes::Images>> images_ {};
      shared_ptr<int32_t> paneCropMode_ {};
      // This parameter is required.
      shared_ptr<string> paneId_ {};
      shared_ptr<bool> reservePaneForOfflineUser_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<vector<Panes::Texts>> texts_ {};
      shared_ptr<string> videoOrder_ {};
      shared_ptr<Panes::Whiteboard> whiteboard_ {};
    };

    class LayoutSpecifiedUsers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LayoutSpecifiedUsers& obj) { 
        DARABONBA_PTR_TO_JSON(Ids, ids_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, LayoutSpecifiedUsers& obj) { 
        DARABONBA_PTR_FROM_JSON(Ids, ids_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      LayoutSpecifiedUsers() = default ;
      LayoutSpecifiedUsers(const LayoutSpecifiedUsers &) = default ;
      LayoutSpecifiedUsers(LayoutSpecifiedUsers &&) = default ;
      LayoutSpecifiedUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LayoutSpecifiedUsers() = default ;
      LayoutSpecifiedUsers& operator=(const LayoutSpecifiedUsers &) = default ;
      LayoutSpecifiedUsers& operator=(LayoutSpecifiedUsers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ids_ == nullptr
        && this->type_ == nullptr; };
      // ids Field Functions 
      bool hasIds() const { return this->ids_ != nullptr;};
      void deleteIds() { this->ids_ = nullptr;};
      inline const vector<string> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
      inline vector<string> getIds() { DARABONBA_PTR_GET(ids_, vector<string>) };
      inline LayoutSpecifiedUsers& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
      inline LayoutSpecifiedUsers& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline LayoutSpecifiedUsers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> ids_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(Alpha, alpha_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(ImageCropMode, imageCropMode_);
        DARABONBA_PTR_TO_JSON(Layer, layer_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(ImageCropMode, imageCropMode_);
        DARABONBA_PTR_FROM_JSON(Layer, layer_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
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
      virtual bool empty() const override { return this->alpha_ == nullptr
        && this->height_ == nullptr && this->imageCropMode_ == nullptr && this->layer_ == nullptr && this->url_ == nullptr && this->width_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr; };
      // alpha Field Functions 
      bool hasAlpha() const { return this->alpha_ != nullptr;};
      void deleteAlpha() { this->alpha_ = nullptr;};
      inline double getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
      inline Images& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Images& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // imageCropMode Field Functions 
      bool hasImageCropMode() const { return this->imageCropMode_ != nullptr;};
      void deleteImageCropMode() { this->imageCropMode_ = nullptr;};
      inline int32_t getImageCropMode() const { DARABONBA_PTR_GET_DEFAULT(imageCropMode_, 0) };
      inline Images& setImageCropMode(int32_t imageCropMode) { DARABONBA_PTR_SET_VALUE(imageCropMode_, imageCropMode) };


      // layer Field Functions 
      bool hasLayer() const { return this->layer_ != nullptr;};
      void deleteLayer() { this->layer_ = nullptr;};
      inline int32_t getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
      inline Images& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Images& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline double getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Images& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Images& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Images& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    protected:
      shared_ptr<double> alpha_ {};
      // This parameter is required.
      shared_ptr<double> height_ {};
      shared_ptr<int32_t> imageCropMode_ {};
      shared_ptr<int32_t> layer_ {};
      // This parameter is required.
      shared_ptr<string> url_ {};
      // This parameter is required.
      shared_ptr<double> width_ {};
      // This parameter is required.
      shared_ptr<double> x_ {};
      // This parameter is required.
      shared_ptr<double> y_ {};
    };

    class ClockWidgets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClockWidgets& obj) { 
        DARABONBA_PTR_TO_JSON(Alpha, alpha_);
        DARABONBA_PTR_TO_JSON(BoxAlpha, boxAlpha_);
        DARABONBA_PTR_TO_JSON(BoxBorderw, boxBorderw_);
        DARABONBA_PTR_TO_JSON(BoxColor, boxColor_);
        DARABONBA_PTR_TO_JSON(Font, font_);
        DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
        DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
        DARABONBA_PTR_TO_JSON(HasBox, hasBox_);
        DARABONBA_PTR_TO_JSON(Layer, layer_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
        DARABONBA_PTR_TO_JSON(Zone, zone_);
      };
      friend void from_json(const Darabonba::Json& j, ClockWidgets& obj) { 
        DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
        DARABONBA_PTR_FROM_JSON(BoxAlpha, boxAlpha_);
        DARABONBA_PTR_FROM_JSON(BoxBorderw, boxBorderw_);
        DARABONBA_PTR_FROM_JSON(BoxColor, boxColor_);
        DARABONBA_PTR_FROM_JSON(Font, font_);
        DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
        DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
        DARABONBA_PTR_FROM_JSON(HasBox, hasBox_);
        DARABONBA_PTR_FROM_JSON(Layer, layer_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
        DARABONBA_PTR_FROM_JSON(Zone, zone_);
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
      class FontColor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FontColor& obj) { 
          DARABONBA_PTR_TO_JSON(B, b_);
          DARABONBA_PTR_TO_JSON(G, g_);
          DARABONBA_PTR_TO_JSON(R, r_);
        };
        friend void from_json(const Darabonba::Json& j, FontColor& obj) { 
          DARABONBA_PTR_FROM_JSON(B, b_);
          DARABONBA_PTR_FROM_JSON(G, g_);
          DARABONBA_PTR_FROM_JSON(R, r_);
        };
        FontColor() = default ;
        FontColor(const FontColor &) = default ;
        FontColor(FontColor &&) = default ;
        FontColor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FontColor() = default ;
        FontColor& operator=(const FontColor &) = default ;
        FontColor& operator=(FontColor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
        // b Field Functions 
        bool hasB() const { return this->b_ != nullptr;};
        void deleteB() { this->b_ = nullptr;};
        inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
        inline FontColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


        // g Field Functions 
        bool hasG() const { return this->g_ != nullptr;};
        void deleteG() { this->g_ = nullptr;};
        inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
        inline FontColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


        // r Field Functions 
        bool hasR() const { return this->r_ != nullptr;};
        void deleteR() { this->r_ = nullptr;};
        inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
        inline FontColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


      protected:
        shared_ptr<int32_t> b_ {};
        shared_ptr<int32_t> g_ {};
        shared_ptr<int32_t> r_ {};
      };

      class BoxColor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BoxColor& obj) { 
          DARABONBA_PTR_TO_JSON(B, b_);
          DARABONBA_PTR_TO_JSON(G, g_);
          DARABONBA_PTR_TO_JSON(R, r_);
        };
        friend void from_json(const Darabonba::Json& j, BoxColor& obj) { 
          DARABONBA_PTR_FROM_JSON(B, b_);
          DARABONBA_PTR_FROM_JSON(G, g_);
          DARABONBA_PTR_FROM_JSON(R, r_);
        };
        BoxColor() = default ;
        BoxColor(const BoxColor &) = default ;
        BoxColor(BoxColor &&) = default ;
        BoxColor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BoxColor() = default ;
        BoxColor& operator=(const BoxColor &) = default ;
        BoxColor& operator=(BoxColor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
        // b Field Functions 
        bool hasB() const { return this->b_ != nullptr;};
        void deleteB() { this->b_ = nullptr;};
        inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
        inline BoxColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


        // g Field Functions 
        bool hasG() const { return this->g_ != nullptr;};
        void deleteG() { this->g_ = nullptr;};
        inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
        inline BoxColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


        // r Field Functions 
        bool hasR() const { return this->r_ != nullptr;};
        void deleteR() { this->r_ = nullptr;};
        inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
        inline BoxColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


      protected:
        shared_ptr<int32_t> b_ {};
        shared_ptr<int32_t> g_ {};
        shared_ptr<int32_t> r_ {};
      };

      virtual bool empty() const override { return this->alpha_ == nullptr
        && this->boxAlpha_ == nullptr && this->boxBorderw_ == nullptr && this->boxColor_ == nullptr && this->font_ == nullptr && this->fontColor_ == nullptr
        && this->fontSize_ == nullptr && this->hasBox_ == nullptr && this->layer_ == nullptr && this->x_ == nullptr && this->y_ == nullptr
        && this->zone_ == nullptr; };
      // alpha Field Functions 
      bool hasAlpha() const { return this->alpha_ != nullptr;};
      void deleteAlpha() { this->alpha_ = nullptr;};
      inline double getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
      inline ClockWidgets& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


      // boxAlpha Field Functions 
      bool hasBoxAlpha() const { return this->boxAlpha_ != nullptr;};
      void deleteBoxAlpha() { this->boxAlpha_ = nullptr;};
      inline double getBoxAlpha() const { DARABONBA_PTR_GET_DEFAULT(boxAlpha_, 0.0) };
      inline ClockWidgets& setBoxAlpha(double boxAlpha) { DARABONBA_PTR_SET_VALUE(boxAlpha_, boxAlpha) };


      // boxBorderw Field Functions 
      bool hasBoxBorderw() const { return this->boxBorderw_ != nullptr;};
      void deleteBoxBorderw() { this->boxBorderw_ = nullptr;};
      inline int32_t getBoxBorderw() const { DARABONBA_PTR_GET_DEFAULT(boxBorderw_, 0) };
      inline ClockWidgets& setBoxBorderw(int32_t boxBorderw) { DARABONBA_PTR_SET_VALUE(boxBorderw_, boxBorderw) };


      // boxColor Field Functions 
      bool hasBoxColor() const { return this->boxColor_ != nullptr;};
      void deleteBoxColor() { this->boxColor_ = nullptr;};
      inline const ClockWidgets::BoxColor & getBoxColor() const { DARABONBA_PTR_GET_CONST(boxColor_, ClockWidgets::BoxColor) };
      inline ClockWidgets::BoxColor getBoxColor() { DARABONBA_PTR_GET(boxColor_, ClockWidgets::BoxColor) };
      inline ClockWidgets& setBoxColor(const ClockWidgets::BoxColor & boxColor) { DARABONBA_PTR_SET_VALUE(boxColor_, boxColor) };
      inline ClockWidgets& setBoxColor(ClockWidgets::BoxColor && boxColor) { DARABONBA_PTR_SET_RVALUE(boxColor_, boxColor) };


      // font Field Functions 
      bool hasFont() const { return this->font_ != nullptr;};
      void deleteFont() { this->font_ = nullptr;};
      inline int32_t getFont() const { DARABONBA_PTR_GET_DEFAULT(font_, 0) };
      inline ClockWidgets& setFont(int32_t font) { DARABONBA_PTR_SET_VALUE(font_, font) };


      // fontColor Field Functions 
      bool hasFontColor() const { return this->fontColor_ != nullptr;};
      void deleteFontColor() { this->fontColor_ = nullptr;};
      inline const ClockWidgets::FontColor & getFontColor() const { DARABONBA_PTR_GET_CONST(fontColor_, ClockWidgets::FontColor) };
      inline ClockWidgets::FontColor getFontColor() { DARABONBA_PTR_GET(fontColor_, ClockWidgets::FontColor) };
      inline ClockWidgets& setFontColor(const ClockWidgets::FontColor & fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };
      inline ClockWidgets& setFontColor(ClockWidgets::FontColor && fontColor) { DARABONBA_PTR_SET_RVALUE(fontColor_, fontColor) };


      // fontSize Field Functions 
      bool hasFontSize() const { return this->fontSize_ != nullptr;};
      void deleteFontSize() { this->fontSize_ = nullptr;};
      inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
      inline ClockWidgets& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


      // hasBox Field Functions 
      bool hasHasBox() const { return this->hasBox_ != nullptr;};
      void deleteHasBox() { this->hasBox_ = nullptr;};
      inline bool getHasBox() const { DARABONBA_PTR_GET_DEFAULT(hasBox_, false) };
      inline ClockWidgets& setHasBox(bool hasBox) { DARABONBA_PTR_SET_VALUE(hasBox_, hasBox) };


      // layer Field Functions 
      bool hasLayer() const { return this->layer_ != nullptr;};
      void deleteLayer() { this->layer_ = nullptr;};
      inline int32_t getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
      inline ClockWidgets& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline ClockWidgets& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline ClockWidgets& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      // zone Field Functions 
      bool hasZone() const { return this->zone_ != nullptr;};
      void deleteZone() { this->zone_ = nullptr;};
      inline int32_t getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, 0) };
      inline ClockWidgets& setZone(int32_t zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


    protected:
      shared_ptr<double> alpha_ {};
      shared_ptr<double> boxAlpha_ {};
      shared_ptr<int32_t> boxBorderw_ {};
      shared_ptr<ClockWidgets::BoxColor> boxColor_ {};
      shared_ptr<int32_t> font_ {};
      shared_ptr<ClockWidgets::FontColor> fontColor_ {};
      shared_ptr<int32_t> fontSize_ {};
      shared_ptr<bool> hasBox_ {};
      shared_ptr<int32_t> layer_ {};
      // This parameter is required.
      shared_ptr<double> x_ {};
      // This parameter is required.
      shared_ptr<double> y_ {};
      shared_ptr<int32_t> zone_ {};
    };

    class BgColor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BgColor& obj) { 
        DARABONBA_PTR_TO_JSON(B, b_);
        DARABONBA_PTR_TO_JSON(G, g_);
        DARABONBA_PTR_TO_JSON(R, r_);
      };
      friend void from_json(const Darabonba::Json& j, BgColor& obj) { 
        DARABONBA_PTR_FROM_JSON(B, b_);
        DARABONBA_PTR_FROM_JSON(G, g_);
        DARABONBA_PTR_FROM_JSON(R, r_);
      };
      BgColor() = default ;
      BgColor(const BgColor &) = default ;
      BgColor(BgColor &&) = default ;
      BgColor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BgColor() = default ;
      BgColor& operator=(const BgColor &) = default ;
      BgColor& operator=(BgColor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
      // b Field Functions 
      bool hasB() const { return this->b_ != nullptr;};
      void deleteB() { this->b_ = nullptr;};
      inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
      inline BgColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


      // g Field Functions 
      bool hasG() const { return this->g_ != nullptr;};
      void deleteG() { this->g_ = nullptr;};
      inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
      inline BgColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


      // r Field Functions 
      bool hasR() const { return this->r_ != nullptr;};
      void deleteR() { this->r_ = nullptr;};
      inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
      inline BgColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


    protected:
      shared_ptr<int32_t> b_ {};
      shared_ptr<int32_t> g_ {};
      shared_ptr<int32_t> r_ {};
    };

    class Backgrounds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Backgrounds& obj) { 
        DARABONBA_PTR_TO_JSON(Alpha, alpha_);
        DARABONBA_PTR_TO_JSON(BackgroundCropMode, backgroundCropMode_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Layer, layer_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, Backgrounds& obj) { 
        DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
        DARABONBA_PTR_FROM_JSON(BackgroundCropMode, backgroundCropMode_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Layer, layer_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
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
      virtual bool empty() const override { return this->alpha_ == nullptr
        && this->backgroundCropMode_ == nullptr && this->height_ == nullptr && this->layer_ == nullptr && this->url_ == nullptr && this->width_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr; };
      // alpha Field Functions 
      bool hasAlpha() const { return this->alpha_ != nullptr;};
      void deleteAlpha() { this->alpha_ = nullptr;};
      inline double getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
      inline Backgrounds& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


      // backgroundCropMode Field Functions 
      bool hasBackgroundCropMode() const { return this->backgroundCropMode_ != nullptr;};
      void deleteBackgroundCropMode() { this->backgroundCropMode_ = nullptr;};
      inline int32_t getBackgroundCropMode() const { DARABONBA_PTR_GET_DEFAULT(backgroundCropMode_, 0) };
      inline Backgrounds& setBackgroundCropMode(int32_t backgroundCropMode) { DARABONBA_PTR_SET_VALUE(backgroundCropMode_, backgroundCropMode) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Backgrounds& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // layer Field Functions 
      bool hasLayer() const { return this->layer_ != nullptr;};
      void deleteLayer() { this->layer_ = nullptr;};
      inline int32_t getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
      inline Backgrounds& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Backgrounds& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline double getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Backgrounds& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Backgrounds& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Backgrounds& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    protected:
      shared_ptr<double> alpha_ {};
      shared_ptr<int32_t> backgroundCropMode_ {};
      // This parameter is required.
      shared_ptr<double> height_ {};
      shared_ptr<int32_t> layer_ {};
      // This parameter is required.
      shared_ptr<string> url_ {};
      // This parameter is required.
      shared_ptr<double> width_ {};
      // This parameter is required.
      shared_ptr<double> x_ {};
      // This parameter is required.
      shared_ptr<double> y_ {};
    };

    virtual bool empty() const override { return this->annotation_ == nullptr
        && this->appId_ == nullptr && this->backgrounds_ == nullptr && this->bgColor_ == nullptr && this->channelId_ == nullptr && this->clockWidgets_ == nullptr
        && this->cropMode_ == nullptr && this->images_ == nullptr && this->layoutSpecifiedUsers_ == nullptr && this->panes_ == nullptr && this->regionColor_ == nullptr
        && this->reservePaneForNoCameraUser_ == nullptr && this->showDefaultBackgroundOnMute_ == nullptr && this->specMixedUserList_ == nullptr && this->startWithoutChannel_ == nullptr && this->startWithoutChannelWaitTime_ == nullptr
        && this->subHighResolutionStream_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr && this->texts_ == nullptr && this->url_ == nullptr; };
    // annotation Field Functions 
    bool hasAnnotation() const { return this->annotation_ != nullptr;};
    void deleteAnnotation() { this->annotation_ = nullptr;};
    inline string getAnnotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
    inline StartStreamingOutRequest& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartStreamingOutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<StartStreamingOutRequest::Backgrounds> & getBackgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<StartStreamingOutRequest::Backgrounds>) };
    inline vector<StartStreamingOutRequest::Backgrounds> getBackgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<StartStreamingOutRequest::Backgrounds>) };
    inline StartStreamingOutRequest& setBackgrounds(const vector<StartStreamingOutRequest::Backgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline StartStreamingOutRequest& setBackgrounds(vector<StartStreamingOutRequest::Backgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline const StartStreamingOutRequest::BgColor & getBgColor() const { DARABONBA_PTR_GET_CONST(bgColor_, StartStreamingOutRequest::BgColor) };
    inline StartStreamingOutRequest::BgColor getBgColor() { DARABONBA_PTR_GET(bgColor_, StartStreamingOutRequest::BgColor) };
    inline StartStreamingOutRequest& setBgColor(const StartStreamingOutRequest::BgColor & bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };
    inline StartStreamingOutRequest& setBgColor(StartStreamingOutRequest::BgColor && bgColor) { DARABONBA_PTR_SET_RVALUE(bgColor_, bgColor) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartStreamingOutRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<StartStreamingOutRequest::ClockWidgets> & getClockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<StartStreamingOutRequest::ClockWidgets>) };
    inline vector<StartStreamingOutRequest::ClockWidgets> getClockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<StartStreamingOutRequest::ClockWidgets>) };
    inline StartStreamingOutRequest& setClockWidgets(const vector<StartStreamingOutRequest::ClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline StartStreamingOutRequest& setClockWidgets(vector<StartStreamingOutRequest::ClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t getCropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline StartStreamingOutRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<StartStreamingOutRequest::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<StartStreamingOutRequest::Images>) };
    inline vector<StartStreamingOutRequest::Images> getImages() { DARABONBA_PTR_GET(images_, vector<StartStreamingOutRequest::Images>) };
    inline StartStreamingOutRequest& setImages(const vector<StartStreamingOutRequest::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline StartStreamingOutRequest& setImages(vector<StartStreamingOutRequest::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsers Field Functions 
    bool hasLayoutSpecifiedUsers() const { return this->layoutSpecifiedUsers_ != nullptr;};
    void deleteLayoutSpecifiedUsers() { this->layoutSpecifiedUsers_ = nullptr;};
    inline const StartStreamingOutRequest::LayoutSpecifiedUsers & getLayoutSpecifiedUsers() const { DARABONBA_PTR_GET_CONST(layoutSpecifiedUsers_, StartStreamingOutRequest::LayoutSpecifiedUsers) };
    inline StartStreamingOutRequest::LayoutSpecifiedUsers getLayoutSpecifiedUsers() { DARABONBA_PTR_GET(layoutSpecifiedUsers_, StartStreamingOutRequest::LayoutSpecifiedUsers) };
    inline StartStreamingOutRequest& setLayoutSpecifiedUsers(const StartStreamingOutRequest::LayoutSpecifiedUsers & layoutSpecifiedUsers) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };
    inline StartStreamingOutRequest& setLayoutSpecifiedUsers(StartStreamingOutRequest::LayoutSpecifiedUsers && layoutSpecifiedUsers) { DARABONBA_PTR_SET_RVALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<StartStreamingOutRequest::Panes> & getPanes() const { DARABONBA_PTR_GET_CONST(panes_, vector<StartStreamingOutRequest::Panes>) };
    inline vector<StartStreamingOutRequest::Panes> getPanes() { DARABONBA_PTR_GET(panes_, vector<StartStreamingOutRequest::Panes>) };
    inline StartStreamingOutRequest& setPanes(const vector<StartStreamingOutRequest::Panes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline StartStreamingOutRequest& setPanes(vector<StartStreamingOutRequest::Panes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // regionColor Field Functions 
    bool hasRegionColor() const { return this->regionColor_ != nullptr;};
    void deleteRegionColor() { this->regionColor_ = nullptr;};
    inline const StartStreamingOutRequest::RegionColor & getRegionColor() const { DARABONBA_PTR_GET_CONST(regionColor_, StartStreamingOutRequest::RegionColor) };
    inline StartStreamingOutRequest::RegionColor getRegionColor() { DARABONBA_PTR_GET(regionColor_, StartStreamingOutRequest::RegionColor) };
    inline StartStreamingOutRequest& setRegionColor(const StartStreamingOutRequest::RegionColor & regionColor) { DARABONBA_PTR_SET_VALUE(regionColor_, regionColor) };
    inline StartStreamingOutRequest& setRegionColor(StartStreamingOutRequest::RegionColor && regionColor) { DARABONBA_PTR_SET_RVALUE(regionColor_, regionColor) };


    // reservePaneForNoCameraUser Field Functions 
    bool hasReservePaneForNoCameraUser() const { return this->reservePaneForNoCameraUser_ != nullptr;};
    void deleteReservePaneForNoCameraUser() { this->reservePaneForNoCameraUser_ = nullptr;};
    inline bool getReservePaneForNoCameraUser() const { DARABONBA_PTR_GET_DEFAULT(reservePaneForNoCameraUser_, false) };
    inline StartStreamingOutRequest& setReservePaneForNoCameraUser(bool reservePaneForNoCameraUser) { DARABONBA_PTR_SET_VALUE(reservePaneForNoCameraUser_, reservePaneForNoCameraUser) };


    // showDefaultBackgroundOnMute Field Functions 
    bool hasShowDefaultBackgroundOnMute() const { return this->showDefaultBackgroundOnMute_ != nullptr;};
    void deleteShowDefaultBackgroundOnMute() { this->showDefaultBackgroundOnMute_ = nullptr;};
    inline bool getShowDefaultBackgroundOnMute() const { DARABONBA_PTR_GET_DEFAULT(showDefaultBackgroundOnMute_, false) };
    inline StartStreamingOutRequest& setShowDefaultBackgroundOnMute(bool showDefaultBackgroundOnMute) { DARABONBA_PTR_SET_VALUE(showDefaultBackgroundOnMute_, showDefaultBackgroundOnMute) };


    // specMixedUserList Field Functions 
    bool hasSpecMixedUserList() const { return this->specMixedUserList_ != nullptr;};
    void deleteSpecMixedUserList() { this->specMixedUserList_ = nullptr;};
    inline const vector<string> & getSpecMixedUserList() const { DARABONBA_PTR_GET_CONST(specMixedUserList_, vector<string>) };
    inline vector<string> getSpecMixedUserList() { DARABONBA_PTR_GET(specMixedUserList_, vector<string>) };
    inline StartStreamingOutRequest& setSpecMixedUserList(const vector<string> & specMixedUserList) { DARABONBA_PTR_SET_VALUE(specMixedUserList_, specMixedUserList) };
    inline StartStreamingOutRequest& setSpecMixedUserList(vector<string> && specMixedUserList) { DARABONBA_PTR_SET_RVALUE(specMixedUserList_, specMixedUserList) };


    // startWithoutChannel Field Functions 
    bool hasStartWithoutChannel() const { return this->startWithoutChannel_ != nullptr;};
    void deleteStartWithoutChannel() { this->startWithoutChannel_ = nullptr;};
    inline bool getStartWithoutChannel() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannel_, false) };
    inline StartStreamingOutRequest& setStartWithoutChannel(bool startWithoutChannel) { DARABONBA_PTR_SET_VALUE(startWithoutChannel_, startWithoutChannel) };


    // startWithoutChannelWaitTime Field Functions 
    bool hasStartWithoutChannelWaitTime() const { return this->startWithoutChannelWaitTime_ != nullptr;};
    void deleteStartWithoutChannelWaitTime() { this->startWithoutChannelWaitTime_ = nullptr;};
    inline int32_t getStartWithoutChannelWaitTime() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannelWaitTime_, 0) };
    inline StartStreamingOutRequest& setStartWithoutChannelWaitTime(int32_t startWithoutChannelWaitTime) { DARABONBA_PTR_SET_VALUE(startWithoutChannelWaitTime_, startWithoutChannelWaitTime) };


    // subHighResolutionStream Field Functions 
    bool hasSubHighResolutionStream() const { return this->subHighResolutionStream_ != nullptr;};
    void deleteSubHighResolutionStream() { this->subHighResolutionStream_ = nullptr;};
    inline bool getSubHighResolutionStream() const { DARABONBA_PTR_GET_DEFAULT(subHighResolutionStream_, false) };
    inline StartStreamingOutRequest& setSubHighResolutionStream(bool subHighResolutionStream) { DARABONBA_PTR_SET_VALUE(subHighResolutionStream_, subHighResolutionStream) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartStreamingOutRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartStreamingOutRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<StartStreamingOutRequest::Texts> & getTexts() const { DARABONBA_PTR_GET_CONST(texts_, vector<StartStreamingOutRequest::Texts>) };
    inline vector<StartStreamingOutRequest::Texts> getTexts() { DARABONBA_PTR_GET(texts_, vector<StartStreamingOutRequest::Texts>) };
    inline StartStreamingOutRequest& setTexts(const vector<StartStreamingOutRequest::Texts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline StartStreamingOutRequest& setTexts(vector<StartStreamingOutRequest::Texts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline StartStreamingOutRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> annotation_ {};
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<vector<StartStreamingOutRequest::Backgrounds>> backgrounds_ {};
    shared_ptr<StartStreamingOutRequest::BgColor> bgColor_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<vector<StartStreamingOutRequest::ClockWidgets>> clockWidgets_ {};
    shared_ptr<int32_t> cropMode_ {};
    shared_ptr<vector<StartStreamingOutRequest::Images>> images_ {};
    shared_ptr<StartStreamingOutRequest::LayoutSpecifiedUsers> layoutSpecifiedUsers_ {};
    shared_ptr<vector<StartStreamingOutRequest::Panes>> panes_ {};
    shared_ptr<StartStreamingOutRequest::RegionColor> regionColor_ {};
    shared_ptr<bool> reservePaneForNoCameraUser_ {};
    shared_ptr<bool> showDefaultBackgroundOnMute_ {};
    shared_ptr<vector<string>> specMixedUserList_ {};
    shared_ptr<bool> startWithoutChannel_ {};
    shared_ptr<int32_t> startWithoutChannelWaitTime_ {};
    shared_ptr<bool> subHighResolutionStream_ {};
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<vector<StartStreamingOutRequest::Texts>> texts_ {};
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
