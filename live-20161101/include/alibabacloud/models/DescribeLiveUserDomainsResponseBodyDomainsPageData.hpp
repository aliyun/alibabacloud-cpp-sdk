// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserDomainsResponseBodyDomainsPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LiveDomainStatus, liveDomainStatus_);
      DARABONBA_PTR_TO_JSON(LiveDomainType, liveDomainType_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LiveDomainStatus, liveDomainStatus_);
      DARABONBA_PTR_FROM_JSON(LiveDomainType, liveDomainType_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeLiveUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeLiveUserDomainsResponseBodyDomainsPageData(const DescribeLiveUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeLiveUserDomainsResponseBodyDomainsPageData(DescribeLiveUserDomainsResponseBodyDomainsPageData &&) = default ;
    DescribeLiveUserDomainsResponseBodyDomainsPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserDomainsResponseBodyDomainsPageData() = default ;
    DescribeLiveUserDomainsResponseBodyDomainsPageData& operator=(const DescribeLiveUserDomainsResponseBodyDomainsPageData &) = default ;
    DescribeLiveUserDomainsResponseBodyDomainsPageData& operator=(DescribeLiveUserDomainsResponseBodyDomainsPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cname_ == nullptr
        && return this->description_ == nullptr && return this->domainName_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->liveDomainStatus_ == nullptr
        && return this->liveDomainType_ == nullptr && return this->regionName_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeLiveUserDomainsResponseBodyDomainsPageData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLiveUserDomainsResponseBodyDomainsPageData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveUserDomainsResponseBodyDomainsPageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeLiveUserDomainsResponseBodyDomainsPageData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeLiveUserDomainsResponseBodyDomainsPageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // liveDomainStatus Field Functions 
    bool hasLiveDomainStatus() const { return this->liveDomainStatus_ != nullptr;};
    void deleteLiveDomainStatus() { this->liveDomainStatus_ = nullptr;};
    inline string liveDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(liveDomainStatus_, "") };
    inline DescribeLiveUserDomainsResponseBodyDomainsPageData& setLiveDomainStatus(string liveDomainStatus) { DARABONBA_PTR_SET_VALUE(liveDomainStatus_, liveDomainStatus) };


    // liveDomainType Field Functions 
    bool hasLiveDomainType() const { return this->liveDomainType_ != nullptr;};
    void deleteLiveDomainType() { this->liveDomainType_ = nullptr;};
    inline string liveDomainType() const { DARABONBA_PTR_GET_DEFAULT(liveDomainType_, "") };
    inline DescribeLiveUserDomainsResponseBodyDomainsPageData& setLiveDomainType(string liveDomainType) { DARABONBA_PTR_SET_VALUE(liveDomainType_, liveDomainType) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeLiveUserDomainsResponseBodyDomainsPageData& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeLiveUserDomainsResponseBodyDomainsPageData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The CNAME generated for the domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The time when the domain name was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the domain name was last modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **online**
    // *   **offline**
    // *   **configuring**
    std::shared_ptr<string> liveDomainStatus_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   **liveVideo**: streaming domain
    // *   **liveEdge**: ingest domain
    std::shared_ptr<string> liveDomainType_ = nullptr;
    // The ID of the region in which the domain name resides.
    std::shared_ptr<string> regionName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
