// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ModifyCostUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UnitEntityList, unitEntityList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UnitEntityList, unitEntityList_);
    };
    ModifyCostUnitRequest() = default ;
    ModifyCostUnitRequest(const ModifyCostUnitRequest &) = default ;
    ModifyCostUnitRequest(ModifyCostUnitRequest &&) = default ;
    ModifyCostUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostUnitRequest() = default ;
    ModifyCostUnitRequest& operator=(const ModifyCostUnitRequest &) = default ;
    ModifyCostUnitRequest& operator=(ModifyCostUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnitEntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnitEntityList& obj) { 
        DARABONBA_PTR_TO_JSON(NewUnitName, newUnitName_);
        DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_TO_JSON(UnitId, unitId_);
      };
      friend void from_json(const Darabonba::Json& j, UnitEntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(NewUnitName, newUnitName_);
        DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_FROM_JSON(UnitId, unitId_);
      };
      UnitEntityList() = default ;
      UnitEntityList(const UnitEntityList &) = default ;
      UnitEntityList(UnitEntityList &&) = default ;
      UnitEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnitEntityList() = default ;
      UnitEntityList& operator=(const UnitEntityList &) = default ;
      UnitEntityList& operator=(UnitEntityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->newUnitName_ == nullptr
        && this->ownerUid_ == nullptr && this->unitId_ == nullptr; };
      // newUnitName Field Functions 
      bool hasNewUnitName() const { return this->newUnitName_ != nullptr;};
      void deleteNewUnitName() { this->newUnitName_ = nullptr;};
      inline string getNewUnitName() const { DARABONBA_PTR_GET_DEFAULT(newUnitName_, "") };
      inline UnitEntityList& setNewUnitName(string newUnitName) { DARABONBA_PTR_SET_VALUE(newUnitName_, newUnitName) };


      // ownerUid Field Functions 
      bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
      void deleteOwnerUid() { this->ownerUid_ = nullptr;};
      inline int64_t getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
      inline UnitEntityList& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


      // unitId Field Functions 
      bool hasUnitId() const { return this->unitId_ != nullptr;};
      void deleteUnitId() { this->unitId_ = nullptr;};
      inline int64_t getUnitId() const { DARABONBA_PTR_GET_DEFAULT(unitId_, 0L) };
      inline UnitEntityList& setUnitId(int64_t unitId) { DARABONBA_PTR_SET_VALUE(unitId_, unitId) };


    protected:
      // The new name of the cost center.
      // 
      // This parameter is required.
      shared_ptr<string> newUnitName_ {};
      // The user ID of the cost center owner.
      // 
      // This parameter is required.
      shared_ptr<int64_t> ownerUid_ {};
      // The ID of the cost center.
      // 
      // This parameter is required.
      shared_ptr<int64_t> unitId_ {};
    };

    virtual bool empty() const override { return this->unitEntityList_ == nullptr; };
    // unitEntityList Field Functions 
    bool hasUnitEntityList() const { return this->unitEntityList_ != nullptr;};
    void deleteUnitEntityList() { this->unitEntityList_ = nullptr;};
    inline const vector<ModifyCostUnitRequest::UnitEntityList> & getUnitEntityList() const { DARABONBA_PTR_GET_CONST(unitEntityList_, vector<ModifyCostUnitRequest::UnitEntityList>) };
    inline vector<ModifyCostUnitRequest::UnitEntityList> getUnitEntityList() { DARABONBA_PTR_GET(unitEntityList_, vector<ModifyCostUnitRequest::UnitEntityList>) };
    inline ModifyCostUnitRequest& setUnitEntityList(const vector<ModifyCostUnitRequest::UnitEntityList> & unitEntityList) { DARABONBA_PTR_SET_VALUE(unitEntityList_, unitEntityList) };
    inline ModifyCostUnitRequest& setUnitEntityList(vector<ModifyCostUnitRequest::UnitEntityList> && unitEntityList) { DARABONBA_PTR_SET_RVALUE(unitEntityList_, unitEntityList) };


  protected:
    // The cost centers to be modified.
    shared_ptr<vector<ModifyCostUnitRequest::UnitEntityList>> unitEntityList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
