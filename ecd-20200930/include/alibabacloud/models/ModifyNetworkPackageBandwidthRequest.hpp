// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKPACKAGEBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKPACKAGEBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyNetworkPackageBandwidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkPackageBandwidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkPackageBandwidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    ModifyNetworkPackageBandwidthRequest() = default ;
    ModifyNetworkPackageBandwidthRequest(const ModifyNetworkPackageBandwidthRequest &) = default ;
    ModifyNetworkPackageBandwidthRequest(ModifyNetworkPackageBandwidthRequest &&) = default ;
    ModifyNetworkPackageBandwidthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkPackageBandwidthRequest() = default ;
    ModifyNetworkPackageBandwidthRequest& operator=(const ModifyNetworkPackageBandwidthRequest &) = default ;
    ModifyNetworkPackageBandwidthRequest& operator=(ModifyNetworkPackageBandwidthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->bandwidth_ == nullptr && return this->networkPackageId_ == nullptr && return this->promotionId_ == nullptr && return this->regionId_ == nullptr && return this->resellerOwnerUid_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyNetworkPackageBandwidthRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ModifyNetworkPackageBandwidthRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline string networkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
    inline ModifyNetworkPackageBandwidthRequest& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ModifyNetworkPackageBandwidthRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNetworkPackageBandwidthRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline ModifyNetworkPackageBandwidthRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


  protected:
    // Specifies whether to enable the automatic payment feature.
    // 
    // Valid values:
    // 
    // *   true (default): enables the auto-payment feature.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     Make sure that your account has sufficient balance. Otherwise, no order is generated.
    // 
    //     <!-- -->
    // 
    // *   false: disables the auto-payment feature. In this case, an order is generated but you need to make the payment manually.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     To make the payment, log on to the Elastic Desktop Service console, go to the Orders page, and find the order based on the order ID.
    // 
    //     <!-- -->
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The bandwidth provided by the premium bandwidth plan. Unit: Mbit/s.
    // 
    // *   Valid values if the premium bandwidth plan is a subscription plan: 2 to 1000.
    // *   Valid values if the premium bandwidth plan is a pay-as-you-go plan that charges by data transfer (PayByTraffic): 2 to 200.
    // *   Valid values if the premium bandwidth plan is a pay-as-you-go plan that charges by fixed bandwidth (PayByBandwidth): 2 to 1000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The ID of the premium bandwidth plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkPackageId_ = nullptr;
    // The promotion ID.
    std::shared_ptr<string> promotionId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
