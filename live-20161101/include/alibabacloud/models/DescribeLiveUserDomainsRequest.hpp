// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUserDomainsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(LiveDomainType, liveDomainType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(LiveDomainType, liveDomainType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeLiveUserDomainsRequest() = default ;
    DescribeLiveUserDomainsRequest(const DescribeLiveUserDomainsRequest &) = default ;
    DescribeLiveUserDomainsRequest(DescribeLiveUserDomainsRequest &&) = default ;
    DescribeLiveUserDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserDomainsRequest() = default ;
    DescribeLiveUserDomainsRequest& operator=(const DescribeLiveUserDomainsRequest &) = default ;
    DescribeLiveUserDomainsRequest& operator=(DescribeLiveUserDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->domainSearchType_ == nullptr && return this->domainStatus_ == nullptr && return this->liveDomainType_ == nullptr && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->regionName_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityToken_ == nullptr && return this->tag_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveUserDomainsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSearchType Field Functions 
    bool hasDomainSearchType() const { return this->domainSearchType_ != nullptr;};
    void deleteDomainSearchType() { this->domainSearchType_ = nullptr;};
    inline string domainSearchType() const { DARABONBA_PTR_GET_DEFAULT(domainSearchType_, "") };
    inline DescribeLiveUserDomainsRequest& setDomainSearchType(string domainSearchType) { DARABONBA_PTR_SET_VALUE(domainSearchType_, domainSearchType) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeLiveUserDomainsRequest& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // liveDomainType Field Functions 
    bool hasLiveDomainType() const { return this->liveDomainType_ != nullptr;};
    void deleteLiveDomainType() { this->liveDomainType_ = nullptr;};
    inline string liveDomainType() const { DARABONBA_PTR_GET_DEFAULT(liveDomainType_, "") };
    inline DescribeLiveUserDomainsRequest& setLiveDomainType(string liveDomainType) { DARABONBA_PTR_SET_VALUE(liveDomainType_, liveDomainType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveUserDomainsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLiveUserDomainsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveUserDomainsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeLiveUserDomainsRequest& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeLiveUserDomainsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeLiveUserDomainsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeLiveUserDomainsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeLiveUserDomainsRequestTag>) };
    inline vector<DescribeLiveUserDomainsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeLiveUserDomainsRequestTag>) };
    inline DescribeLiveUserDomainsRequest& setTag(const vector<DescribeLiveUserDomainsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeLiveUserDomainsRequest& setTag(vector<DescribeLiveUserDomainsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The domain name that is used as a keyword to filter domain names. Fuzzy match is supported.
    // 
    // > 
    // 
    // *   If you set LiveDomainType to liveVideo and leave this parameter empty, the streaming domains are queried. - If you set LiveDomainType to liveEdge and leave this parameter empty, the ingest domains are queried.
    std::shared_ptr<string> domainName_ = nullptr;
    // The search mode. Valid values:
    // 
    // *   **fuzzy_match** (default): fuzzy match
    // *   **pre_match**: prefix match
    // *   **suf_match**: suffix match
    // *   **full_match**: exact match
    std::shared_ptr<string> domainSearchType_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **online**
    // *   **offline**
    // *   **configuring**
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   **liveVideo**: streaming domain
    // *   **liveEdge**: ingest domain
    // 
    // >  If you leave this parameter empty, all ingest domains and streaming domains within your Alibaba Cloud account are queried by default.
    std::shared_ptr<string> liveDomainType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Valid values: **1 to 100000**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **20**. Maximum value: **50**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region in which the domain name resides.
    std::shared_ptr<string> regionName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tags.
    std::shared_ptr<vector<DescribeLiveUserDomainsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
