// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUDGETUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUDGETUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBudgetUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBudgetUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
      DARABONBA_PTR_TO_JSON(BudgetDimensionType, budgetDimensionType_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBudgetUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetDimensionRefId, budgetDimensionRefId_);
      DARABONBA_PTR_FROM_JSON(BudgetDimensionType, budgetDimensionType_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeBudgetUsageRequest() = default ;
    DescribeBudgetUsageRequest(const DescribeBudgetUsageRequest &) = default ;
    DescribeBudgetUsageRequest(DescribeBudgetUsageRequest &&) = default ;
    DescribeBudgetUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBudgetUsageRequest() = default ;
    DescribeBudgetUsageRequest& operator=(const DescribeBudgetUsageRequest &) = default ;
    DescribeBudgetUsageRequest& operator=(DescribeBudgetUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->budgetDimensionRefId_ == nullptr
        && this->budgetDimensionType_ == nullptr && this->gwClusterId_ == nullptr && this->regionId_ == nullptr; };
    // budgetDimensionRefId Field Functions 
    bool hasBudgetDimensionRefId() const { return this->budgetDimensionRefId_ != nullptr;};
    void deleteBudgetDimensionRefId() { this->budgetDimensionRefId_ = nullptr;};
    inline string getBudgetDimensionRefId() const { DARABONBA_PTR_GET_DEFAULT(budgetDimensionRefId_, "") };
    inline DescribeBudgetUsageRequest& setBudgetDimensionRefId(string budgetDimensionRefId) { DARABONBA_PTR_SET_VALUE(budgetDimensionRefId_, budgetDimensionRefId) };


    // budgetDimensionType Field Functions 
    bool hasBudgetDimensionType() const { return this->budgetDimensionType_ != nullptr;};
    void deleteBudgetDimensionType() { this->budgetDimensionType_ = nullptr;};
    inline string getBudgetDimensionType() const { DARABONBA_PTR_GET_DEFAULT(budgetDimensionType_, "") };
    inline DescribeBudgetUsageRequest& setBudgetDimensionType(string budgetDimensionType) { DARABONBA_PTR_SET_VALUE(budgetDimensionType_, budgetDimensionType) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline DescribeBudgetUsageRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBudgetUsageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The budget dimension reference ID.
    shared_ptr<string> budgetDimensionRefId_ {};
    // The budget dimension type.
    shared_ptr<string> budgetDimensionType_ {};
    // The ID of the gateway instance to query.
    shared_ptr<string> gwClusterId_ {};
    // The region ID of the gateway instance.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
