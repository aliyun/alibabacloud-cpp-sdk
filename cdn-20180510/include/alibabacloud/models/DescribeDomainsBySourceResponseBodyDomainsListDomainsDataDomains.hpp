// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLISTDOMAINSDATADOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLISTDOMAINSDATADOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains& obj) { 
      DARABONBA_PTR_TO_JSON(domainNames, domainNames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(domainNames, domainNames_);
    };
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains() = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains(const DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains(DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains &&) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains() = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains& operator=(const DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains& operator=(DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainNames_ != nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline const vector<string> & domainNames() const { DARABONBA_PTR_GET_CONST(domainNames_, vector<string>) };
    inline vector<string> domainNames() { DARABONBA_PTR_GET(domainNames_, vector<string>) };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains& setDomainNames(const vector<string> & domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains& setDomainNames(vector<string> && domainNames) { DARABONBA_PTR_SET_RVALUE(domainNames_, domainNames) };


  protected:
    std::shared_ptr<vector<string>> domainNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
