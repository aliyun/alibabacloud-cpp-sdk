// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPSWEBHOOKREQUESTWEBHOOK_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPSWEBHOOKREQUESTWEBHOOK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateApsWebhookRequestWebhook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApsWebhookRequestWebhook& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WebhookId, webhookId_);
      DARABONBA_PTR_TO_JSON(WebhookType, webhookType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApsWebhookRequestWebhook& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WebhookId, webhookId_);
      DARABONBA_PTR_FROM_JSON(WebhookType, webhookType_);
    };
    UpdateApsWebhookRequestWebhook() = default ;
    UpdateApsWebhookRequestWebhook(const UpdateApsWebhookRequestWebhook &) = default ;
    UpdateApsWebhookRequestWebhook(UpdateApsWebhookRequestWebhook &&) = default ;
    UpdateApsWebhookRequestWebhook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApsWebhookRequestWebhook() = default ;
    UpdateApsWebhookRequestWebhook& operator=(const UpdateApsWebhookRequestWebhook &) = default ;
    UpdateApsWebhookRequestWebhook& operator=(UpdateApsWebhookRequestWebhook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->name_ == nullptr && return this->url_ == nullptr && return this->webhookId_ == nullptr && return this->webhookType_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UpdateApsWebhookRequestWebhook& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateApsWebhookRequestWebhook& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateApsWebhookRequestWebhook& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // webhookId Field Functions 
    bool hasWebhookId() const { return this->webhookId_ != nullptr;};
    void deleteWebhookId() { this->webhookId_ = nullptr;};
    inline int64_t webhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, 0L) };
    inline UpdateApsWebhookRequestWebhook& setWebhookId(int64_t webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


    // webhookType Field Functions 
    bool hasWebhookType() const { return this->webhookType_ != nullptr;};
    void deleteWebhookType() { this->webhookType_ = nullptr;};
    inline string webhookType() const { DARABONBA_PTR_GET_DEFAULT(webhookType_, "") };
    inline UpdateApsWebhookRequestWebhook& setWebhookType(string webhookType) { DARABONBA_PTR_SET_VALUE(webhookType_, webhookType) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    // Webhook ID。
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> webhookId_ = nullptr;
    std::shared_ptr<string> webhookType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
