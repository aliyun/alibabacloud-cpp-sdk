// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLISTDOMAINSDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLISTDOMAINSDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos.hpp>
#include <alibabacloud/models/DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsBySourceResponseBodyDomainsListDomainsData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsBySourceResponseBodyDomainsListDomainsData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfos, domainInfos_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsBySourceResponseBodyDomainsListDomainsData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfos, domainInfos_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeDomainsBySourceResponseBodyDomainsListDomainsData() = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsData(const DescribeDomainsBySourceResponseBodyDomainsListDomainsData &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsData(DescribeDomainsBySourceResponseBodyDomainsListDomainsData &&) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsBySourceResponseBodyDomainsListDomainsData() = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsData& operator=(const DescribeDomainsBySourceResponseBodyDomainsListDomainsData &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsData& operator=(DescribeDomainsBySourceResponseBodyDomainsListDomainsData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainInfos_ == nullptr
        && return this->domains_ == nullptr && return this->source_ == nullptr; };
    // domainInfos Field Functions 
    bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
    void deleteDomainInfos() { this->domainInfos_ = nullptr;};
    inline const Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos & domainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos) };
    inline Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos domainInfos() { DARABONBA_PTR_GET(domainInfos_, Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos) };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsData& setDomainInfos(const Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsData& setDomainInfos(Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains & domains() const { DARABONBA_PTR_GET_CONST(domains_, Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains) };
    inline Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains domains() { DARABONBA_PTR_GET(domains_, Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains) };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsData& setDomains(const Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsData& setDomains(Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // Information about the domain name.
    std::shared_ptr<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfos> domainInfos_ = nullptr;
    // The domain names that correspond to each origin server.
    std::shared_ptr<Models::DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomains> domains_ = nullptr;
    // The origin server.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
