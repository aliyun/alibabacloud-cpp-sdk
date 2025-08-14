// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyCostCenterRuleRequestFilterExpression.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ModifyCostCenterRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostCenterRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(FilterExpression, filterExpression_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostCenterRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(FilterExpression, filterExpression_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
    };
    ModifyCostCenterRuleRequest() = default ;
    ModifyCostCenterRuleRequest(const ModifyCostCenterRuleRequest &) = default ;
    ModifyCostCenterRuleRequest(ModifyCostCenterRuleRequest &&) = default ;
    ModifyCostCenterRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostCenterRuleRequest() = default ;
    ModifyCostCenterRuleRequest& operator=(const ModifyCostCenterRuleRequest &) = default ;
    ModifyCostCenterRuleRequest& operator=(ModifyCostCenterRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->filterExpression_ != nullptr && this->nbid_ != nullptr && this->ownerAccountId_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline ModifyCostCenterRuleRequest& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // filterExpression Field Functions 
    bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
    void deleteFilterExpression() { this->filterExpression_ = nullptr;};
    inline const ModifyCostCenterRuleRequestFilterExpression & filterExpression() const { DARABONBA_PTR_GET_CONST(filterExpression_, ModifyCostCenterRuleRequestFilterExpression) };
    inline ModifyCostCenterRuleRequestFilterExpression filterExpression() { DARABONBA_PTR_GET(filterExpression_, ModifyCostCenterRuleRequestFilterExpression) };
    inline ModifyCostCenterRuleRequest& setFilterExpression(const ModifyCostCenterRuleRequestFilterExpression & filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };
    inline ModifyCostCenterRuleRequest& setFilterExpression(ModifyCostCenterRuleRequestFilterExpression && filterExpression) { DARABONBA_PTR_SET_RVALUE(filterExpression_, filterExpression) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ModifyCostCenterRuleRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline ModifyCostCenterRuleRequest& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


  protected:
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<ModifyCostCenterRuleRequestFilterExpression> filterExpression_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
