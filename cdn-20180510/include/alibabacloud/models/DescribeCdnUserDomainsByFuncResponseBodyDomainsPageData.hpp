// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(SslProtocol, sslProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(SslProtocol, sslProtocol_);
    };
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData() = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData(const DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData &) = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData(DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData &&) = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData() = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& operator=(const DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData &) = default ;
    DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& operator=(DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnType_ == nullptr
        && return this->cname_ == nullptr && return this->description_ == nullptr && return this->domainName_ == nullptr && return this->domainStatus_ == nullptr && return this->gmtCreated_ == nullptr
        && return this->gmtModified_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sources_ == nullptr && return this->sslProtocol_ == nullptr; };
    // cdnType Field Functions 
    bool hasCdnType() const { return this->cdnType_ != nullptr;};
    void deleteCdnType() { this->cdnType_ = nullptr;};
    inline string cdnType() const { DARABONBA_PTR_GET_DEFAULT(cdnType_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setCdnType(string cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources & sources() const { DARABONBA_PTR_GET_CONST(sources_, Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources) };
    inline Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources sources() { DARABONBA_PTR_GET(sources_, Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources) };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setSources(const Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setSources(Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // sslProtocol Field Functions 
    bool hasSslProtocol() const { return this->sslProtocol_ != nullptr;};
    void deleteSslProtocol() { this->sslProtocol_ = nullptr;};
    inline string sslProtocol() const { DARABONBA_PTR_GET_DEFAULT(sslProtocol_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomainsPageData& setSslProtocol(string sslProtocol) { DARABONBA_PTR_SET_VALUE(sslProtocol_, sslProtocol) };


  protected:
    // The type of workload accelerated by Alibaba Cloud CDN. Valid values:
    // 
    // *   **web**: image and small file distribution
    // *   **download**: large file distribution
    // *   **video**: on-demand video and audio streaming
    // *   **liveStream**: live streaming
    std::shared_ptr<string> cdnType_ = nullptr;
    // The CNAME assigned to the accelerated domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The description of the status.
    std::shared_ptr<string> description_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the accelerated domain name. Valid values:
    // 
    // *   **online**: The domain name is enabled.
    // *   **offline**: The domain is disabled.
    // *   **configuring**: The endpoint group is being configured.
    // *   **configure_failed**: The domain failed to be configured.
    // *   **checking**: The domain name is under review.
    // *   **check_failed**: The domain name failed the review.
    // *   **stopping**: The domain name is be disabled.
    // *   **deleting**: being deleted
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The time when the accelerated domain name was added to Alibaba Cloud CDN.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The last time when the accelerated domain was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the origin server.
    std::shared_ptr<Models::DescribeCdnUserDomainsByFuncResponseBodyDomainsPageDataSources> sources_ = nullptr;
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
