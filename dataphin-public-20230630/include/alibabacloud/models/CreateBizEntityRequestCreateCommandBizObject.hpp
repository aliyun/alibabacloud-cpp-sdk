// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBIZENTITYREQUESTCREATECOMMANDBIZOBJECT_HPP_
#define ALIBABACLOUD_MODELS_CREATEBIZENTITYREQUESTCREATECOMMANDBIZOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateBizEntityRequestCreateCommandBizObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBizEntityRequestCreateCommandBizObject& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBizEntityRequestCreateCommandBizObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateBizEntityRequestCreateCommandBizObject() = default ;
    CreateBizEntityRequestCreateCommandBizObject(const CreateBizEntityRequestCreateCommandBizObject &) = default ;
    CreateBizEntityRequestCreateCommandBizObject(CreateBizEntityRequestCreateCommandBizObject &&) = default ;
    CreateBizEntityRequestCreateCommandBizObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBizEntityRequestCreateCommandBizObject() = default ;
    CreateBizEntityRequestCreateCommandBizObject& operator=(const CreateBizEntityRequestCreateCommandBizObject &) = default ;
    CreateBizEntityRequestCreateCommandBizObject& operator=(CreateBizEntityRequestCreateCommandBizObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->name_ == nullptr && return this->ownerUserId_ == nullptr && return this->parentId_ == nullptr && return this->refBizEntityIdList_ == nullptr
        && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBizEntityRequestCreateCommandBizObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateBizEntityRequestCreateCommandBizObject& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBizEntityRequestCreateCommandBizObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline CreateBizEntityRequestCreateCommandBizObject& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateBizEntityRequestCreateCommandBizObject& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // refBizEntityIdList Field Functions 
    bool hasRefBizEntityIdList() const { return this->refBizEntityIdList_ != nullptr;};
    void deleteRefBizEntityIdList() { this->refBizEntityIdList_ = nullptr;};
    inline const vector<int64_t> & refBizEntityIdList() const { DARABONBA_PTR_GET_CONST(refBizEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> refBizEntityIdList() { DARABONBA_PTR_GET(refBizEntityIdList_, vector<int64_t>) };
    inline CreateBizEntityRequestCreateCommandBizObject& setRefBizEntityIdList(const vector<int64_t> & refBizEntityIdList) { DARABONBA_PTR_SET_VALUE(refBizEntityIdList_, refBizEntityIdList) };
    inline CreateBizEntityRequestCreateCommandBizObject& setRefBizEntityIdList(vector<int64_t> && refBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(refBizEntityIdList_, refBizEntityIdList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateBizEntityRequestCreateCommandBizObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<int64_t> parentId_ = nullptr;
    std::shared_ptr<vector<int64_t>> refBizEntityIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
