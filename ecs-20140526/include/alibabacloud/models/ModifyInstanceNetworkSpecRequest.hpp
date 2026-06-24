// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCENETWORKSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCENETWORKSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceNetworkSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceNetworkSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocatePublicIp, allocatePublicIp_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(NetworkChargeType, networkChargeType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceNetworkSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocatePublicIp, allocatePublicIp_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(NetworkChargeType, networkChargeType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ModifyInstanceNetworkSpecRequest() = default ;
    ModifyInstanceNetworkSpecRequest(const ModifyInstanceNetworkSpecRequest &) = default ;
    ModifyInstanceNetworkSpecRequest(ModifyInstanceNetworkSpecRequest &&) = default ;
    ModifyInstanceNetworkSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceNetworkSpecRequest() = default ;
    ModifyInstanceNetworkSpecRequest& operator=(const ModifyInstanceNetworkSpecRequest &) = default ;
    ModifyInstanceNetworkSpecRequest& operator=(ModifyInstanceNetworkSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocatePublicIp_ == nullptr
        && this->autoPay_ == nullptr && this->clientToken_ == nullptr && this->endTime_ == nullptr && this->ISP_ == nullptr && this->instanceId_ == nullptr
        && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->networkChargeType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr; };
    // allocatePublicIp Field Functions 
    bool hasAllocatePublicIp() const { return this->allocatePublicIp_ != nullptr;};
    void deleteAllocatePublicIp() { this->allocatePublicIp_ = nullptr;};
    inline bool getAllocatePublicIp() const { DARABONBA_PTR_GET_DEFAULT(allocatePublicIp_, false) };
    inline ModifyInstanceNetworkSpecRequest& setAllocatePublicIp(bool allocatePublicIp) { DARABONBA_PTR_SET_VALUE(allocatePublicIp_, allocatePublicIp) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyInstanceNetworkSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyInstanceNetworkSpecRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyInstanceNetworkSpecRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline ModifyInstanceNetworkSpecRequest& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceNetworkSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline ModifyInstanceNetworkSpecRequest& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline ModifyInstanceNetworkSpecRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // networkChargeType Field Functions 
    bool hasNetworkChargeType() const { return this->networkChargeType_ != nullptr;};
    void deleteNetworkChargeType() { this->networkChargeType_ = nullptr;};
    inline string getNetworkChargeType() const { DARABONBA_PTR_GET_DEFAULT(networkChargeType_, "") };
    inline ModifyInstanceNetworkSpecRequest& setNetworkChargeType(string networkChargeType) { DARABONBA_PTR_SET_VALUE(networkChargeType_, networkChargeType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceNetworkSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceNetworkSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceNetworkSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceNetworkSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyInstanceNetworkSpecRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Specifies whether to allocate a public IP address.
    // 
    // - true: allocates a public IP address.
    // - false: does not allocate a public IP address.
    // 
    // Default value: false.
    shared_ptr<bool> allocatePublicIp_ {};
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - true: After the bandwidth configuration is modified, the payment is automatically deducted. When you set the AutoPay parameter to true, make sure that your account has sufficient balance. If your account balance is insufficient, an abnormal order is generated. You cannot pay for the order on the ECS console. You can only cancel the order.
    // 
    // <props="china">
    // - false: After the bandwidth configuration is modified, only an order is generated and no payment is made. If your payment method has insufficient balance, you can set the AutoPay parameter to false to disable automatic payment. In this case, the API generates a normal unpaid order. You can log on to the [ECS console](https://ecs.console.aliyun.com) to pay for the order.
    // 
    // 
    // 
    // <props="intl">
    // - false: After the bandwidth configuration is modified, only an order is generated and no payment is made. If your payment method has insufficient balance, you can set the AutoPay parameter to false to disable automatic payment. In this case, the API generates a normal unpaid order. You can log on to the [ECS console](https://ecs.console.aliyun.com) to pay for the order.
    // 
    // 
    // 
    // Default value: true.
    shared_ptr<bool> autoPay_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The end time of the temporary bandwidth upgrade. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in UTC+0 time in the yyyy-MM-ddTHHZ format. The time must be accurate to the **hour** (HH).
    // 
    // > The interval between the end time and the start time of the temporary bandwidth upgrade must be greater than or equal to 3 hours.
    shared_ptr<string> endTime_ {};
    // > This parameter is in invitational preview and is not yet available for use.
    shared_ptr<string> ISP_ {};
    // The ID of the instance for which you want to modify the network configuration.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The maximum inbound public bandwidth. Unit: Mbit/s (Megabit per second). Valid values:
    // 
    // - If the purchased maximum outbound public bandwidth is less than or equal to 10 Mbit/s: 1 to 10. Default value: 10.
    // - If the purchased maximum outbound public bandwidth is greater than 10 Mbit/s: 1 to the value of `InternetMaxBandwidthOut`. Default value: the value of `InternetMaxBandwidthOut`.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s (Megabit per second). Valid values:
    // 
    // - Pay-by-traffic: 0 to 100.
    // 
    // - Pay-by-bandwidth:
    //   - Subscription instance: 0 to 200.
    //   - Pay-as-you-go instance: 0 to 100.
    // 
    // 
    // > The maximum outbound bandwidth per instance is also limited by the **Network Bandwidth Baseline/Burstable (Gbit/s)** metric of the ECS instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // The conversion target for the network billing method. Valid values:
    // 
    // - PayByBandwidth: pay-by-bandwidth.
    // - PayByTraffic: pay-by-traffic.
    // 
    // > In **pay-by-traffic** mode, the inbound and outbound bandwidth peaks are both bandwidth upper limits and are not guaranteed as committed service metrics. When resource contention occurs, the bandwidth peaks may be throttled. If your business requires guaranteed bandwidth, use the **pay-by-bandwidth** mode.
    shared_ptr<string> networkChargeType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The start time of the temporary bandwidth upgrade. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in UTC+0 time in the yyyy-MM-ddTHH:mmZ format. The time must be accurate to the **minute** (mm).
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
