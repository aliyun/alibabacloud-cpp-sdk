// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes.hpp>
#include <alibabacloud/models/DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes.hpp>
#include <alibabacloud/models/DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes.hpp>
#include <alibabacloud/models/DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmMonitorAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainIpv4IspCityNodes, domainIpv4IspCityNodes_);
      DARABONBA_PTR_TO_JSON(DomainIpv6IspCityNodes, domainIpv6IspCityNodes_);
      DARABONBA_PTR_TO_JSON(Ipv4IspCityNodes, ipv4IspCityNodes_);
      DARABONBA_PTR_TO_JSON(Ipv6IspCityNodes, ipv6IspCityNodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainIpv4IspCityNodes, domainIpv4IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(DomainIpv6IspCityNodes, domainIpv6IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(Ipv4IspCityNodes, ipv4IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(Ipv6IspCityNodes, ipv6IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDnsGtmMonitorAvailableConfigResponseBody() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody(const DescribeDnsGtmMonitorAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody(DescribeDnsGtmMonitorAvailableConfigResponseBody &&) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorAvailableConfigResponseBody() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody& operator=(const DescribeDnsGtmMonitorAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBody& operator=(DescribeDnsGtmMonitorAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainIpv4IspCityNodes_ == nullptr
        && return this->domainIpv6IspCityNodes_ == nullptr && return this->ipv4IspCityNodes_ == nullptr && return this->ipv6IspCityNodes_ == nullptr && return this->requestId_ == nullptr; };
    // domainIpv4IspCityNodes Field Functions 
    bool hasDomainIpv4IspCityNodes() const { return this->domainIpv4IspCityNodes_ != nullptr;};
    void deleteDomainIpv4IspCityNodes() { this->domainIpv4IspCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes & domainIpv4IspCityNodes() const { DARABONBA_PTR_GET_CONST(domainIpv4IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes domainIpv4IspCityNodes() { DARABONBA_PTR_GET(domainIpv4IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setDomainIpv4IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes & domainIpv4IspCityNodes) { DARABONBA_PTR_SET_VALUE(domainIpv4IspCityNodes_, domainIpv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setDomainIpv4IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes && domainIpv4IspCityNodes) { DARABONBA_PTR_SET_RVALUE(domainIpv4IspCityNodes_, domainIpv4IspCityNodes) };


    // domainIpv6IspCityNodes Field Functions 
    bool hasDomainIpv6IspCityNodes() const { return this->domainIpv6IspCityNodes_ != nullptr;};
    void deleteDomainIpv6IspCityNodes() { this->domainIpv6IspCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes & domainIpv6IspCityNodes() const { DARABONBA_PTR_GET_CONST(domainIpv6IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes domainIpv6IspCityNodes() { DARABONBA_PTR_GET(domainIpv6IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setDomainIpv6IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes & domainIpv6IspCityNodes) { DARABONBA_PTR_SET_VALUE(domainIpv6IspCityNodes_, domainIpv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setDomainIpv6IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes && domainIpv6IspCityNodes) { DARABONBA_PTR_SET_RVALUE(domainIpv6IspCityNodes_, domainIpv6IspCityNodes) };


    // ipv4IspCityNodes Field Functions 
    bool hasIpv4IspCityNodes() const { return this->ipv4IspCityNodes_ != nullptr;};
    void deleteIpv4IspCityNodes() { this->ipv4IspCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes & ipv4IspCityNodes() const { DARABONBA_PTR_GET_CONST(ipv4IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes ipv4IspCityNodes() { DARABONBA_PTR_GET(ipv4IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setIpv4IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes & ipv4IspCityNodes) { DARABONBA_PTR_SET_VALUE(ipv4IspCityNodes_, ipv4IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setIpv4IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes && ipv4IspCityNodes) { DARABONBA_PTR_SET_RVALUE(ipv4IspCityNodes_, ipv4IspCityNodes) };


    // ipv6IspCityNodes Field Functions 
    bool hasIpv6IspCityNodes() const { return this->ipv6IspCityNodes_ != nullptr;};
    void deleteIpv6IspCityNodes() { this->ipv6IspCityNodes_ = nullptr;};
    inline const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes & ipv6IspCityNodes() const { DARABONBA_PTR_GET_CONST(ipv6IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes ipv6IspCityNodes() { DARABONBA_PTR_GET(ipv6IspCityNodes_, DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setIpv6IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes & ipv6IspCityNodes) { DARABONBA_PTR_SET_VALUE(ipv6IspCityNodes_, ipv6IspCityNodes) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setIpv6IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes && ipv6IspCityNodes) { DARABONBA_PTR_SET_RVALUE(ipv6IspCityNodes_, ipv6IspCityNodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The nodes that perform health checks on domain names that use public IPv4 addresses.
    std::shared_ptr<DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes> domainIpv4IspCityNodes_ = nullptr;
    // The nodes that perform health checks on domain names that use public IPv6 addresses.
    std::shared_ptr<DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes> domainIpv6IspCityNodes_ = nullptr;
    // The nodes that perform health checks on public IPv4 addresses.
    std::shared_ptr<DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes> ipv4IspCityNodes_ = nullptr;
    // The nodes that perform health checks on public IPv6 addresses.
    std::shared_ptr<DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes> ipv6IspCityNodes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
