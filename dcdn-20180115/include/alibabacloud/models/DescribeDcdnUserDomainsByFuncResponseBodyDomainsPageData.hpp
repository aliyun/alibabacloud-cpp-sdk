// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(SslProtocol, sslProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(SslProtocol, sslProtocol_);
    };
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData() = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData(const DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData &) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData(DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData &&) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData() = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& operator=(const DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData &) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& operator=(DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->description_ != nullptr && this->domainName_ != nullptr && this->domainStatus_ != nullptr && this->gmtCreated_ != nullptr && this->gmtModified_ != nullptr
        && this->resourceGroupId_ != nullptr && this->sandbox_ != nullptr && this->sources_ != nullptr && this->sslProtocol_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sandbox Field Functions 
    bool hasSandbox() const { return this->sandbox_ != nullptr;};
    void deleteSandbox() { this->sandbox_ = nullptr;};
    inline string sandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setSandbox(string sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources & sources() const { DARABONBA_PTR_GET_CONST(sources_, Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources) };
    inline Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources sources() { DARABONBA_PTR_GET(sources_, Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources) };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setSources(const Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setSources(Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // sslProtocol Field Functions 
    bool hasSslProtocol() const { return this->sslProtocol_ != nullptr;};
    void deleteSslProtocol() { this->sslProtocol_ = nullptr;};
    inline string sslProtocol() const { DARABONBA_PTR_GET_DEFAULT(sslProtocol_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageData& setSslProtocol(string sslProtocol) { DARABONBA_PTR_SET_VALUE(sslProtocol_, sslProtocol) };


  protected:
    // The CNAME assigned to the accelerated domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The reason why the accelerated domain name failed the review.
    std::shared_ptr<string> description_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the accelerated domain name. Valid values:
    // 
    // *   **online**
    // *   **offline**
    // *   **configuring**
    // *   **configure_failed**
    // *   **checking**
    // *   **check_failed**
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The time when the accelerated domain name was added to Dynamic Content Delivery Network (DCDN).
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the accelerated domain name was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the accelerated domain name was in a sandbox.
    std::shared_ptr<string> sandbox_ = nullptr;
    // The information about the origin servers.
    std::shared_ptr<Models::DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSources> sources_ = nullptr;
    // Indicates whether HTTPS is enabled. Valid values:
    // 
    // *   **on**: HTTPS is enabled.
    // *   **off**: HTTPS is disabled.
    std::shared_ptr<string> sslProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
