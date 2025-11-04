// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ExecuteScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BreachThreshold, breachThreshold_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleAri, scalingRuleAri_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BreachThreshold, breachThreshold_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleAri, scalingRuleAri_);
    };
    ExecuteScalingRuleRequest() = default ;
    ExecuteScalingRuleRequest(const ExecuteScalingRuleRequest &) = default ;
    ExecuteScalingRuleRequest(ExecuteScalingRuleRequest &&) = default ;
    ExecuteScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteScalingRuleRequest() = default ;
    ExecuteScalingRuleRequest& operator=(const ExecuteScalingRuleRequest &) = default ;
    ExecuteScalingRuleRequest& operator=(ExecuteScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->breachThreshold_ == nullptr
        && return this->clientToken_ == nullptr && return this->metricValue_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->scalingRuleAri_ == nullptr; };
    // breachThreshold Field Functions 
    bool hasBreachThreshold() const { return this->breachThreshold_ != nullptr;};
    void deleteBreachThreshold() { this->breachThreshold_ = nullptr;};
    inline float breachThreshold() const { DARABONBA_PTR_GET_DEFAULT(breachThreshold_, 0.0) };
    inline ExecuteScalingRuleRequest& setBreachThreshold(float breachThreshold) { DARABONBA_PTR_SET_VALUE(breachThreshold_, breachThreshold) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ExecuteScalingRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // metricValue Field Functions 
    bool hasMetricValue() const { return this->metricValue_ != nullptr;};
    void deleteMetricValue() { this->metricValue_ = nullptr;};
    inline float metricValue() const { DARABONBA_PTR_GET_DEFAULT(metricValue_, 0.0) };
    inline ExecuteScalingRuleRequest& setMetricValue(float metricValue) { DARABONBA_PTR_SET_VALUE(metricValue_, metricValue) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ExecuteScalingRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ExecuteScalingRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExecuteScalingRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ExecuteScalingRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ExecuteScalingRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingRuleAri Field Functions 
    bool hasScalingRuleAri() const { return this->scalingRuleAri_ != nullptr;};
    void deleteScalingRuleAri() { this->scalingRuleAri_ = nullptr;};
    inline string scalingRuleAri() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleAri_, "") };
    inline ExecuteScalingRuleRequest& setScalingRuleAri(string scalingRuleAri) { DARABONBA_PTR_SET_VALUE(scalingRuleAri_, scalingRuleAri) };


  protected:
    // The threshold specified when the step scaling rule is executed. Valid values: -9.999999E18 to 9.999999E18.
    std::shared_ptr<float> breachThreshold_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The metric value specified when the step scaling rule is executed. Valid values: -9.999999E18 to 9.999999E18.
    std::shared_ptr<float> metricValue_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The unique identifier of the scaling rule.
    // 
    // >  You can call this operation to execute simple scaling rules and step scaling rules. If you want to call this operation to execute a step scaling rule, you must specify `BreachThreshold` and `MetricValue`.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingRuleAri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
