// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSWEBHOOKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSWEBHOOKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsWebhookShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsWebhookShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Webhook, webhookShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsWebhookShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhookShrink_);
    };
    CreateApsWebhookShrinkRequest() = default ;
    CreateApsWebhookShrinkRequest(const CreateApsWebhookShrinkRequest &) = default ;
    CreateApsWebhookShrinkRequest(CreateApsWebhookShrinkRequest &&) = default ;
    CreateApsWebhookShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsWebhookShrinkRequest() = default ;
    CreateApsWebhookShrinkRequest& operator=(const CreateApsWebhookShrinkRequest &) = default ;
    CreateApsWebhookShrinkRequest& operator=(CreateApsWebhookShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->jobType_ == nullptr && return this->regionId_ == nullptr && return this->webhookShrink_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsWebhookShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateApsWebhookShrinkRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsWebhookShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webhookShrink Field Functions 
    bool hasWebhookShrink() const { return this->webhookShrink_ != nullptr;};
    void deleteWebhookShrink() { this->webhookShrink_ = nullptr;};
    inline string webhookShrink() const { DARABONBA_PTR_GET_DEFAULT(webhookShrink_, "") };
    inline CreateApsWebhookShrinkRequest& setWebhookShrink(string webhookShrink) { DARABONBA_PTR_SET_VALUE(webhookShrink_, webhookShrink) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The type of the task. Valid value: Task type. SLS or OSS Export Task: ResultExport.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobType_ = nullptr;
    // The ID of the region in which to create the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The array of webhooks.
    std::shared_ptr<string> webhookShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
