// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPHYSICALCONNECTIONOCCUPANCYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPHYSICALCONNECTIONOCCUPANCYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreatePhysicalConnectionOccupancyOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePhysicalConnectionOccupancyOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePhysicalConnectionOccupancyOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreatePhysicalConnectionOccupancyOrderRequest() = default ;
    CreatePhysicalConnectionOccupancyOrderRequest(const CreatePhysicalConnectionOccupancyOrderRequest &) = default ;
    CreatePhysicalConnectionOccupancyOrderRequest(CreatePhysicalConnectionOccupancyOrderRequest &&) = default ;
    CreatePhysicalConnectionOccupancyOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePhysicalConnectionOccupancyOrderRequest() = default ;
    CreatePhysicalConnectionOccupancyOrderRequest& operator=(const CreatePhysicalConnectionOccupancyOrderRequest &) = default ;
    CreatePhysicalConnectionOccupancyOrderRequest& operator=(CreatePhysicalConnectionOccupancyOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->clientToken_ != nullptr && this->instanceChargeType_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->period_ != nullptr
        && this->physicalConnectionId_ != nullptr && this->pricingCycle_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string physicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreatePhysicalConnectionOccupancyOrderRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to enable automatic payments. Valid values:
    // 
    // *   **true**: yes Make sure that you have a sufficient balance in your account. Otherwise, your order becomes invalid and is automatically canceled.
    // *   **false**: disables automatic payment. This is the default value.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The billing method. Set the value to
    // 
    // **PrePaid**, which specifies the subscription billing method. If you choose this billing method, make sure that your Alibaba Cloud account supports balance payments or credit payments.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The subscription duration.
    // 
    // *   If **PricingCycle** is set to **Month**, set **Period** to a value from **1 to 9**.
    // *   If **PricingCycle** is set to **Year**, set **Period** to a value from **1 to 5**.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The ID of the Express Connect circuit.
    // 
    // This parameter is required.
    std::shared_ptr<string> physicalConnectionId_ = nullptr;
    // The billing cycle of the subscription. Valid values:
    // 
    // *   **Month** (default)
    // *   **Year**
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
