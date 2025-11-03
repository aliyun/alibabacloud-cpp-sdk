// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEIPV6INTERNETBANDWIDTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEIPV6INTERNETBANDWIDTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateIpv6InternetBandwidthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateIpv6InternetBandwidthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InternetBandwidthId, internetBandwidthId_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressId, ipv6AddressId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateIpv6InternetBandwidthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetBandwidthId, internetBandwidthId_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressId, ipv6AddressId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocateIpv6InternetBandwidthResponseBody() = default ;
    AllocateIpv6InternetBandwidthResponseBody(const AllocateIpv6InternetBandwidthResponseBody &) = default ;
    AllocateIpv6InternetBandwidthResponseBody(AllocateIpv6InternetBandwidthResponseBody &&) = default ;
    AllocateIpv6InternetBandwidthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateIpv6InternetBandwidthResponseBody() = default ;
    AllocateIpv6InternetBandwidthResponseBody& operator=(const AllocateIpv6InternetBandwidthResponseBody &) = default ;
    AllocateIpv6InternetBandwidthResponseBody& operator=(AllocateIpv6InternetBandwidthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetBandwidthId_ == nullptr
        && return this->ipv6AddressId_ == nullptr && return this->requestId_ == nullptr; };
    // internetBandwidthId Field Functions 
    bool hasInternetBandwidthId() const { return this->internetBandwidthId_ != nullptr;};
    void deleteInternetBandwidthId() { this->internetBandwidthId_ = nullptr;};
    inline string internetBandwidthId() const { DARABONBA_PTR_GET_DEFAULT(internetBandwidthId_, "") };
    inline AllocateIpv6InternetBandwidthResponseBody& setInternetBandwidthId(string internetBandwidthId) { DARABONBA_PTR_SET_VALUE(internetBandwidthId_, internetBandwidthId) };


    // ipv6AddressId Field Functions 
    bool hasIpv6AddressId() const { return this->ipv6AddressId_ != nullptr;};
    void deleteIpv6AddressId() { this->ipv6AddressId_ = nullptr;};
    inline string ipv6AddressId() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressId_, "") };
    inline AllocateIpv6InternetBandwidthResponseBody& setIpv6AddressId(string ipv6AddressId) { DARABONBA_PTR_SET_VALUE(ipv6AddressId_, ipv6AddressId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateIpv6InternetBandwidthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the Internet bandwidth that you purchased for the IPv6 gateway.
    std::shared_ptr<string> internetBandwidthId_ = nullptr;
    // The ID of the IPv6 address.
    std::shared_ptr<string> ipv6AddressId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
