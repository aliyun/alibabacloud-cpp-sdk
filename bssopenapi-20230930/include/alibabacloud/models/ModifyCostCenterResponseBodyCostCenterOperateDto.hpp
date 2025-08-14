// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRESPONSEBODYCOSTCENTEROPERATEDTO_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRESPONSEBODYCOSTCENTEROPERATEDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ModifyCostCenterResponseBodyCostCenterOperateDto : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostCenterResponseBodyCostCenterOperateDto& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostCenterResponseBodyCostCenterOperateDto& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
    };
    ModifyCostCenterResponseBodyCostCenterOperateDto() = default ;
    ModifyCostCenterResponseBodyCostCenterOperateDto(const ModifyCostCenterResponseBodyCostCenterOperateDto &) = default ;
    ModifyCostCenterResponseBodyCostCenterOperateDto(ModifyCostCenterResponseBodyCostCenterOperateDto &&) = default ;
    ModifyCostCenterResponseBodyCostCenterOperateDto(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostCenterResponseBodyCostCenterOperateDto() = default ;
    ModifyCostCenterResponseBodyCostCenterOperateDto& operator=(const ModifyCostCenterResponseBodyCostCenterOperateDto &) = default ;
    ModifyCostCenterResponseBodyCostCenterOperateDto& operator=(ModifyCostCenterResponseBodyCostCenterOperateDto &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->isSuccess_ != nullptr && this->ownerAccountId_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline ModifyCostCenterResponseBodyCostCenterOperateDto& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ModifyCostCenterResponseBodyCostCenterOperateDto& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline ModifyCostCenterResponseBodyCostCenterOperateDto& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


  protected:
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<bool> isSuccess_ = nullptr;
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
