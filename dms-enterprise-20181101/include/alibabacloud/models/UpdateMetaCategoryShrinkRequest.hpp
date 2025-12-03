// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETACATEGORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETACATEGORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateMetaCategoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerIds, ownerIdsShrink_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateMetaCategoryShrinkRequest() = default ;
    UpdateMetaCategoryShrinkRequest(const UpdateMetaCategoryShrinkRequest &) = default ;
    UpdateMetaCategoryShrinkRequest(UpdateMetaCategoryShrinkRequest &&) = default ;
    UpdateMetaCategoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaCategoryShrinkRequest() = default ;
    UpdateMetaCategoryShrinkRequest& operator=(const UpdateMetaCategoryShrinkRequest &) = default ;
    UpdateMetaCategoryShrinkRequest& operator=(UpdateMetaCategoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->ownerIdsShrink_ == nullptr && return this->remark_ == nullptr && return this->tid_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline UpdateMetaCategoryShrinkRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMetaCategoryShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMetaCategoryShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerIdsShrink Field Functions 
    bool hasOwnerIdsShrink() const { return this->ownerIdsShrink_ != nullptr;};
    void deleteOwnerIdsShrink() { this->ownerIdsShrink_ = nullptr;};
    inline string ownerIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ownerIdsShrink_, "") };
    inline UpdateMetaCategoryShrinkRequest& setOwnerIdsShrink(string ownerIdsShrink) { DARABONBA_PTR_SET_VALUE(ownerIdsShrink_, ownerIdsShrink) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateMetaCategoryShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateMetaCategoryShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The category ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The updated name of the category.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerIdsShrink_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
