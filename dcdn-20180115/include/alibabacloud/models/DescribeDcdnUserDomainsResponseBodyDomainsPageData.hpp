// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnUserDomainsResponseBodyDomainsPageDataSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserDomainsResponseBodyDomainsPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
    };
    DescribeDcdnUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeDcdnUserDomainsResponseBodyDomainsPageData(const DescribeDcdnUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeDcdnUserDomainsResponseBodyDomainsPageData(DescribeDcdnUserDomainsResponseBodyDomainsPageData &&) = default ;
    DescribeDcdnUserDomainsResponseBodyDomainsPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeDcdnUserDomainsResponseBodyDomainsPageData& operator=(const DescribeDcdnUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeDcdnUserDomainsResponseBodyDomainsPageData& operator=(DescribeDcdnUserDomainsResponseBodyDomainsPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->description_ != nullptr && this->domainId_ != nullptr && this->domainName_ != nullptr && this->domainStatus_ != nullptr && this->functionType_ != nullptr
        && this->gmtCreated_ != nullptr && this->gmtModified_ != nullptr && this->resourceGroupId_ != nullptr && this->SSLProtocol_ != nullptr && this->sandbox_ != nullptr
        && this->scene_ != nullptr && this->sources_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // sandbox Field Functions 
    bool hasSandbox() const { return this->sandbox_ != nullptr;};
    void deleteSandbox() { this->sandbox_ = nullptr;};
    inline string sandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setSandbox(string sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const Models::DescribeDcdnUserDomainsResponseBodyDomainsPageDataSources & sources() const { DARABONBA_PTR_GET_CONST(sources_, Models::DescribeDcdnUserDomainsResponseBodyDomainsPageDataSources) };
    inline Models::DescribeDcdnUserDomainsResponseBodyDomainsPageDataSources sources() { DARABONBA_PTR_GET(sources_, Models::DescribeDcdnUserDomainsResponseBodyDomainsPageDataSources) };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setSources(const Models::DescribeDcdnUserDomainsResponseBodyDomainsPageDataSources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeDcdnUserDomainsResponseBodyDomainsPageData& setSources(Models::DescribeDcdnUserDomainsResponseBodyDomainsPageDataSources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


  protected:
    // The CNAME of the domain.
    std::shared_ptr<string> cname_ = nullptr;
    // The reason why the domain failed the review.
    std::shared_ptr<string> description_ = nullptr;
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The domain status.
    // 
    // *   **online**: The domain is active.
    // *   **offline**: The domain is suspended.
    // *   **configuring**: The domain is being configured.
    // *   **configure_failed**: The domain failed to be configured.
    // *   **checking**: The domain is under review.
    // *   **check_failed**: The domain failed the review.
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The computing service type. Valid values:
    // 
    // *   **routine**
    // *   **image**
    // *   **cloudFunction**
    std::shared_ptr<string> functionType_ = nullptr;
    // The time when the domain was added to DCDN.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the domain was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether HTTPS was enabled.
    // 
    // *   **on**: enabled.
    // *   **off**: disabled.
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    // The sandbox status.
    std::shared_ptr<string> sandbox_ = nullptr;
    // The acceleration scenario. Valid values:
    // 
    // *   **apiscene**: accelerates response to API calls.
    // *   **webservicescene**: accelerates content delivery for websites.
    // *   **staticscene**: accelerates the delivery of videos, images, and text.
    // *   **If you leave this parameter empty, no scenarios are supported.
    std::shared_ptr<string> scene_ = nullptr;
    // The information about the origin servers.
    std::shared_ptr<Models::DescribeDcdnUserDomainsResponseBodyDomainsPageDataSources> sources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
