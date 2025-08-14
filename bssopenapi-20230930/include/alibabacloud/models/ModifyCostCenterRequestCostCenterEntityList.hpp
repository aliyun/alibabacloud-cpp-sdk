// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTCENTERREQUESTCOSTCENTERENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTCENTERREQUESTCOSTCENTERENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ModifyCostCenterRequestCostCenterEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostCenterRequestCostCenterEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostCenterRequestCostCenterEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
    };
    ModifyCostCenterRequestCostCenterEntityList() = default ;
    ModifyCostCenterRequestCostCenterEntityList(const ModifyCostCenterRequestCostCenterEntityList &) = default ;
    ModifyCostCenterRequestCostCenterEntityList(ModifyCostCenterRequestCostCenterEntityList &&) = default ;
    ModifyCostCenterRequestCostCenterEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostCenterRequestCostCenterEntityList() = default ;
    ModifyCostCenterRequestCostCenterEntityList& operator=(const ModifyCostCenterRequestCostCenterEntityList &) = default ;
    ModifyCostCenterRequestCostCenterEntityList& operator=(ModifyCostCenterRequestCostCenterEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->costCenterName_ != nullptr && this->ownerAccountId_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline ModifyCostCenterRequestCostCenterEntityList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline ModifyCostCenterRequestCostCenterEntityList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline ModifyCostCenterRequestCostCenterEntityList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> costCenterName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
