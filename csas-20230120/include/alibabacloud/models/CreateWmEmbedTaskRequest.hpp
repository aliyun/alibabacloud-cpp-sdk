// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioControl, audioControl_);
      DARABONBA_PTR_TO_JSON(CsvControl, csvControl_);
      DARABONBA_PTR_TO_JSON(DocumentControl, documentControl_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(ImageControl, imageControl_);
      DARABONBA_PTR_TO_JSON(ImageEmbedJpegQuality, imageEmbedJpegQuality_);
      DARABONBA_PTR_TO_JSON(ImageEmbedLevel, imageEmbedLevel_);
      DARABONBA_PTR_TO_JSON(InvisibleEnable, invisibleEnable_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(VideoControl, videoControl_);
      DARABONBA_PTR_TO_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_TO_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioControl, audioControl_);
      DARABONBA_PTR_FROM_JSON(CsvControl, csvControl_);
      DARABONBA_PTR_FROM_JSON(DocumentControl, documentControl_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(ImageControl, imageControl_);
      DARABONBA_PTR_FROM_JSON(ImageEmbedJpegQuality, imageEmbedJpegQuality_);
      DARABONBA_PTR_FROM_JSON(ImageEmbedLevel, imageEmbedLevel_);
      DARABONBA_PTR_FROM_JSON(InvisibleEnable, invisibleEnable_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(VideoControl, videoControl_);
      DARABONBA_PTR_FROM_JSON(VideoIsLong, videoIsLong_);
      DARABONBA_PTR_FROM_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
    };
    CreateWmEmbedTaskRequest() = default ;
    CreateWmEmbedTaskRequest(const CreateWmEmbedTaskRequest &) = default ;
    CreateWmEmbedTaskRequest(CreateWmEmbedTaskRequest &&) = default ;
    CreateWmEmbedTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequest() = default ;
    CreateWmEmbedTaskRequest& operator=(const CreateWmEmbedTaskRequest &) = default ;
    CreateWmEmbedTaskRequest& operator=(CreateWmEmbedTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoControl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoControl& obj) { 
        DARABONBA_PTR_TO_JSON(MetadataControl, metadataControl_);
        DARABONBA_PTR_TO_JSON(TextVisibleControl, textVisibleControl_);
      };
      friend void from_json(const Darabonba::Json& j, VideoControl& obj) { 
        DARABONBA_PTR_FROM_JSON(MetadataControl, metadataControl_);
        DARABONBA_PTR_FROM_JSON(TextVisibleControl, textVisibleControl_);
      };
      VideoControl() = default ;
      VideoControl(const VideoControl &) = default ;
      VideoControl(VideoControl &&) = default ;
      VideoControl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoControl() = default ;
      VideoControl& operator=(const VideoControl &) = default ;
      VideoControl& operator=(VideoControl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TextVisibleControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TextVisibleControl& obj) { 
          DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
          DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
          DARABONBA_PTR_TO_JSON(Margin, margin_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Opacity, opacity_);
          DARABONBA_PTR_TO_JSON(PosX, posX_);
          DARABONBA_PTR_TO_JSON(PosY, posY_);
          DARABONBA_PTR_TO_JSON(Visible, visible_);
          DARABONBA_PTR_TO_JSON(VisibleText, visibleText_);
        };
        friend void from_json(const Darabonba::Json& j, TextVisibleControl& obj) { 
          DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
          DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
          DARABONBA_PTR_FROM_JSON(Margin, margin_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Opacity, opacity_);
          DARABONBA_PTR_FROM_JSON(PosX, posX_);
          DARABONBA_PTR_FROM_JSON(PosY, posY_);
          DARABONBA_PTR_FROM_JSON(Visible, visible_);
          DARABONBA_PTR_FROM_JSON(VisibleText, visibleText_);
        };
        TextVisibleControl() = default ;
        TextVisibleControl(const TextVisibleControl &) = default ;
        TextVisibleControl(TextVisibleControl &&) = default ;
        TextVisibleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TextVisibleControl() = default ;
        TextVisibleControl& operator=(const TextVisibleControl &) = default ;
        TextVisibleControl& operator=(TextVisibleControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Margin : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Margin& obj) { 
            DARABONBA_PTR_TO_JSON(Bottom, bottom_);
            DARABONBA_PTR_TO_JSON(Right, right_);
          };
          friend void from_json(const Darabonba::Json& j, Margin& obj) { 
            DARABONBA_PTR_FROM_JSON(Bottom, bottom_);
            DARABONBA_PTR_FROM_JSON(Right, right_);
          };
          Margin() = default ;
          Margin(const Margin &) = default ;
          Margin(Margin &&) = default ;
          Margin(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Margin() = default ;
          Margin& operator=(const Margin &) = default ;
          Margin& operator=(Margin &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bottom_ == nullptr
        && this->right_ == nullptr; };
          // bottom Field Functions 
          bool hasBottom() const { return this->bottom_ != nullptr;};
          void deleteBottom() { this->bottom_ = nullptr;};
          inline int32_t getBottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0) };
          inline Margin& setBottom(int32_t bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


          // right Field Functions 
          bool hasRight() const { return this->right_ != nullptr;};
          void deleteRight() { this->right_ = nullptr;};
          inline int32_t getRight() const { DARABONBA_PTR_GET_DEFAULT(right_, 0) };
          inline Margin& setRight(int32_t right) { DARABONBA_PTR_SET_VALUE(right_, right) };


        protected:
          // Bottom margin. Takes effect only when Mode is set to bottom-left or bottom-right.
          shared_ptr<int32_t> bottom_ {};
          // Right margin. Takes effect only when Mode is set to top-right or bottom-right.
          shared_ptr<int32_t> right_ {};
        };

        virtual bool empty() const override { return this->fontColor_ == nullptr
        && this->fontSize_ == nullptr && this->margin_ == nullptr && this->mode_ == nullptr && this->opacity_ == nullptr && this->posX_ == nullptr
        && this->posY_ == nullptr && this->visible_ == nullptr && this->visibleText_ == nullptr; };
        // fontColor Field Functions 
        bool hasFontColor() const { return this->fontColor_ != nullptr;};
        void deleteFontColor() { this->fontColor_ = nullptr;};
        inline string getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
        inline TextVisibleControl& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


        // fontSize Field Functions 
        bool hasFontSize() const { return this->fontSize_ != nullptr;};
        void deleteFontSize() { this->fontSize_ = nullptr;};
        inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
        inline TextVisibleControl& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


        // margin Field Functions 
        bool hasMargin() const { return this->margin_ != nullptr;};
        void deleteMargin() { this->margin_ = nullptr;};
        inline const TextVisibleControl::Margin & getMargin() const { DARABONBA_PTR_GET_CONST(margin_, TextVisibleControl::Margin) };
        inline TextVisibleControl::Margin getMargin() { DARABONBA_PTR_GET(margin_, TextVisibleControl::Margin) };
        inline TextVisibleControl& setMargin(const TextVisibleControl::Margin & margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };
        inline TextVisibleControl& setMargin(TextVisibleControl::Margin && margin) { DARABONBA_PTR_SET_RVALUE(margin_, margin) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline TextVisibleControl& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // opacity Field Functions 
        bool hasOpacity() const { return this->opacity_ != nullptr;};
        void deleteOpacity() { this->opacity_ = nullptr;};
        inline int32_t getOpacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0) };
        inline TextVisibleControl& setOpacity(int32_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


        // posX Field Functions 
        bool hasPosX() const { return this->posX_ != nullptr;};
        void deletePosX() { this->posX_ = nullptr;};
        inline int32_t getPosX() const { DARABONBA_PTR_GET_DEFAULT(posX_, 0) };
        inline TextVisibleControl& setPosX(int32_t posX) { DARABONBA_PTR_SET_VALUE(posX_, posX) };


        // posY Field Functions 
        bool hasPosY() const { return this->posY_ != nullptr;};
        void deletePosY() { this->posY_ = nullptr;};
        inline int32_t getPosY() const { DARABONBA_PTR_GET_DEFAULT(posY_, 0) };
        inline TextVisibleControl& setPosY(int32_t posY) { DARABONBA_PTR_SET_VALUE(posY_, posY) };


        // visible Field Functions 
        bool hasVisible() const { return this->visible_ != nullptr;};
        void deleteVisible() { this->visible_ = nullptr;};
        inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
        inline TextVisibleControl& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


        // visibleText Field Functions 
        bool hasVisibleText() const { return this->visibleText_ != nullptr;};
        void deleteVisibleText() { this->visibleText_ = nullptr;};
        inline string getVisibleText() const { DARABONBA_PTR_GET_DEFAULT(visibleText_, "") };
        inline TextVisibleControl& setVisibleText(string visibleText) { DARABONBA_PTR_SET_VALUE(visibleText_, visibleText) };


      protected:
        // Text color of the text watermark. Format: 0xFFFFFF or #FFFFFF (RGB color format).
        shared_ptr<string> fontColor_ {};
        // Font size. Valid values: **0** to **72**.
        shared_ptr<int32_t> fontSize_ {};
        // Margin. Takes effect only when Mode is set to top-left, top-right, bottom-left, or bottom-right.
        shared_ptr<TextVisibleControl::Margin> margin_ {};
        // Text watermark display mode. Valid values:
        // - **pos**: Fixed position with the origin at the top-left corner.
        // - **bottom-right**: Bottom-right mode.
        shared_ptr<string> mode_ {};
        // Text watermark transparency. Value range: 1 to 255. A higher value indicates less transparency.
        shared_ptr<int32_t> opacity_ {};
        // Effective only when Mode is "pos". Specifies the horizontal position of the visible watermark, with the origin at the top-left corner, in pixels.
        shared_ptr<int32_t> posX_ {};
        // Effective only when Mode is "pos". Specifies the vertical position of the visible watermark, with the origin at the top-left corner, in pixels.
        shared_ptr<int32_t> posY_ {};
        // Visibility:
        // 
        // true: Display
        // 
        // false: Do not display
        shared_ptr<bool> visible_ {};
        // Text watermark content. The format is a UTF-8 string.
        shared_ptr<string> visibleText_ {};
      };

      class MetadataControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetadataControl& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(XmpKvBase64, xmpKvBase64_);
        };
        friend void from_json(const Darabonba::Json& j, MetadataControl& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(XmpKvBase64, xmpKvBase64_);
        };
        MetadataControl() = default ;
        MetadataControl(const MetadataControl &) = default ;
        MetadataControl(MetadataControl &&) = default ;
        MetadataControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetadataControl() = default ;
        MetadataControl& operator=(const MetadataControl &) = default ;
        MetadataControl& operator=(MetadataControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->xmpKvBase64_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline MetadataControl& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // xmpKvBase64 Field Functions 
        bool hasXmpKvBase64() const { return this->xmpKvBase64_ != nullptr;};
        void deleteXmpKvBase64() { this->xmpKvBase64_ = nullptr;};
        inline string getXmpKvBase64() const { DARABONBA_PTR_GET_DEFAULT(xmpKvBase64_, "") };
        inline MetadataControl& setXmpKvBase64(string xmpKvBase64) { DARABONBA_PTR_SET_VALUE(xmpKvBase64_, xmpKvBase64) };


      protected:
        // Whether enabled.
        // - **false**: Disabled.
        // - **true**: Enabled.
        shared_ptr<bool> enable_ {};
        // Metadata in Base64 format. The string in the format AIGC={"Label":"1","ContentProducer":"AXXXX","ProduceID":"BXXXX","ReservedCode1":"CXXX","ContentPropagator":"DXXX","PropagateID":"EXXX","ReservedCode2":"FXXXX"} must be encoded into a Base64 string. Note: 1. The prefix "AIGC=" must be included; otherwise, the metadata cannot be added. Also note that this prefix differs from the one used for image metadata. 2. Base64 must be in standard format and include padding.
        shared_ptr<string> xmpKvBase64_ {};
      };

      virtual bool empty() const override { return this->metadataControl_ == nullptr
        && this->textVisibleControl_ == nullptr; };
      // metadataControl Field Functions 
      bool hasMetadataControl() const { return this->metadataControl_ != nullptr;};
      void deleteMetadataControl() { this->metadataControl_ = nullptr;};
      inline const VideoControl::MetadataControl & getMetadataControl() const { DARABONBA_PTR_GET_CONST(metadataControl_, VideoControl::MetadataControl) };
      inline VideoControl::MetadataControl getMetadataControl() { DARABONBA_PTR_GET(metadataControl_, VideoControl::MetadataControl) };
      inline VideoControl& setMetadataControl(const VideoControl::MetadataControl & metadataControl) { DARABONBA_PTR_SET_VALUE(metadataControl_, metadataControl) };
      inline VideoControl& setMetadataControl(VideoControl::MetadataControl && metadataControl) { DARABONBA_PTR_SET_RVALUE(metadataControl_, metadataControl) };


      // textVisibleControl Field Functions 
      bool hasTextVisibleControl() const { return this->textVisibleControl_ != nullptr;};
      void deleteTextVisibleControl() { this->textVisibleControl_ = nullptr;};
      inline const VideoControl::TextVisibleControl & getTextVisibleControl() const { DARABONBA_PTR_GET_CONST(textVisibleControl_, VideoControl::TextVisibleControl) };
      inline VideoControl::TextVisibleControl getTextVisibleControl() { DARABONBA_PTR_GET(textVisibleControl_, VideoControl::TextVisibleControl) };
      inline VideoControl& setTextVisibleControl(const VideoControl::TextVisibleControl & textVisibleControl) { DARABONBA_PTR_SET_VALUE(textVisibleControl_, textVisibleControl) };
      inline VideoControl& setTextVisibleControl(VideoControl::TextVisibleControl && textVisibleControl) { DARABONBA_PTR_SET_RVALUE(textVisibleControl_, textVisibleControl) };


    protected:
      // Metadata control parameters.
      shared_ptr<VideoControl::MetadataControl> metadataControl_ {};
      // Video text watermark control parameters.
      shared_ptr<VideoControl::TextVisibleControl> textVisibleControl_ {};
    };

    class ImageControl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageControl& obj) { 
        DARABONBA_PTR_TO_JSON(LogoVisibleControl, logoVisibleControl_);
        DARABONBA_PTR_TO_JSON(MetadataControl, metadataControl_);
        DARABONBA_PTR_TO_JSON(TextVisibleControl, textVisibleControl_);
      };
      friend void from_json(const Darabonba::Json& j, ImageControl& obj) { 
        DARABONBA_PTR_FROM_JSON(LogoVisibleControl, logoVisibleControl_);
        DARABONBA_PTR_FROM_JSON(MetadataControl, metadataControl_);
        DARABONBA_PTR_FROM_JSON(TextVisibleControl, textVisibleControl_);
      };
      ImageControl() = default ;
      ImageControl(const ImageControl &) = default ;
      ImageControl(ImageControl &&) = default ;
      ImageControl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageControl() = default ;
      ImageControl& operator=(const ImageControl &) = default ;
      ImageControl& operator=(ImageControl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TextVisibleControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TextVisibleControl& obj) { 
          DARABONBA_PTR_TO_JSON(Angle, angle_);
          DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
          DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
          DARABONBA_PTR_TO_JSON(Margin, margin_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Opacity, opacity_);
          DARABONBA_PTR_TO_JSON(PosAx, posAx_);
          DARABONBA_PTR_TO_JSON(PosAy, posAy_);
          DARABONBA_PTR_TO_JSON(PosX, posX_);
          DARABONBA_PTR_TO_JSON(PosY, posY_);
          DARABONBA_PTR_TO_JSON(SpaceX, spaceX_);
          DARABONBA_PTR_TO_JSON(SpaceY, spaceY_);
          DARABONBA_PTR_TO_JSON(Visible, visible_);
          DARABONBA_PTR_TO_JSON(VisibleText, visibleText_);
        };
        friend void from_json(const Darabonba::Json& j, TextVisibleControl& obj) { 
          DARABONBA_PTR_FROM_JSON(Angle, angle_);
          DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
          DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
          DARABONBA_PTR_FROM_JSON(Margin, margin_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Opacity, opacity_);
          DARABONBA_PTR_FROM_JSON(PosAx, posAx_);
          DARABONBA_PTR_FROM_JSON(PosAy, posAy_);
          DARABONBA_PTR_FROM_JSON(PosX, posX_);
          DARABONBA_PTR_FROM_JSON(PosY, posY_);
          DARABONBA_PTR_FROM_JSON(SpaceX, spaceX_);
          DARABONBA_PTR_FROM_JSON(SpaceY, spaceY_);
          DARABONBA_PTR_FROM_JSON(Visible, visible_);
          DARABONBA_PTR_FROM_JSON(VisibleText, visibleText_);
        };
        TextVisibleControl() = default ;
        TextVisibleControl(const TextVisibleControl &) = default ;
        TextVisibleControl(TextVisibleControl &&) = default ;
        TextVisibleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TextVisibleControl() = default ;
        TextVisibleControl& operator=(const TextVisibleControl &) = default ;
        TextVisibleControl& operator=(TextVisibleControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Margin : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Margin& obj) { 
            DARABONBA_PTR_TO_JSON(Bottom, bottom_);
            DARABONBA_PTR_TO_JSON(Left, left_);
            DARABONBA_PTR_TO_JSON(Right, right_);
            DARABONBA_PTR_TO_JSON(Top, top_);
          };
          friend void from_json(const Darabonba::Json& j, Margin& obj) { 
            DARABONBA_PTR_FROM_JSON(Bottom, bottom_);
            DARABONBA_PTR_FROM_JSON(Left, left_);
            DARABONBA_PTR_FROM_JSON(Right, right_);
            DARABONBA_PTR_FROM_JSON(Top, top_);
          };
          Margin() = default ;
          Margin(const Margin &) = default ;
          Margin(Margin &&) = default ;
          Margin(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Margin() = default ;
          Margin& operator=(const Margin &) = default ;
          Margin& operator=(Margin &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bottom_ == nullptr
        && this->left_ == nullptr && this->right_ == nullptr && this->top_ == nullptr; };
          // bottom Field Functions 
          bool hasBottom() const { return this->bottom_ != nullptr;};
          void deleteBottom() { this->bottom_ = nullptr;};
          inline float getBottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0.0) };
          inline Margin& setBottom(float bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


          // left Field Functions 
          bool hasLeft() const { return this->left_ != nullptr;};
          void deleteLeft() { this->left_ = nullptr;};
          inline float getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, 0.0) };
          inline Margin& setLeft(float left) { DARABONBA_PTR_SET_VALUE(left_, left) };


          // right Field Functions 
          bool hasRight() const { return this->right_ != nullptr;};
          void deleteRight() { this->right_ = nullptr;};
          inline float getRight() const { DARABONBA_PTR_GET_DEFAULT(right_, 0.0) };
          inline Margin& setRight(float right) { DARABONBA_PTR_SET_VALUE(right_, right) };


          // top Field Functions 
          bool hasTop() const { return this->top_ != nullptr;};
          void deleteTop() { this->top_ = nullptr;};
          inline float getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0.0) };
          inline Margin& setTop(float top) { DARABONBA_PTR_SET_VALUE(top_, top) };


        protected:
          // Effective when Mode is bottom-left or bottom-right. Bottom margin.
          shared_ptr<float> bottom_ {};
          // Effective only when Mode is top-left or bottom-left. Left margin.
          shared_ptr<float> left_ {};
          // Effective only when Mode is top-right or bottom-right. Right margin.
          shared_ptr<float> right_ {};
          // Effective only when Mode is top-left or top-right. Top margin.
          shared_ptr<float> top_ {};
        };

        virtual bool empty() const override { return this->angle_ == nullptr
        && this->fontColor_ == nullptr && this->fontSize_ == nullptr && this->margin_ == nullptr && this->mode_ == nullptr && this->opacity_ == nullptr
        && this->posAx_ == nullptr && this->posAy_ == nullptr && this->posX_ == nullptr && this->posY_ == nullptr && this->spaceX_ == nullptr
        && this->spaceY_ == nullptr && this->visible_ == nullptr && this->visibleText_ == nullptr; };
        // angle Field Functions 
        bool hasAngle() const { return this->angle_ != nullptr;};
        void deleteAngle() { this->angle_ = nullptr;};
        inline int64_t getAngle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
        inline TextVisibleControl& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


        // fontColor Field Functions 
        bool hasFontColor() const { return this->fontColor_ != nullptr;};
        void deleteFontColor() { this->fontColor_ = nullptr;};
        inline string getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
        inline TextVisibleControl& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


        // fontSize Field Functions 
        bool hasFontSize() const { return this->fontSize_ != nullptr;};
        void deleteFontSize() { this->fontSize_ = nullptr;};
        inline int64_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0L) };
        inline TextVisibleControl& setFontSize(int64_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


        // margin Field Functions 
        bool hasMargin() const { return this->margin_ != nullptr;};
        void deleteMargin() { this->margin_ = nullptr;};
        inline const TextVisibleControl::Margin & getMargin() const { DARABONBA_PTR_GET_CONST(margin_, TextVisibleControl::Margin) };
        inline TextVisibleControl::Margin getMargin() { DARABONBA_PTR_GET(margin_, TextVisibleControl::Margin) };
        inline TextVisibleControl& setMargin(const TextVisibleControl::Margin & margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };
        inline TextVisibleControl& setMargin(TextVisibleControl::Margin && margin) { DARABONBA_PTR_SET_RVALUE(margin_, margin) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline TextVisibleControl& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // opacity Field Functions 
        bool hasOpacity() const { return this->opacity_ != nullptr;};
        void deleteOpacity() { this->opacity_ = nullptr;};
        inline int32_t getOpacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0) };
        inline TextVisibleControl& setOpacity(int32_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


        // posAx Field Functions 
        bool hasPosAx() const { return this->posAx_ != nullptr;};
        void deletePosAx() { this->posAx_ = nullptr;};
        inline float getPosAx() const { DARABONBA_PTR_GET_DEFAULT(posAx_, 0.0) };
        inline TextVisibleControl& setPosAx(float posAx) { DARABONBA_PTR_SET_VALUE(posAx_, posAx) };


        // posAy Field Functions 
        bool hasPosAy() const { return this->posAy_ != nullptr;};
        void deletePosAy() { this->posAy_ = nullptr;};
        inline float getPosAy() const { DARABONBA_PTR_GET_DEFAULT(posAy_, 0.0) };
        inline TextVisibleControl& setPosAy(float posAy) { DARABONBA_PTR_SET_VALUE(posAy_, posAy) };


        // posX Field Functions 
        bool hasPosX() const { return this->posX_ != nullptr;};
        void deletePosX() { this->posX_ = nullptr;};
        inline int64_t getPosX() const { DARABONBA_PTR_GET_DEFAULT(posX_, 0L) };
        inline TextVisibleControl& setPosX(int64_t posX) { DARABONBA_PTR_SET_VALUE(posX_, posX) };


        // posY Field Functions 
        bool hasPosY() const { return this->posY_ != nullptr;};
        void deletePosY() { this->posY_ = nullptr;};
        inline int64_t getPosY() const { DARABONBA_PTR_GET_DEFAULT(posY_, 0L) };
        inline TextVisibleControl& setPosY(int64_t posY) { DARABONBA_PTR_SET_VALUE(posY_, posY) };


        // spaceX Field Functions 
        bool hasSpaceX() const { return this->spaceX_ != nullptr;};
        void deleteSpaceX() { this->spaceX_ = nullptr;};
        inline int64_t getSpaceX() const { DARABONBA_PTR_GET_DEFAULT(spaceX_, 0L) };
        inline TextVisibleControl& setSpaceX(int64_t spaceX) { DARABONBA_PTR_SET_VALUE(spaceX_, spaceX) };


        // spaceY Field Functions 
        bool hasSpaceY() const { return this->spaceY_ != nullptr;};
        void deleteSpaceY() { this->spaceY_ = nullptr;};
        inline int64_t getSpaceY() const { DARABONBA_PTR_GET_DEFAULT(spaceY_, 0L) };
        inline TextVisibleControl& setSpaceY(int64_t spaceY) { DARABONBA_PTR_SET_VALUE(spaceY_, spaceY) };


        // visible Field Functions 
        bool hasVisible() const { return this->visible_ != nullptr;};
        void deleteVisible() { this->visible_ = nullptr;};
        inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
        inline TextVisibleControl& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


        // visibleText Field Functions 
        bool hasVisibleText() const { return this->visibleText_ != nullptr;};
        void deleteVisibleText() { this->visibleText_ = nullptr;};
        inline string getVisibleText() const { DARABONBA_PTR_GET_DEFAULT(visibleText_, "") };
        inline TextVisibleControl& setVisibleText(string visibleText) { DARABONBA_PTR_SET_VALUE(visibleText_, visibleText) };


      protected:
        // Clockwise rotation angle of the text watermark, in degrees. The value range is 0 to 360.
        shared_ptr<int64_t> angle_ {};
        // Text color of the text watermark. The format is 0xFFFFFF or #FFFFFF RGB color format. For example, 0x000000 or #000000 represents black.
        shared_ptr<string> fontColor_ {};
        // Font size of the text watermark. A larger value indicates a larger font.
        shared_ptr<int64_t> fontSize_ {};
        // Effective only when Mode is top-left, top-right, bottom-left, or bottom-right. Margin.
        shared_ptr<TextVisibleControl::Margin> margin_ {};
        // Text watermark display mode. Valid values:
        // - **pos**: fixed position mode.
        // - **repeat**: tile mode.
        // - **top-left**: top-left mode.
        // - **top-right**: top-right mode.
        // - **bottom-left**: bottom-left mode.
        // - **bottom-right**: bottom-right mode.
        shared_ptr<string> mode_ {};
        // Opacity of the text watermark. Valid values: 1 to 255. A larger value indicates less transparency.
        shared_ptr<int32_t> opacity_ {};
        // Horizontal anchor point of the text watermark.  
        // The value range is 0 to 1. When (PosAx, PosAy) is (0, 0), the text is drawn with its top-left corner as the anchor point; when the value is 0.5, the text is drawn with its centroid as the anchor point; when the value is (1, 1), the text is drawn with its bottom-right corner as the anchor point.
        shared_ptr<float> posAx_ {};
        // Vertical anchor point of the text watermark.  
        // Valid range: 0 to 1. When (PosAx, PosAy) is (0, 0), the text is drawn with its top-left corner as the anchor point; when the value is 0.5, the text is drawn centered at its centroid; when the value is (1, 1), the text is drawn with its bottom-right corner as the anchor point.
        shared_ptr<float> posAy_ {};
        // Takes effect when Mode is pos. Specifies the horizontal position of the text watermark, using pixel coordinates with the origin at the top-left corner.
        shared_ptr<int64_t> posX_ {};
        // Takes effect when Mode is pos. Specifies the vertical position of the text watermark, using pixel coordinates with the origin at the top-left corner.
        shared_ptr<int64_t> posY_ {};
        // This parameter takes effect only when Mode is set to repeat. It controls the horizontal pitch of the tiled text watermark.
        shared_ptr<int64_t> spaceX_ {};
        // This parameter takes effect only when Mode is set to repeat. It controls the vertical pitch of the tiled text watermark.
        shared_ptr<int64_t> spaceY_ {};
        // Visibility:  
        // 
        // true: Display  
        // 
        // false: Do not display
        shared_ptr<bool> visible_ {};
        // Content of the text watermark. The format is a UTF-8 string.
        shared_ptr<string> visibleText_ {};
      };

      class MetadataControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetadataControl& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(XmpKvBase64, xmpKvBase64_);
        };
        friend void from_json(const Darabonba::Json& j, MetadataControl& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(XmpKvBase64, xmpKvBase64_);
        };
        MetadataControl() = default ;
        MetadataControl(const MetadataControl &) = default ;
        MetadataControl(MetadataControl &&) = default ;
        MetadataControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetadataControl() = default ;
        MetadataControl& operator=(const MetadataControl &) = default ;
        MetadataControl& operator=(MetadataControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->xmpKvBase64_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline MetadataControl& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // xmpKvBase64 Field Functions 
        bool hasXmpKvBase64() const { return this->xmpKvBase64_ != nullptr;};
        void deleteXmpKvBase64() { this->xmpKvBase64_ = nullptr;};
        inline string getXmpKvBase64() const { DARABONBA_PTR_GET_DEFAULT(xmpKvBase64_, "") };
        inline MetadataControl& setXmpKvBase64(string xmpKvBase64) { DARABONBA_PTR_SET_VALUE(xmpKvBase64_, xmpKvBase64) };


      protected:
        // Whether to enable.
        // 
        // true: Display
        // 
        // false: Do not display
        shared_ptr<bool> enable_ {};
        // Metadata in Base64 format. You must encode a string in the format AIGC:{"Label":"1","ContentProducer":"AXXXX","ProduceID":"BXXXX","ReservedCode1":"CXXX","ContentPropagator":"DXXX","PropagateID":"EXXX","ReservedCode2":"FXXXX"} into a Base64-encoded string. Note: 1. The prefix "AIGC:" must be included; otherwise, the metadata cannot be added. Also note that this format differs from that used for audio and video. 2. The Base64 encoding must follow the standard format and include padding as required.
        shared_ptr<string> xmpKvBase64_ {};
      };

      class LogoVisibleControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogoVisibleControl& obj) { 
          DARABONBA_PTR_TO_JSON(Angle, angle_);
          DARABONBA_PTR_TO_JSON(Enhance, enhance_);
          DARABONBA_PTR_TO_JSON(LogoBase64, logoBase64_);
          DARABONBA_PTR_TO_JSON(Margin, margin_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Opacity, opacity_);
          DARABONBA_PTR_TO_JSON(PosAx, posAx_);
          DARABONBA_PTR_TO_JSON(PosAy, posAy_);
          DARABONBA_PTR_TO_JSON(PosX, posX_);
          DARABONBA_PTR_TO_JSON(PosY, posY_);
          DARABONBA_PTR_TO_JSON(SpaceX, spaceX_);
          DARABONBA_PTR_TO_JSON(SpaceY, spaceY_);
          DARABONBA_PTR_TO_JSON(Visible, visible_);
        };
        friend void from_json(const Darabonba::Json& j, LogoVisibleControl& obj) { 
          DARABONBA_PTR_FROM_JSON(Angle, angle_);
          DARABONBA_PTR_FROM_JSON(Enhance, enhance_);
          DARABONBA_PTR_FROM_JSON(LogoBase64, logoBase64_);
          DARABONBA_PTR_FROM_JSON(Margin, margin_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Opacity, opacity_);
          DARABONBA_PTR_FROM_JSON(PosAx, posAx_);
          DARABONBA_PTR_FROM_JSON(PosAy, posAy_);
          DARABONBA_PTR_FROM_JSON(PosX, posX_);
          DARABONBA_PTR_FROM_JSON(PosY, posY_);
          DARABONBA_PTR_FROM_JSON(SpaceX, spaceX_);
          DARABONBA_PTR_FROM_JSON(SpaceY, spaceY_);
          DARABONBA_PTR_FROM_JSON(Visible, visible_);
        };
        LogoVisibleControl() = default ;
        LogoVisibleControl(const LogoVisibleControl &) = default ;
        LogoVisibleControl(LogoVisibleControl &&) = default ;
        LogoVisibleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogoVisibleControl() = default ;
        LogoVisibleControl& operator=(const LogoVisibleControl &) = default ;
        LogoVisibleControl& operator=(LogoVisibleControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Margin : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Margin& obj) { 
            DARABONBA_PTR_TO_JSON(Bottom, bottom_);
            DARABONBA_PTR_TO_JSON(Left, left_);
            DARABONBA_PTR_TO_JSON(Right, right_);
            DARABONBA_PTR_TO_JSON(Top, top_);
          };
          friend void from_json(const Darabonba::Json& j, Margin& obj) { 
            DARABONBA_PTR_FROM_JSON(Bottom, bottom_);
            DARABONBA_PTR_FROM_JSON(Left, left_);
            DARABONBA_PTR_FROM_JSON(Right, right_);
            DARABONBA_PTR_FROM_JSON(Top, top_);
          };
          Margin() = default ;
          Margin(const Margin &) = default ;
          Margin(Margin &&) = default ;
          Margin(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Margin() = default ;
          Margin& operator=(const Margin &) = default ;
          Margin& operator=(Margin &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bottom_ == nullptr
        && this->left_ == nullptr && this->right_ == nullptr && this->top_ == nullptr; };
          // bottom Field Functions 
          bool hasBottom() const { return this->bottom_ != nullptr;};
          void deleteBottom() { this->bottom_ = nullptr;};
          inline float getBottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0.0) };
          inline Margin& setBottom(float bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


          // left Field Functions 
          bool hasLeft() const { return this->left_ != nullptr;};
          void deleteLeft() { this->left_ = nullptr;};
          inline float getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, 0.0) };
          inline Margin& setLeft(float left) { DARABONBA_PTR_SET_VALUE(left_, left) };


          // right Field Functions 
          bool hasRight() const { return this->right_ != nullptr;};
          void deleteRight() { this->right_ = nullptr;};
          inline float getRight() const { DARABONBA_PTR_GET_DEFAULT(right_, 0.0) };
          inline Margin& setRight(float right) { DARABONBA_PTR_SET_VALUE(right_, right) };


          // top Field Functions 
          bool hasTop() const { return this->top_ != nullptr;};
          void deleteTop() { this->top_ = nullptr;};
          inline float getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0.0) };
          inline Margin& setTop(float top) { DARABONBA_PTR_SET_VALUE(top_, top) };


        protected:
          // Effective only when Mode is set to bottom-left or bottom-right. Specifies the bottom margin.
          shared_ptr<float> bottom_ {};
          // Effective only when Mode is set to top-left or bottom-left. Specifies the left margin.
          shared_ptr<float> left_ {};
          // Effective only when Mode is set to top-right or bottom-right. Specifies the right margin.
          shared_ptr<float> right_ {};
          // Effective only when Mode is set to top-left or top-right. Specifies the top margin.
          shared_ptr<float> top_ {};
        };

        virtual bool empty() const override { return this->angle_ == nullptr
        && this->enhance_ == nullptr && this->logoBase64_ == nullptr && this->margin_ == nullptr && this->mode_ == nullptr && this->opacity_ == nullptr
        && this->posAx_ == nullptr && this->posAy_ == nullptr && this->posX_ == nullptr && this->posY_ == nullptr && this->spaceX_ == nullptr
        && this->spaceY_ == nullptr && this->visible_ == nullptr; };
        // angle Field Functions 
        bool hasAngle() const { return this->angle_ != nullptr;};
        void deleteAngle() { this->angle_ = nullptr;};
        inline int64_t getAngle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
        inline LogoVisibleControl& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


        // enhance Field Functions 
        bool hasEnhance() const { return this->enhance_ != nullptr;};
        void deleteEnhance() { this->enhance_ = nullptr;};
        inline bool getEnhance() const { DARABONBA_PTR_GET_DEFAULT(enhance_, false) };
        inline LogoVisibleControl& setEnhance(bool enhance) { DARABONBA_PTR_SET_VALUE(enhance_, enhance) };


        // logoBase64 Field Functions 
        bool hasLogoBase64() const { return this->logoBase64_ != nullptr;};
        void deleteLogoBase64() { this->logoBase64_ = nullptr;};
        inline string getLogoBase64() const { DARABONBA_PTR_GET_DEFAULT(logoBase64_, "") };
        inline LogoVisibleControl& setLogoBase64(string logoBase64) { DARABONBA_PTR_SET_VALUE(logoBase64_, logoBase64) };


        // margin Field Functions 
        bool hasMargin() const { return this->margin_ != nullptr;};
        void deleteMargin() { this->margin_ = nullptr;};
        inline const LogoVisibleControl::Margin & getMargin() const { DARABONBA_PTR_GET_CONST(margin_, LogoVisibleControl::Margin) };
        inline LogoVisibleControl::Margin getMargin() { DARABONBA_PTR_GET(margin_, LogoVisibleControl::Margin) };
        inline LogoVisibleControl& setMargin(const LogoVisibleControl::Margin & margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };
        inline LogoVisibleControl& setMargin(LogoVisibleControl::Margin && margin) { DARABONBA_PTR_SET_RVALUE(margin_, margin) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline LogoVisibleControl& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // opacity Field Functions 
        bool hasOpacity() const { return this->opacity_ != nullptr;};
        void deleteOpacity() { this->opacity_ = nullptr;};
        inline int32_t getOpacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0) };
        inline LogoVisibleControl& setOpacity(int32_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


        // posAx Field Functions 
        bool hasPosAx() const { return this->posAx_ != nullptr;};
        void deletePosAx() { this->posAx_ = nullptr;};
        inline float getPosAx() const { DARABONBA_PTR_GET_DEFAULT(posAx_, 0.0) };
        inline LogoVisibleControl& setPosAx(float posAx) { DARABONBA_PTR_SET_VALUE(posAx_, posAx) };


        // posAy Field Functions 
        bool hasPosAy() const { return this->posAy_ != nullptr;};
        void deletePosAy() { this->posAy_ = nullptr;};
        inline float getPosAy() const { DARABONBA_PTR_GET_DEFAULT(posAy_, 0.0) };
        inline LogoVisibleControl& setPosAy(float posAy) { DARABONBA_PTR_SET_VALUE(posAy_, posAy) };


        // posX Field Functions 
        bool hasPosX() const { return this->posX_ != nullptr;};
        void deletePosX() { this->posX_ = nullptr;};
        inline int64_t getPosX() const { DARABONBA_PTR_GET_DEFAULT(posX_, 0L) };
        inline LogoVisibleControl& setPosX(int64_t posX) { DARABONBA_PTR_SET_VALUE(posX_, posX) };


        // posY Field Functions 
        bool hasPosY() const { return this->posY_ != nullptr;};
        void deletePosY() { this->posY_ = nullptr;};
        inline int64_t getPosY() const { DARABONBA_PTR_GET_DEFAULT(posY_, 0L) };
        inline LogoVisibleControl& setPosY(int64_t posY) { DARABONBA_PTR_SET_VALUE(posY_, posY) };


        // spaceX Field Functions 
        bool hasSpaceX() const { return this->spaceX_ != nullptr;};
        void deleteSpaceX() { this->spaceX_ = nullptr;};
        inline int64_t getSpaceX() const { DARABONBA_PTR_GET_DEFAULT(spaceX_, 0L) };
        inline LogoVisibleControl& setSpaceX(int64_t spaceX) { DARABONBA_PTR_SET_VALUE(spaceX_, spaceX) };


        // spaceY Field Functions 
        bool hasSpaceY() const { return this->spaceY_ != nullptr;};
        void deleteSpaceY() { this->spaceY_ = nullptr;};
        inline int64_t getSpaceY() const { DARABONBA_PTR_GET_DEFAULT(spaceY_, 0L) };
        inline LogoVisibleControl& setSpaceY(int64_t spaceY) { DARABONBA_PTR_SET_VALUE(spaceY_, spaceY) };


        // visible Field Functions 
        bool hasVisible() const { return this->visible_ != nullptr;};
        void deleteVisible() { this->visible_ = nullptr;};
        inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
        inline LogoVisibleControl& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


      protected:
        // Clockwise rotation angle of the logo watermark, in degrees. Value range: 1 to 360.
        shared_ptr<int64_t> angle_ {};
        // Specifies whether to enable enhanced visible watermarking. When enabled, the logo is processed so that embedded information can be extracted from it.
        shared_ptr<bool> enhance_ {};
        // Base64-encoded logo watermark. The logo file is a PNG image converted to Base64 format.
        shared_ptr<string> logoBase64_ {};
        // Effective only when Mode is set to top-left, top-right, bottom-left, or bottom-right. Specifies the margin.
        shared_ptr<LogoVisibleControl::Margin> margin_ {};
        // Watermark display mode. Valid values:  
        // - **pos**: Fixed position mode.  
        // - **repeat**: Tile mode.  
        // - **top-left**: Top-left mode.  
        // - **top-right**: Top-right mode.  
        // - **bottom-left**: Bottom-left mode.  
        // - **bottom-right**: Bottom-right mode.
        shared_ptr<string> mode_ {};
        // Opacity of the logo watermark. Value range: 1 to 255. A higher value indicates lower transparency.
        shared_ptr<int32_t> opacity_ {};
        // Horizontal anchor point of the logo watermark. Value range: 0 to 1. When (PosAx, PosAy) is (0, 0), the watermark is drawn with the top-left corner of the text as the anchor point; when the value is 0.5, it is drawn at the centroid of the text; when the value is (1, 1), it is drawn with the bottom-right corner of the text as the anchor point.
        shared_ptr<float> posAx_ {};
        // Vertical anchor point of the logo watermark. Value range: 0 to 1. When (PosAx, PosAy) is (0, 0), the logo is drawn with the top-left corner of the text as the anchor point; when the value is 0.5, it is drawn at the centroid of the text; when the value is (1, 1), it is drawn with the bottom-right corner of the text as the anchor point.
        shared_ptr<float> posAy_ {};
        // This parameter takes effect only when Mode is set to pos. It controls the horizontal position of the visible watermark, measured in pixels from the top-left corner as the origin.
        shared_ptr<int64_t> posX_ {};
        // This parameter takes effect only when Mode is set to pos. It controls the vertical position of the visible watermark, measured in pixels from the top-left corner as the origin.
        shared_ptr<int64_t> posY_ {};
        // This parameter takes effect only when Mode is set to repeat. It controls the horizontal pitch of the visible watermark tiling.
        shared_ptr<int64_t> spaceX_ {};
        // This parameter takes effect only when Mode is set to repeat. It controls the vertical pitch of the visible watermark tiling.
        shared_ptr<int64_t> spaceY_ {};
        // Visibility:
        // 
        // **true**: Display
        // 
        // **false**: Do not display
        shared_ptr<bool> visible_ {};
      };

      virtual bool empty() const override { return this->logoVisibleControl_ == nullptr
        && this->metadataControl_ == nullptr && this->textVisibleControl_ == nullptr; };
      // logoVisibleControl Field Functions 
      bool hasLogoVisibleControl() const { return this->logoVisibleControl_ != nullptr;};
      void deleteLogoVisibleControl() { this->logoVisibleControl_ = nullptr;};
      inline const ImageControl::LogoVisibleControl & getLogoVisibleControl() const { DARABONBA_PTR_GET_CONST(logoVisibleControl_, ImageControl::LogoVisibleControl) };
      inline ImageControl::LogoVisibleControl getLogoVisibleControl() { DARABONBA_PTR_GET(logoVisibleControl_, ImageControl::LogoVisibleControl) };
      inline ImageControl& setLogoVisibleControl(const ImageControl::LogoVisibleControl & logoVisibleControl) { DARABONBA_PTR_SET_VALUE(logoVisibleControl_, logoVisibleControl) };
      inline ImageControl& setLogoVisibleControl(ImageControl::LogoVisibleControl && logoVisibleControl) { DARABONBA_PTR_SET_RVALUE(logoVisibleControl_, logoVisibleControl) };


      // metadataControl Field Functions 
      bool hasMetadataControl() const { return this->metadataControl_ != nullptr;};
      void deleteMetadataControl() { this->metadataControl_ = nullptr;};
      inline const ImageControl::MetadataControl & getMetadataControl() const { DARABONBA_PTR_GET_CONST(metadataControl_, ImageControl::MetadataControl) };
      inline ImageControl::MetadataControl getMetadataControl() { DARABONBA_PTR_GET(metadataControl_, ImageControl::MetadataControl) };
      inline ImageControl& setMetadataControl(const ImageControl::MetadataControl & metadataControl) { DARABONBA_PTR_SET_VALUE(metadataControl_, metadataControl) };
      inline ImageControl& setMetadataControl(ImageControl::MetadataControl && metadataControl) { DARABONBA_PTR_SET_RVALUE(metadataControl_, metadataControl) };


      // textVisibleControl Field Functions 
      bool hasTextVisibleControl() const { return this->textVisibleControl_ != nullptr;};
      void deleteTextVisibleControl() { this->textVisibleControl_ = nullptr;};
      inline const ImageControl::TextVisibleControl & getTextVisibleControl() const { DARABONBA_PTR_GET_CONST(textVisibleControl_, ImageControl::TextVisibleControl) };
      inline ImageControl::TextVisibleControl getTextVisibleControl() { DARABONBA_PTR_GET(textVisibleControl_, ImageControl::TextVisibleControl) };
      inline ImageControl& setTextVisibleControl(const ImageControl::TextVisibleControl & textVisibleControl) { DARABONBA_PTR_SET_VALUE(textVisibleControl_, textVisibleControl) };
      inline ImageControl& setTextVisibleControl(ImageControl::TextVisibleControl && textVisibleControl) { DARABONBA_PTR_SET_RVALUE(textVisibleControl_, textVisibleControl) };


    protected:
      // Logo watermark control parameters.
      shared_ptr<ImageControl::LogoVisibleControl> logoVisibleControl_ {};
      // Metadata control parameters. Takes effect when WmType is PureImage or AigcImage.
      shared_ptr<ImageControl::MetadataControl> metadataControl_ {};
      // Text watermark control parameters for images.
      shared_ptr<ImageControl::TextVisibleControl> textVisibleControl_ {};
    };

    class DocumentControl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DocumentControl& obj) { 
        DARABONBA_PTR_TO_JSON(BackgroundControl, backgroundControl_);
        DARABONBA_PTR_TO_JSON(InvisibleAntiAllCopy, invisibleAntiAllCopy_);
        DARABONBA_PTR_TO_JSON(InvisibleAntiTextCopy, invisibleAntiTextCopy_);
      };
      friend void from_json(const Darabonba::Json& j, DocumentControl& obj) { 
        DARABONBA_PTR_FROM_JSON(BackgroundControl, backgroundControl_);
        DARABONBA_PTR_FROM_JSON(InvisibleAntiAllCopy, invisibleAntiAllCopy_);
        DARABONBA_PTR_FROM_JSON(InvisibleAntiTextCopy, invisibleAntiTextCopy_);
      };
      DocumentControl() = default ;
      DocumentControl(const DocumentControl &) = default ;
      DocumentControl(DocumentControl &&) = default ;
      DocumentControl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DocumentControl() = default ;
      DocumentControl& operator=(const DocumentControl &) = default ;
      DocumentControl& operator=(DocumentControl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackgroundControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackgroundControl& obj) { 
          DARABONBA_PTR_TO_JSON(BgAddInvisible, bgAddInvisible_);
          DARABONBA_PTR_TO_JSON(BgAddVisible, bgAddVisible_);
          DARABONBA_PTR_TO_JSON(BgInvisibleControl, bgInvisibleControl_);
          DARABONBA_PTR_TO_JSON(BgVisibleControl, bgVisibleControl_);
        };
        friend void from_json(const Darabonba::Json& j, BackgroundControl& obj) { 
          DARABONBA_PTR_FROM_JSON(BgAddInvisible, bgAddInvisible_);
          DARABONBA_PTR_FROM_JSON(BgAddVisible, bgAddVisible_);
          DARABONBA_PTR_FROM_JSON(BgInvisibleControl, bgInvisibleControl_);
          DARABONBA_PTR_FROM_JSON(BgVisibleControl, bgVisibleControl_);
        };
        BackgroundControl() = default ;
        BackgroundControl(const BackgroundControl &) = default ;
        BackgroundControl(BackgroundControl &&) = default ;
        BackgroundControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackgroundControl() = default ;
        BackgroundControl& operator=(const BackgroundControl &) = default ;
        BackgroundControl& operator=(BackgroundControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BgVisibleControl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BgVisibleControl& obj) { 
            DARABONBA_PTR_TO_JSON(Angle, angle_);
            DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
            DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
            DARABONBA_PTR_TO_JSON(HorizontalNumber, horizontalNumber_);
            DARABONBA_PTR_TO_JSON(Mode, mode_);
            DARABONBA_PTR_TO_JSON(Opacity, opacity_);
            DARABONBA_PTR_TO_JSON(PosX, posX_);
            DARABONBA_PTR_TO_JSON(PosY, posY_);
            DARABONBA_PTR_TO_JSON(VerticalNumber, verticalNumber_);
            DARABONBA_PTR_TO_JSON(VisibleText, visibleText_);
          };
          friend void from_json(const Darabonba::Json& j, BgVisibleControl& obj) { 
            DARABONBA_PTR_FROM_JSON(Angle, angle_);
            DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
            DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
            DARABONBA_PTR_FROM_JSON(HorizontalNumber, horizontalNumber_);
            DARABONBA_PTR_FROM_JSON(Mode, mode_);
            DARABONBA_PTR_FROM_JSON(Opacity, opacity_);
            DARABONBA_PTR_FROM_JSON(PosX, posX_);
            DARABONBA_PTR_FROM_JSON(PosY, posY_);
            DARABONBA_PTR_FROM_JSON(VerticalNumber, verticalNumber_);
            DARABONBA_PTR_FROM_JSON(VisibleText, visibleText_);
          };
          BgVisibleControl() = default ;
          BgVisibleControl(const BgVisibleControl &) = default ;
          BgVisibleControl(BgVisibleControl &&) = default ;
          BgVisibleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BgVisibleControl() = default ;
          BgVisibleControl& operator=(const BgVisibleControl &) = default ;
          BgVisibleControl& operator=(BgVisibleControl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->angle_ == nullptr
        && this->fontColor_ == nullptr && this->fontSize_ == nullptr && this->horizontalNumber_ == nullptr && this->mode_ == nullptr && this->opacity_ == nullptr
        && this->posX_ == nullptr && this->posY_ == nullptr && this->verticalNumber_ == nullptr && this->visibleText_ == nullptr; };
          // angle Field Functions 
          bool hasAngle() const { return this->angle_ != nullptr;};
          void deleteAngle() { this->angle_ = nullptr;};
          inline int64_t getAngle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
          inline BgVisibleControl& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


          // fontColor Field Functions 
          bool hasFontColor() const { return this->fontColor_ != nullptr;};
          void deleteFontColor() { this->fontColor_ = nullptr;};
          inline string getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
          inline BgVisibleControl& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


          // fontSize Field Functions 
          bool hasFontSize() const { return this->fontSize_ != nullptr;};
          void deleteFontSize() { this->fontSize_ = nullptr;};
          inline int64_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0L) };
          inline BgVisibleControl& setFontSize(int64_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


          // horizontalNumber Field Functions 
          bool hasHorizontalNumber() const { return this->horizontalNumber_ != nullptr;};
          void deleteHorizontalNumber() { this->horizontalNumber_ = nullptr;};
          inline int64_t getHorizontalNumber() const { DARABONBA_PTR_GET_DEFAULT(horizontalNumber_, 0L) };
          inline BgVisibleControl& setHorizontalNumber(int64_t horizontalNumber) { DARABONBA_PTR_SET_VALUE(horizontalNumber_, horizontalNumber) };


          // mode Field Functions 
          bool hasMode() const { return this->mode_ != nullptr;};
          void deleteMode() { this->mode_ = nullptr;};
          inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
          inline BgVisibleControl& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


          // opacity Field Functions 
          bool hasOpacity() const { return this->opacity_ != nullptr;};
          void deleteOpacity() { this->opacity_ = nullptr;};
          inline int64_t getOpacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0L) };
          inline BgVisibleControl& setOpacity(int64_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


          // posX Field Functions 
          bool hasPosX() const { return this->posX_ != nullptr;};
          void deletePosX() { this->posX_ = nullptr;};
          inline string getPosX() const { DARABONBA_PTR_GET_DEFAULT(posX_, "") };
          inline BgVisibleControl& setPosX(string posX) { DARABONBA_PTR_SET_VALUE(posX_, posX) };


          // posY Field Functions 
          bool hasPosY() const { return this->posY_ != nullptr;};
          void deletePosY() { this->posY_ = nullptr;};
          inline string getPosY() const { DARABONBA_PTR_GET_DEFAULT(posY_, "") };
          inline BgVisibleControl& setPosY(string posY) { DARABONBA_PTR_SET_VALUE(posY_, posY) };


          // verticalNumber Field Functions 
          bool hasVerticalNumber() const { return this->verticalNumber_ != nullptr;};
          void deleteVerticalNumber() { this->verticalNumber_ = nullptr;};
          inline int64_t getVerticalNumber() const { DARABONBA_PTR_GET_DEFAULT(verticalNumber_, 0L) };
          inline BgVisibleControl& setVerticalNumber(int64_t verticalNumber) { DARABONBA_PTR_SET_VALUE(verticalNumber_, verticalNumber) };


          // visibleText Field Functions 
          bool hasVisibleText() const { return this->visibleText_ != nullptr;};
          void deleteVisibleText() { this->visibleText_ = nullptr;};
          inline string getVisibleText() const { DARABONBA_PTR_GET_DEFAULT(visibleText_, "") };
          inline BgVisibleControl& setVisibleText(string visibleText) { DARABONBA_PTR_SET_VALUE(visibleText_, visibleText) };


        protected:
          // The counterclockwise rotation angle of the visible watermark text, in degrees. Valid values range from 1 to 360.
          shared_ptr<int64_t> angle_ {};
          // Color of the visible watermark text. Specified in 0xFFFFFF RGB format. For example, 0x000000 represents black.
          shared_ptr<string> fontColor_ {};
          // The font size of the visible watermark text. A larger value indicates a larger font.
          shared_ptr<int64_t> fontSize_ {};
          // This parameter takes effect only when Mode is set to repeat. It specifies the number of times the visible watermark repeats horizontally.
          shared_ptr<int64_t> horizontalNumber_ {};
          // Background visible watermark mode. Valid values:
          // 
          // - **pos**: Embeds a visible watermark text at a specific position in the background.
          // - **repeat**: Tiles multiple instances of the visible watermark text across the document background.
          shared_ptr<string> mode_ {};
          // Transparency parameter for the visible watermark. Value range: 1–255. A higher value indicates less transparency.
          shared_ptr<int64_t> opacity_ {};
          // This parameter takes effect only when Mode is set to pos. It controls the horizontal position of the visible watermark, with the origin at the bottom-left corner. If the value is between 0 and 1, it represents a proportional position. If the value is greater than 1, it specifies an exact pixel position.
          shared_ptr<string> posX_ {};
          // This parameter takes effect only when Mode is set to pos. It controls the vertical position of the visible watermark, with the origin at the bottom-left corner. If the value is between 0 and 1, it represents a proportional position. If the value is greater than 1, it specifies an exact pixel position.
          shared_ptr<string> posY_ {};
          // Effective only when Mode is set to repeat. Specifies the Count of times the visible watermark repeats vertically.
          shared_ptr<int64_t> verticalNumber_ {};
          // Visible watermark text for the background. Formatted as a UTF-8 string.
          shared_ptr<string> visibleText_ {};
        };

        class BgInvisibleControl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BgInvisibleControl& obj) { 
            DARABONBA_PTR_TO_JSON(Opacity, opacity_);
          };
          friend void from_json(const Darabonba::Json& j, BgInvisibleControl& obj) { 
            DARABONBA_PTR_FROM_JSON(Opacity, opacity_);
          };
          BgInvisibleControl() = default ;
          BgInvisibleControl(const BgInvisibleControl &) = default ;
          BgInvisibleControl(BgInvisibleControl &&) = default ;
          BgInvisibleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BgInvisibleControl() = default ;
          BgInvisibleControl& operator=(const BgInvisibleControl &) = default ;
          BgInvisibleControl& operator=(BgInvisibleControl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->opacity_ == nullptr; };
          // opacity Field Functions 
          bool hasOpacity() const { return this->opacity_ != nullptr;};
          void deleteOpacity() { this->opacity_ = nullptr;};
          inline int64_t getOpacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0L) };
          inline BgInvisibleControl& setOpacity(int64_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


        protected:
          // Transparency parameter for the background invisible watermark. Value range: 1–13. A higher value indicates less transparency.
          shared_ptr<int64_t> opacity_ {};
        };

        virtual bool empty() const override { return this->bgAddInvisible_ == nullptr
        && this->bgAddVisible_ == nullptr && this->bgInvisibleControl_ == nullptr && this->bgVisibleControl_ == nullptr; };
        // bgAddInvisible Field Functions 
        bool hasBgAddInvisible() const { return this->bgAddInvisible_ != nullptr;};
        void deleteBgAddInvisible() { this->bgAddInvisible_ = nullptr;};
        inline bool getBgAddInvisible() const { DARABONBA_PTR_GET_DEFAULT(bgAddInvisible_, false) };
        inline BackgroundControl& setBgAddInvisible(bool bgAddInvisible) { DARABONBA_PTR_SET_VALUE(bgAddInvisible_, bgAddInvisible) };


        // bgAddVisible Field Functions 
        bool hasBgAddVisible() const { return this->bgAddVisible_ != nullptr;};
        void deleteBgAddVisible() { this->bgAddVisible_ = nullptr;};
        inline bool getBgAddVisible() const { DARABONBA_PTR_GET_DEFAULT(bgAddVisible_, false) };
        inline BackgroundControl& setBgAddVisible(bool bgAddVisible) { DARABONBA_PTR_SET_VALUE(bgAddVisible_, bgAddVisible) };


        // bgInvisibleControl Field Functions 
        bool hasBgInvisibleControl() const { return this->bgInvisibleControl_ != nullptr;};
        void deleteBgInvisibleControl() { this->bgInvisibleControl_ = nullptr;};
        inline const BackgroundControl::BgInvisibleControl & getBgInvisibleControl() const { DARABONBA_PTR_GET_CONST(bgInvisibleControl_, BackgroundControl::BgInvisibleControl) };
        inline BackgroundControl::BgInvisibleControl getBgInvisibleControl() { DARABONBA_PTR_GET(bgInvisibleControl_, BackgroundControl::BgInvisibleControl) };
        inline BackgroundControl& setBgInvisibleControl(const BackgroundControl::BgInvisibleControl & bgInvisibleControl) { DARABONBA_PTR_SET_VALUE(bgInvisibleControl_, bgInvisibleControl) };
        inline BackgroundControl& setBgInvisibleControl(BackgroundControl::BgInvisibleControl && bgInvisibleControl) { DARABONBA_PTR_SET_RVALUE(bgInvisibleControl_, bgInvisibleControl) };


        // bgVisibleControl Field Functions 
        bool hasBgVisibleControl() const { return this->bgVisibleControl_ != nullptr;};
        void deleteBgVisibleControl() { this->bgVisibleControl_ = nullptr;};
        inline const BackgroundControl::BgVisibleControl & getBgVisibleControl() const { DARABONBA_PTR_GET_CONST(bgVisibleControl_, BackgroundControl::BgVisibleControl) };
        inline BackgroundControl::BgVisibleControl getBgVisibleControl() { DARABONBA_PTR_GET(bgVisibleControl_, BackgroundControl::BgVisibleControl) };
        inline BackgroundControl& setBgVisibleControl(const BackgroundControl::BgVisibleControl & bgVisibleControl) { DARABONBA_PTR_SET_VALUE(bgVisibleControl_, bgVisibleControl) };
        inline BackgroundControl& setBgVisibleControl(BackgroundControl::BgVisibleControl && bgVisibleControl) { DARABONBA_PTR_SET_RVALUE(bgVisibleControl_, bgVisibleControl) };


      protected:
        // Specifies whether to add an invisible background watermark. Valid values:
        // 
        // - **true**: Yes
        // - **false**: No
        shared_ptr<bool> bgAddInvisible_ {};
        // Specifies whether to enable visible background watermark. Valid values:
        // 
        // - **true**: Yes
        // - **false**: No
        shared_ptr<bool> bgAddVisible_ {};
        // Control parameters for the background invisible watermark.
        shared_ptr<BackgroundControl::BgInvisibleControl> bgInvisibleControl_ {};
        // Parameters for controlling visible background watermarks.
        shared_ptr<BackgroundControl::BgVisibleControl> bgVisibleControl_ {};
      };

      virtual bool empty() const override { return this->backgroundControl_ == nullptr
        && this->invisibleAntiAllCopy_ == nullptr && this->invisibleAntiTextCopy_ == nullptr; };
      // backgroundControl Field Functions 
      bool hasBackgroundControl() const { return this->backgroundControl_ != nullptr;};
      void deleteBackgroundControl() { this->backgroundControl_ = nullptr;};
      inline const DocumentControl::BackgroundControl & getBackgroundControl() const { DARABONBA_PTR_GET_CONST(backgroundControl_, DocumentControl::BackgroundControl) };
      inline DocumentControl::BackgroundControl getBackgroundControl() { DARABONBA_PTR_GET(backgroundControl_, DocumentControl::BackgroundControl) };
      inline DocumentControl& setBackgroundControl(const DocumentControl::BackgroundControl & backgroundControl) { DARABONBA_PTR_SET_VALUE(backgroundControl_, backgroundControl) };
      inline DocumentControl& setBackgroundControl(DocumentControl::BackgroundControl && backgroundControl) { DARABONBA_PTR_SET_RVALUE(backgroundControl_, backgroundControl) };


      // invisibleAntiAllCopy Field Functions 
      bool hasInvisibleAntiAllCopy() const { return this->invisibleAntiAllCopy_ != nullptr;};
      void deleteInvisibleAntiAllCopy() { this->invisibleAntiAllCopy_ = nullptr;};
      inline bool getInvisibleAntiAllCopy() const { DARABONBA_PTR_GET_DEFAULT(invisibleAntiAllCopy_, false) };
      inline DocumentControl& setInvisibleAntiAllCopy(bool invisibleAntiAllCopy) { DARABONBA_PTR_SET_VALUE(invisibleAntiAllCopy_, invisibleAntiAllCopy) };


      // invisibleAntiTextCopy Field Functions 
      bool hasInvisibleAntiTextCopy() const { return this->invisibleAntiTextCopy_ != nullptr;};
      void deleteInvisibleAntiTextCopy() { this->invisibleAntiTextCopy_ = nullptr;};
      inline bool getInvisibleAntiTextCopy() const { DARABONBA_PTR_GET_DEFAULT(invisibleAntiTextCopy_, false) };
      inline DocumentControl& setInvisibleAntiTextCopy(bool invisibleAntiTextCopy) { DARABONBA_PTR_SET_VALUE(invisibleAntiTextCopy_, invisibleAntiTextCopy) };


    protected:
      // Background watermark control parameters.
      shared_ptr<DocumentControl::BackgroundControl> backgroundControl_ {};
      // Specifies whether to enable widget invisible watermark. The widget invisible watermark can resist document insertion, deletion, modification, saving as (with unchanged format), and copying all content in a DOCX file and pasting it into a new DOCX document. It cannot resist format conversion attacks. Valid values:
      // 
      // - **true**: Yes
      // - **false**: No
      shared_ptr<bool> invisibleAntiAllCopy_ {};
      // Specifies whether to enable zero-width character invisible watermark. The zero-width character invisible watermark can resist document insertion, deletion, modification, saving as (with unchanged format), partial text copy and paste, and CopytoTxt attacks. It cannot resist format conversion to PDF attacks. Valid values:
      // 
      // - **true**: Yes
      // - **false**: No
      shared_ptr<bool> invisibleAntiTextCopy_ {};
    };

    class CsvControl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CsvControl& obj) { 
        DARABONBA_PTR_TO_JSON(EmbedBitsNumberInEachTime, embedBitsNumberInEachTime_);
        DARABONBA_PTR_TO_JSON(EmbedColumn, embedColumn_);
        DARABONBA_PTR_TO_JSON(EmbedDensity, embedDensity_);
        DARABONBA_PTR_TO_JSON(EmbedPrecision, embedPrecision_);
        DARABONBA_PTR_TO_JSON(EmbedTimePosition, embedTimePosition_);
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(TimeFormat, timeFormat_);
      };
      friend void from_json(const Darabonba::Json& j, CsvControl& obj) { 
        DARABONBA_PTR_FROM_JSON(EmbedBitsNumberInEachTime, embedBitsNumberInEachTime_);
        DARABONBA_PTR_FROM_JSON(EmbedColumn, embedColumn_);
        DARABONBA_PTR_FROM_JSON(EmbedDensity, embedDensity_);
        DARABONBA_PTR_FROM_JSON(EmbedPrecision, embedPrecision_);
        DARABONBA_PTR_FROM_JSON(EmbedTimePosition, embedTimePosition_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(TimeFormat, timeFormat_);
      };
      CsvControl() = default ;
      CsvControl(const CsvControl &) = default ;
      CsvControl(CsvControl &&) = default ;
      CsvControl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CsvControl() = default ;
      CsvControl& operator=(const CsvControl &) = default ;
      CsvControl& operator=(CsvControl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->embedBitsNumberInEachTime_ == nullptr
        && this->embedColumn_ == nullptr && this->embedDensity_ == nullptr && this->embedPrecision_ == nullptr && this->embedTimePosition_ == nullptr && this->method_ == nullptr
        && this->timeFormat_ == nullptr; };
      // embedBitsNumberInEachTime Field Functions 
      bool hasEmbedBitsNumberInEachTime() const { return this->embedBitsNumberInEachTime_ != nullptr;};
      void deleteEmbedBitsNumberInEachTime() { this->embedBitsNumberInEachTime_ = nullptr;};
      inline int64_t getEmbedBitsNumberInEachTime() const { DARABONBA_PTR_GET_DEFAULT(embedBitsNumberInEachTime_, 0L) };
      inline CsvControl& setEmbedBitsNumberInEachTime(int64_t embedBitsNumberInEachTime) { DARABONBA_PTR_SET_VALUE(embedBitsNumberInEachTime_, embedBitsNumberInEachTime) };


      // embedColumn Field Functions 
      bool hasEmbedColumn() const { return this->embedColumn_ != nullptr;};
      void deleteEmbedColumn() { this->embedColumn_ = nullptr;};
      inline int64_t getEmbedColumn() const { DARABONBA_PTR_GET_DEFAULT(embedColumn_, 0L) };
      inline CsvControl& setEmbedColumn(int64_t embedColumn) { DARABONBA_PTR_SET_VALUE(embedColumn_, embedColumn) };


      // embedDensity Field Functions 
      bool hasEmbedDensity() const { return this->embedDensity_ != nullptr;};
      void deleteEmbedDensity() { this->embedDensity_ = nullptr;};
      inline string getEmbedDensity() const { DARABONBA_PTR_GET_DEFAULT(embedDensity_, "") };
      inline CsvControl& setEmbedDensity(string embedDensity) { DARABONBA_PTR_SET_VALUE(embedDensity_, embedDensity) };


      // embedPrecision Field Functions 
      bool hasEmbedPrecision() const { return this->embedPrecision_ != nullptr;};
      void deleteEmbedPrecision() { this->embedPrecision_ = nullptr;};
      inline int64_t getEmbedPrecision() const { DARABONBA_PTR_GET_DEFAULT(embedPrecision_, 0L) };
      inline CsvControl& setEmbedPrecision(int64_t embedPrecision) { DARABONBA_PTR_SET_VALUE(embedPrecision_, embedPrecision) };


      // embedTimePosition Field Functions 
      bool hasEmbedTimePosition() const { return this->embedTimePosition_ != nullptr;};
      void deleteEmbedTimePosition() { this->embedTimePosition_ = nullptr;};
      inline string getEmbedTimePosition() const { DARABONBA_PTR_GET_DEFAULT(embedTimePosition_, "") };
      inline CsvControl& setEmbedTimePosition(string embedTimePosition) { DARABONBA_PTR_SET_VALUE(embedTimePosition_, embedTimePosition) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline CsvControl& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // timeFormat Field Functions 
      bool hasTimeFormat() const { return this->timeFormat_ != nullptr;};
      void deleteTimeFormat() { this->timeFormat_ = nullptr;};
      inline string getTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(timeFormat_, "") };
      inline CsvControl& setTimeFormat(string timeFormat) { DARABONBA_PTR_SET_VALUE(timeFormat_, timeFormat) };


    protected:
      // Bit width of watermark information per UNIX timestamp. Specifies how many bits of information a single timestamp can carry. A larger value theoretically reduces the number of rows required to extract the information, but increases the magnitude of timestamp modification. The modification range is 2^n, where n is the value of this parameter.
      shared_ptr<int64_t> embedBitsNumberInEachTime_ {};
      // Specifies the column to embed into. It is recommended to use a string-type content column. Column counting starts from 1.
      shared_ptr<int64_t> embedColumn_ {};
      // Zero-width character watermark parameter. Embedding density, a floating-point number between 0 and 1. A value of 0 means embedding only in the first row, and 1 means embedding in all rows.
      shared_ptr<string> embedDensity_ {};
      // Modification precision, indicating the scale of modification, expressed as 10^n. For example, 0 means a precision of 10^0 (units place), -1 means one decimal place, and 1 means the tens place. If a floating-point number lacks digits at the specified precision level, no modification is applied.
      shared_ptr<int64_t> embedPrecision_ {};
      // UNIX timestamp watermark parameter. Position where the watermark is embedded. Choose one of Min (minute), Sec (second), or MilSec (millisecond). The algorithm modifies the data at the selected position.
      shared_ptr<string> embedTimePosition_ {};
      // Watermark embedding mode.  
      // Values:  
      // 
      // - **lossless_row_shift_embed**: Lossless data method  
      // - **lossy_number_embed**: Lossy numeric method  
      // - **lossy_time_stamp_embed**: UNIX timestamp method  
      // - **lossy_zero_width_embed**: Zero-width character method
      shared_ptr<string> method_ {};
      // UNIX timestamp watermark parameter. The format string for parsing timestamps in the CSV file. For example, if the timestamp in the CSV file is similar to “2023-10-15 13:20:59:342”, the corresponding format string is “Year-Mon-Day Hour:Min:Sec.MilSec”. In this case, you must enter “Year-Mon-Day Hour:Min:Sec.MilSec” here. After watermark embedding, the output retains this format. If an incorrect format is provided, this method cannot be used. In the format string, year, month, day, hour, minute, second, and millisecond must follow the above notation. Connectors must be single non-alphanumeric English characters, typically “:”, “/”, “-”, or a space (“ ”). Additionally, “T” and “Z” are supported as connectors. Other timestamp formats are currently not supported for parsing.
      shared_ptr<string> timeFormat_ {};
    };

    class AudioControl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioControl& obj) { 
        DARABONBA_PTR_TO_JSON(MetadataControl, metadataControl_);
      };
      friend void from_json(const Darabonba::Json& j, AudioControl& obj) { 
        DARABONBA_PTR_FROM_JSON(MetadataControl, metadataControl_);
      };
      AudioControl() = default ;
      AudioControl(const AudioControl &) = default ;
      AudioControl(AudioControl &&) = default ;
      AudioControl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioControl() = default ;
      AudioControl& operator=(const AudioControl &) = default ;
      AudioControl& operator=(AudioControl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetadataControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetadataControl& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(XmpKvBase64, xmpKvBase64_);
        };
        friend void from_json(const Darabonba::Json& j, MetadataControl& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(XmpKvBase64, xmpKvBase64_);
        };
        MetadataControl() = default ;
        MetadataControl(const MetadataControl &) = default ;
        MetadataControl(MetadataControl &&) = default ;
        MetadataControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetadataControl() = default ;
        MetadataControl& operator=(const MetadataControl &) = default ;
        MetadataControl& operator=(MetadataControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->xmpKvBase64_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline MetadataControl& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // xmpKvBase64 Field Functions 
        bool hasXmpKvBase64() const { return this->xmpKvBase64_ != nullptr;};
        void deleteXmpKvBase64() { this->xmpKvBase64_ = nullptr;};
        inline string getXmpKvBase64() const { DARABONBA_PTR_GET_DEFAULT(xmpKvBase64_, "") };
        inline MetadataControl& setXmpKvBase64(string xmpKvBase64) { DARABONBA_PTR_SET_VALUE(xmpKvBase64_, xmpKvBase64) };


      protected:
        // Whether enabled.
        // - **false**: Disabled.
        // 
        // - **true**: Enabled.
        shared_ptr<bool> enable_ {};
        // Metadata in Base64 format. The string in the format AIGC={"Label":"1","ContentProducer":"AXXXX","ProduceID":"BXXXX","ReservedCode1":"CXXX","ContentPropagator":"DXXX","PropagateID":"EXXX","ReservedCode2":"FXXXX"} must be encoded into a Base64 string. Note: 1. The prefix "AIGC=" must be included; otherwise, the metadata cannot be added. Also note that this prefix differs from the one used for image metadata. 2. The Base64 encoding must follow the standard format and include padding.
        shared_ptr<string> xmpKvBase64_ {};
      };

      virtual bool empty() const override { return this->metadataControl_ == nullptr; };
      // metadataControl Field Functions 
      bool hasMetadataControl() const { return this->metadataControl_ != nullptr;};
      void deleteMetadataControl() { this->metadataControl_ = nullptr;};
      inline const AudioControl::MetadataControl & getMetadataControl() const { DARABONBA_PTR_GET_CONST(metadataControl_, AudioControl::MetadataControl) };
      inline AudioControl::MetadataControl getMetadataControl() { DARABONBA_PTR_GET(metadataControl_, AudioControl::MetadataControl) };
      inline AudioControl& setMetadataControl(const AudioControl::MetadataControl & metadataControl) { DARABONBA_PTR_SET_VALUE(metadataControl_, metadataControl) };
      inline AudioControl& setMetadataControl(AudioControl::MetadataControl && metadataControl) { DARABONBA_PTR_SET_RVALUE(metadataControl_, metadataControl) };


    protected:
      // Audio metadata control parameters.
      shared_ptr<AudioControl::MetadataControl> metadataControl_ {};
    };

    virtual bool empty() const override { return this->audioControl_ == nullptr
        && this->csvControl_ == nullptr && this->documentControl_ == nullptr && this->fileUrl_ == nullptr && this->filename_ == nullptr && this->imageControl_ == nullptr
        && this->imageEmbedJpegQuality_ == nullptr && this->imageEmbedLevel_ == nullptr && this->invisibleEnable_ == nullptr && this->videoBitrate_ == nullptr && this->videoControl_ == nullptr
        && this->videoIsLong_ == nullptr && this->wmInfoBytesB64_ == nullptr && this->wmInfoSize_ == nullptr && this->wmInfoUint_ == nullptr && this->wmType_ == nullptr; };
    // audioControl Field Functions 
    bool hasAudioControl() const { return this->audioControl_ != nullptr;};
    void deleteAudioControl() { this->audioControl_ = nullptr;};
    inline const CreateWmEmbedTaskRequest::AudioControl & getAudioControl() const { DARABONBA_PTR_GET_CONST(audioControl_, CreateWmEmbedTaskRequest::AudioControl) };
    inline CreateWmEmbedTaskRequest::AudioControl getAudioControl() { DARABONBA_PTR_GET(audioControl_, CreateWmEmbedTaskRequest::AudioControl) };
    inline CreateWmEmbedTaskRequest& setAudioControl(const CreateWmEmbedTaskRequest::AudioControl & audioControl) { DARABONBA_PTR_SET_VALUE(audioControl_, audioControl) };
    inline CreateWmEmbedTaskRequest& setAudioControl(CreateWmEmbedTaskRequest::AudioControl && audioControl) { DARABONBA_PTR_SET_RVALUE(audioControl_, audioControl) };


    // csvControl Field Functions 
    bool hasCsvControl() const { return this->csvControl_ != nullptr;};
    void deleteCsvControl() { this->csvControl_ = nullptr;};
    inline const CreateWmEmbedTaskRequest::CsvControl & getCsvControl() const { DARABONBA_PTR_GET_CONST(csvControl_, CreateWmEmbedTaskRequest::CsvControl) };
    inline CreateWmEmbedTaskRequest::CsvControl getCsvControl() { DARABONBA_PTR_GET(csvControl_, CreateWmEmbedTaskRequest::CsvControl) };
    inline CreateWmEmbedTaskRequest& setCsvControl(const CreateWmEmbedTaskRequest::CsvControl & csvControl) { DARABONBA_PTR_SET_VALUE(csvControl_, csvControl) };
    inline CreateWmEmbedTaskRequest& setCsvControl(CreateWmEmbedTaskRequest::CsvControl && csvControl) { DARABONBA_PTR_SET_RVALUE(csvControl_, csvControl) };


    // documentControl Field Functions 
    bool hasDocumentControl() const { return this->documentControl_ != nullptr;};
    void deleteDocumentControl() { this->documentControl_ = nullptr;};
    inline const CreateWmEmbedTaskRequest::DocumentControl & getDocumentControl() const { DARABONBA_PTR_GET_CONST(documentControl_, CreateWmEmbedTaskRequest::DocumentControl) };
    inline CreateWmEmbedTaskRequest::DocumentControl getDocumentControl() { DARABONBA_PTR_GET(documentControl_, CreateWmEmbedTaskRequest::DocumentControl) };
    inline CreateWmEmbedTaskRequest& setDocumentControl(const CreateWmEmbedTaskRequest::DocumentControl & documentControl) { DARABONBA_PTR_SET_VALUE(documentControl_, documentControl) };
    inline CreateWmEmbedTaskRequest& setDocumentControl(CreateWmEmbedTaskRequest::DocumentControl && documentControl) { DARABONBA_PTR_SET_RVALUE(documentControl_, documentControl) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateWmEmbedTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CreateWmEmbedTaskRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // imageControl Field Functions 
    bool hasImageControl() const { return this->imageControl_ != nullptr;};
    void deleteImageControl() { this->imageControl_ = nullptr;};
    inline const CreateWmEmbedTaskRequest::ImageControl & getImageControl() const { DARABONBA_PTR_GET_CONST(imageControl_, CreateWmEmbedTaskRequest::ImageControl) };
    inline CreateWmEmbedTaskRequest::ImageControl getImageControl() { DARABONBA_PTR_GET(imageControl_, CreateWmEmbedTaskRequest::ImageControl) };
    inline CreateWmEmbedTaskRequest& setImageControl(const CreateWmEmbedTaskRequest::ImageControl & imageControl) { DARABONBA_PTR_SET_VALUE(imageControl_, imageControl) };
    inline CreateWmEmbedTaskRequest& setImageControl(CreateWmEmbedTaskRequest::ImageControl && imageControl) { DARABONBA_PTR_SET_RVALUE(imageControl_, imageControl) };


    // imageEmbedJpegQuality Field Functions 
    bool hasImageEmbedJpegQuality() const { return this->imageEmbedJpegQuality_ != nullptr;};
    void deleteImageEmbedJpegQuality() { this->imageEmbedJpegQuality_ = nullptr;};
    inline int64_t getImageEmbedJpegQuality() const { DARABONBA_PTR_GET_DEFAULT(imageEmbedJpegQuality_, 0L) };
    inline CreateWmEmbedTaskRequest& setImageEmbedJpegQuality(int64_t imageEmbedJpegQuality) { DARABONBA_PTR_SET_VALUE(imageEmbedJpegQuality_, imageEmbedJpegQuality) };


    // imageEmbedLevel Field Functions 
    bool hasImageEmbedLevel() const { return this->imageEmbedLevel_ != nullptr;};
    void deleteImageEmbedLevel() { this->imageEmbedLevel_ = nullptr;};
    inline int64_t getImageEmbedLevel() const { DARABONBA_PTR_GET_DEFAULT(imageEmbedLevel_, 0L) };
    inline CreateWmEmbedTaskRequest& setImageEmbedLevel(int64_t imageEmbedLevel) { DARABONBA_PTR_SET_VALUE(imageEmbedLevel_, imageEmbedLevel) };


    // invisibleEnable Field Functions 
    bool hasInvisibleEnable() const { return this->invisibleEnable_ != nullptr;};
    void deleteInvisibleEnable() { this->invisibleEnable_ = nullptr;};
    inline bool getInvisibleEnable() const { DARABONBA_PTR_GET_DEFAULT(invisibleEnable_, false) };
    inline CreateWmEmbedTaskRequest& setInvisibleEnable(bool invisibleEnable) { DARABONBA_PTR_SET_VALUE(invisibleEnable_, invisibleEnable) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline string getVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, "") };
    inline CreateWmEmbedTaskRequest& setVideoBitrate(string videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // videoControl Field Functions 
    bool hasVideoControl() const { return this->videoControl_ != nullptr;};
    void deleteVideoControl() { this->videoControl_ = nullptr;};
    inline const CreateWmEmbedTaskRequest::VideoControl & getVideoControl() const { DARABONBA_PTR_GET_CONST(videoControl_, CreateWmEmbedTaskRequest::VideoControl) };
    inline CreateWmEmbedTaskRequest::VideoControl getVideoControl() { DARABONBA_PTR_GET(videoControl_, CreateWmEmbedTaskRequest::VideoControl) };
    inline CreateWmEmbedTaskRequest& setVideoControl(const CreateWmEmbedTaskRequest::VideoControl & videoControl) { DARABONBA_PTR_SET_VALUE(videoControl_, videoControl) };
    inline CreateWmEmbedTaskRequest& setVideoControl(CreateWmEmbedTaskRequest::VideoControl && videoControl) { DARABONBA_PTR_SET_RVALUE(videoControl_, videoControl) };


    // videoIsLong Field Functions 
    bool hasVideoIsLong() const { return this->videoIsLong_ != nullptr;};
    void deleteVideoIsLong() { this->videoIsLong_ = nullptr;};
    inline bool getVideoIsLong() const { DARABONBA_PTR_GET_DEFAULT(videoIsLong_, false) };
    inline CreateWmEmbedTaskRequest& setVideoIsLong(bool videoIsLong) { DARABONBA_PTR_SET_VALUE(videoIsLong_, videoIsLong) };


    // wmInfoBytesB64 Field Functions 
    bool hasWmInfoBytesB64() const { return this->wmInfoBytesB64_ != nullptr;};
    void deleteWmInfoBytesB64() { this->wmInfoBytesB64_ = nullptr;};
    inline string getWmInfoBytesB64() const { DARABONBA_PTR_GET_DEFAULT(wmInfoBytesB64_, "") };
    inline CreateWmEmbedTaskRequest& setWmInfoBytesB64(string wmInfoBytesB64) { DARABONBA_PTR_SET_VALUE(wmInfoBytesB64_, wmInfoBytesB64) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t getWmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline CreateWmEmbedTaskRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmInfoUint Field Functions 
    bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
    void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
    inline string getWmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, "") };
    inline CreateWmEmbedTaskRequest& setWmInfoUint(string wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string getWmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline CreateWmEmbedTaskRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    // Audio control parameters.
    shared_ptr<CreateWmEmbedTaskRequest::AudioControl> audioControl_ {};
    // CSV watermark embedding control parameters.
    shared_ptr<CreateWmEmbedTaskRequest::CsvControl> csvControl_ {};
    // Document watermark control parameters.
    shared_ptr<CreateWmEmbedTaskRequest::DocumentControl> documentControl_ {};
    // URL for downloading the file to embed. The URL must support public network access.
    // 
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    // The filename of the file to embed. The backend validates the file type based on the filename extension.
    // 
    // This parameter is required.
    shared_ptr<string> filename_ {};
    // Image watermark control parameters.
    shared_ptr<CreateWmEmbedTaskRequest::ImageControl> imageControl_ {};
    // Image watermark parameter: the desired JPEG compression quality factor for the output image. Default value is 95. Valid range: 1 to 100.
    shared_ptr<int64_t> imageEmbedJpegQuality_ {};
    // Image watermark parameter: A higher value indicates greater robustness but reduced visual quality. Default value: 2. Valid values: 0 to 4.
    shared_ptr<int64_t> imageEmbedLevel_ {};
    // Specifies whether to enable invisible watermark embedding. Default value: true.  
    // Valid values:  
    // - **true**: Yes  
    // - **false**: No
    shared_ptr<bool> invisibleEnable_ {};
    // Short video watermark parameter: specifies the video bitrate. By default, the video bitrate is automatically retrieved. You can use this parameter to explicitly specify the bitrate used during extraction. This parameter usually does not need to be set.
    shared_ptr<string> videoBitrate_ {};
    // Video control parameters.
    shared_ptr<CreateWmEmbedTaskRequest::VideoControl> videoControl_ {};
    // Video watermark parameter: whether to use the long-video watermark software development kit (SDK). The default value is false. Valid values:
    // 
    // - **true**: Yes
    // - **false**: No
    shared_ptr<bool> videoIsLong_ {};
    // Base64-encoded string-formatted watermark information. If this value is set, WmInfoUint cannot be set.
    shared_ptr<string> wmInfoBytesB64_ {};
    // The bit width of the watermark information. The default value is 32. This parameter must be consistent between embedding and extraction. For example, if a 40-bit software development kit (SDK) is used for embedding, this value must also be set to 40 during extraction.
    shared_ptr<int64_t> wmInfoSize_ {};
    // Watermark information in decimal numeric format. If this parameter is set, WmInfoBytesB64 cannot be set.  
    // 
    // The valid value range depends on the WmInfoSize parameter:  
    // 
    // - When WmInfoSize is 32, the value range is 1 to 4294967295.  
    // 
    // - When WmInfoSize is 40, the value range is 1 to 1099511627775.  
    // 
    // - When WmInfoSize is 64, the value range is 1 to 18446744073709551615.
    shared_ptr<string> wmInfoUint_ {};
    // Watermark type. Valid values:  
    // - **PureDocument**: Document watermark.  
    // - **PureImage**: Image watermark.  
    // - **PureAudio**: Audio watermark.  
    // - **PureVideo**: Video watermark.  
    // - **AigcDocument**: AIGC document watermark.  
    // - **AigcImage**: AIGC image watermark.  
    // - **AigcAudio**: AIGC audio watermark.  
    // - **AigcVideo**: AIGC video watermark.
    // 
    // This parameter is required.
    shared_ptr<string> wmType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
