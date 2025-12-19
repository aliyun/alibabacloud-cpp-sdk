// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPOPERATEACTION_HPP_
#define ALIBABACLOUD_MODELS_APPOPERATEACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppOperateAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppOperateAction& obj) { 
      DARABONBA_PTR_TO_JSON(ActionKey, actionKey_);
      DARABONBA_PTR_TO_JSON(ActionText, actionText_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Href, href_);
    };
    friend void from_json(const Darabonba::Json& j, AppOperateAction& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionKey, actionKey_);
      DARABONBA_PTR_FROM_JSON(ActionText, actionText_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Href, href_);
    };
    AppOperateAction() = default ;
    AppOperateAction(const AppOperateAction &) = default ;
    AppOperateAction(AppOperateAction &&) = default ;
    AppOperateAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppOperateAction() = default ;
    AppOperateAction& operator=(const AppOperateAction &) = default ;
    AppOperateAction& operator=(AppOperateAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionKey_ == nullptr
        && return this->actionText_ == nullptr && return this->enable_ == nullptr && return this->href_ == nullptr; };
    // actionKey Field Functions 
    bool hasActionKey() const { return this->actionKey_ != nullptr;};
    void deleteActionKey() { this->actionKey_ = nullptr;};
    inline string actionKey() const { DARABONBA_PTR_GET_DEFAULT(actionKey_, "") };
    inline AppOperateAction& setActionKey(string actionKey) { DARABONBA_PTR_SET_VALUE(actionKey_, actionKey) };


    // actionText Field Functions 
    bool hasActionText() const { return this->actionText_ != nullptr;};
    void deleteActionText() { this->actionText_ = nullptr;};
    inline string actionText() const { DARABONBA_PTR_GET_DEFAULT(actionText_, "") };
    inline AppOperateAction& setActionText(string actionText) { DARABONBA_PTR_SET_VALUE(actionText_, actionText) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline AppOperateAction& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // href Field Functions 
    bool hasHref() const { return this->href_ != nullptr;};
    void deleteHref() { this->href_ = nullptr;};
    inline string href() const { DARABONBA_PTR_GET_DEFAULT(href_, "") };
    inline AppOperateAction& setHref(string href) { DARABONBA_PTR_SET_VALUE(href_, href) };


  protected:
    // 用于唯一标识一个操作行为
    std::shared_ptr<string> actionKey_ = nullptr;
    // 用于在界面中展示操作名称
    std::shared_ptr<string> actionText_ = nullptr;
    // 标识该操作是否可用
    std::shared_ptr<bool> enable_ = nullptr;
    // 点击操作时跳转的URL地址
    std::shared_ptr<string> href_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
