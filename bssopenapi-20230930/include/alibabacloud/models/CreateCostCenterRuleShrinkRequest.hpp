// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTCENTERRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTCENTERRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateCostCenterRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostCenterRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(FilterExpression, filterExpressionShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostCenterRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(FilterExpression, filterExpressionShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    CreateCostCenterRuleShrinkRequest() = default ;
    CreateCostCenterRuleShrinkRequest(const CreateCostCenterRuleShrinkRequest &) = default ;
    CreateCostCenterRuleShrinkRequest(CreateCostCenterRuleShrinkRequest &&) = default ;
    CreateCostCenterRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostCenterRuleShrinkRequest() = default ;
    CreateCostCenterRuleShrinkRequest& operator=(const CreateCostCenterRuleShrinkRequest &) = default ;
    CreateCostCenterRuleShrinkRequest& operator=(CreateCostCenterRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->filterExpressionShrink_ == nullptr && this->nbid_ == nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline CreateCostCenterRuleShrinkRequest& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // filterExpressionShrink Field Functions 
    bool hasFilterExpressionShrink() const { return this->filterExpressionShrink_ != nullptr;};
    void deleteFilterExpressionShrink() { this->filterExpressionShrink_ = nullptr;};
    inline string getFilterExpressionShrink() const { DARABONBA_PTR_GET_DEFAULT(filterExpressionShrink_, "") };
    inline CreateCostCenterRuleShrinkRequest& setFilterExpressionShrink(string filterExpressionShrink) { DARABONBA_PTR_SET_VALUE(filterExpressionShrink_, filterExpressionShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CreateCostCenterRuleShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    shared_ptr<int64_t> costCenterId_ {};
    shared_ptr<string> filterExpressionShrink_ {};
    shared_ptr<string> nbid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
