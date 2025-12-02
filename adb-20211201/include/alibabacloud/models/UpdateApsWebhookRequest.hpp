// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPSWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPSWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApsWebhookRequestWebhook.hpp>
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
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->regionId_ == nullptr && return this->webhook_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateApsWebhookRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApsWebhookRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline const vector<UpdateApsWebhookRequestWebhook> & webhook() const { DARABONBA_PTR_GET_CONST(webhook_, vector<UpdateApsWebhookRequestWebhook>) };
    inline vector<UpdateApsWebhookRequestWebhook> webhook() { DARABONBA_PTR_GET(webhook_, vector<UpdateApsWebhookRequestWebhook>) };
    inline UpdateApsWebhookRequest& setWebhook(const vector<UpdateApsWebhookRequestWebhook> & webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };
    inline UpdateApsWebhookRequest& setWebhook(vector<UpdateApsWebhookRequestWebhook> && webhook) { DARABONBA_PTR_SET_RVALUE(webhook_, webhook) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The array of webhooks.
    std::shared_ptr<vector<UpdateApsWebhookRequestWebhook>> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
