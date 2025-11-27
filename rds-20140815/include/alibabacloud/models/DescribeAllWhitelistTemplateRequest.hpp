// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLWHITELISTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLWHITELISTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAllWhitelistTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllWhitelistTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FuzzySearch, fuzzySearch_);
      DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllWhitelistTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FuzzySearch, fuzzySearch_);
      DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    DescribeAllWhitelistTemplateRequest() = default ;
    DescribeAllWhitelistTemplateRequest(const DescribeAllWhitelistTemplateRequest &) = default ;
    DescribeAllWhitelistTemplateRequest(DescribeAllWhitelistTemplateRequest &&) = default ;
    DescribeAllWhitelistTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllWhitelistTemplateRequest() = default ;
    DescribeAllWhitelistTemplateRequest& operator=(const DescribeAllWhitelistTemplateRequest &) = default ;
    DescribeAllWhitelistTemplateRequest& operator=(DescribeAllWhitelistTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fuzzySearch_ == nullptr
        && return this->maxRecordsPerPage_ == nullptr && return this->pageNumbers_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->templateName_ == nullptr; };
    // fuzzySearch Field Functions 
    bool hasFuzzySearch() const { return this->fuzzySearch_ != nullptr;};
    void deleteFuzzySearch() { this->fuzzySearch_ = nullptr;};
    inline bool fuzzySearch() const { DARABONBA_PTR_GET_DEFAULT(fuzzySearch_, false) };
    inline DescribeAllWhitelistTemplateRequest& setFuzzySearch(bool fuzzySearch) { DARABONBA_PTR_SET_VALUE(fuzzySearch_, fuzzySearch) };


    // maxRecordsPerPage Field Functions 
    bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
    void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
    inline int32_t maxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
    inline DescribeAllWhitelistTemplateRequest& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


    // pageNumbers Field Functions 
    bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
    void deletePageNumbers() { this->pageNumbers_ = nullptr;};
    inline int32_t pageNumbers() const { DARABONBA_PTR_GET_DEFAULT(pageNumbers_, 0) };
    inline DescribeAllWhitelistTemplateRequest& setPageNumbers(int32_t pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAllWhitelistTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAllWhitelistTemplateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeAllWhitelistTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAllWhitelistTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeAllWhitelistTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // Specifies whether to enable fuzzy search. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> fuzzySearch_ = nullptr;
    // The number of entries to return on each page. Enumerated valid values: 10, 30, and 50.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> maxRecordsPerPage_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumbers_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID. For more information about resource groups, see related documentation.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The name of the IP whitelist template. If you specify this parameter when you perform a fuzzy search, you can call the DescribeWhitelistTemplate operation to query the name of the whitelist template during the fuzzy search.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
