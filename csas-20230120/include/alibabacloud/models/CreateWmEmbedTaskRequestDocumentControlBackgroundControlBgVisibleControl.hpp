// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTDOCUMENTCONTROLBACKGROUNDCONTROLBGVISIBLECONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTDOCUMENTCONTROLBACKGROUNDCONTROLBGVISIBLECONTROL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& obj) { 
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
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl() = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl(const CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl &) = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl(CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl &&) = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl() = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& operator=(const CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl &) = default ;
    CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& operator=(CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->angle_ == nullptr
        && return this->fontColor_ == nullptr && return this->fontSize_ == nullptr && return this->horizontalNumber_ == nullptr && return this->mode_ == nullptr && return this->opacity_ == nullptr
        && return this->posX_ == nullptr && return this->posY_ == nullptr && return this->verticalNumber_ == nullptr && return this->visibleText_ == nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline int64_t angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int64_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0L) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setFontSize(int64_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // horizontalNumber Field Functions 
    bool hasHorizontalNumber() const { return this->horizontalNumber_ != nullptr;};
    void deleteHorizontalNumber() { this->horizontalNumber_ = nullptr;};
    inline int64_t horizontalNumber() const { DARABONBA_PTR_GET_DEFAULT(horizontalNumber_, 0L) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setHorizontalNumber(int64_t horizontalNumber) { DARABONBA_PTR_SET_VALUE(horizontalNumber_, horizontalNumber) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // opacity Field Functions 
    bool hasOpacity() const { return this->opacity_ != nullptr;};
    void deleteOpacity() { this->opacity_ = nullptr;};
    inline int64_t opacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0L) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setOpacity(int64_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


    // posX Field Functions 
    bool hasPosX() const { return this->posX_ != nullptr;};
    void deletePosX() { this->posX_ = nullptr;};
    inline string posX() const { DARABONBA_PTR_GET_DEFAULT(posX_, "") };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setPosX(string posX) { DARABONBA_PTR_SET_VALUE(posX_, posX) };


    // posY Field Functions 
    bool hasPosY() const { return this->posY_ != nullptr;};
    void deletePosY() { this->posY_ = nullptr;};
    inline string posY() const { DARABONBA_PTR_GET_DEFAULT(posY_, "") };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setPosY(string posY) { DARABONBA_PTR_SET_VALUE(posY_, posY) };


    // verticalNumber Field Functions 
    bool hasVerticalNumber() const { return this->verticalNumber_ != nullptr;};
    void deleteVerticalNumber() { this->verticalNumber_ = nullptr;};
    inline int64_t verticalNumber() const { DARABONBA_PTR_GET_DEFAULT(verticalNumber_, 0L) };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setVerticalNumber(int64_t verticalNumber) { DARABONBA_PTR_SET_VALUE(verticalNumber_, verticalNumber) };


    // visibleText Field Functions 
    bool hasVisibleText() const { return this->visibleText_ != nullptr;};
    void deleteVisibleText() { this->visibleText_ = nullptr;};
    inline string visibleText() const { DARABONBA_PTR_GET_DEFAULT(visibleText_, "") };
    inline CreateWmEmbedTaskRequestDocumentControlBackgroundControlBgVisibleControl& setVisibleText(string visibleText) { DARABONBA_PTR_SET_VALUE(visibleText_, visibleText) };


  protected:
    std::shared_ptr<int64_t> angle_ = nullptr;
    std::shared_ptr<string> fontColor_ = nullptr;
    std::shared_ptr<int64_t> fontSize_ = nullptr;
    std::shared_ptr<int64_t> horizontalNumber_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int64_t> opacity_ = nullptr;
    std::shared_ptr<string> posX_ = nullptr;
    std::shared_ptr<string> posY_ = nullptr;
    std::shared_ptr<int64_t> verticalNumber_ = nullptr;
    std::shared_ptr<string> visibleText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
