// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPSWEBHOOKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPSWEBHOOKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateApsWebhookShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApsWebhookShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Webhook, webhookShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApsWebhookShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhookShrink_);
    };
    UpdateApsWebhookShrinkRequest() = default ;
    UpdateApsWebhookShrinkRequest(const UpdateApsWebhookShrinkRequest &) = default ;
    UpdateApsWebhookShrinkRequest(UpdateApsWebhookShrinkRequest &&) = default ;
    UpdateApsWebhookShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApsWebhookShrinkRequest() = default ;
    UpdateApsWebhookShrinkRequest& operator=(const UpdateApsWebhookShrinkRequest &) = default ;
    UpdateApsWebhookShrinkRequest& operator=(UpdateApsWebhookShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->regionId_ == nullptr && this->webhookShrink_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateApsWebhookShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApsWebhookShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webhookShrink Field Functions 
    bool hasWebhookShrink() const { return this->webhookShrink_ != nullptr;};
    void deleteWebhookShrink() { this->webhookShrink_ = nullptr;};
    inline string getWebhookShrink() const { DARABONBA_PTR_GET_DEFAULT(webhookShrink_, "") };
    inline UpdateApsWebhookShrinkRequest& setWebhookShrink(string webhookShrink) { DARABONBA_PTR_SET_VALUE(webhookShrink_, webhookShrink) };


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
    shared_ptr<string> webhookShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
