// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTIMAGECONTROLLOGOVISIBLECONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTIMAGECONTROLLOGOVISIBLECONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestImageControlLogoVisibleControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestImageControlLogoVisibleControl& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestImageControlLogoVisibleControl& obj) { 
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
    CreateWmEmbedTaskRequestImageControlLogoVisibleControl() = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControl(const CreateWmEmbedTaskRequestImageControlLogoVisibleControl &) = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControl(CreateWmEmbedTaskRequestImageControlLogoVisibleControl &&) = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestImageControlLogoVisibleControl() = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControl& operator=(const CreateWmEmbedTaskRequestImageControlLogoVisibleControl &) = default ;
    CreateWmEmbedTaskRequestImageControlLogoVisibleControl& operator=(CreateWmEmbedTaskRequestImageControlLogoVisibleControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->angle_ != nullptr
        && this->enhance_ != nullptr && this->logoBase64_ != nullptr && this->margin_ != nullptr && this->mode_ != nullptr && this->opacity_ != nullptr
        && this->posAx_ != nullptr && this->posAy_ != nullptr && this->posX_ != nullptr && this->posY_ != nullptr && this->spaceX_ != nullptr
        && this->spaceY_ != nullptr && this->visible_ != nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline int64_t angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // enhance Field Functions 
    bool hasEnhance() const { return this->enhance_ != nullptr;};
    void deleteEnhance() { this->enhance_ = nullptr;};
    inline bool enhance() const { DARABONBA_PTR_GET_DEFAULT(enhance_, false) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setEnhance(bool enhance) { DARABONBA_PTR_SET_VALUE(enhance_, enhance) };


    // logoBase64 Field Functions 
    bool hasLogoBase64() const { return this->logoBase64_ != nullptr;};
    void deleteLogoBase64() { this->logoBase64_ = nullptr;};
    inline string logoBase64() const { DARABONBA_PTR_GET_DEFAULT(logoBase64_, "") };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setLogoBase64(string logoBase64) { DARABONBA_PTR_SET_VALUE(logoBase64_, logoBase64) };


    // margin Field Functions 
    bool hasMargin() const { return this->margin_ != nullptr;};
    void deleteMargin() { this->margin_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin & margin() const { DARABONBA_PTR_GET_CONST(margin_, Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin) };
    inline Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin margin() { DARABONBA_PTR_GET(margin_, Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setMargin(const Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin & margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setMargin(Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin && margin) { DARABONBA_PTR_SET_RVALUE(margin_, margin) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // opacity Field Functions 
    bool hasOpacity() const { return this->opacity_ != nullptr;};
    void deleteOpacity() { this->opacity_ = nullptr;};
    inline int32_t opacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setOpacity(int32_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


    // posAx Field Functions 
    bool hasPosAx() const { return this->posAx_ != nullptr;};
    void deletePosAx() { this->posAx_ = nullptr;};
    inline float posAx() const { DARABONBA_PTR_GET_DEFAULT(posAx_, 0.0) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setPosAx(float posAx) { DARABONBA_PTR_SET_VALUE(posAx_, posAx) };


    // posAy Field Functions 
    bool hasPosAy() const { return this->posAy_ != nullptr;};
    void deletePosAy() { this->posAy_ = nullptr;};
    inline float posAy() const { DARABONBA_PTR_GET_DEFAULT(posAy_, 0.0) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setPosAy(float posAy) { DARABONBA_PTR_SET_VALUE(posAy_, posAy) };


    // posX Field Functions 
    bool hasPosX() const { return this->posX_ != nullptr;};
    void deletePosX() { this->posX_ = nullptr;};
    inline int64_t posX() const { DARABONBA_PTR_GET_DEFAULT(posX_, 0L) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setPosX(int64_t posX) { DARABONBA_PTR_SET_VALUE(posX_, posX) };


    // posY Field Functions 
    bool hasPosY() const { return this->posY_ != nullptr;};
    void deletePosY() { this->posY_ = nullptr;};
    inline int64_t posY() const { DARABONBA_PTR_GET_DEFAULT(posY_, 0L) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setPosY(int64_t posY) { DARABONBA_PTR_SET_VALUE(posY_, posY) };


    // spaceX Field Functions 
    bool hasSpaceX() const { return this->spaceX_ != nullptr;};
    void deleteSpaceX() { this->spaceX_ = nullptr;};
    inline int64_t spaceX() const { DARABONBA_PTR_GET_DEFAULT(spaceX_, 0L) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setSpaceX(int64_t spaceX) { DARABONBA_PTR_SET_VALUE(spaceX_, spaceX) };


    // spaceY Field Functions 
    bool hasSpaceY() const { return this->spaceY_ != nullptr;};
    void deleteSpaceY() { this->spaceY_ = nullptr;};
    inline int64_t spaceY() const { DARABONBA_PTR_GET_DEFAULT(spaceY_, 0L) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setSpaceY(int64_t spaceY) { DARABONBA_PTR_SET_VALUE(spaceY_, spaceY) };


    // visible Field Functions 
    bool hasVisible() const { return this->visible_ != nullptr;};
    void deleteVisible() { this->visible_ = nullptr;};
    inline bool visible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
    inline CreateWmEmbedTaskRequestImageControlLogoVisibleControl& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


  protected:
    std::shared_ptr<int64_t> angle_ = nullptr;
    std::shared_ptr<bool> enhance_ = nullptr;
    std::shared_ptr<string> logoBase64_ = nullptr;
    std::shared_ptr<Models::CreateWmEmbedTaskRequestImageControlLogoVisibleControlMargin> margin_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int32_t> opacity_ = nullptr;
    std::shared_ptr<float> posAx_ = nullptr;
    std::shared_ptr<float> posAy_ = nullptr;
    std::shared_ptr<int64_t> posX_ = nullptr;
    std::shared_ptr<int64_t> posY_ = nullptr;
    std::shared_ptr<int64_t> spaceX_ = nullptr;
    std::shared_ptr<int64_t> spaceY_ = nullptr;
    std::shared_ptr<bool> visible_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
