// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNIPV6ADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNIPV6ADDRESSESRESPONSEBODY_HPP_
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
    class Ipv6Sets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6Sets& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6Sets& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      };
      Ipv6Sets() = default ;
      Ipv6Sets(const Ipv6Sets &) = default ;
      Ipv6Sets(Ipv6Sets &&) = default ;
      Ipv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6Sets() = default ;
      Ipv6Sets& operator=(const Ipv6Sets &) = default ;
      Ipv6Sets& operator=(Ipv6Sets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipv6Address_ == nullptr; };
      // ipv6Address Field Functions 
      bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
      void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
      inline const vector<string> & getIpv6Address() const { DARABONBA_PTR_GET_CONST(ipv6Address_, vector<string>) };
      inline vector<string> getIpv6Address() { DARABONBA_PTR_GET(ipv6Address_, vector<string>) };
      inline Ipv6Sets& setIpv6Address(const vector<string> & ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };
      inline Ipv6Sets& setIpv6Address(vector<string> && ipv6Address) { DARABONBA_PTR_SET_RVALUE(ipv6Address_, ipv6Address) };


    protected:
      shared_ptr<vector<string>> ipv6Address_ {};
    };

    class Ipv6PrefixSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6PrefixSets& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6Prefix, ipv6Prefix_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6PrefixSets& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6Prefix, ipv6Prefix_);
      };
      Ipv6PrefixSets() = default ;
      Ipv6PrefixSets(const Ipv6PrefixSets &) = default ;
      Ipv6PrefixSets(Ipv6PrefixSets &&) = default ;
      Ipv6PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6PrefixSets() = default ;
      Ipv6PrefixSets& operator=(const Ipv6PrefixSets &) = default ;
      Ipv6PrefixSets& operator=(Ipv6PrefixSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipv6Prefix_ == nullptr; };
      // ipv6Prefix Field Functions 
      bool hasIpv6Prefix() const { return this->ipv6Prefix_ != nullptr;};
      void deleteIpv6Prefix() { this->ipv6Prefix_ = nullptr;};
      inline const vector<string> & getIpv6Prefix() const { DARABONBA_PTR_GET_CONST(ipv6Prefix_, vector<string>) };
      inline vector<string> getIpv6Prefix() { DARABONBA_PTR_GET(ipv6Prefix_, vector<string>) };
      inline Ipv6PrefixSets& setIpv6Prefix(const vector<string> & ipv6Prefix) { DARABONBA_PTR_SET_VALUE(ipv6Prefix_, ipv6Prefix) };
      inline Ipv6PrefixSets& setIpv6Prefix(vector<string> && ipv6Prefix) { DARABONBA_PTR_SET_RVALUE(ipv6Prefix_, ipv6Prefix) };


    protected:
      shared_ptr<vector<string>> ipv6Prefix_ {};
    };

    virtual bool empty() const override { return this->ipv6PrefixSets_ == nullptr
        && this->ipv6Sets_ == nullptr && this->networkInterfaceId_ == nullptr && this->requestId_ == nullptr; };
    // ipv6PrefixSets Field Functions 
    bool hasIpv6PrefixSets() const { return this->ipv6PrefixSets_ != nullptr;};
    void deleteIpv6PrefixSets() { this->ipv6PrefixSets_ = nullptr;};
    inline const AssignIpv6AddressesResponseBody::Ipv6PrefixSets & getIpv6PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSets_, AssignIpv6AddressesResponseBody::Ipv6PrefixSets) };
    inline AssignIpv6AddressesResponseBody::Ipv6PrefixSets getIpv6PrefixSets() { DARABONBA_PTR_GET(ipv6PrefixSets_, AssignIpv6AddressesResponseBody::Ipv6PrefixSets) };
    inline AssignIpv6AddressesResponseBody& setIpv6PrefixSets(const AssignIpv6AddressesResponseBody::Ipv6PrefixSets & ipv6PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSets_, ipv6PrefixSets) };
    inline AssignIpv6AddressesResponseBody& setIpv6PrefixSets(AssignIpv6AddressesResponseBody::Ipv6PrefixSets && ipv6PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSets_, ipv6PrefixSets) };


    // ipv6Sets Field Functions 
    bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
    void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
    inline const AssignIpv6AddressesResponseBody::Ipv6Sets & getIpv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, AssignIpv6AddressesResponseBody::Ipv6Sets) };
    inline AssignIpv6AddressesResponseBody::Ipv6Sets getIpv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, AssignIpv6AddressesResponseBody::Ipv6Sets) };
    inline AssignIpv6AddressesResponseBody& setIpv6Sets(const AssignIpv6AddressesResponseBody::Ipv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
    inline AssignIpv6AddressesResponseBody& setIpv6Sets(AssignIpv6AddressesResponseBody::Ipv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline AssignIpv6AddressesResponseBody& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssignIpv6AddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IPv6 prefixes of the ENI.
    shared_ptr<AssignIpv6AddressesResponseBody::Ipv6PrefixSets> ipv6PrefixSets_ {};
    // The IPv6 addresses assigned to the ENI.
    shared_ptr<AssignIpv6AddressesResponseBody::Ipv6Sets> ipv6Sets_ {};
    // The ENI ID.
    shared_ptr<string> networkInterfaceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
