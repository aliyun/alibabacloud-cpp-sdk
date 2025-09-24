// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTUNITREQUESTUNITENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTUNITREQUESTUNITENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateCostUnitRequestUnitEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostUnitRequestUnitEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(ParentUnitId, parentUnitId_);
      DARABONBA_PTR_TO_JSON(UnitName, unitName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostUnitRequestUnitEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(ParentUnitId, parentUnitId_);
      DARABONBA_PTR_FROM_JSON(UnitName, unitName_);
    };
    CreateCostUnitRequestUnitEntityList() = default ;
    CreateCostUnitRequestUnitEntityList(const CreateCostUnitRequestUnitEntityList &) = default ;
    CreateCostUnitRequestUnitEntityList(CreateCostUnitRequestUnitEntityList &&) = default ;
    CreateCostUnitRequestUnitEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostUnitRequestUnitEntityList() = default ;
    CreateCostUnitRequestUnitEntityList& operator=(const CreateCostUnitRequestUnitEntityList &) = default ;
    CreateCostUnitRequestUnitEntityList& operator=(CreateCostUnitRequestUnitEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerUid_ != nullptr
        && this->parentUnitId_ != nullptr && this->unitName_ != nullptr; };
    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline int64_t ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
    inline CreateCostUnitRequestUnitEntityList& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // parentUnitId Field Functions 
    bool hasParentUnitId() const { return this->parentUnitId_ != nullptr;};
    void deleteParentUnitId() { this->parentUnitId_ = nullptr;};
    inline int64_t parentUnitId() const { DARABONBA_PTR_GET_DEFAULT(parentUnitId_, 0L) };
    inline CreateCostUnitRequestUnitEntityList& setParentUnitId(int64_t parentUnitId) { DARABONBA_PTR_SET_VALUE(parentUnitId_, parentUnitId) };


    // unitName Field Functions 
    bool hasUnitName() const { return this->unitName_ != nullptr;};
    void deleteUnitName() { this->unitName_ = nullptr;};
    inline string unitName() const { DARABONBA_PTR_GET_DEFAULT(unitName_, "") };
    inline CreateCostUnitRequestUnitEntityList& setUnitName(string unitName) { DARABONBA_PTR_SET_VALUE(unitName_, unitName) };


  protected:
    // The user ID of the owner of the cost center.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ownerUid_ = nullptr;
    // The ID of the parent cost center. A value of -1 indicates the root cost center.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> parentUnitId_ = nullptr;
    // The name of the cost center.
    // 
    // This parameter is required.
    std::shared_ptr<string> unitName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
