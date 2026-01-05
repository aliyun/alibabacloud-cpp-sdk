// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEDEDICATEDHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEDEDICATEDHOSTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DedicatedHostIdSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedHostIdSets& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedHostIdSets& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      };
      DedicatedHostIdSets() = default ;
      DedicatedHostIdSets(const DedicatedHostIdSets &) = default ;
      DedicatedHostIdSets(DedicatedHostIdSets &&) = default ;
      DedicatedHostIdSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DedicatedHostIdSets() = default ;
      DedicatedHostIdSets& operator=(const DedicatedHostIdSets &) = default ;
      DedicatedHostIdSets& operator=(DedicatedHostIdSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dedicatedHostId_ == nullptr; };
      // dedicatedHostId Field Functions 
      bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
      void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
      inline const vector<string> & getDedicatedHostId() const { DARABONBA_PTR_GET_CONST(dedicatedHostId_, vector<string>) };
      inline vector<string> getDedicatedHostId() { DARABONBA_PTR_GET(dedicatedHostId_, vector<string>) };
      inline DedicatedHostIdSets& setDedicatedHostId(const vector<string> & dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };
      inline DedicatedHostIdSets& setDedicatedHostId(vector<string> && dedicatedHostId) { DARABONBA_PTR_SET_RVALUE(dedicatedHostId_, dedicatedHostId) };


    protected:
      shared_ptr<vector<string>> dedicatedHostId_ {};
    };

    virtual bool empty() const override { return this->dedicatedHostIdSets_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // dedicatedHostIdSets Field Functions 
    bool hasDedicatedHostIdSets() const { return this->dedicatedHostIdSets_ != nullptr;};
    void deleteDedicatedHostIdSets() { this->dedicatedHostIdSets_ = nullptr;};
    inline const AllocateDedicatedHostsResponseBody::DedicatedHostIdSets & getDedicatedHostIdSets() const { DARABONBA_PTR_GET_CONST(dedicatedHostIdSets_, AllocateDedicatedHostsResponseBody::DedicatedHostIdSets) };
    inline AllocateDedicatedHostsResponseBody::DedicatedHostIdSets getDedicatedHostIdSets() { DARABONBA_PTR_GET(dedicatedHostIdSets_, AllocateDedicatedHostsResponseBody::DedicatedHostIdSets) };
    inline AllocateDedicatedHostsResponseBody& setDedicatedHostIdSets(const AllocateDedicatedHostsResponseBody::DedicatedHostIdSets & dedicatedHostIdSets) { DARABONBA_PTR_SET_VALUE(dedicatedHostIdSets_, dedicatedHostIdSets) };
    inline AllocateDedicatedHostsResponseBody& setDedicatedHostIdSets(AllocateDedicatedHostsResponseBody::DedicatedHostIdSets && dedicatedHostIdSets) { DARABONBA_PTR_SET_RVALUE(dedicatedHostIdSets_, dedicatedHostIdSets) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline AllocateDedicatedHostsResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateDedicatedHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of dedicated host IDs.
    shared_ptr<AllocateDedicatedHostsResponseBody::DedicatedHostIdSets> dedicatedHostIdSets_ {};
    // The ID of the order.
    // 
    // >  This parameter has a return value only when the dedicated host is a subscription one (request parameter **ChargeType set to PrePaid**).
    shared_ptr<string> orderId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
