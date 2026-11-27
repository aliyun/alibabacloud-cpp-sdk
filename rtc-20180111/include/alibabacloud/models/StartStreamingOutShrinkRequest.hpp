// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSTREAMINGOUTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSTREAMINGOUTSHRINKREQUEST_HPP_
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
  class StartStreamingOutShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartStreamingOutShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotation, annotation_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(CropMode, cropMode_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsersShrink_);
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
    friend void from_json(const Darabonba::Json& j, StartStreamingOutShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotation, annotation_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(CropMode, cropMode_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsersShrink_);
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
    StartStreamingOutShrinkRequest() = default ;
    StartStreamingOutShrinkRequest(const StartStreamingOutShrinkRequest &) = default ;
    StartStreamingOutShrinkRequest(StartStreamingOutShrinkRequest &&) = default ;
    StartStreamingOutShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartStreamingOutShrinkRequest() = default ;
    StartStreamingOutShrinkRequest& operator=(const StartStreamingOutShrinkRequest &) = default ;
    StartStreamingOutShrinkRequest& operator=(StartStreamingOutShrinkRequest &&) = default ;
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
        // The B value.
        shared_ptr<int32_t> b_ {};
        // The G value.
        shared_ptr<int32_t> g_ {};
        // The R value.
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
        // The B value.
        shared_ptr<int32_t> b_ {};
        // The G value.
        shared_ptr<int32_t> g_ {};
        // The R value.
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
      // The watermark transparency.
      shared_ptr<double> alpha_ {};
      // The transparency of the rectangle box.
      shared_ptr<double> boxAlpha_ {};
      // The border width of the rectangle box.
      shared_ptr<int32_t> boxBorderw_ {};
      // The color of the rectangle box.
      shared_ptr<Texts::BoxColor> boxColor_ {};
      // The font. Valid values:
      // - **0**: Alibaba PuHuiTi Regular
      // - **1**: Alibaba PuHuiTi Light
      // - **2**: Alibaba PuHuiTi Medium
      // - **3**: Alibaba PuHuiTi Bold
      // - **4**: Alibaba PuHuiTi Heavy
      // - **5**: Alimama ShuHeiTi
      // - **6**: DingTalk JinBuTi
      // - **7**: Alimama DaoLiTi
      // - **8**: Alimama DongFangDaKai
      // - **9**: Alimama FangYuanTi
      shared_ptr<int32_t> font_ {};
      // The font color.
      shared_ptr<Texts::FontColor> fontColor_ {};
      // The font size.
      shared_ptr<int32_t> fontSize_ {};
      // Specifies whether a rectangle box is required.
      shared_ptr<bool> hasBox_ {};
      // The z-axis layer.
      shared_ptr<int32_t> layer_ {};
      // The watermark content.
      // 
      // This parameter is required.
      shared_ptr<string> texture_ {};
      // The x-coordinate.
      // 
      // This parameter is required.
      shared_ptr<double> x_ {};
      // The y-coordinate.
      // 
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
      // The B value.
      shared_ptr<int32_t> b_ {};
      // The G value.
      shared_ptr<int32_t> g_ {};
      // The R value.
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
        // The whiteboard ID. Default value: default.
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
          // The B value.
          shared_ptr<int32_t> b_ {};
          // The G value.
          shared_ptr<int32_t> g_ {};
          // The R value.
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
          // The B value.
          shared_ptr<int32_t> b_ {};
          // The G value.
          shared_ptr<int32_t> g_ {};
          // The R value.
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
        // The watermark transparency.
        shared_ptr<double> alpha_ {};
        // The transparency of the rectangle box.
        shared_ptr<double> boxAlpha_ {};
        // The border width of the rectangle box.
        shared_ptr<int32_t> boxBorderw_ {};
        // The color of the rectangle box.
        shared_ptr<Texts::BoxColor> boxColor_ {};
        // The condition for displaying the watermark. Valid values:
        // - streamOnly: Displayed when the current user has a video stream. This is the default value.
        // - backup: Displayed when the current user does not have a video stream.
        // - always: Always displayed.
        shared_ptr<string> display_ {};
        // The font. Valid values:
        // - **0**: Alibaba PuHuiTi Regular
        // - **1**: Alibaba PuHuiTi Light
        // - **2**: Alibaba PuHuiTi Medium
        // - **3**: Alibaba PuHuiTi Bold
        // - **4**: Alibaba PuHuiTi Heavy
        // - **5**: Alimama ShuHeiTi
        // - **6**: DingTalk JinBuTi
        // - **7**: Alimama DaoLiTi
        // - **8**: Alimama DongFangDaKai
        // - **9**: Alimama FangYuanTi
        shared_ptr<int32_t> font_ {};
        // The font color.
        shared_ptr<Texts::FontColor> fontColor_ {};
        // The font size.
        shared_ptr<int32_t> fontSize_ {};
        // Specifies whether a rectangle box is required.
        shared_ptr<bool> hasBox_ {};
        // The z-axis layer.
        shared_ptr<int32_t> layer_ {};
        // The watermark content.
        // 
        // This parameter is required.
        shared_ptr<string> texture_ {};
        // The x-coordinate.
        // 
        // This parameter is required.
        shared_ptr<double> x_ {};
        // The y-coordinate.
        // 
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
        // The transparency.
        shared_ptr<double> alpha_ {};
        // The condition for displaying the watermark. Valid values:
        // - streamOnly: Displayed when the current user has a video stream. This is the default value.
        // - backup: Displayed when the current user does not have a video stream.
        // - always: Always displayed.
        shared_ptr<string> display_ {};
        // The height.
        // 
        // This parameter is required.
        shared_ptr<double> height_ {};
        // The z-axis layer.
        shared_ptr<int32_t> layer_ {};
        // The crop mode. Valid values:
        // - **1**: Crop while maintaining the aspect ratio.
        // - **2**: Maintain the aspect ratio and add borders.
        // - **3**: Stretch to fill.
        shared_ptr<int32_t> paneImageCropMode_ {};
        // The corresponding image content cannot be updated while streaming.
        // 
        // This parameter is required.
        shared_ptr<string> url_ {};
        // The width.
        // 
        // This parameter is required.
        shared_ptr<double> width_ {};
        // The x-coordinate.
        // 
        // This parameter is required.
        shared_ptr<double> x_ {};
        // The y-coordinate.
        // 
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
        // The transparency.
        shared_ptr<double> alpha_ {};
        // The display condition. Valid values:
        // - streamOnly: Displayed when the current user has a video stream. This is the default value.
        // - backup: Displayed when the current user does not have a video stream.
        // - always: Always displayed.
        shared_ptr<string> display_ {};
        // The height.
        // 
        // This parameter is required.
        shared_ptr<double> height_ {};
        // The z-axis layer.
        shared_ptr<int32_t> layer_ {};
        // The crop mode. Valid values:
        // - **1**: Crop while maintaining the aspect ratio.
        // - **2**: Maintain the aspect ratio and add borders.
        // - **3**: Stretch to fill.
        shared_ptr<int32_t> paneBackgroundCropMode_ {};
        // The image URL.
        // 
        // This parameter is required.
        shared_ptr<string> url_ {};
        // The width.
        // 
        // This parameter is required.
        shared_ptr<double> width_ {};
        // The x-coordinate.
        // 
        // This parameter is required.
        shared_ptr<double> x_ {};
        // The y-coordinate.
        // 
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
      // The local background images.
      shared_ptr<vector<Panes::Backgrounds>> backgrounds_ {};
      // The local image watermarks for the pane.
      shared_ptr<vector<Panes::Images>> images_ {};
      // The crop mode. Valid values:
      // - **1**: Crop while maintaining the aspect ratio.
      // - **2**: Maintain the aspect ratio and add borders.
      // - **3**: Stretch to fill.
      shared_ptr<int32_t> paneCropMode_ {};
      // The pane ID. The value starts from 0.
      // 
      // This parameter is required.
      shared_ptr<string> paneId_ {};
      // Specifies whether to reserve the pane for users who have not joined the meeting.
      // Default value: true. This value indicates that when the specific user or wildcard user specified for the grid is offline, the pane is forcibly reserved.
      // A value of false indicates that when the specific user or wildcard user specified for the grid is offline, video streams are displayed based on the automatic fill order.
      shared_ptr<bool> reservePaneForOfflineUser_ {};
      // The media source of the pane. You can specify a userId. To specify a specific user type, you can use wildcard configurations. The following types are supported:
      // - **$ActiveSpeaker**: The current speaker in the channel.
      // - **$ScreenShare**: The user who is sharing their screen. If multiple users are sharing their screens in the channel, the panes are filled in chronological order.
      shared_ptr<string> source_ {};
      // The media type of the pane. Valid values:
      // - **video**: The user camera or screen sharing stream. This is the default value.
      // - **camera**: The camera stream.
      // - **screen**: The screen sharing stream.
      // - **whiteboard**: The whiteboard.
      shared_ptr<string> sourceType_ {};
      // The local text watermarks for the pane.
      shared_ptr<vector<Panes::Texts>> texts_ {};
      // The fill order when SourceType is set to video. Valid values:
      // - screenFirst: Screen sharing takes precedence. This is the default value.
      // - cameraFirst: The camera takes precedence.
      shared_ptr<string> videoOrder_ {};
      // The whiteboard configurations.
      shared_ptr<Panes::Whiteboard> whiteboard_ {};
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
      // The transparency.
      shared_ptr<double> alpha_ {};
      // The height.
      // 
      // This parameter is required.
      shared_ptr<double> height_ {};
      // The crop mode. Valid values:
      // - **1**: Crop while maintaining the aspect ratio.
      // - **2**: Maintain the aspect ratio and add borders.
      // - **3**: Stretch to fill.
      shared_ptr<int32_t> imageCropMode_ {};
      // The z-axis layer.
      shared_ptr<int32_t> layer_ {};
      // The image URL. The image content cannot be updated during stream ingest.
      // 
      // This parameter is required.
      shared_ptr<string> url_ {};
      // The width.
      // 
      // This parameter is required.
      shared_ptr<double> width_ {};
      // The x-coordinate.
      // 
      // This parameter is required.
      shared_ptr<double> x_ {};
      // The y-coordinate.
      // 
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
        // The B value.
        shared_ptr<int32_t> b_ {};
        // The G value.
        shared_ptr<int32_t> g_ {};
        // The R value.
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
        // The B value.
        shared_ptr<int32_t> b_ {};
        // The G value.
        shared_ptr<int32_t> g_ {};
        // The R value.
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
      // The transparency.
      shared_ptr<double> alpha_ {};
      // The transparency of the rectangle box.
      shared_ptr<double> boxAlpha_ {};
      // The border width of the rectangle box.
      shared_ptr<int32_t> boxBorderw_ {};
      // The color of the rectangle box.
      shared_ptr<ClockWidgets::BoxColor> boxColor_ {};
      // The font. Valid values:
      // - **0**: Alibaba PuHuiTi Regular
      // - **1**: Alibaba PuHuiTi Light
      // - **2**: Alibaba PuHuiTi Medium
      // - **3**: Alibaba PuHuiTi Bold
      // - **4**: Alibaba PuHuiTi Heavy
      // - **5**: Alimama ShuHeiTi
      // - **6**: DingTalk JinBuTi
      // - **7**: Alimama DaoLiTi
      // - **8**: Alimama DongFangDaKai
      // - **9**: Alimama FangYuanTi
      shared_ptr<int32_t> font_ {};
      // The font color.
      shared_ptr<ClockWidgets::FontColor> fontColor_ {};
      // The font size of the clock.
      shared_ptr<int32_t> fontSize_ {};
      // Specifies whether a rectangle box is required.
      shared_ptr<bool> hasBox_ {};
      // The z-axis layer.
      shared_ptr<int32_t> layer_ {};
      // The x-coordinate.
      // 
      // This parameter is required.
      shared_ptr<double> x_ {};
      // The y-coordinate.
      // 
      // This parameter is required.
      shared_ptr<double> y_ {};
      // The time zone.
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
      // The B value.
      shared_ptr<int32_t> b_ {};
      // The G value.
      shared_ptr<int32_t> g_ {};
      // The R value.
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
      // The transparency.
      shared_ptr<double> alpha_ {};
      // The crop mode. Valid values:
      // - **1**: Crop while maintaining the aspect ratio.
      // - **2**: Maintain the aspect ratio and add borders.
      // - **3**: Stretch to fill.
      shared_ptr<int32_t> backgroundCropMode_ {};
      // The height.
      // 
      // This parameter is required.
      shared_ptr<double> height_ {};
      // The z-axis layer.
      shared_ptr<int32_t> layer_ {};
      // The image URL.
      // 
      // This parameter is required.
      shared_ptr<string> url_ {};
      // The width.
      // 
      // This parameter is required.
      shared_ptr<double> width_ {};
      // The x-coordinate.
      // 
      // This parameter is required.
      shared_ptr<double> x_ {};
      // The y-coordinate.
      // 
      // This parameter is required.
      shared_ptr<double> y_ {};
    };

    virtual bool empty() const override { return this->annotation_ == nullptr
        && this->appId_ == nullptr && this->backgrounds_ == nullptr && this->bgColor_ == nullptr && this->channelId_ == nullptr && this->clockWidgets_ == nullptr
        && this->cropMode_ == nullptr && this->images_ == nullptr && this->layoutSpecifiedUsersShrink_ == nullptr && this->panes_ == nullptr && this->regionColor_ == nullptr
        && this->reservePaneForNoCameraUser_ == nullptr && this->showDefaultBackgroundOnMute_ == nullptr && this->specMixedUserList_ == nullptr && this->startWithoutChannel_ == nullptr && this->startWithoutChannelWaitTime_ == nullptr
        && this->subHighResolutionStream_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr && this->texts_ == nullptr && this->url_ == nullptr; };
    // annotation Field Functions 
    bool hasAnnotation() const { return this->annotation_ != nullptr;};
    void deleteAnnotation() { this->annotation_ = nullptr;};
    inline string getAnnotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
    inline StartStreamingOutShrinkRequest& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartStreamingOutShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequest::Backgrounds> & getBackgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<StartStreamingOutShrinkRequest::Backgrounds>) };
    inline vector<StartStreamingOutShrinkRequest::Backgrounds> getBackgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<StartStreamingOutShrinkRequest::Backgrounds>) };
    inline StartStreamingOutShrinkRequest& setBackgrounds(const vector<StartStreamingOutShrinkRequest::Backgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline StartStreamingOutShrinkRequest& setBackgrounds(vector<StartStreamingOutShrinkRequest::Backgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline const StartStreamingOutShrinkRequest::BgColor & getBgColor() const { DARABONBA_PTR_GET_CONST(bgColor_, StartStreamingOutShrinkRequest::BgColor) };
    inline StartStreamingOutShrinkRequest::BgColor getBgColor() { DARABONBA_PTR_GET(bgColor_, StartStreamingOutShrinkRequest::BgColor) };
    inline StartStreamingOutShrinkRequest& setBgColor(const StartStreamingOutShrinkRequest::BgColor & bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };
    inline StartStreamingOutShrinkRequest& setBgColor(StartStreamingOutShrinkRequest::BgColor && bgColor) { DARABONBA_PTR_SET_RVALUE(bgColor_, bgColor) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartStreamingOutShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequest::ClockWidgets> & getClockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<StartStreamingOutShrinkRequest::ClockWidgets>) };
    inline vector<StartStreamingOutShrinkRequest::ClockWidgets> getClockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<StartStreamingOutShrinkRequest::ClockWidgets>) };
    inline StartStreamingOutShrinkRequest& setClockWidgets(const vector<StartStreamingOutShrinkRequest::ClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline StartStreamingOutShrinkRequest& setClockWidgets(vector<StartStreamingOutShrinkRequest::ClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t getCropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline StartStreamingOutShrinkRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequest::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<StartStreamingOutShrinkRequest::Images>) };
    inline vector<StartStreamingOutShrinkRequest::Images> getImages() { DARABONBA_PTR_GET(images_, vector<StartStreamingOutShrinkRequest::Images>) };
    inline StartStreamingOutShrinkRequest& setImages(const vector<StartStreamingOutShrinkRequest::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline StartStreamingOutShrinkRequest& setImages(vector<StartStreamingOutShrinkRequest::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsersShrink Field Functions 
    bool hasLayoutSpecifiedUsersShrink() const { return this->layoutSpecifiedUsersShrink_ != nullptr;};
    void deleteLayoutSpecifiedUsersShrink() { this->layoutSpecifiedUsersShrink_ = nullptr;};
    inline string getLayoutSpecifiedUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(layoutSpecifiedUsersShrink_, "") };
    inline StartStreamingOutShrinkRequest& setLayoutSpecifiedUsersShrink(string layoutSpecifiedUsersShrink) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsersShrink_, layoutSpecifiedUsersShrink) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequest::Panes> & getPanes() const { DARABONBA_PTR_GET_CONST(panes_, vector<StartStreamingOutShrinkRequest::Panes>) };
    inline vector<StartStreamingOutShrinkRequest::Panes> getPanes() { DARABONBA_PTR_GET(panes_, vector<StartStreamingOutShrinkRequest::Panes>) };
    inline StartStreamingOutShrinkRequest& setPanes(const vector<StartStreamingOutShrinkRequest::Panes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline StartStreamingOutShrinkRequest& setPanes(vector<StartStreamingOutShrinkRequest::Panes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // regionColor Field Functions 
    bool hasRegionColor() const { return this->regionColor_ != nullptr;};
    void deleteRegionColor() { this->regionColor_ = nullptr;};
    inline const StartStreamingOutShrinkRequest::RegionColor & getRegionColor() const { DARABONBA_PTR_GET_CONST(regionColor_, StartStreamingOutShrinkRequest::RegionColor) };
    inline StartStreamingOutShrinkRequest::RegionColor getRegionColor() { DARABONBA_PTR_GET(regionColor_, StartStreamingOutShrinkRequest::RegionColor) };
    inline StartStreamingOutShrinkRequest& setRegionColor(const StartStreamingOutShrinkRequest::RegionColor & regionColor) { DARABONBA_PTR_SET_VALUE(regionColor_, regionColor) };
    inline StartStreamingOutShrinkRequest& setRegionColor(StartStreamingOutShrinkRequest::RegionColor && regionColor) { DARABONBA_PTR_SET_RVALUE(regionColor_, regionColor) };


    // reservePaneForNoCameraUser Field Functions 
    bool hasReservePaneForNoCameraUser() const { return this->reservePaneForNoCameraUser_ != nullptr;};
    void deleteReservePaneForNoCameraUser() { this->reservePaneForNoCameraUser_ = nullptr;};
    inline bool getReservePaneForNoCameraUser() const { DARABONBA_PTR_GET_DEFAULT(reservePaneForNoCameraUser_, false) };
    inline StartStreamingOutShrinkRequest& setReservePaneForNoCameraUser(bool reservePaneForNoCameraUser) { DARABONBA_PTR_SET_VALUE(reservePaneForNoCameraUser_, reservePaneForNoCameraUser) };


    // showDefaultBackgroundOnMute Field Functions 
    bool hasShowDefaultBackgroundOnMute() const { return this->showDefaultBackgroundOnMute_ != nullptr;};
    void deleteShowDefaultBackgroundOnMute() { this->showDefaultBackgroundOnMute_ = nullptr;};
    inline bool getShowDefaultBackgroundOnMute() const { DARABONBA_PTR_GET_DEFAULT(showDefaultBackgroundOnMute_, false) };
    inline StartStreamingOutShrinkRequest& setShowDefaultBackgroundOnMute(bool showDefaultBackgroundOnMute) { DARABONBA_PTR_SET_VALUE(showDefaultBackgroundOnMute_, showDefaultBackgroundOnMute) };


    // specMixedUserList Field Functions 
    bool hasSpecMixedUserList() const { return this->specMixedUserList_ != nullptr;};
    void deleteSpecMixedUserList() { this->specMixedUserList_ = nullptr;};
    inline const vector<string> & getSpecMixedUserList() const { DARABONBA_PTR_GET_CONST(specMixedUserList_, vector<string>) };
    inline vector<string> getSpecMixedUserList() { DARABONBA_PTR_GET(specMixedUserList_, vector<string>) };
    inline StartStreamingOutShrinkRequest& setSpecMixedUserList(const vector<string> & specMixedUserList) { DARABONBA_PTR_SET_VALUE(specMixedUserList_, specMixedUserList) };
    inline StartStreamingOutShrinkRequest& setSpecMixedUserList(vector<string> && specMixedUserList) { DARABONBA_PTR_SET_RVALUE(specMixedUserList_, specMixedUserList) };


    // startWithoutChannel Field Functions 
    bool hasStartWithoutChannel() const { return this->startWithoutChannel_ != nullptr;};
    void deleteStartWithoutChannel() { this->startWithoutChannel_ = nullptr;};
    inline bool getStartWithoutChannel() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannel_, false) };
    inline StartStreamingOutShrinkRequest& setStartWithoutChannel(bool startWithoutChannel) { DARABONBA_PTR_SET_VALUE(startWithoutChannel_, startWithoutChannel) };


    // startWithoutChannelWaitTime Field Functions 
    bool hasStartWithoutChannelWaitTime() const { return this->startWithoutChannelWaitTime_ != nullptr;};
    void deleteStartWithoutChannelWaitTime() { this->startWithoutChannelWaitTime_ = nullptr;};
    inline int32_t getStartWithoutChannelWaitTime() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannelWaitTime_, 0) };
    inline StartStreamingOutShrinkRequest& setStartWithoutChannelWaitTime(int32_t startWithoutChannelWaitTime) { DARABONBA_PTR_SET_VALUE(startWithoutChannelWaitTime_, startWithoutChannelWaitTime) };


    // subHighResolutionStream Field Functions 
    bool hasSubHighResolutionStream() const { return this->subHighResolutionStream_ != nullptr;};
    void deleteSubHighResolutionStream() { this->subHighResolutionStream_ = nullptr;};
    inline bool getSubHighResolutionStream() const { DARABONBA_PTR_GET_DEFAULT(subHighResolutionStream_, false) };
    inline StartStreamingOutShrinkRequest& setSubHighResolutionStream(bool subHighResolutionStream) { DARABONBA_PTR_SET_VALUE(subHighResolutionStream_, subHighResolutionStream) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartStreamingOutShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartStreamingOutShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequest::Texts> & getTexts() const { DARABONBA_PTR_GET_CONST(texts_, vector<StartStreamingOutShrinkRequest::Texts>) };
    inline vector<StartStreamingOutShrinkRequest::Texts> getTexts() { DARABONBA_PTR_GET(texts_, vector<StartStreamingOutShrinkRequest::Texts>) };
    inline StartStreamingOutShrinkRequest& setTexts(const vector<StartStreamingOutShrinkRequest::Texts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline StartStreamingOutShrinkRequest& setTexts(vector<StartStreamingOutShrinkRequest::Texts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline StartStreamingOutShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The annotation switch.
    shared_ptr<string> annotation_ {};
    // The application ID. You can create and query the ID in the console. Only a single ID is supported.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The background image.
    shared_ptr<vector<StartStreamingOutShrinkRequest::Backgrounds>> backgrounds_ {};
    // The global background color.
    shared_ptr<StartStreamingOutShrinkRequest::BgColor> bgColor_ {};
    // The ID of an existing channel. Only a single ID is supported.
    // 
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // The global clock watermark.
    shared_ptr<vector<StartStreamingOutShrinkRequest::ClockWidgets>> clockWidgets_ {};
    // The crop mode. Valid values:
    // - **1**: Crop the image while maintaining the aspect ratio.
    // - **2**: Maintain the aspect ratio and add borders (default).
    // - **3**: Stretch the image to fill the pane.
    shared_ptr<int32_t> cropMode_ {};
    // The global image watermark.
    shared_ptr<vector<StartStreamingOutShrinkRequest::Images>> images_ {};
    // The specified user list for layout generation, including Blacklist/Whitelist.
    // 
    // Whitelist: specifies the users whose video streams are subscribed to in the channel.
    // * After the settings are applied, automatic padding is performed in sequence based on this list.
    // * When switching between multiple layouts in a template, only users in the whitelist are considered.
    // 
    // Blacklist: specifies the users whose video streams are not subscribed to in the channel.
    // * When switching between multiple layouts in a template, only users not in the blacklist are considered.
    shared_ptr<string> layoutSpecifiedUsersShrink_ {};
    // The pane settings.
    shared_ptr<vector<StartStreamingOutShrinkRequest::Panes>> panes_ {};
    // The global pane background color.
    shared_ptr<StartStreamingOutShrinkRequest::RegionColor> regionColor_ {};
    // Specifies whether to reserve a pane placeholder for users who do not push camera streams. Default value: true. A value of true indicates that a pane is reserved when a user does not push a camera stream. A value of false indicates that no pane is reserved.
    shared_ptr<bool> reservePaneForNoCameraUser_ {};
    // Specifies whether to display the default background image of a pane when the user is muted. Valid values:
    // - true: Displays the default background image (default).
    // - false: Does not display the default background image, but the configured local pane background image is still displayed.
    shared_ptr<bool> showDefaultBackgroundOnMute_ {};
    // The list of specified users for audio mixing.
    shared_ptr<vector<string>> specMixedUserList_ {};
    // Specifies whether to allow starting the task when the channel does not exist. Valid values:
    // 
    // - true: Yes.
    // - false: No (default).
    shared_ptr<bool> startWithoutChannel_ {};
    // The wait time for the task when the channel is not started, in seconds. This parameter is valid only when the StartWithoutChannel parameter is set to true. Valid values: 30 to 120.
    shared_ptr<int32_t> startWithoutChannelWaitTime_ {};
    // Specifies whether to subscribe to high resolution streams. Valid values:
    // - false: Subscribes to streams of different resolutions based on the pane area (default).
    // - true: Uses the highest resolution stream pushed by the client for padding by default.
    shared_ptr<bool> subHighResolutionStream_ {};
    // The task ID of the bypass streaming task. Only a single ID is supported. The ID can contain uppercase and lowercase letters, digits, underscores (_), and hyphens (-), and can be up to 55 bytes in length. If you do not specify this parameter, the system automatically generates a task ID.
    shared_ptr<string> taskId_ {};
    // The template ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // The global text watermark.
    shared_ptr<vector<StartStreamingOutShrinkRequest::Texts>> texts_ {};
    // The live stream ingest URL. Only a single URL is supported. This URL cannot be used by multiple tasks at the same time.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
