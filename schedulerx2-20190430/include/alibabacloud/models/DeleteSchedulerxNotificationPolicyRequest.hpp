// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCHEDULERXNOTIFICATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCHEDULERXNOTIFICATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class DeleteSchedulerxNotificationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSchedulerxNotificationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSchedulerxNotificationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteSchedulerxNotificationPolicyRequest() = default ;
    DeleteSchedulerxNotificationPolicyRequest(const DeleteSchedulerxNotificationPolicyRequest &) = default ;
    DeleteSchedulerxNotificationPolicyRequest(DeleteSchedulerxNotificationPolicyRequest &&) = default ;
    DeleteSchedulerxNotificationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSchedulerxNotificationPolicyRequest() = default ;
    DeleteSchedulerxNotificationPolicyRequest& operator=(const DeleteSchedulerxNotificationPolicyRequest &) = default ;
    DeleteSchedulerxNotificationPolicyRequest& operator=(DeleteSchedulerxNotificationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyName_ == nullptr
        && return this->regionId_ == nullptr; };
    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DeleteSchedulerxNotificationPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSchedulerxNotificationPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
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
