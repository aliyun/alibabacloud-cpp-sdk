// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPSWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPSWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateApsWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApsWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApsWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    UpdateApsWebhookRequest() = default ;
    UpdateApsWebhookRequest(const UpdateApsWebhookRequest &) = default ;
    UpdateApsWebhookRequest(UpdateApsWebhookRequest &&) = default ;
    UpdateApsWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApsWebhookRequest() = default ;
    UpdateApsWebhookRequest& operator=(const UpdateApsWebhookRequest &) = default ;
    UpdateApsWebhookRequest& operator=(UpdateApsWebhookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Webhook : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Webhook& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(WebhookId, webhookId_);
        DARABONBA_PTR_TO_JSON(WebhookType, webhookType_);
      };
      friend void from_json(const Darabonba::Json& j, Webhook& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(WebhookId, webhookId_);
        DARABONBA_PTR_FROM_JSON(WebhookType, webhookType_);
      };
      Webhook() = default ;
      Webhook(const Webhook &) = default ;
      Webhook(Webhook &&) = default ;
      Webhook(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Webhook() = default ;
      Webhook& operator=(const Webhook &) = default ;
      Webhook& operator=(Webhook &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->name_ == nullptr && this->url_ == nullptr && this->webhookId_ == nullptr && this->webhookType_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Webhook& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Webhook& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Webhook& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // webhookId Field Functions 
      bool hasWebhookId() const { return this->webhookId_ != nullptr;};
      void deleteWebhookId() { this->webhookId_ = nullptr;};
      inline int64_t getWebhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, 0L) };
      inline Webhook& setWebhookId(int64_t webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


      // webhookType Field Functions 
      bool hasWebhookType() const { return this->webhookType_ != nullptr;};
      void deleteWebhookType() { this->webhookType_ = nullptr;};
      inline string getWebhookType() const { DARABONBA_PTR_GET_DEFAULT(webhookType_, "") };
      inline Webhook& setWebhookType(string webhookType) { DARABONBA_PTR_SET_VALUE(webhookType_, webhookType) };


    protected:
      // Signed key.
      shared_ptr<string> key_ {};
      // The name of the webhook.
      shared_ptr<string> name_ {};
      // The URL of the request.
      shared_ptr<string> url_ {};
      // The ID of the webhook.
      // 
      // This parameter is required.
      shared_ptr<int64_t> webhookId_ {};
      // The notification method. Valid values: dingtalk. lark.
      shared_ptr<string> webhookType_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->regionId_ == nullptr && this->webhook_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateApsWebhookRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApsWebhookRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline const vector<UpdateApsWebhookRequest::Webhook> & getWebhook() const { DARABONBA_PTR_GET_CONST(webhook_, vector<UpdateApsWebhookRequest::Webhook>) };
    inline vector<UpdateApsWebhookRequest::Webhook> getWebhook() { DARABONBA_PTR_GET(webhook_, vector<UpdateApsWebhookRequest::Webhook>) };
    inline UpdateApsWebhookRequest& setWebhook(const vector<UpdateApsWebhookRequest::Webhook> & webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };
    inline UpdateApsWebhookRequest& setWebhook(vector<UpdateApsWebhookRequest::Webhook> && webhook) { DARABONBA_PTR_SET_RVALUE(webhook_, webhook) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The array of webhooks.
    shared_ptr<vector<UpdateApsWebhookRequest::Webhook>> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
