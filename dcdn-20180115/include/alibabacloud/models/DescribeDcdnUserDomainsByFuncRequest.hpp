// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserDomainsByFuncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserDomainsByFuncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FuncFilter, funcFilter_);
      DARABONBA_PTR_TO_JSON(FuncId, funcId_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserDomainsByFuncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FuncFilter, funcFilter_);
      DARABONBA_PTR_FROM_JSON(FuncId, funcId_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeDcdnUserDomainsByFuncRequest() = default ;
    DescribeDcdnUserDomainsByFuncRequest(const DescribeDcdnUserDomainsByFuncRequest &) = default ;
    DescribeDcdnUserDomainsByFuncRequest(DescribeDcdnUserDomainsByFuncRequest &&) = default ;
    DescribeDcdnUserDomainsByFuncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserDomainsByFuncRequest() = default ;
    DescribeDcdnUserDomainsByFuncRequest& operator=(const DescribeDcdnUserDomainsByFuncRequest &) = default ;
    DescribeDcdnUserDomainsByFuncRequest& operator=(DescribeDcdnUserDomainsByFuncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->funcFilter_ != nullptr && this->funcId_ != nullptr && this->matchType_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnUserDomainsByFuncRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // funcFilter Field Functions 
    bool hasFuncFilter() const { return this->funcFilter_ != nullptr;};
    void deleteFuncFilter() { this->funcFilter_ = nullptr;};
    inline string funcFilter() const { DARABONBA_PTR_GET_DEFAULT(funcFilter_, "") };
    inline DescribeDcdnUserDomainsByFuncRequest& setFuncFilter(string funcFilter) { DARABONBA_PTR_SET_VALUE(funcFilter_, funcFilter) };


    // funcId Field Functions 
    bool hasFuncId() const { return this->funcId_ != nullptr;};
    void deleteFuncId() { this->funcId_ = nullptr;};
    inline int32_t funcId() const { DARABONBA_PTR_GET_DEFAULT(funcId_, 0) };
    inline DescribeDcdnUserDomainsByFuncRequest& setFuncId(int32_t funcId) { DARABONBA_PTR_SET_VALUE(funcId_, funcId) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline DescribeDcdnUserDomainsByFuncRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnUserDomainsByFuncRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnUserDomainsByFuncRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDcdnUserDomainsByFuncRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The accelerated domain name whose ICP filing status you want to update.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies whether the feature that is specified by the FuncId parameter is enabled.
    // 
    // *   **config**: enabled
    // *   **unconfig**: not enabled
    std::shared_ptr<string> funcFilter_ = nullptr;
    // The ID of the feature. For more information about how to query feature IDs, see [Parameters for configuring features for domain names](https://help.aliyun.com/document_detail/410622.html). For example, the ID of the origin host feature (set_req_host_header) is 18.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> funcId_ = nullptr;
    // The type of the search. Default value: exact_match. Valid values:
    // 
    // *   fuzzy_match: fuzzy search.
    // *   exact_match: exact search.
    std::shared_ptr<string> matchType_ = nullptr;
    // The number of the page to return. Default value: **1**. Valid values: **1 to 100000**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: **20**. Valid values: **1 to 500**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
