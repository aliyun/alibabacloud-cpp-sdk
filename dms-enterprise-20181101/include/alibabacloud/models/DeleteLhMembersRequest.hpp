// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELHMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELHMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteLhMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLhMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberIds, memberIds_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLhMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberIds, memberIds_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteLhMembersRequest() = default ;
    DeleteLhMembersRequest(const DeleteLhMembersRequest &) = default ;
    DeleteLhMembersRequest(DeleteLhMembersRequest &&) = default ;
    DeleteLhMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLhMembersRequest() = default ;
    DeleteLhMembersRequest& operator=(const DeleteLhMembersRequest &) = default ;
    DeleteLhMembersRequest& operator=(DeleteLhMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberIds_ == nullptr
        && return this->objectId_ == nullptr && return this->objectType_ == nullptr && return this->tid_ == nullptr; };
    // memberIds Field Functions 
    bool hasMemberIds() const { return this->memberIds_ != nullptr;};
    void deleteMemberIds() { this->memberIds_ = nullptr;};
    inline const vector<int32_t> & memberIds() const { DARABONBA_PTR_GET_CONST(memberIds_, vector<int32_t>) };
    inline vector<int32_t> memberIds() { DARABONBA_PTR_GET(memberIds_, vector<int32_t>) };
    inline DeleteLhMembersRequest& setMemberIds(const vector<int32_t> & memberIds) { DARABONBA_PTR_SET_VALUE(memberIds_, memberIds) };
    inline DeleteLhMembersRequest& setMemberIds(vector<int32_t> && memberIds) { DARABONBA_PTR_SET_RVALUE(memberIds_, memberIds) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline int64_t objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, 0L) };
    inline DeleteLhMembersRequest& setObjectId(int64_t objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline int32_t objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, 0) };
    inline DeleteLhMembersRequest& setObjectType(int32_t objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteLhMembersRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the user to be removed. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to obtain the user ID.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> memberIds_ = nullptr;
    // The ID of the object.
    // 
    // *   If the object is a workspace, you can call the [GetLhSpaceByName](https://help.aliyun.com/document_detail/424379.html) operation to obtain the workspace ID.
    // *   If the object is a task flow, you can call the [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to obtain the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> objectId_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   **0**: workspace
    // *   **1**: task flow
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> objectType_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
