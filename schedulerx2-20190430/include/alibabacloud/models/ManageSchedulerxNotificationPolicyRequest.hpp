// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGESCHEDULERXNOTIFICATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGESCHEDULERXNOTIFICATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ManageSchedulerxNotificationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageSchedulerxNotificationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelTimeRange, channelTimeRange_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ManageSchedulerxNotificationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelTimeRange, channelTimeRange_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ManageSchedulerxNotificationPolicyRequest() = default ;
    ManageSchedulerxNotificationPolicyRequest(const ManageSchedulerxNotificationPolicyRequest &) = default ;
    ManageSchedulerxNotificationPolicyRequest(ManageSchedulerxNotificationPolicyRequest &&) = default ;
    ManageSchedulerxNotificationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageSchedulerxNotificationPolicyRequest() = default ;
    ManageSchedulerxNotificationPolicyRequest& operator=(const ManageSchedulerxNotificationPolicyRequest &) = default ;
    ManageSchedulerxNotificationPolicyRequest& operator=(ManageSchedulerxNotificationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelTimeRange_ == nullptr
        && return this->description_ == nullptr && return this->policyName_ == nullptr && return this->regionId_ == nullptr; };
    // channelTimeRange Field Functions 
    bool hasChannelTimeRange() const { return this->channelTimeRange_ != nullptr;};
    void deleteChannelTimeRange() { this->channelTimeRange_ = nullptr;};
    inline string channelTimeRange() const { DARABONBA_PTR_GET_DEFAULT(channelTimeRange_, "") };
    inline ManageSchedulerxNotificationPolicyRequest& setChannelTimeRange(string channelTimeRange) { DARABONBA_PTR_SET_VALUE(channelTimeRange_, channelTimeRange) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ManageSchedulerxNotificationPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ManageSchedulerxNotificationPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ManageSchedulerxNotificationPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The time range configuration for notification channels.
    // 
    // >  See the supplementary description of ChannelTimeRange in the request parameters.
    std::shared_ptr<string> channelTimeRange_ = nullptr;
    // The notification policy description.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the notification policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyName_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
