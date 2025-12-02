// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSWEBHOOKREQUESTWEBHOOK_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSWEBHOOKREQUESTWEBHOOK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsWebhookRequestWebhook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsWebhookRequestWebhook& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WebhookType, webhookType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsWebhookRequestWebhook& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WebhookType, webhookType_);
    };
    CreateApsWebhookRequestWebhook() = default ;
    CreateApsWebhookRequestWebhook(const CreateApsWebhookRequestWebhook &) = default ;
    CreateApsWebhookRequestWebhook(CreateApsWebhookRequestWebhook &&) = default ;
    CreateApsWebhookRequestWebhook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsWebhookRequestWebhook() = default ;
    CreateApsWebhookRequestWebhook& operator=(const CreateApsWebhookRequestWebhook &) = default ;
    CreateApsWebhookRequestWebhook& operator=(CreateApsWebhookRequestWebhook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->name_ == nullptr && return this->url_ == nullptr && return this->webhookType_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateApsWebhookRequestWebhook& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApsWebhookRequestWebhook& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateApsWebhookRequestWebhook& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // webhookType Field Functions 
    bool hasWebhookType() const { return this->webhookType_ != nullptr;};
    void deleteWebhookType() { this->webhookType_ = nullptr;};
    inline string webhookType() const { DARABONBA_PTR_GET_DEFAULT(webhookType_, "") };
    inline CreateApsWebhookRequestWebhook& setWebhookType(string webhookType) { DARABONBA_PTR_SET_VALUE(webhookType_, webhookType) };


  protected:
    // Signed key.
    std::shared_ptr<string> key_ = nullptr;
    // The name of the webhook.
    std::shared_ptr<string> name_ = nullptr;
    // The request path.
    // 
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    // The notification method. Valid values: dingtalk. lark.
    // 
    // This parameter is required.
    std::shared_ptr<string> webhookType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
