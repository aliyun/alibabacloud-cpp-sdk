// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTUNITREQUESTUNITENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTUNITREQUESTUNITENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ModifyCostUnitRequestUnitEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostUnitRequestUnitEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(NewUnitName, newUnitName_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(UnitId, unitId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostUnitRequestUnitEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(NewUnitName, newUnitName_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(UnitId, unitId_);
    };
    ModifyCostUnitRequestUnitEntityList() = default ;
    ModifyCostUnitRequestUnitEntityList(const ModifyCostUnitRequestUnitEntityList &) = default ;
    ModifyCostUnitRequestUnitEntityList(ModifyCostUnitRequestUnitEntityList &&) = default ;
    ModifyCostUnitRequestUnitEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostUnitRequestUnitEntityList() = default ;
    ModifyCostUnitRequestUnitEntityList& operator=(const ModifyCostUnitRequestUnitEntityList &) = default ;
    ModifyCostUnitRequestUnitEntityList& operator=(ModifyCostUnitRequestUnitEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->newUnitName_ != nullptr
        && this->ownerUid_ != nullptr && this->unitId_ != nullptr; };
    // newUnitName Field Functions 
    bool hasNewUnitName() const { return this->newUnitName_ != nullptr;};
    void deleteNewUnitName() { this->newUnitName_ = nullptr;};
    inline string newUnitName() const { DARABONBA_PTR_GET_DEFAULT(newUnitName_, "") };
    inline ModifyCostUnitRequestUnitEntityList& setNewUnitName(string newUnitName) { DARABONBA_PTR_SET_VALUE(newUnitName_, newUnitName) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline int64_t ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
    inline ModifyCostUnitRequestUnitEntityList& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // unitId Field Functions 
    bool hasUnitId() const { return this->unitId_ != nullptr;};
    void deleteUnitId() { this->unitId_ = nullptr;};
    inline int64_t unitId() const { DARABONBA_PTR_GET_DEFAULT(unitId_, 0L) };
    inline ModifyCostUnitRequestUnitEntityList& setUnitId(int64_t unitId) { DARABONBA_PTR_SET_VALUE(unitId_, unitId) };


  protected:
    // The new name of the cost center.
    // 
    // This parameter is required.
    std::shared_ptr<string> newUnitName_ = nullptr;
    // The user ID of the cost center owner.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ownerUid_ = nullptr;
    // The ID of the cost center.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> unitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
