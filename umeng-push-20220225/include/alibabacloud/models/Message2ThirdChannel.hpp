// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MESSAGE2THIRDCHANNEL_HPP_
#define ALIBABACLOUD_MODELS_MESSAGE2THIRDCHANNEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class Message2ThirdChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Message2ThirdChannel& obj) { 
      DARABONBA_PTR_TO_JSON(SetBadge, setBadge_);
      DARABONBA_PTR_TO_JSON(addBadge, addBadge_);
      DARABONBA_PTR_TO_JSON(bigBody, bigBody_);
      DARABONBA_PTR_TO_JSON(bigTitle, bigTitle_);
      DARABONBA_PTR_TO_JSON(expandImage, expandImage_);
      DARABONBA_PTR_TO_JSON(img, img_);
      DARABONBA_PTR_TO_JSON(sound, sound_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, Message2ThirdChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(SetBadge, setBadge_);
      DARABONBA_PTR_FROM_JSON(addBadge, addBadge_);
      DARABONBA_PTR_FROM_JSON(bigBody, bigBody_);
      DARABONBA_PTR_FROM_JSON(bigTitle, bigTitle_);
      DARABONBA_PTR_FROM_JSON(expandImage, expandImage_);
      DARABONBA_PTR_FROM_JSON(img, img_);
      DARABONBA_PTR_FROM_JSON(sound, sound_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    Message2ThirdChannel() = default ;
    Message2ThirdChannel(const Message2ThirdChannel &) = default ;
    Message2ThirdChannel(Message2ThirdChannel &&) = default ;
    Message2ThirdChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Message2ThirdChannel() = default ;
    Message2ThirdChannel& operator=(const Message2ThirdChannel &) = default ;
    Message2ThirdChannel& operator=(Message2ThirdChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->setBadge_ == nullptr
        && return this->addBadge_ == nullptr && return this->bigBody_ == nullptr && return this->bigTitle_ == nullptr && return this->expandImage_ == nullptr && return this->img_ == nullptr
        && return this->sound_ == nullptr && return this->text_ == nullptr && return this->title_ == nullptr; };
    // setBadge Field Functions 
    bool hasSetBadge() const { return this->setBadge_ != nullptr;};
    void deleteSetBadge() { this->setBadge_ = nullptr;};
    inline int64_t setBadge() const { DARABONBA_PTR_GET_DEFAULT(setBadge_, 0L) };
    inline Message2ThirdChannel& setSetBadge(int64_t setBadge) { DARABONBA_PTR_SET_VALUE(setBadge_, setBadge) };


    // addBadge Field Functions 
    bool hasAddBadge() const { return this->addBadge_ != nullptr;};
    void deleteAddBadge() { this->addBadge_ = nullptr;};
    inline int64_t addBadge() const { DARABONBA_PTR_GET_DEFAULT(addBadge_, 0L) };
    inline Message2ThirdChannel& setAddBadge(int64_t addBadge) { DARABONBA_PTR_SET_VALUE(addBadge_, addBadge) };


    // bigBody Field Functions 
    bool hasBigBody() const { return this->bigBody_ != nullptr;};
    void deleteBigBody() { this->bigBody_ = nullptr;};
    inline string bigBody() const { DARABONBA_PTR_GET_DEFAULT(bigBody_, "") };
    inline Message2ThirdChannel& setBigBody(string bigBody) { DARABONBA_PTR_SET_VALUE(bigBody_, bigBody) };


    // bigTitle Field Functions 
    bool hasBigTitle() const { return this->bigTitle_ != nullptr;};
    void deleteBigTitle() { this->bigTitle_ = nullptr;};
    inline string bigTitle() const { DARABONBA_PTR_GET_DEFAULT(bigTitle_, "") };
    inline Message2ThirdChannel& setBigTitle(string bigTitle) { DARABONBA_PTR_SET_VALUE(bigTitle_, bigTitle) };


    // expandImage Field Functions 
    bool hasExpandImage() const { return this->expandImage_ != nullptr;};
    void deleteExpandImage() { this->expandImage_ = nullptr;};
    inline string expandImage() const { DARABONBA_PTR_GET_DEFAULT(expandImage_, "") };
    inline Message2ThirdChannel& setExpandImage(string expandImage) { DARABONBA_PTR_SET_VALUE(expandImage_, expandImage) };


    // img Field Functions 
    bool hasImg() const { return this->img_ != nullptr;};
    void deleteImg() { this->img_ = nullptr;};
    inline string img() const { DARABONBA_PTR_GET_DEFAULT(img_, "") };
    inline Message2ThirdChannel& setImg(string img) { DARABONBA_PTR_SET_VALUE(img_, img) };


    // sound Field Functions 
    bool hasSound() const { return this->sound_ != nullptr;};
    void deleteSound() { this->sound_ = nullptr;};
    inline string sound() const { DARABONBA_PTR_GET_DEFAULT(sound_, "") };
    inline Message2ThirdChannel& setSound(string sound) { DARABONBA_PTR_SET_VALUE(sound_, sound) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline Message2ThirdChannel& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline Message2ThirdChannel& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int64_t> setBadge_ = nullptr;
    std::shared_ptr<int64_t> addBadge_ = nullptr;
    std::shared_ptr<string> bigBody_ = nullptr;
    std::shared_ptr<string> bigTitle_ = nullptr;
    std::shared_ptr<string> expandImage_ = nullptr;
    std::shared_ptr<string> img_ = nullptr;
    std::shared_ptr<string> sound_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
