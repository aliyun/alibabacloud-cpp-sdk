// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUDGETPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUDGETPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBudgetPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBudgetPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
      DARABONBA_PTR_TO_JSON(BudgetDimensionType, budgetDimensionType_);
      DARABONBA_PTR_TO_JSON(BudgetPolicyId, budgetPolicyId_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBudgetPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
      DARABONBA_PTR_FROM_JSON(BudgetDimensionType, budgetDimensionType_);
      DARABONBA_PTR_FROM_JSON(BudgetPolicyId, budgetPolicyId_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeBudgetPoliciesRequest() = default ;
    DescribeBudgetPoliciesRequest(const DescribeBudgetPoliciesRequest &) = default ;
    DescribeBudgetPoliciesRequest(DescribeBudgetPoliciesRequest &&) = default ;
    DescribeBudgetPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBudgetPoliciesRequest() = default ;
    DescribeBudgetPoliciesRequest& operator=(const DescribeBudgetPoliciesRequest &) = default ;
    DescribeBudgetPoliciesRequest& operator=(DescribeBudgetPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->budgetDimensionRefId_ == nullptr
        && this->budgetDimensionType_ == nullptr && this->budgetPolicyId_ == nullptr && this->gwClusterId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr; };
    // budgetDimensionRefId Field Functions 
    bool hasBudgetDimensionRefId() const { return this->budgetDimensionRefId_ != nullptr;};
    void deleteBudgetDimensionRefId() { this->budgetDimensionRefId_ = nullptr;};
    inline string getBudgetDimensionRefId() const { DARABONBA_PTR_GET_DEFAULT(budgetDimensionRefId_, "") };
    inline DescribeBudgetPoliciesRequest& setBudgetDimensionRefId(string budgetDimensionRefId) { DARABONBA_PTR_SET_VALUE(budgetDimensionRefId_, budgetDimensionRefId) };


    // budgetDimensionType Field Functions 
    bool hasBudgetDimensionType() const { return this->budgetDimensionType_ != nullptr;};
    void deleteBudgetDimensionType() { this->budgetDimensionType_ = nullptr;};
    inline string getBudgetDimensionType() const { DARABONBA_PTR_GET_DEFAULT(budgetDimensionType_, "") };
    inline DescribeBudgetPoliciesRequest& setBudgetDimensionType(string budgetDimensionType) { DARABONBA_PTR_SET_VALUE(budgetDimensionType_, budgetDimensionType) };


    // budgetPolicyId Field Functions 
    bool hasBudgetPolicyId() const { return this->budgetPolicyId_ != nullptr;};
    void deleteBudgetPolicyId() { this->budgetPolicyId_ = nullptr;};
    inline string getBudgetPolicyId() const { DARABONBA_PTR_GET_DEFAULT(budgetPolicyId_, "") };
    inline DescribeBudgetPoliciesRequest& setBudgetPolicyId(string budgetPolicyId) { DARABONBA_PTR_SET_VALUE(budgetPolicyId_, budgetPolicyId) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline DescribeBudgetPoliciesRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBudgetPoliciesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBudgetPoliciesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBudgetPoliciesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBudgetPoliciesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> budgetDimensionRefId_ {};
    shared_ptr<string> budgetDimensionType_ {};
    shared_ptr<string> budgetPolicyId_ {};
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
