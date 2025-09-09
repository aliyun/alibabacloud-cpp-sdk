// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODYSLBSUBDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODYSLBSUBDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDNSSLBSubDomainsResponseBodySlbSubDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDNSSLBSubDomainsResponseBodySlbSubDomains& obj) { 
      DARABONBA_PTR_TO_JSON(SlbSubDomain, slbSubDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDNSSLBSubDomainsResponseBodySlbSubDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(SlbSubDomain, slbSubDomain_);
    };
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomains() = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomains(const DescribeDNSSLBSubDomainsResponseBodySlbSubDomains &) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomains(DescribeDNSSLBSubDomainsResponseBodySlbSubDomains &&) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDNSSLBSubDomainsResponseBodySlbSubDomains() = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomains& operator=(const DescribeDNSSLBSubDomainsResponseBodySlbSubDomains &) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomains& operator=(DescribeDNSSLBSubDomainsResponseBodySlbSubDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->slbSubDomain_ != nullptr; };
    // slbSubDomain Field Functions 
    bool hasSlbSubDomain() const { return this->slbSubDomain_ != nullptr;};
    void deleteSlbSubDomain() { this->slbSubDomain_ = nullptr;};
    inline const vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain> & slbSubDomain() const { DARABONBA_PTR_GET_CONST(slbSubDomain_, vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain>) };
    inline vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain> slbSubDomain() { DARABONBA_PTR_GET(slbSubDomain_, vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain>) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomains& setSlbSubDomain(const vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain> & slbSubDomain) { DARABONBA_PTR_SET_VALUE(slbSubDomain_, slbSubDomain) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomains& setSlbSubDomain(vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain> && slbSubDomain) { DARABONBA_PTR_SET_RVALUE(slbSubDomain_, slbSubDomain) };


  protected:
    std::shared_ptr<vector<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain>> slbSubDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
