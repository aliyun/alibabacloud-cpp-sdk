// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOSTCENTERRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOSTCENTERRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DeleteCostCenterRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCostCenterRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(FilterExpression, filterExpressionShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCostCenterRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(FilterExpression, filterExpressionShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    DeleteCostCenterRuleShrinkRequest() = default ;
    DeleteCostCenterRuleShrinkRequest(const DeleteCostCenterRuleShrinkRequest &) = default ;
    DeleteCostCenterRuleShrinkRequest(DeleteCostCenterRuleShrinkRequest &&) = default ;
    DeleteCostCenterRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCostCenterRuleShrinkRequest() = default ;
    DeleteCostCenterRuleShrinkRequest& operator=(const DeleteCostCenterRuleShrinkRequest &) = default ;
    DeleteCostCenterRuleShrinkRequest& operator=(DeleteCostCenterRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->filterExpressionShrink_ != nullptr && this->nbid_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline DeleteCostCenterRuleShrinkRequest& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // filterExpressionShrink Field Functions 
    bool hasFilterExpressionShrink() const { return this->filterExpressionShrink_ != nullptr;};
    void deleteFilterExpressionShrink() { this->filterExpressionShrink_ = nullptr;};
    inline string filterExpressionShrink() const { DARABONBA_PTR_GET_DEFAULT(filterExpressionShrink_, "") };
    inline DeleteCostCenterRuleShrinkRequest& setFilterExpressionShrink(string filterExpressionShrink) { DARABONBA_PTR_SET_VALUE(filterExpressionShrink_, filterExpressionShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline DeleteCostCenterRuleShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> filterExpressionShrink_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
