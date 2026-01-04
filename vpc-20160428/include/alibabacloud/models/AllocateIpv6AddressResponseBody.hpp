// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEIPV6ADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEIPV6ADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateIpv6AddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateIpv6AddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressId, ipv6AddressId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateIpv6AddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressId, ipv6AddressId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    AllocateIpv6AddressResponseBody() = default ;
    AllocateIpv6AddressResponseBody(const AllocateIpv6AddressResponseBody &) = default ;
    AllocateIpv6AddressResponseBody(AllocateIpv6AddressResponseBody &&) = default ;
    AllocateIpv6AddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateIpv6AddressResponseBody() = default ;
    AllocateIpv6AddressResponseBody& operator=(const AllocateIpv6AddressResponseBody &) = default ;
    AllocateIpv6AddressResponseBody& operator=(AllocateIpv6AddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6Address_ == nullptr
        && this->ipv6AddressId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
    inline AllocateIpv6AddressResponseBody& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


    // ipv6AddressId Field Functions 
    bool hasIpv6AddressId() const { return this->ipv6AddressId_ != nullptr;};
    void deleteIpv6AddressId() { this->ipv6AddressId_ = nullptr;};
    inline string getIpv6AddressId() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressId_, "") };
    inline AllocateIpv6AddressResponseBody& setIpv6AddressId(string ipv6AddressId) { DARABONBA_PTR_SET_VALUE(ipv6AddressId_, ipv6AddressId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateIpv6AddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AllocateIpv6AddressResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The IPv6 address.
    shared_ptr<string> ipv6Address_ {};
    // The ID of the IPv6 address.
    shared_ptr<string> ipv6AddressId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
