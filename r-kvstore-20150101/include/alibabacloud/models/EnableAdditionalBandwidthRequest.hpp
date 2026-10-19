// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEADDITIONALBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEADDITIONALBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class EnableAdditionalBandwidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableAdditionalBandwidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(BandWidthBurst, bandWidthBurst_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OrderTimeLength, orderTimeLength_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SourceBiz, sourceBiz_);
    };
    friend void from_json(const Darabonba::Json& j, EnableAdditionalBandwidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(BandWidthBurst, bandWidthBurst_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OrderTimeLength, orderTimeLength_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SourceBiz, sourceBiz_);
    };
    EnableAdditionalBandwidthRequest() = default ;
    EnableAdditionalBandwidthRequest(const EnableAdditionalBandwidthRequest &) = default ;
    EnableAdditionalBandwidthRequest(EnableAdditionalBandwidthRequest &&) = default ;
    EnableAdditionalBandwidthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableAdditionalBandwidthRequest() = default ;
    EnableAdditionalBandwidthRequest& operator=(const EnableAdditionalBandwidthRequest &) = default ;
    EnableAdditionalBandwidthRequest& operator=(EnableAdditionalBandwidthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->bandWidthBurst_ == nullptr && this->bandwidth_ == nullptr && this->chargeType_ == nullptr
        && this->couponNo_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->orderTimeLength_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityToken_ == nullptr && this->sourceBiz_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline EnableAdditionalBandwidthRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline EnableAdditionalBandwidthRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline EnableAdditionalBandwidthRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // bandWidthBurst Field Functions 
    bool hasBandWidthBurst() const { return this->bandWidthBurst_ != nullptr;};
    void deleteBandWidthBurst() { this->bandWidthBurst_ = nullptr;};
    inline bool getBandWidthBurst() const { DARABONBA_PTR_GET_DEFAULT(bandWidthBurst_, false) };
    inline EnableAdditionalBandwidthRequest& setBandWidthBurst(bool bandWidthBurst) { DARABONBA_PTR_SET_VALUE(bandWidthBurst_, bandWidthBurst) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline EnableAdditionalBandwidthRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline EnableAdditionalBandwidthRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline EnableAdditionalBandwidthRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableAdditionalBandwidthRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline EnableAdditionalBandwidthRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // orderTimeLength Field Functions 
    bool hasOrderTimeLength() const { return this->orderTimeLength_ != nullptr;};
    void deleteOrderTimeLength() { this->orderTimeLength_ = nullptr;};
    inline string getOrderTimeLength() const { DARABONBA_PTR_GET_DEFAULT(orderTimeLength_, "") };
    inline EnableAdditionalBandwidthRequest& setOrderTimeLength(string orderTimeLength) { DARABONBA_PTR_SET_VALUE(orderTimeLength_, orderTimeLength) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline EnableAdditionalBandwidthRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableAdditionalBandwidthRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EnableAdditionalBandwidthRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableAdditionalBandwidthRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline EnableAdditionalBandwidthRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sourceBiz Field Functions 
    bool hasSourceBiz() const { return this->sourceBiz_ != nullptr;};
    void deleteSourceBiz() { this->sourceBiz_ = nullptr;};
    inline string getSourceBiz() const { DARABONBA_PTR_GET_DEFAULT(sourceBiz_, "") };
    inline EnableAdditionalBandwidthRequest& setSourceBiz(string sourceBiz) { DARABONBA_PTR_SET_VALUE(sourceBiz_, sourceBiz) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // * **true**: enables automatic payment. This is the default value. Make sure that your account has sufficient balance.
    // * **false**: disables automatic payment. You must manually complete the payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // * **true**: enables auto-renewal.
    // * **false**: disables auto-renewal. This is the default value.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal period, in months. Valid values: **1**, **2**, **3**, **4**, **5**, **6**, **7**, **8**, **9**, **12**, **24**, **36**, and **60**.
    // 
    // > * This parameter is available and required only when the **AutoRenew** parameter is set to **true**.
    // > * After this parameter is configured, it cannot be queried by calling API operations. To query the auto-renewal period, choose **Billing** > **Renewal Management** in the top navigation bar of the console, and then enter the instance ID with the `-bw` suffix (for example, r-bp1zxszhcgatnx****-bw) in the **Instance ID** text box.
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // Specifies whether to enable burstable (second-level) elastic bandwidth. After elastic scaling for bandwidth is enabled, burstable (second-level) elastic bandwidth cannot be enabled, and vice versa.
    shared_ptr<bool> bandWidthBurst_ {};
    // The bandwidth to be increased, in MB/s. The value must be an integer greater than or equal to **0**. The maximum value is six times the default bandwidth of the instance (or a single shard) specifications, but the upper limit of the increase is 192 MB/s. For example, if the default bandwidth of the instance is 10 MB/s, the value range is **0** to **60**.
    // 
    // > * You can call the [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/473782.html) operation and use the **DefaultBandWidth** response parameter to obtain the default maximum bandwidth. For more information about instance specifications, see [Overview of instance specifications](https://help.aliyun.com/document_detail/26350.html).
    // > * If multiple data shard IDs are specified in the **NodeId** request parameter, the bandwidth values specified in this parameter must correspond to the order of the shard IDs. Separate multiple bandwidth values with commas (,).
    shared_ptr<string> bandwidth_ {};
    // The billing method for the additional bandwidth. Valid values:
    // * **PrePaid**: subscription.
    // * **PostPaid**: pay-as-you-go. Currently, only this billing method is supported.
    shared_ptr<string> chargeType_ {};
    // The ID of the coupon.
    shared_ptr<string> couponNo_ {};
    // The ID of the instance. You can call [DescribeInstances](https://help.aliyun.com/document_detail/473778.html) to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the data shard. You can call [DescribeLogicInstanceTopology](https://help.aliyun.com/document_detail/473786.html) to obtain the shard ID. Separate multiple shard IDs with commas (,). You can also set this parameter to **All** to specify all data shards.
    // > This parameter is available and required only when the instance uses the [cluster architecture](https://help.aliyun.com/document_detail/52228.html) or [read/write splitting architecture](https://help.aliyun.com/document_detail/62870.html).
    shared_ptr<string> nodeId_ {};
    // The subscription duration, in days. Valid values: **1**, **2**, **3**, **7**, **14**, **30**, **60**, **90**, **180**, **365**, **730**, **1095**, and **1825**.
    // > To continue using the purchased bandwidth, you must call the [RenewAdditionalBandwidth](https://help.aliyun.com/document_detail/473804.html) operation to renew the bandwidth before it expires.
    shared_ptr<string> orderTimeLength_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
    // The source of the call. This parameter is used only for internal maintenance and does not need to be specified.
    shared_ptr<string> sourceBiz_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
