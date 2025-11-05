// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserDomainsResponseBodyDomainsPageDataSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserDomainsResponseBodyDomainsPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Coverage, coverage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(SslProtocol, sslProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(SslProtocol, sslProtocol_);
    };
    DescribeUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeUserDomainsResponseBodyDomainsPageData(const DescribeUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeUserDomainsResponseBodyDomainsPageData(DescribeUserDomainsResponseBodyDomainsPageData &&) = default ;
    DescribeUserDomainsResponseBodyDomainsPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeUserDomainsResponseBodyDomainsPageData& operator=(const DescribeUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeUserDomainsResponseBodyDomainsPageData& operator=(DescribeUserDomainsResponseBodyDomainsPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnType_ == nullptr
        && return this->cname_ == nullptr && return this->coverage_ == nullptr && return this->description_ == nullptr && return this->domainId_ == nullptr && return this->domainName_ == nullptr
        && return this->domainStatus_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sandbox_ == nullptr
        && return this->sources_ == nullptr && return this->sslProtocol_ == nullptr; };
    // cdnType Field Functions 
    bool hasCdnType() const { return this->cdnType_ != nullptr;};
    void deleteCdnType() { this->cdnType_ = nullptr;};
    inline string cdnType() const { DARABONBA_PTR_GET_DEFAULT(cdnType_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setCdnType(string cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string coverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sandbox Field Functions 
    bool hasSandbox() const { return this->sandbox_ != nullptr;};
    void deleteSandbox() { this->sandbox_ = nullptr;};
    inline string sandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setSandbox(string sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const Models::DescribeUserDomainsResponseBodyDomainsPageDataSources & sources() const { DARABONBA_PTR_GET_CONST(sources_, Models::DescribeUserDomainsResponseBodyDomainsPageDataSources) };
    inline Models::DescribeUserDomainsResponseBodyDomainsPageDataSources sources() { DARABONBA_PTR_GET(sources_, Models::DescribeUserDomainsResponseBodyDomainsPageDataSources) };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setSources(const Models::DescribeUserDomainsResponseBodyDomainsPageDataSources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setSources(Models::DescribeUserDomainsResponseBodyDomainsPageDataSources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // sslProtocol Field Functions 
    bool hasSslProtocol() const { return this->sslProtocol_ != nullptr;};
    void deleteSslProtocol() { this->sslProtocol_ = nullptr;};
    inline string sslProtocol() const { DARABONBA_PTR_GET_DEFAULT(sslProtocol_, "") };
    inline DescribeUserDomainsResponseBodyDomainsPageData& setSslProtocol(string sslProtocol) { DARABONBA_PTR_SET_VALUE(sslProtocol_, sslProtocol) };


  protected:
    // The type of the workload accelerated by Alibaba Cloud CDN. Valid values:
    // 
    // *   **web**: images and small files
    // *   **download**: large files
    // *   **video**: on-demand video and audio streaming
    std::shared_ptr<string> cdnType_ = nullptr;
    // The CNAME assigned to the accelerated domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The acceleration region. Valid values:
    // 
    // *   **domestic**: Chinese mainland
    // *   **global**: global
    // *   **overseas**: outside the Chinese mainland
    std::shared_ptr<string> coverage_ = nullptr;
    // The information about Internet Content Provider (ICP) filing.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the accelerated domain name.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The accelerated domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the accelerated domain name. Valid values:
    // 
    // *   **online**
    // *   **offline**
    // *   **configuring**
    // *   **configure_failed**
    // *   **checking**
    // *   **check_failed**
    // *   **stopping**
    // *   **deleting**
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The time when the accelerated domain name was added.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the accelerated domain name was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the accelerated domain name is in a sandbox.
    std::shared_ptr<string> sandbox_ = nullptr;
    // The information about the origin server.
    std::shared_ptr<Models::DescribeUserDomainsResponseBodyDomainsPageDataSources> sources_ = nullptr;
    // Indicates whether HTTPS is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> sslProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
