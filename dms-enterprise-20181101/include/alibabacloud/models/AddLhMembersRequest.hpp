// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLHMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLHMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddLhMembersRequestMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddLhMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLhMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, AddLhMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    AddLhMembersRequest() = default ;
    AddLhMembersRequest(const AddLhMembersRequest &) = default ;
    AddLhMembersRequest(AddLhMembersRequest &&) = default ;
    AddLhMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLhMembersRequest() = default ;
    AddLhMembersRequest& operator=(const AddLhMembersRequest &) = default ;
    AddLhMembersRequest& operator=(AddLhMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->members_ == nullptr
        && return this->objectId_ == nullptr && return this->objectType_ == nullptr && return this->tid_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<AddLhMembersRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<AddLhMembersRequestMembers>) };
    inline vector<AddLhMembersRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<AddLhMembersRequestMembers>) };
    inline AddLhMembersRequest& setMembers(const vector<AddLhMembersRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AddLhMembersRequest& setMembers(vector<AddLhMembersRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline int64_t objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, 0L) };
    inline AddLhMembersRequest& setObjectId(int64_t objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline int32_t objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, 0) };
    inline AddLhMembersRequest& setObjectType(int32_t objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AddLhMembersRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The information about the users to be added.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddLhMembersRequestMembers>> members_ = nullptr;
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
