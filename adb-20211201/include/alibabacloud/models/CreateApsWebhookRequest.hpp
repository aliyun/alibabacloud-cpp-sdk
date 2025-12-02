// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateApsWebhookRequestWebhook.hpp>
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
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->jobType_ == nullptr && return this->regionId_ == nullptr && return this->webhook_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsWebhookRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateApsWebhookRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsWebhookRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline const vector<CreateApsWebhookRequestWebhook> & webhook() const { DARABONBA_PTR_GET_CONST(webhook_, vector<CreateApsWebhookRequestWebhook>) };
    inline vector<CreateApsWebhookRequestWebhook> webhook() { DARABONBA_PTR_GET(webhook_, vector<CreateApsWebhookRequestWebhook>) };
    inline CreateApsWebhookRequest& setWebhook(const vector<CreateApsWebhookRequestWebhook> & webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };
    inline CreateApsWebhookRequest& setWebhook(vector<CreateApsWebhookRequestWebhook> && webhook) { DARABONBA_PTR_SET_RVALUE(webhook_, webhook) };


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
    std::shared_ptr<vector<CreateApsWebhookRequestWebhook>> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
