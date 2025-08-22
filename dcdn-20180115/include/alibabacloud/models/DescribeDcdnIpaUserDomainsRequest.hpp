// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnIpaUserDomainsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaUserDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaUserDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckDomainShow, checkDomainShow_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(FuncFilter, funcFilter_);
      DARABONBA_PTR_TO_JSON(FuncId, funcId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaUserDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckDomainShow, checkDomainShow_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(FuncFilter, funcFilter_);
      DARABONBA_PTR_FROM_JSON(FuncId, funcId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDcdnIpaUserDomainsRequest() = default ;
    DescribeDcdnIpaUserDomainsRequest(const DescribeDcdnIpaUserDomainsRequest &) = default ;
    DescribeDcdnIpaUserDomainsRequest(DescribeDcdnIpaUserDomainsRequest &&) = default ;
    DescribeDcdnIpaUserDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaUserDomainsRequest() = default ;
    DescribeDcdnIpaUserDomainsRequest& operator=(const DescribeDcdnIpaUserDomainsRequest &) = default ;
    DescribeDcdnIpaUserDomainsRequest& operator=(DescribeDcdnIpaUserDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkDomainShow_ != nullptr
        && this->domainName_ != nullptr && this->domainSearchType_ != nullptr && this->domainStatus_ != nullptr && this->funcFilter_ != nullptr && this->funcId_ != nullptr
        && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceGroupId_ != nullptr && this->tag_ != nullptr; };
    // checkDomainShow Field Functions 
    bool hasCheckDomainShow() const { return this->checkDomainShow_ != nullptr;};
    void deleteCheckDomainShow() { this->checkDomainShow_ = nullptr;};
    inline bool checkDomainShow() const { DARABONBA_PTR_GET_DEFAULT(checkDomainShow_, false) };
    inline DescribeDcdnIpaUserDomainsRequest& setCheckDomainShow(bool checkDomainShow) { DARABONBA_PTR_SET_VALUE(checkDomainShow_, checkDomainShow) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSearchType Field Functions 
    bool hasDomainSearchType() const { return this->domainSearchType_ != nullptr;};
    void deleteDomainSearchType() { this->domainSearchType_ = nullptr;};
    inline string domainSearchType() const { DARABONBA_PTR_GET_DEFAULT(domainSearchType_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setDomainSearchType(string domainSearchType) { DARABONBA_PTR_SET_VALUE(domainSearchType_, domainSearchType) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // funcFilter Field Functions 
    bool hasFuncFilter() const { return this->funcFilter_ != nullptr;};
    void deleteFuncFilter() { this->funcFilter_ = nullptr;};
    inline string funcFilter() const { DARABONBA_PTR_GET_DEFAULT(funcFilter_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setFuncFilter(string funcFilter) { DARABONBA_PTR_SET_VALUE(funcFilter_, funcFilter) };


    // funcId Field Functions 
    bool hasFuncId() const { return this->funcId_ != nullptr;};
    void deleteFuncId() { this->funcId_ = nullptr;};
    inline string funcId() const { DARABONBA_PTR_GET_DEFAULT(funcId_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setFuncId(string funcId) { DARABONBA_PTR_SET_VALUE(funcId_, funcId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDcdnIpaUserDomainsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnIpaUserDomainsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnIpaUserDomainsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDcdnIpaUserDomainsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDcdnIpaUserDomainsRequestTag>) };
    inline vector<DescribeDcdnIpaUserDomainsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeDcdnIpaUserDomainsRequestTag>) };
    inline DescribeDcdnIpaUserDomainsRequest& setTag(const vector<DescribeDcdnIpaUserDomainsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDcdnIpaUserDomainsRequest& setTag(vector<DescribeDcdnIpaUserDomainsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to display domain names that are under review, failed the review, or failed to be configured. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> checkDomainShow_ = nullptr;
    // The domain name that is used as a keyword to filter domain names. Fuzzy match is supported.
    std::shared_ptr<string> domainName_ = nullptr;
    // The search method. Default value: full_match. Valid values:
    // 
    // *   **fuzzy_match**: fuzzy match
    // *   **pre_match**: prefix match
    // *   **suf_match**: suffix match
    // *   **full_match**: exact match
    std::shared_ptr<string> domainSearchType_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **online**: enabled
    // *   **offline**: disabled
    // *   **configuring**: configuring
    // *   **configure_failed**: configuration failed
    // *   **checking**: reviewing
    // *   **check_failed:** review failed
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The status of the feature.
    // 
    // *   config: The feature is enabled.
    // *   unconfig: The feature is not enabled.
    std::shared_ptr<string> funcFilter_ = nullptr;
    // The ID of the feature. For example, a value of 7 specifies the feature of configuring an expiration rule for a specific directory. For more information about feature IDs, see [Parameters for configuring features for domain names](https://help.aliyun.com/document_detail/410622.html).
    std::shared_ptr<string> funcId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Valid values: **1** to **100000**. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of domain names per page. Default value: **20**.**** Valid values: **1** to **500**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the command.
    std::shared_ptr<vector<DescribeDcdnIpaUserDomainsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
