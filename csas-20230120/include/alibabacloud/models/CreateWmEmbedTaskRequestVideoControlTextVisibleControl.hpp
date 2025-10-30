// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTVIDEOCONTROLTEXTVISIBLECONTROL_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEMBEDTASKREQUESTVIDEOCONTROLTEXTVISIBLECONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmEmbedTaskRequestVideoControlTextVisibleControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmEmbedTaskRequestVideoControlTextVisibleControl& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateWmEmbedTaskRequestVideoControlTextVisibleControl& obj) { 
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
    CreateWmEmbedTaskRequestVideoControlTextVisibleControl() = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControl(const CreateWmEmbedTaskRequestVideoControlTextVisibleControl &) = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControl(CreateWmEmbedTaskRequestVideoControlTextVisibleControl &&) = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmEmbedTaskRequestVideoControlTextVisibleControl() = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControl& operator=(const CreateWmEmbedTaskRequestVideoControlTextVisibleControl &) = default ;
    CreateWmEmbedTaskRequestVideoControlTextVisibleControl& operator=(CreateWmEmbedTaskRequestVideoControlTextVisibleControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fontColor_ == nullptr
        && return this->fontSize_ == nullptr && return this->margin_ == nullptr && return this->mode_ == nullptr && return this->opacity_ == nullptr && return this->posX_ == nullptr
        && return this->posY_ == nullptr && return this->visible_ == nullptr && return this->visibleText_ == nullptr; };
    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int32_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // margin Field Functions 
    bool hasMargin() const { return this->margin_ != nullptr;};
    void deleteMargin() { this->margin_ = nullptr;};
    inline const Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin & margin() const { DARABONBA_PTR_GET_CONST(margin_, Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin) };
    inline Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin margin() { DARABONBA_PTR_GET(margin_, Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin) };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setMargin(const Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin & margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setMargin(Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin && margin) { DARABONBA_PTR_SET_RVALUE(margin_, margin) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // opacity Field Functions 
    bool hasOpacity() const { return this->opacity_ != nullptr;};
    void deleteOpacity() { this->opacity_ = nullptr;};
    inline int32_t opacity() const { DARABONBA_PTR_GET_DEFAULT(opacity_, 0) };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setOpacity(int32_t opacity) { DARABONBA_PTR_SET_VALUE(opacity_, opacity) };


    // posX Field Functions 
    bool hasPosX() const { return this->posX_ != nullptr;};
    void deletePosX() { this->posX_ = nullptr;};
    inline int32_t posX() const { DARABONBA_PTR_GET_DEFAULT(posX_, 0) };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setPosX(int32_t posX) { DARABONBA_PTR_SET_VALUE(posX_, posX) };


    // posY Field Functions 
    bool hasPosY() const { return this->posY_ != nullptr;};
    void deletePosY() { this->posY_ = nullptr;};
    inline int32_t posY() const { DARABONBA_PTR_GET_DEFAULT(posY_, 0) };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setPosY(int32_t posY) { DARABONBA_PTR_SET_VALUE(posY_, posY) };


    // visible Field Functions 
    bool hasVisible() const { return this->visible_ != nullptr;};
    void deleteVisible() { this->visible_ = nullptr;};
    inline bool visible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


    // visibleText Field Functions 
    bool hasVisibleText() const { return this->visibleText_ != nullptr;};
    void deleteVisibleText() { this->visibleText_ = nullptr;};
    inline string visibleText() const { DARABONBA_PTR_GET_DEFAULT(visibleText_, "") };
    inline CreateWmEmbedTaskRequestVideoControlTextVisibleControl& setVisibleText(string visibleText) { DARABONBA_PTR_SET_VALUE(visibleText_, visibleText) };


  protected:
    std::shared_ptr<string> fontColor_ = nullptr;
    std::shared_ptr<int32_t> fontSize_ = nullptr;
    std::shared_ptr<Models::CreateWmEmbedTaskRequestVideoControlTextVisibleControlMargin> margin_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int32_t> opacity_ = nullptr;
    std::shared_ptr<int32_t> posX_ = nullptr;
    std::shared_ptr<int32_t> posY_ = nullptr;
    std::shared_ptr<bool> visible_ = nullptr;
    std::shared_ptr<string> visibleText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
