// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTCENTERREQUESTCOSTCENTERENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTCENTERREQUESTCOSTCENTERENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateCostCenterRequestCostCenterEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostCenterRequestCostCenterEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostCenterRequestCostCenterEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
    };
    CreateCostCenterRequestCostCenterEntityList() = default ;
    CreateCostCenterRequestCostCenterEntityList(const CreateCostCenterRequestCostCenterEntityList &) = default ;
    CreateCostCenterRequestCostCenterEntityList(CreateCostCenterRequestCostCenterEntityList &&) = default ;
    CreateCostCenterRequestCostCenterEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostCenterRequestCostCenterEntityList() = default ;
    CreateCostCenterRequestCostCenterEntityList& operator=(const CreateCostCenterRequestCostCenterEntityList &) = default ;
    CreateCostCenterRequestCostCenterEntityList& operator=(CreateCostCenterRequestCostCenterEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterName_ != nullptr
        && this->ownerAccountId_ != nullptr && this->parentCostCenterId_ != nullptr; };
    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline CreateCostCenterRequestCostCenterEntityList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline CreateCostCenterRequestCostCenterEntityList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // parentCostCenterId Field Functions 
    bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
    void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
    inline int64_t parentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
    inline CreateCostCenterRequestCostCenterEntityList& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> costCenterName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> parentCostCenterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
