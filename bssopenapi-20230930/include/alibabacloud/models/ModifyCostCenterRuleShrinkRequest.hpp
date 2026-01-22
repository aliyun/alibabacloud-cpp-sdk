// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ModifyCostCenterRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostCenterRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(FilterExpression, filterExpressionShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostCenterRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(FilterExpression, filterExpressionShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
    };
    ModifyCostCenterRuleShrinkRequest() = default ;
    ModifyCostCenterRuleShrinkRequest(const ModifyCostCenterRuleShrinkRequest &) = default ;
    ModifyCostCenterRuleShrinkRequest(ModifyCostCenterRuleShrinkRequest &&) = default ;
    ModifyCostCenterRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostCenterRuleShrinkRequest() = default ;
    ModifyCostCenterRuleShrinkRequest& operator=(const ModifyCostCenterRuleShrinkRequest &) = default ;
    ModifyCostCenterRuleShrinkRequest& operator=(ModifyCostCenterRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->filterExpressionShrink_ == nullptr && this->nbid_ == nullptr && this->ownerAccountId_ == nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline ModifyCostCenterRuleShrinkRequest& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // filterExpressionShrink Field Functions 
    bool hasFilterExpressionShrink() const { return this->filterExpressionShrink_ != nullptr;};
    void deleteFilterExpressionShrink() { this->filterExpressionShrink_ = nullptr;};
    inline string getFilterExpressionShrink() const { DARABONBA_PTR_GET_DEFAULT(filterExpressionShrink_, "") };
    inline ModifyCostCenterRuleShrinkRequest& setFilterExpressionShrink(string filterExpressionShrink) { DARABONBA_PTR_SET_VALUE(filterExpressionShrink_, filterExpressionShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ModifyCostCenterRuleShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline ModifyCostCenterRuleShrinkRequest& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


  protected:
    shared_ptr<int64_t> costCenterId_ {};
    shared_ptr<string> filterExpressionShrink_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<int64_t> ownerAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
