// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLISTDOMAINSDATADOMAININFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLISTDOMAINSDATADOMAININFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos& obj) { 
      DARABONBA_PTR_TO_JSON(domainInfo, domainInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(domainInfo, domainInfo_);
    };
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos() = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos(const DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos(DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos &&) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos() = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos& operator=(const DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos& operator=(DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainInfo_ != nullptr; };
    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline const vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo> & domainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo>) };
    inline vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo> domainInfo() { DARABONBA_PTR_GET(domainInfo_, vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo>) };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos& setDomainInfo(const vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo> & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos& setDomainInfo(vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo> && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo>> domainInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
