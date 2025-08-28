// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateEipAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateEipAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateEipAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    AllocateEipAddressResponseBody() = default ;
    AllocateEipAddressResponseBody(const AllocateEipAddressResponseBody &) = default ;
    AllocateEipAddressResponseBody(AllocateEipAddressResponseBody &&) = default ;
    AllocateEipAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateEipAddressResponseBody() = default ;
    AllocateEipAddressResponseBody& operator=(const AllocateEipAddressResponseBody &) = default ;
    AllocateEipAddressResponseBody& operator=(AllocateEipAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationId_ != nullptr
        && this->eipAddress_ != nullptr && this->orderId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline AllocateEipAddressResponseBody& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline string eipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
    inline AllocateEipAddressResponseBody& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline AllocateEipAddressResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateEipAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AllocateEipAddressResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The EIP ID.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The EIP that is allocated. This parameter is returned only when **InstanceChargeType** is set to **PostPaid**.
    std::shared_ptr<string> eipAddress_ = nullptr;
    // The order ID. This parameter is returned only when **InstanceChargeType** is set to **PrePaid**.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group. This parameter is returned only when **InstanceChargeType** is set to **PostPaid**.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
