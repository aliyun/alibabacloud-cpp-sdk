// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOSTCENTERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOSTCENTERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteCostCenterRuleRequestFilterExpression.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DeleteCostCenterRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCostCenterRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(FilterExpression, filterExpression_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCostCenterRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(FilterExpression, filterExpression_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    DeleteCostCenterRuleRequest() = default ;
    DeleteCostCenterRuleRequest(const DeleteCostCenterRuleRequest &) = default ;
    DeleteCostCenterRuleRequest(DeleteCostCenterRuleRequest &&) = default ;
    DeleteCostCenterRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCostCenterRuleRequest() = default ;
    DeleteCostCenterRuleRequest& operator=(const DeleteCostCenterRuleRequest &) = default ;
    DeleteCostCenterRuleRequest& operator=(DeleteCostCenterRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->filterExpression_ != nullptr && this->nbid_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline DeleteCostCenterRuleRequest& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // filterExpression Field Functions 
    bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
    void deleteFilterExpression() { this->filterExpression_ = nullptr;};
    inline const DeleteCostCenterRuleRequestFilterExpression & filterExpression() const { DARABONBA_PTR_GET_CONST(filterExpression_, DeleteCostCenterRuleRequestFilterExpression) };
    inline DeleteCostCenterRuleRequestFilterExpression filterExpression() { DARABONBA_PTR_GET(filterExpression_, DeleteCostCenterRuleRequestFilterExpression) };
    inline DeleteCostCenterRuleRequest& setFilterExpression(const DeleteCostCenterRuleRequestFilterExpression & filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };
    inline DeleteCostCenterRuleRequest& setFilterExpression(DeleteCostCenterRuleRequestFilterExpression && filterExpression) { DARABONBA_PTR_SET_RVALUE(filterExpression_, filterExpression) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline DeleteCostCenterRuleRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<DeleteCostCenterRuleRequestFilterExpression> filterExpression_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
