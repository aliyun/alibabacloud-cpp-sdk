// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENBANDWIDTHPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECENBANDWIDTHPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCenBandwidthPackageRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateCenBandwidthPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageChargeType, bandwidthPackageChargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GeographicRegionAId, geographicRegionAId_);
      DARABONBA_PTR_TO_JSON(GeographicRegionBId, geographicRegionBId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageChargeType, bandwidthPackageChargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GeographicRegionAId, geographicRegionAId_);
      DARABONBA_PTR_FROM_JSON(GeographicRegionBId, geographicRegionBId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateCenBandwidthPackageRequest() = default ;
    CreateCenBandwidthPackageRequest(const CreateCenBandwidthPackageRequest &) = default ;
    CreateCenBandwidthPackageRequest(CreateCenBandwidthPackageRequest &&) = default ;
    CreateCenBandwidthPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenBandwidthPackageRequest() = default ;
    CreateCenBandwidthPackageRequest& operator=(const CreateCenBandwidthPackageRequest &) = default ;
    CreateCenBandwidthPackageRequest& operator=(CreateCenBandwidthPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->autoRenew_ != nullptr && this->autoRenewDuration_ != nullptr && this->bandwidth_ != nullptr && this->bandwidthPackageChargeType_ != nullptr && this->clientToken_ != nullptr
        && this->description_ != nullptr && this->geographicRegionAId_ != nullptr && this->geographicRegionBId_ != nullptr && this->name_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->period_ != nullptr && this->pricingCycle_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->tag_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateCenBandwidthPackageRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateCenBandwidthPackageRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t autoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline CreateCenBandwidthPackageRequest& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateCenBandwidthPackageRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthPackageChargeType Field Functions 
    bool hasBandwidthPackageChargeType() const { return this->bandwidthPackageChargeType_ != nullptr;};
    void deleteBandwidthPackageChargeType() { this->bandwidthPackageChargeType_ = nullptr;};
    inline string bandwidthPackageChargeType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageChargeType_, "") };
    inline CreateCenBandwidthPackageRequest& setBandwidthPackageChargeType(string bandwidthPackageChargeType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageChargeType_, bandwidthPackageChargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCenBandwidthPackageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCenBandwidthPackageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // geographicRegionAId Field Functions 
    bool hasGeographicRegionAId() const { return this->geographicRegionAId_ != nullptr;};
    void deleteGeographicRegionAId() { this->geographicRegionAId_ = nullptr;};
    inline string geographicRegionAId() const { DARABONBA_PTR_GET_DEFAULT(geographicRegionAId_, "") };
    inline CreateCenBandwidthPackageRequest& setGeographicRegionAId(string geographicRegionAId) { DARABONBA_PTR_SET_VALUE(geographicRegionAId_, geographicRegionAId) };


    // geographicRegionBId Field Functions 
    bool hasGeographicRegionBId() const { return this->geographicRegionBId_ != nullptr;};
    void deleteGeographicRegionBId() { this->geographicRegionBId_ = nullptr;};
    inline string geographicRegionBId() const { DARABONBA_PTR_GET_DEFAULT(geographicRegionBId_, "") };
    inline CreateCenBandwidthPackageRequest& setGeographicRegionBId(string geographicRegionBId) { DARABONBA_PTR_SET_VALUE(geographicRegionBId_, geographicRegionBId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCenBandwidthPackageRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCenBandwidthPackageRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCenBandwidthPackageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateCenBandwidthPackageRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateCenBandwidthPackageRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCenBandwidthPackageRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCenBandwidthPackageRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCenBandwidthPackageRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCenBandwidthPackageRequestTag>) };
    inline vector<CreateCenBandwidthPackageRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateCenBandwidthPackageRequestTag>) };
    inline CreateCenBandwidthPackageRequest& setTag(const vector<CreateCenBandwidthPackageRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCenBandwidthPackageRequest& setTag(vector<CreateCenBandwidthPackageRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to automatically complete the payment of the bandwidth plan. Valid values:
    // 
    // *   **true**: yes
    // *   **false** (default): no
    // 
    // If you set the parameter to false, go to Billing Management to complete the payment after you call this operation. The instance is created only after you complete the payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable the auto-renewal feature. Valid values:
    // 
    // *   **true**: enables auto-renewal.
    // *   **false** (default): disables auto-renewal.
    // 
    // > Only subscription bandwidth plans support auto-renewal.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal duration. Unit: months. Valid values: **0** to **2147483647**. Default value: **1**.
    std::shared_ptr<int32_t> autoRenewDuration_ = nullptr;
    // The maximum bandwidth value of the bandwidth plan. Unit: Mbit/s. Valid values: **2** to **10000**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The billing method of the bandwidth plan. Set the value to **PREPAY**, which indicates that the billing method is pay-as-you-go.
    std::shared_ptr<string> bandwidthPackageChargeType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the bandwidth plan.
    std::shared_ptr<string> description_ = nullptr;
    // The area where the network instance is deployed. Valid values:
    // 
    // *   **China**: Chinese mainland
    // *   **North-America**: North America
    // *   **Asia-Pacific**: Asia Pacific
    // *   **Europe**: Europe
    // 
    // This parameter is required.
    std::shared_ptr<string> geographicRegionAId_ = nullptr;
    // The area where the other network instance is deployed. Valid values: Valid values:
    // 
    // *   **China**: Chinese mainland
    // *   **North-America**: North America
    // *   **Asia-Pacific**: Asia Pacific
    // *   **Europe**: Europe
    // 
    // This parameter is required.
    std::shared_ptr<string> geographicRegionBId_ = nullptr;
    // The name of the bandwidth plan.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter and cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The subscription duration of the bandwidth plan. Default value: 1.
    // 
    // *   If **PricingCycle** is set to **Month**, set **Period** to a value from **1** to **3** or **6**.
    // *   If **PricingCycle** is set to **Year**, set **Period** to a value from **1** to **3**.
    // 
    // > This parameter is required when **BandwidthPackageChargeType** is set to **PREPAY**.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The billing cycle of the bandwidth plan. Valid values:
    // 
    // *   **Month** (default): billed on a monthly basis.
    // *   **Year**: billed on an annual basis.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<CreateCenBandwidthPackageRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
