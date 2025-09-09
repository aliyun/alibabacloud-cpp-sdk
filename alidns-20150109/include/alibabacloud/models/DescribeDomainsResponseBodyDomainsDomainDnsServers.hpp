// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSDOMAINDNSSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSDOMAINDNSSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainsResponseBodyDomainsDomainDnsServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomainsDomainDnsServers& obj) { 
      DARABONBA_PTR_TO_JSON(DnsServer, dnsServer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomainsDomainDnsServers& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsServer, dnsServer_);
    };
    DescribeDomainsResponseBodyDomainsDomainDnsServers() = default ;
    DescribeDomainsResponseBodyDomainsDomainDnsServers(const DescribeDomainsResponseBodyDomainsDomainDnsServers &) = default ;
    DescribeDomainsResponseBodyDomainsDomainDnsServers(DescribeDomainsResponseBodyDomainsDomainDnsServers &&) = default ;
    DescribeDomainsResponseBodyDomainsDomainDnsServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomainsDomainDnsServers() = default ;
    DescribeDomainsResponseBodyDomainsDomainDnsServers& operator=(const DescribeDomainsResponseBodyDomainsDomainDnsServers &) = default ;
    DescribeDomainsResponseBodyDomainsDomainDnsServers& operator=(DescribeDomainsResponseBodyDomainsDomainDnsServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsServer_ != nullptr; };
    // dnsServer Field Functions 
    bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
    void deleteDnsServer() { this->dnsServer_ = nullptr;};
    inline const vector<string> & dnsServer() const { DARABONBA_PTR_GET_CONST(dnsServer_, vector<string>) };
    inline vector<string> dnsServer() { DARABONBA_PTR_GET(dnsServer_, vector<string>) };
    inline DescribeDomainsResponseBodyDomainsDomainDnsServers& setDnsServer(const vector<string> & dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };
    inline DescribeDomainsResponseBodyDomainsDomainDnsServers& setDnsServer(vector<string> && dnsServer) { DARABONBA_PTR_SET_RVALUE(dnsServer_, dnsServer) };


  protected:
    std::shared_ptr<vector<string>> dnsServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
