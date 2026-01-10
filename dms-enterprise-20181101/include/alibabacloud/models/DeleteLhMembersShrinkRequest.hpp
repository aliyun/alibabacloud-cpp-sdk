// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELHMEMBERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELHMEMBERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteLhMembersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLhMembersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberIds, memberIdsShrink_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLhMembersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberIds, memberIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteLhMembersShrinkRequest() = default ;
    DeleteLhMembersShrinkRequest(const DeleteLhMembersShrinkRequest &) = default ;
    DeleteLhMembersShrinkRequest(DeleteLhMembersShrinkRequest &&) = default ;
    DeleteLhMembersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLhMembersShrinkRequest() = default ;
    DeleteLhMembersShrinkRequest& operator=(const DeleteLhMembersShrinkRequest &) = default ;
    DeleteLhMembersShrinkRequest& operator=(DeleteLhMembersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberIdsShrink_ == nullptr
        && this->objectId_ == nullptr && this->objectType_ == nullptr && this->tid_ == nullptr; };
    // memberIdsShrink Field Functions 
    bool hasMemberIdsShrink() const { return this->memberIdsShrink_ != nullptr;};
    void deleteMemberIdsShrink() { this->memberIdsShrink_ = nullptr;};
    inline string getMemberIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(memberIdsShrink_, "") };
    inline DeleteLhMembersShrinkRequest& setMemberIdsShrink(string memberIdsShrink) { DARABONBA_PTR_SET_VALUE(memberIdsShrink_, memberIdsShrink) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline int64_t getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, 0L) };
    inline DeleteLhMembersShrinkRequest& setObjectId(int64_t objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline int32_t getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, 0) };
    inline DeleteLhMembersShrinkRequest& setObjectType(int32_t objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteLhMembersShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the user to be removed. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to obtain the user ID.
    // 
    // This parameter is required.
    shared_ptr<string> memberIdsShrink_ {};
    // The ID of the object.
    // 
    // *   If the object is a workspace, you can call the [GetLhSpaceByName](https://help.aliyun.com/document_detail/424379.html) operation to obtain the workspace ID.
    // *   If the object is a task flow, you can call the [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to obtain the task flow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> objectId_ {};
    // The type of the object. Valid values:
    // 
    // *   **0**: workspace
    // *   **1**: task flow
    // 
    // This parameter is required.
    shared_ptr<int32_t> objectType_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
