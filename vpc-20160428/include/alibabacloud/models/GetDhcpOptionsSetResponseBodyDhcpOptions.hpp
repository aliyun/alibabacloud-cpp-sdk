// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDHCPOPTIONSSETRESPONSEBODYDHCPOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETDHCPOPTIONSSETRESPONSEBODYDHCPOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetDhcpOptionsSetResponseBodyDhcpOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDhcpOptionsSetResponseBodyDhcpOptions& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameServers, domainNameServers_);
      DARABONBA_PTR_TO_JSON(Ipv6LeaseTime, ipv6LeaseTime_);
      DARABONBA_PTR_TO_JSON(LeaseTime, leaseTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDhcpOptionsSetResponseBodyDhcpOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameServers, domainNameServers_);
      DARABONBA_PTR_FROM_JSON(Ipv6LeaseTime, ipv6LeaseTime_);
      DARABONBA_PTR_FROM_JSON(LeaseTime, leaseTime_);
    };
    GetDhcpOptionsSetResponseBodyDhcpOptions() = default ;
    GetDhcpOptionsSetResponseBodyDhcpOptions(const GetDhcpOptionsSetResponseBodyDhcpOptions &) = default ;
    GetDhcpOptionsSetResponseBodyDhcpOptions(GetDhcpOptionsSetResponseBodyDhcpOptions &&) = default ;
    GetDhcpOptionsSetResponseBodyDhcpOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDhcpOptionsSetResponseBodyDhcpOptions() = default ;
    GetDhcpOptionsSetResponseBodyDhcpOptions& operator=(const GetDhcpOptionsSetResponseBodyDhcpOptions &) = default ;
    GetDhcpOptionsSetResponseBodyDhcpOptions& operator=(GetDhcpOptionsSetResponseBodyDhcpOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->domainNameServers_ != nullptr && this->ipv6LeaseTime_ != nullptr && this->leaseTime_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetDhcpOptionsSetResponseBodyDhcpOptions& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainNameServers Field Functions 
    bool hasDomainNameServers() const { return this->domainNameServers_ != nullptr;};
    void deleteDomainNameServers() { this->domainNameServers_ = nullptr;};
    inline string domainNameServers() const { DARABONBA_PTR_GET_DEFAULT(domainNameServers_, "") };
    inline GetDhcpOptionsSetResponseBodyDhcpOptions& setDomainNameServers(string domainNameServers) { DARABONBA_PTR_SET_VALUE(domainNameServers_, domainNameServers) };


    // ipv6LeaseTime Field Functions 
    bool hasIpv6LeaseTime() const { return this->ipv6LeaseTime_ != nullptr;};
    void deleteIpv6LeaseTime() { this->ipv6LeaseTime_ = nullptr;};
    inline string ipv6LeaseTime() const { DARABONBA_PTR_GET_DEFAULT(ipv6LeaseTime_, "") };
    inline GetDhcpOptionsSetResponseBodyDhcpOptions& setIpv6LeaseTime(string ipv6LeaseTime) { DARABONBA_PTR_SET_VALUE(ipv6LeaseTime_, ipv6LeaseTime) };


    // leaseTime Field Functions 
    bool hasLeaseTime() const { return this->leaseTime_ != nullptr;};
    void deleteLeaseTime() { this->leaseTime_ = nullptr;};
    inline string leaseTime() const { DARABONBA_PTR_GET_DEFAULT(leaseTime_, "") };
    inline GetDhcpOptionsSetResponseBodyDhcpOptions& setLeaseTime(string leaseTime) { DARABONBA_PTR_SET_VALUE(leaseTime_, leaseTime) };


  protected:
    // The suffix of the hostname.
    std::shared_ptr<string> domainName_ = nullptr;
    // The IP address of the DNS server.
    std::shared_ptr<string> domainNameServers_ = nullptr;
    // The lease time of the IPv6 addresses for the DHCP options set.
    // 
    // *   If you use hours as the unit, Valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **87600h**.
    // *   If you use days as the unit, Valid values are **1d to 49d** and **3650d to 7300d**. Default value: **3650d**.
    std::shared_ptr<string> ipv6LeaseTime_ = nullptr;
    // The lease time of the IPv4 addresses for the DHCP options set.
    // 
    // *   If you use hours as the unit, valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **87600h**.
    // *   If you use days as the unit, valid values are **1d to 49d** and **3650d to 7300d**. Default value: **3650d**.
    std::shared_ptr<string> leaseTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
