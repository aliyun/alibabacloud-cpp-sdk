// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETACATEGORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETACATEGORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateMetaCategoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetaCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerIds, ownerIdsShrink_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetaCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateMetaCategoryShrinkRequest() = default ;
    CreateMetaCategoryShrinkRequest(const CreateMetaCategoryShrinkRequest &) = default ;
    CreateMetaCategoryShrinkRequest(CreateMetaCategoryShrinkRequest &&) = default ;
    CreateMetaCategoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetaCategoryShrinkRequest() = default ;
    CreateMetaCategoryShrinkRequest& operator=(const CreateMetaCategoryShrinkRequest &) = default ;
    CreateMetaCategoryShrinkRequest& operator=(CreateMetaCategoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->ownerIdsShrink_ == nullptr && this->parentCategoryId_ == nullptr && this->remark_ == nullptr && this->tid_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMetaCategoryShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMetaCategoryShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerIdsShrink Field Functions 
    bool hasOwnerIdsShrink() const { return this->ownerIdsShrink_ != nullptr;};
    void deleteOwnerIdsShrink() { this->ownerIdsShrink_ = nullptr;};
    inline string getOwnerIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ownerIdsShrink_, "") };
    inline CreateMetaCategoryShrinkRequest& setOwnerIdsShrink(string ownerIdsShrink) { DARABONBA_PTR_SET_VALUE(ownerIdsShrink_, ownerIdsShrink) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline int64_t getParentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
    inline CreateMetaCategoryShrinkRequest& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateMetaCategoryShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateMetaCategoryShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    shared_ptr<string> description_ {};
    // The name of the category.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerIdsShrink_ {};
    // The ID of the parent category. The new category is created under this parent category. If this value is left empty, the new category is of the first level.
    shared_ptr<int64_t> parentCategoryId_ {};
    shared_ptr<string> remark_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
