// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BODY_HPP_
#define ALIBABACLOUD_MODELS_BODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class Body : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Body& obj) { 
      DARABONBA_PTR_TO_JSON(activity, activity_);
      DARABONBA_PTR_TO_JSON(addBadge, addBadge_);
      DARABONBA_PTR_TO_JSON(afterOpen, afterOpen_);
      DARABONBA_PTR_TO_JSON(builderId, builderId_);
      DARABONBA_PTR_TO_JSON(custom, custom_);
      DARABONBA_PTR_TO_JSON(expandImage, expandImage_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(img, img_);
      DARABONBA_PTR_TO_JSON(playLights, playLights_);
      DARABONBA_PTR_TO_JSON(playSound, playSound_);
      DARABONBA_PTR_TO_JSON(playVibrate, playVibrate_);
      DARABONBA_PTR_TO_JSON(rePop, rePop_);
      DARABONBA_PTR_TO_JSON(setBadge, setBadge_);
      DARABONBA_PTR_TO_JSON(sound, sound_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, Body& obj) { 
      DARABONBA_PTR_FROM_JSON(activity, activity_);
      DARABONBA_PTR_FROM_JSON(addBadge, addBadge_);
      DARABONBA_PTR_FROM_JSON(afterOpen, afterOpen_);
      DARABONBA_PTR_FROM_JSON(builderId, builderId_);
      DARABONBA_PTR_FROM_JSON(custom, custom_);
      DARABONBA_PTR_FROM_JSON(expandImage, expandImage_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(img, img_);
      DARABONBA_PTR_FROM_JSON(playLights, playLights_);
      DARABONBA_PTR_FROM_JSON(playSound, playSound_);
      DARABONBA_PTR_FROM_JSON(playVibrate, playVibrate_);
      DARABONBA_PTR_FROM_JSON(rePop, rePop_);
      DARABONBA_PTR_FROM_JSON(setBadge, setBadge_);
      DARABONBA_PTR_FROM_JSON(sound, sound_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    Body() = default ;
    Body(const Body &) = default ;
    Body(Body &&) = default ;
    Body(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Body() = default ;
    Body& operator=(const Body &) = default ;
    Body& operator=(Body &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activity_ == nullptr
        && return this->addBadge_ == nullptr && return this->afterOpen_ == nullptr && return this->builderId_ == nullptr && return this->custom_ == nullptr && return this->expandImage_ == nullptr
        && return this->icon_ == nullptr && return this->img_ == nullptr && return this->playLights_ == nullptr && return this->playSound_ == nullptr && return this->playVibrate_ == nullptr
        && return this->rePop_ == nullptr && return this->setBadge_ == nullptr && return this->sound_ == nullptr && return this->text_ == nullptr && return this->title_ == nullptr
        && return this->url_ == nullptr; };
    // activity Field Functions 
    bool hasActivity() const { return this->activity_ != nullptr;};
    void deleteActivity() { this->activity_ = nullptr;};
    inline string activity() const { DARABONBA_PTR_GET_DEFAULT(activity_, "") };
    inline Body& setActivity(string activity) { DARABONBA_PTR_SET_VALUE(activity_, activity) };


    // addBadge Field Functions 
    bool hasAddBadge() const { return this->addBadge_ != nullptr;};
    void deleteAddBadge() { this->addBadge_ = nullptr;};
    inline int32_t addBadge() const { DARABONBA_PTR_GET_DEFAULT(addBadge_, 0) };
    inline Body& setAddBadge(int32_t addBadge) { DARABONBA_PTR_SET_VALUE(addBadge_, addBadge) };


    // afterOpen Field Functions 
    bool hasAfterOpen() const { return this->afterOpen_ != nullptr;};
    void deleteAfterOpen() { this->afterOpen_ = nullptr;};
    inline string afterOpen() const { DARABONBA_PTR_GET_DEFAULT(afterOpen_, "") };
    inline Body& setAfterOpen(string afterOpen) { DARABONBA_PTR_SET_VALUE(afterOpen_, afterOpen) };


    // builderId Field Functions 
    bool hasBuilderId() const { return this->builderId_ != nullptr;};
    void deleteBuilderId() { this->builderId_ = nullptr;};
    inline int64_t builderId() const { DARABONBA_PTR_GET_DEFAULT(builderId_, 0L) };
    inline Body& setBuilderId(int64_t builderId) { DARABONBA_PTR_SET_VALUE(builderId_, builderId) };


    // custom Field Functions 
    bool hasCustom() const { return this->custom_ != nullptr;};
    void deleteCustom() { this->custom_ = nullptr;};
    inline string custom() const { DARABONBA_PTR_GET_DEFAULT(custom_, "") };
    inline Body& setCustom(string custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


    // expandImage Field Functions 
    bool hasExpandImage() const { return this->expandImage_ != nullptr;};
    void deleteExpandImage() { this->expandImage_ = nullptr;};
    inline string expandImage() const { DARABONBA_PTR_GET_DEFAULT(expandImage_, "") };
    inline Body& setExpandImage(string expandImage) { DARABONBA_PTR_SET_VALUE(expandImage_, expandImage) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline Body& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // img Field Functions 
    bool hasImg() const { return this->img_ != nullptr;};
    void deleteImg() { this->img_ = nullptr;};
    inline string img() const { DARABONBA_PTR_GET_DEFAULT(img_, "") };
    inline Body& setImg(string img) { DARABONBA_PTR_SET_VALUE(img_, img) };


    // playLights Field Functions 
    bool hasPlayLights() const { return this->playLights_ != nullptr;};
    void deletePlayLights() { this->playLights_ = nullptr;};
    inline bool playLights() const { DARABONBA_PTR_GET_DEFAULT(playLights_, false) };
    inline Body& setPlayLights(bool playLights) { DARABONBA_PTR_SET_VALUE(playLights_, playLights) };


    // playSound Field Functions 
    bool hasPlaySound() const { return this->playSound_ != nullptr;};
    void deletePlaySound() { this->playSound_ = nullptr;};
    inline bool playSound() const { DARABONBA_PTR_GET_DEFAULT(playSound_, false) };
    inline Body& setPlaySound(bool playSound) { DARABONBA_PTR_SET_VALUE(playSound_, playSound) };


    // playVibrate Field Functions 
    bool hasPlayVibrate() const { return this->playVibrate_ != nullptr;};
    void deletePlayVibrate() { this->playVibrate_ = nullptr;};
    inline bool playVibrate() const { DARABONBA_PTR_GET_DEFAULT(playVibrate_, false) };
    inline Body& setPlayVibrate(bool playVibrate) { DARABONBA_PTR_SET_VALUE(playVibrate_, playVibrate) };


    // rePop Field Functions 
    bool hasRePop() const { return this->rePop_ != nullptr;};
    void deleteRePop() { this->rePop_ = nullptr;};
    inline int32_t rePop() const { DARABONBA_PTR_GET_DEFAULT(rePop_, 0) };
    inline Body& setRePop(int32_t rePop) { DARABONBA_PTR_SET_VALUE(rePop_, rePop) };


    // setBadge Field Functions 
    bool hasSetBadge() const { return this->setBadge_ != nullptr;};
    void deleteSetBadge() { this->setBadge_ = nullptr;};
    inline int32_t setBadge() const { DARABONBA_PTR_GET_DEFAULT(setBadge_, 0) };
    inline Body& setSetBadge(int32_t setBadge) { DARABONBA_PTR_SET_VALUE(setBadge_, setBadge) };


    // sound Field Functions 
    bool hasSound() const { return this->sound_ != nullptr;};
    void deleteSound() { this->sound_ = nullptr;};
    inline string sound() const { DARABONBA_PTR_GET_DEFAULT(sound_, "") };
    inline Body& setSound(string sound) { DARABONBA_PTR_SET_VALUE(sound_, sound) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline Body& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline Body& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline Body& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> activity_ = nullptr;
    std::shared_ptr<int32_t> addBadge_ = nullptr;
    std::shared_ptr<string> afterOpen_ = nullptr;
    std::shared_ptr<int64_t> builderId_ = nullptr;
    std::shared_ptr<string> custom_ = nullptr;
    std::shared_ptr<string> expandImage_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> img_ = nullptr;
    std::shared_ptr<bool> playLights_ = nullptr;
    std::shared_ptr<bool> playSound_ = nullptr;
    std::shared_ptr<bool> playVibrate_ = nullptr;
    std::shared_ptr<int32_t> rePop_ = nullptr;
    std::shared_ptr<int32_t> setBadge_ = nullptr;
    std::shared_ptr<string> sound_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
