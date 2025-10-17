// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEDEDICATEDHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEDEDICATEDHOSTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AllocateDedicatedHostsResponseBodyDedicatedHostIdSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AllocateDedicatedHostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateDedicatedHostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostIdSets, dedicatedHostIdSets_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateDedicatedHostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostIdSets, dedicatedHostIdSets_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocateDedicatedHostsResponseBody() = default ;
    AllocateDedicatedHostsResponseBody(const AllocateDedicatedHostsResponseBody &) = default ;
    AllocateDedicatedHostsResponseBody(AllocateDedicatedHostsResponseBody &&) = default ;
    AllocateDedicatedHostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateDedicatedHostsResponseBody() = default ;
    AllocateDedicatedHostsResponseBody& operator=(const AllocateDedicatedHostsResponseBody &) = default ;
    AllocateDedicatedHostsResponseBody& operator=(AllocateDedicatedHostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostIdSets_ == nullptr
        && return this->orderId_ == nullptr && return this->requestId_ == nullptr; };
    // dedicatedHostIdSets Field Functions 
    bool hasDedicatedHostIdSets() const { return this->dedicatedHostIdSets_ != nullptr;};
    void deleteDedicatedHostIdSets() { this->dedicatedHostIdSets_ = nullptr;};
    inline const AllocateDedicatedHostsResponseBodyDedicatedHostIdSets & dedicatedHostIdSets() const { DARABONBA_PTR_GET_CONST(dedicatedHostIdSets_, AllocateDedicatedHostsResponseBodyDedicatedHostIdSets) };
    inline AllocateDedicatedHostsResponseBodyDedicatedHostIdSets dedicatedHostIdSets() { DARABONBA_PTR_GET(dedicatedHostIdSets_, AllocateDedicatedHostsResponseBodyDedicatedHostIdSets) };
    inline AllocateDedicatedHostsResponseBody& setDedicatedHostIdSets(const AllocateDedicatedHostsResponseBodyDedicatedHostIdSets & dedicatedHostIdSets) { DARABONBA_PTR_SET_VALUE(dedicatedHostIdSets_, dedicatedHostIdSets) };
    inline AllocateDedicatedHostsResponseBody& setDedicatedHostIdSets(AllocateDedicatedHostsResponseBodyDedicatedHostIdSets && dedicatedHostIdSets) { DARABONBA_PTR_SET_RVALUE(dedicatedHostIdSets_, dedicatedHostIdSets) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline AllocateDedicatedHostsResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateDedicatedHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of dedicated host IDs.
    std::shared_ptr<AllocateDedicatedHostsResponseBodyDedicatedHostIdSets> dedicatedHostIdSets_ = nullptr;
    // The ID of the order.
    // 
    // >  This parameter has a return value only when the dedicated host is a subscription one (request parameter **ChargeType set to PrePaid**).
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
