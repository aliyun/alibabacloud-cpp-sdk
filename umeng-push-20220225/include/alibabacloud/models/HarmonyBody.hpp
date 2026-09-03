// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HARMONYBODY_HPP_
#define ALIBABACLOUD_MODELS_HARMONYBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class HarmonyBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HarmonyBody& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(addBadge, addBadge_);
      DARABONBA_PTR_TO_JSON(afterOpen, afterOpen_);
      DARABONBA_PTR_TO_JSON(bigBody, bigBody_);
      DARABONBA_PTR_TO_JSON(custom, custom_);
      DARABONBA_PTR_TO_JSON(img, img_);
      DARABONBA_PTR_TO_JSON(largeIcon, largeIcon_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, HarmonyBody& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(addBadge, addBadge_);
      DARABONBA_PTR_FROM_JSON(afterOpen, afterOpen_);
      DARABONBA_PTR_FROM_JSON(bigBody, bigBody_);
      DARABONBA_PTR_FROM_JSON(custom, custom_);
      DARABONBA_PTR_FROM_JSON(img, img_);
      DARABONBA_PTR_FROM_JSON(largeIcon, largeIcon_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(uri, uri_);
    };
    HarmonyBody() = default ;
    HarmonyBody(const HarmonyBody &) = default ;
    HarmonyBody(HarmonyBody &&) = default ;
    HarmonyBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HarmonyBody() = default ;
    HarmonyBody& operator=(const HarmonyBody &) = default ;
    HarmonyBody& operator=(HarmonyBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->addBadge_ == nullptr && this->afterOpen_ == nullptr && this->bigBody_ == nullptr && this->custom_ == nullptr && this->img_ == nullptr
        && this->largeIcon_ == nullptr && this->text_ == nullptr && this->title_ == nullptr && this->uri_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline HarmonyBody& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // addBadge Field Functions 
    bool hasAddBadge() const { return this->addBadge_ != nullptr;};
    void deleteAddBadge() { this->addBadge_ = nullptr;};
    inline int32_t getAddBadge() const { DARABONBA_PTR_GET_DEFAULT(addBadge_, 0) };
    inline HarmonyBody& setAddBadge(int32_t addBadge) { DARABONBA_PTR_SET_VALUE(addBadge_, addBadge) };


    // afterOpen Field Functions 
    bool hasAfterOpen() const { return this->afterOpen_ != nullptr;};
    void deleteAfterOpen() { this->afterOpen_ = nullptr;};
    inline string getAfterOpen() const { DARABONBA_PTR_GET_DEFAULT(afterOpen_, "") };
    inline HarmonyBody& setAfterOpen(string afterOpen) { DARABONBA_PTR_SET_VALUE(afterOpen_, afterOpen) };


    // bigBody Field Functions 
    bool hasBigBody() const { return this->bigBody_ != nullptr;};
    void deleteBigBody() { this->bigBody_ = nullptr;};
    inline string getBigBody() const { DARABONBA_PTR_GET_DEFAULT(bigBody_, "") };
    inline HarmonyBody& setBigBody(string bigBody) { DARABONBA_PTR_SET_VALUE(bigBody_, bigBody) };


    // custom Field Functions 
    bool hasCustom() const { return this->custom_ != nullptr;};
    void deleteCustom() { this->custom_ = nullptr;};
    inline string getCustom() const { DARABONBA_PTR_GET_DEFAULT(custom_, "") };
    inline HarmonyBody& setCustom(string custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


    // img Field Functions 
    bool hasImg() const { return this->img_ != nullptr;};
    void deleteImg() { this->img_ = nullptr;};
    inline string getImg() const { DARABONBA_PTR_GET_DEFAULT(img_, "") };
    inline HarmonyBody& setImg(string img) { DARABONBA_PTR_SET_VALUE(img_, img) };


    // largeIcon Field Functions 
    bool hasLargeIcon() const { return this->largeIcon_ != nullptr;};
    void deleteLargeIcon() { this->largeIcon_ = nullptr;};
    inline string getLargeIcon() const { DARABONBA_PTR_GET_DEFAULT(largeIcon_, "") };
    inline HarmonyBody& setLargeIcon(string largeIcon) { DARABONBA_PTR_SET_VALUE(largeIcon_, largeIcon) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline HarmonyBody& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline HarmonyBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline HarmonyBody& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    shared_ptr<string> action_ {};
    shared_ptr<int32_t> addBadge_ {};
    shared_ptr<string> afterOpen_ {};
    shared_ptr<string> bigBody_ {};
    shared_ptr<string> custom_ {};
    shared_ptr<string> img_ {};
    shared_ptr<string> largeIcon_ {};
    shared_ptr<string> text_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> uri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
