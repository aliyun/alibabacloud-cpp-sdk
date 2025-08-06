// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNIPV6ADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNIPV6ADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssignIpv6AddressesResponseBodyIpv6PrefixSets.hpp>
#include <alibabacloud/models/AssignIpv6AddressesResponseBodyIpv6Sets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AssignIpv6AddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignIpv6AddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssignIpv6AddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssignIpv6AddressesResponseBody() = default ;
    AssignIpv6AddressesResponseBody(const AssignIpv6AddressesResponseBody &) = default ;
    AssignIpv6AddressesResponseBody(AssignIpv6AddressesResponseBody &&) = default ;
    AssignIpv6AddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignIpv6AddressesResponseBody() = default ;
    AssignIpv6AddressesResponseBody& operator=(const AssignIpv6AddressesResponseBody &) = default ;
    AssignIpv6AddressesResponseBody& operator=(AssignIpv6AddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6PrefixSets_ != nullptr
        && this->ipv6Sets_ != nullptr && this->networkInterfaceId_ != nullptr && this->requestId_ != nullptr; };
    // ipv6PrefixSets Field Functions 
    bool hasIpv6PrefixSets() const { return this->ipv6PrefixSets_ != nullptr;};
    void deleteIpv6PrefixSets() { this->ipv6PrefixSets_ = nullptr;};
    inline const AssignIpv6AddressesResponseBodyIpv6PrefixSets & ipv6PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSets_, AssignIpv6AddressesResponseBodyIpv6PrefixSets) };
    inline AssignIpv6AddressesResponseBodyIpv6PrefixSets ipv6PrefixSets() { DARABONBA_PTR_GET(ipv6PrefixSets_, AssignIpv6AddressesResponseBodyIpv6PrefixSets) };
    inline AssignIpv6AddressesResponseBody& setIpv6PrefixSets(const AssignIpv6AddressesResponseBodyIpv6PrefixSets & ipv6PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSets_, ipv6PrefixSets) };
    inline AssignIpv6AddressesResponseBody& setIpv6PrefixSets(AssignIpv6AddressesResponseBodyIpv6PrefixSets && ipv6PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSets_, ipv6PrefixSets) };


    // ipv6Sets Field Functions 
    bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
    void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
    inline const AssignIpv6AddressesResponseBodyIpv6Sets & ipv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, AssignIpv6AddressesResponseBodyIpv6Sets) };
    inline AssignIpv6AddressesResponseBodyIpv6Sets ipv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, AssignIpv6AddressesResponseBodyIpv6Sets) };
    inline AssignIpv6AddressesResponseBody& setIpv6Sets(const AssignIpv6AddressesResponseBodyIpv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
    inline AssignIpv6AddressesResponseBody& setIpv6Sets(AssignIpv6AddressesResponseBodyIpv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline AssignIpv6AddressesResponseBody& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssignIpv6AddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IPv6 prefixes of the ENI.
    std::shared_ptr<AssignIpv6AddressesResponseBodyIpv6PrefixSets> ipv6PrefixSets_ = nullptr;
    // The IPv6 addresses assigned to the ENI.
    std::shared_ptr<AssignIpv6AddressesResponseBodyIpv6Sets> ipv6Sets_ = nullptr;
    // The ENI ID.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
