// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
    };
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData(const DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData(DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData &&) = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& operator=(const DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& operator=(DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->description_ != nullptr && this->domainName_ != nullptr && this->domainStatus_ != nullptr && this->gmtCreated_ != nullptr && this->gmtModified_ != nullptr
        && this->resourceGroupId_ != nullptr && this->SSLProtocol_ != nullptr && this->sandbox_ != nullptr && this->sources_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // sandbox Field Functions 
    bool hasSandbox() const { return this->sandbox_ != nullptr;};
    void deleteSandbox() { this->sandbox_ = nullptr;};
    inline string sandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, "") };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setSandbox(string sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources & sources() const { DARABONBA_PTR_GET_CONST(sources_, Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources) };
    inline Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources sources() { DARABONBA_PTR_GET(sources_, Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources) };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setSources(const Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeDcdnIpaUserDomainsResponseBodyDomainsPageData& setSources(Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


  protected:
    // The CNAME assigned to the accelerated domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The reason why the accelerated domain name failed the review.
    std::shared_ptr<string> description_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the accelerated domain name. Valid values:
    // 
    // *   **online**: enabled
    // *   **offline**: disabled
    // *   **configuring**: configuring
    // *   **configure_failed**: configuration failed
    // *   **checking**: reviewing
    // *   **check_failed:** review failed
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The time when the accelerated domain name was added to Alibaba Cloud CDN.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the accelerated domain name was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of HTTPS.
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    // Indicates whether the accelerated domain name was in a sandbox.
    std::shared_ptr<string> sandbox_ = nullptr;
    // The information about the origin server.
    std::shared_ptr<Models::DescribeDcdnIpaUserDomainsResponseBodyDomainsPageDataSources> sources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
