// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTCENTERRESPONSEBODYCOSTCENTERDTOLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTCENTERRESPONSEBODYCOSTCENTERDTOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateCostCenterResponseBodyCostCenterDtoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostCenterResponseBodyCostCenterDtoList& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostCenterResponseBodyCostCenterDtoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
    };
    CreateCostCenterResponseBodyCostCenterDtoList() = default ;
    CreateCostCenterResponseBodyCostCenterDtoList(const CreateCostCenterResponseBodyCostCenterDtoList &) = default ;
    CreateCostCenterResponseBodyCostCenterDtoList(CreateCostCenterResponseBodyCostCenterDtoList &&) = default ;
    CreateCostCenterResponseBodyCostCenterDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostCenterResponseBodyCostCenterDtoList() = default ;
    CreateCostCenterResponseBodyCostCenterDtoList& operator=(const CreateCostCenterResponseBodyCostCenterDtoList &) = default ;
    CreateCostCenterResponseBodyCostCenterDtoList& operator=(CreateCostCenterResponseBodyCostCenterDtoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->costCenterName_ != nullptr && this->ownerAccountId_ != nullptr && this->parentCostCenterId_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline CreateCostCenterResponseBodyCostCenterDtoList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline CreateCostCenterResponseBodyCostCenterDtoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline CreateCostCenterResponseBodyCostCenterDtoList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // parentCostCenterId Field Functions 
    bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
    void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
    inline int64_t parentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
    inline CreateCostCenterResponseBodyCostCenterDtoList& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


  protected:
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
    std::shared_ptr<int64_t> parentCostCenterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
