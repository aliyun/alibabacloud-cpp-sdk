// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSWEBHOOKREQUEST_HPP_
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
  class CreateApsWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    CreateApsWebhookRequest() = default ;
    CreateApsWebhookRequest(const CreateApsWebhookRequest &) = default ;
    CreateApsWebhookRequest(CreateApsWebhookRequest &&) = default ;
    CreateApsWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsWebhookRequest() = default ;
    CreateApsWebhookRequest& operator=(const CreateApsWebhookRequest &) = default ;
    CreateApsWebhookRequest& operator=(CreateApsWebhookRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(WebhookType, webhookType_);
      };
      friend void from_json(const Darabonba::Json& j, Webhook& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
        && this->name_ == nullptr && this->url_ == nullptr && this->webhookType_ == nullptr; };
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
      // The request path.
      // 
      // This parameter is required.
      shared_ptr<string> url_ {};
      // The notification method. Valid values: dingtalk. lark.
      // 
      // This parameter is required.
      shared_ptr<string> webhookType_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->jobType_ == nullptr && this->regionId_ == nullptr && this->webhook_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsWebhookRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateApsWebhookRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsWebhookRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline const vector<CreateApsWebhookRequest::Webhook> & getWebhook() const { DARABONBA_PTR_GET_CONST(webhook_, vector<CreateApsWebhookRequest::Webhook>) };
    inline vector<CreateApsWebhookRequest::Webhook> getWebhook() { DARABONBA_PTR_GET(webhook_, vector<CreateApsWebhookRequest::Webhook>) };
    inline CreateApsWebhookRequest& setWebhook(const vector<CreateApsWebhookRequest::Webhook> & webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };
    inline CreateApsWebhookRequest& setWebhook(vector<CreateApsWebhookRequest::Webhook> && webhook) { DARABONBA_PTR_SET_RVALUE(webhook_, webhook) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The type of the task. Valid value: Task type. SLS or OSS Export Task: ResultExport.
    // 
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    // The ID of the region in which to create the dedicated block storage cluster.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The array of webhooks.
    shared_ptr<vector<CreateApsWebhookRequest::Webhook>> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
