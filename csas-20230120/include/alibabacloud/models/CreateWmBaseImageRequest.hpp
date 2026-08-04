// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMBASEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMBASEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmBaseImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmBaseImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ImageControl, imageControl_);
      DARABONBA_PTR_TO_JSON(Opacity, opacity_);
      DARABONBA_PTR_TO_JSON(Scale, scale_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmBaseImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ImageControl, imageControl_);
      DARABONBA_PTR_FROM_JSON(Opacity, opacity_);
      DARABONBA_PTR_FROM_JSON(Scale, scale_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
    };
    CreateWmBaseImageRequest() = default ;
    CreateWmBaseImageRequest(const CreateWmBaseImageRequest &) = default ;
    CreateWmBaseImageRequest(CreateWmBaseImageRequest &&) = default ;
    CreateWmBaseImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmBaseImageRequest() = default ;
    CreateWmBaseImageRequest& operator=(const CreateWmBaseImageRequest &) = default ;
    CreateWmBaseImageRequest& operator=(CreateWmBaseImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageControl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageControl& obj) { 
        DARABONBA_PTR_TO_JSON(LogoVisibleControl, logoVisibleControl_);
        DARABONBA_PTR_TO_JSON(TextVisibleControl, textVisibleControl_);
      };
      friend void from_json(const Darabonba::Json& j, ImageControl& obj) { 
        DARABONBA_PTR_FROM_JSON(LogoVisibleControl, logoVisibleControl_);
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
          // Takes effect only when Mode is bottom-left or bottom-right. Bottom margin.
          shared_ptr<float> bottom_ {};
          // Takes effect only when Mode is top-left or bottom-left. Left margin.
          shared_ptr<float> left_ {};
          // Takes effect only when Mode is top-right or bottom-right. Right margin.
          shared_ptr<float> right_ {};
          // Takes effect only when Mode is top-left or top-right. Top margin.
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
        // Rotation angle of the text watermark, in degrees clockwise. Valid values: 0 to 360.
        shared_ptr<int64_t> angle_ {};
        // Text watermark color. Format: RGB, such as 0xFFFFFF or #FFFFFF. For example, 0x000000 or #000000 means black.
        shared_ptr<string> fontColor_ {};
        // Font size of the text watermark. Larger values produce larger fonts.
        shared_ptr<int64_t> fontSize_ {};
        // Takes effect only when Mode is top-left, top-right, bottom-left, or bottom-right. Margin settings.
        shared_ptr<TextVisibleControl::Margin> margin_ {};
        // Text watermark display mode. Valid values:
        // 
        // - **pos**: Fixed position mode.
        // 
        // - **repeat**: Tiled mode.
        shared_ptr<string> mode_ {};
        // Text watermark opacity. Valid values: 1 to 255. Higher values mean less transparency.
        shared_ptr<int32_t> opacity_ {};
        // Horizontal anchor point for the text watermark. Valid values: 0 to 1. When (PosAx, PosAy) is (0, 0), the top-left corner of the text is used as the anchor point. When it is 0.5, the center point is used. When it is (1, 1), the bottom-right corner is used.
        shared_ptr<float> posAx_ {};
        // Vertical anchor point for the text watermark. Valid values: 0 to 1. When (PosAx, PosAy) is (0, 0), the top-left corner of the text is used as the anchor point. When it is 0.5, the center point is used. When it is (1, 1), the bottom-right corner is used.
        shared_ptr<float> posAy_ {};
        // Takes effect only when Mode is pos. Horizontal position of the text watermark, measured in pixels from the top-left corner.
        shared_ptr<int64_t> posX_ {};
        // Takes effect only when Mode is pos. Vertical position of the text watermark, measured in pixels from the top-left corner.
        shared_ptr<int64_t> posY_ {};
        // Takes effect only when Mode is repeat. Horizontal spacing between repeated text watermarks.
        shared_ptr<int64_t> spaceX_ {};
        // Takes effect only when Mode is repeat. Vertical spacing between repeated text watermarks.
        shared_ptr<int64_t> spaceY_ {};
        // Visibility setting:
        // 
        // true: Show the watermark.
        // 
        // false: Hide the watermark.
        shared_ptr<bool> visible_ {};
        // Text watermark content. Format: UTF-8 string.
        shared_ptr<string> visibleText_ {};
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
          // Applies when Mode is bottom-left or bottom-right. The bottom margin.
          shared_ptr<float> bottom_ {};
          // Applies when Mode is top-left or bottom-left. The left margin.
          shared_ptr<float> left_ {};
          // The right margin. This parameter is valid only when Mode is set to top-right or bottom-right.
          shared_ptr<float> right_ {};
          // Applies when Mode is top-left or top-right. The top margin.
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
        // The clockwise rotation angle of the logo watermark text. Valid values: 1 to 360.
        shared_ptr<int64_t> angle_ {};
        // Enable enhanced visible logo watermark. If enabled, the logo is converted into a watermark and added to the image.
        shared_ptr<bool> enhance_ {};
        // Base64-encoded logo watermark. The logo file must be a PNG image encoded in Base64 format.
        shared_ptr<string> logoBase64_ {};
        // Applies when Mode is top-left, top-right, bottom-left, or bottom-right. Specifies the margin.
        shared_ptr<LogoVisibleControl::Margin> margin_ {};
        // The display mode for the logo watermark. Valid values:
        // 
        // - **pos**: Fixed position pattern.
        // 
        // - **repeat**: Tile pattern.
        shared_ptr<string> mode_ {};
        // Logo watermark opacity. Valid values: 1 to 255. A higher value means lower transparency.
        shared_ptr<int32_t> opacity_ {};
        // The horizontal anchor point for the logo watermark. Valid values: 0 to 1. When (PosAx, PosAy) is (0, 0), the watermark anchors to the top-left corner of the text. When the value is 0.5, the watermark anchors to the centroid of the text. When (PosAx, PosAy) is (1, 1), the watermark anchors to the bottom-right corner of the text.
        shared_ptr<float> posAx_ {};
        // The vertical anchor point for the logo watermark. The value ranges from 0 to 1. The coordinates (PosAx, PosAy) define the anchor point on the watermark. For example, (0,0) represents the top-left corner, (0.5, 0.5) represents the centroid, and (1,1) represents the bottom-right corner.
        shared_ptr<float> posAy_ {};
        // Takes effect when Mode is set to pos. This parameter controls the horizontal position of a visible watermark, using pixel coordinates with the top-left corner as the origin.
        shared_ptr<int64_t> posX_ {};
        // Specifies the vertical position of the visible watermark in pixels. The top-left corner is the origin. This parameter is valid only when Mode is set to pos.
        shared_ptr<int64_t> posY_ {};
        // This parameter takes effect when Mode is set to repeat. It specifies the horizontal pitch for the tiled visible watermark.
        shared_ptr<int64_t> spaceX_ {};
        // Applies only when Mode is set to repeat. Controls the vertical pitch between tiled visible watermarks.
        shared_ptr<int64_t> spaceY_ {};
        // Visibility:
        // 
        // **true**: Display
        // 
        // **false**: Hide
        shared_ptr<bool> visible_ {};
      };

      virtual bool empty() const override { return this->logoVisibleControl_ == nullptr
        && this->textVisibleControl_ == nullptr; };
      // logoVisibleControl Field Functions 
      bool hasLogoVisibleControl() const { return this->logoVisibleControl_ != nullptr;};
      void deleteLogoVisibleControl() { this->logoVisibleControl_ = nullptr;};
      inline const ImageControl::LogoVisibleControl & getLogoVisibleControl() const { DARABONBA_PTR_GET_CONST(logoVisibleControl_, ImageControl::LogoVisibleControl) };
      inline ImageControl::LogoVisibleControl getLogoVisibleControl() { DARABONBA_PTR_GET(logoVisibleControl_, ImageControl::LogoVisibleControl) };
      inline ImageControl& setLogoVisibleControl(const ImageControl::LogoVisibleControl & logoVisibleControl) { DARABONBA_PTR_SET_VALUE(logoVisibleControl_, logoVisibleControl) };
      inline ImageControl& setLogoVisibleControl(ImageControl::LogoVisibleControl && logoVisibleControl) { DARABONBA_PTR_SET_RVALUE(logoVisibleControl_, logoVisibleControl) };


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
      // Text watermark control parameters.
      shared_ptr<ImageControl::TextVisibleControl> textVisibleControl_ {};
    };

    virtual bool empty() const override { return this->height_ == nullptr
        && this->imageControl_ == nullptr && this->opacity_ == nullptr && this->scale_ == nullptr && this->width_ == nullptr && this->wmInfoBytesB64_ == nullptr
        && this->wmInfoSize_ == nullptr && this->wmInfoUint_ == nullptr && this->wmType_ == nullptr && this->comment_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline CreateWmBaseImageRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // imageControl Field Functions 
    bool hasImageControl() const { return this->imageControl_ != nullptr;};
    void deleteImageControl() { this->imageControl_ = nullptr;};
    inline const CreateWmBaseImageRequest::ImageControl & getImageControl() const { DARABONBA_PTR_GET_CONST(imageControl_, CreateWmBaseImageRequest::ImageControl) };
    inline CreateWmBaseImageRequest::ImageControl getImageControl() { DARABONBA_PTR_GET(imageControl_, CreateWmBaseImageRequest::ImageControl) };
    inline CreateWmBaseImageRequest& setImageControl(const CreateWmBaseImageRequest::ImageControl & imageControl) { DARABONBA_PTR_SET_VALUE(imageControl_, imageControl) };
    inline CreateWmBaseImageRequest& setImageControl(CreateWmBaseImageRequest::ImageControl && imageControl) { DARABONBA_PTR_SET_RVALUE(imageControl_, imageControl) };


    // opacity Field Functions 
    bool hasOpacity() const { return this->opacity_ != nullptr;};
    void deleteOpacity() { this->opacity_ = nullptr;};
    inline int32_t getOpacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0) };
    inline CreateWmBaseImageRequest& setOpacity(int32_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


    // scale Field Functions 
    bool hasScale() const { return this->scale_ != nullptr;};
    void deleteScale() { this->scale_ = nullptr;};
    inline int32_t getScale() const { DARABONBA_PTR_GET_DEFAULT(scale_, 0) };
    inline CreateWmBaseImageRequest& setScale(int32_t scale) { DARABONBA_PTR_SET_VALUE(scale_, scale) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline CreateWmBaseImageRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // wmInfoBytesB64 Field Functions 
    bool hasWmInfoBytesB64() const { return this->wmInfoBytesB64_ != nullptr;};
    void deleteWmInfoBytesB64() { this->wmInfoBytesB64_ = nullptr;};
    inline string getWmInfoBytesB64() const { DARABONBA_PTR_GET_DEFAULT(wmInfoBytesB64_, "") };
    inline CreateWmBaseImageRequest& setWmInfoBytesB64(string wmInfoBytesB64) { DARABONBA_PTR_SET_VALUE(wmInfoBytesB64_, wmInfoBytesB64) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t getWmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline CreateWmBaseImageRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmInfoUint Field Functions 
    bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
    void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
    inline string getWmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, "") };
    inline CreateWmBaseImageRequest& setWmInfoUint(string wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string getWmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline CreateWmBaseImageRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateWmBaseImageRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


  protected:
    // Height of the watermark image, in pixels. Valid values: 100 to 5000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> height_ {};
    // Image watermark control parameters.
    shared_ptr<CreateWmBaseImageRequest::ImageControl> imageControl_ {};
    // Opacity of the watermark image. Valid values: 1 to 255. Higher values mean lower transparency.
    // 
    // This parameter is required.
    shared_ptr<int32_t> opacity_ {};
    // Scaling factor of the watermark image.
    // 
    // This parameter is required.
    shared_ptr<int32_t> scale_ {};
    // Width of the watermark image, in pixels. Valid values: 100 to 5000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> width_ {};
    // Base64-encoded watermark information. Length: 1 to 300 characters. Do not set this parameter if you set WmInfoUint.
    shared_ptr<string> wmInfoBytesB64_ {};
    // Bit width of the watermark information. Default value: 32. This value must be the same during embedding and extraction. For example, if you use a 40-bit SDK to embed the watermark, set this value to 40 when extracting it.
    shared_ptr<int64_t> wmInfoSize_ {};
    // Decimal-form watermark information. Do not set this parameter if you set WmInfoBytesB64.
    // 
    // The valid range depends on the WmInfoSize value:
    // 
    // - If WmInfoSize is **32**, the valid range is 1 to 4294967295.
    // 
    // - If WmInfoSize is **40**, the valid range is 1 to 1099511627775.
    // 
    // - If WmInfoSize is **64**, the valid range is 1 to 18446744073709551615.
    shared_ptr<string> wmInfoUint_ {};
    // Watermark type. Valid values:
    // 
    // - **PureWebappInvisible**: Web watermark.
    // 
    // - **PureAppInvisible**: App watermark.
    // 
    // - **PureScreenInvisible**: Screen watermark.
    // 
    // - **AigcWebappInvisible**: AIGC web watermark.
    // 
    // - **AigcAppInvisible**: AIGC app watermark.
    // 
    // - **AigcScreenInvisible**: AIGC screen watermark.
    // 
    // This parameter is required.
    shared_ptr<string> wmType_ {};
    // Comments.
    shared_ptr<string> comment_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
