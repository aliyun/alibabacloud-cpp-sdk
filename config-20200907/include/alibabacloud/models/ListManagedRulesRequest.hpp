// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListManagedRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterType, filterType_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    ListManagedRulesRequest() = default ;
    ListManagedRulesRequest(const ListManagedRulesRequest &) = default ;
    ListManagedRulesRequest(ListManagedRulesRequest &&) = default ;
    ListManagedRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedRulesRequest() = default ;
    ListManagedRulesRequest& operator=(const ListManagedRulesRequest &) = default ;
    ListManagedRulesRequest& operator=(ListManagedRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterType_ == nullptr
        && this->keyword_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceTypes_ == nullptr && this->riskLevel_ == nullptr; };
    // filterType Field Functions 
    bool hasFilterType() const { return this->filterType_ != nullptr;};
    void deleteFilterType() { this->filterType_ = nullptr;};
    inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
    inline ListManagedRulesRequest& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListManagedRulesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListManagedRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListManagedRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string getResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline ListManagedRulesRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListManagedRulesRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The scope for filtering managed rules allows you to filter out managed rules without resource coverage. The possible values are:
    // 
    //  - ALL: All rules.
    // 
    //  - UNCOVERED_RESOURCE: Filters managed rules where some resources are not covered.
    shared_ptr<string> filterType_ {};
    // The keyword of the managed rule.
    shared_ptr<string> keyword_ {};
    // The page number of the page to return.
    // 
    // Pages start from page 1. Default value: 1
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Valid values: 1 to 100. Minimum value: 1. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the resources to be evaluated based on the rule.
    shared_ptr<string> resourceTypes_ {};
    // The risk level of the managed rule. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    shared_ptr<int32_t> riskLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
