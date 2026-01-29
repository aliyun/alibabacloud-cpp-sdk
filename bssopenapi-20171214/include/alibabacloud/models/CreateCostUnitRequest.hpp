// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTUNITREQUEST_HPP_
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
  class CreateCostUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UnitEntityList, unitEntityList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UnitEntityList, unitEntityList_);
    };
    CreateCostUnitRequest() = default ;
    CreateCostUnitRequest(const CreateCostUnitRequest &) = default ;
    CreateCostUnitRequest(CreateCostUnitRequest &&) = default ;
    CreateCostUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostUnitRequest() = default ;
    CreateCostUnitRequest& operator=(const CreateCostUnitRequest &) = default ;
    CreateCostUnitRequest& operator=(CreateCostUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnitEntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnitEntityList& obj) { 
        DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_TO_JSON(ParentUnitId, parentUnitId_);
        DARABONBA_PTR_TO_JSON(UnitName, unitName_);
      };
      friend void from_json(const Darabonba::Json& j, UnitEntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_FROM_JSON(ParentUnitId, parentUnitId_);
        DARABONBA_PTR_FROM_JSON(UnitName, unitName_);
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
      virtual bool empty() const override { return this->ownerUid_ == nullptr
        && this->parentUnitId_ == nullptr && this->unitName_ == nullptr; };
      // ownerUid Field Functions 
      bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
      void deleteOwnerUid() { this->ownerUid_ = nullptr;};
      inline int64_t getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
      inline UnitEntityList& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


      // parentUnitId Field Functions 
      bool hasParentUnitId() const { return this->parentUnitId_ != nullptr;};
      void deleteParentUnitId() { this->parentUnitId_ = nullptr;};
      inline int64_t getParentUnitId() const { DARABONBA_PTR_GET_DEFAULT(parentUnitId_, 0L) };
      inline UnitEntityList& setParentUnitId(int64_t parentUnitId) { DARABONBA_PTR_SET_VALUE(parentUnitId_, parentUnitId) };


      // unitName Field Functions 
      bool hasUnitName() const { return this->unitName_ != nullptr;};
      void deleteUnitName() { this->unitName_ = nullptr;};
      inline string getUnitName() const { DARABONBA_PTR_GET_DEFAULT(unitName_, "") };
      inline UnitEntityList& setUnitName(string unitName) { DARABONBA_PTR_SET_VALUE(unitName_, unitName) };


    protected:
      // The user ID of the owner of the cost center.
      // 
      // This parameter is required.
      shared_ptr<int64_t> ownerUid_ {};
      // The ID of the parent cost center. A value of -1 indicates the root cost center.
      // 
      // This parameter is required.
      shared_ptr<int64_t> parentUnitId_ {};
      // The name of the cost center.
      // 
      // This parameter is required.
      shared_ptr<string> unitName_ {};
    };

    virtual bool empty() const override { return this->unitEntityList_ == nullptr; };
    // unitEntityList Field Functions 
    bool hasUnitEntityList() const { return this->unitEntityList_ != nullptr;};
    void deleteUnitEntityList() { this->unitEntityList_ = nullptr;};
    inline const vector<CreateCostUnitRequest::UnitEntityList> & getUnitEntityList() const { DARABONBA_PTR_GET_CONST(unitEntityList_, vector<CreateCostUnitRequest::UnitEntityList>) };
    inline vector<CreateCostUnitRequest::UnitEntityList> getUnitEntityList() { DARABONBA_PTR_GET(unitEntityList_, vector<CreateCostUnitRequest::UnitEntityList>) };
    inline CreateCostUnitRequest& setUnitEntityList(const vector<CreateCostUnitRequest::UnitEntityList> & unitEntityList) { DARABONBA_PTR_SET_VALUE(unitEntityList_, unitEntityList) };
    inline CreateCostUnitRequest& setUnitEntityList(vector<CreateCostUnitRequest::UnitEntityList> && unitEntityList) { DARABONBA_PTR_SET_RVALUE(unitEntityList_, unitEntityList) };


  protected:
    // The list of cost centers.
    shared_ptr<vector<CreateCostUnitRequest::UnitEntityList>> unitEntityList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
