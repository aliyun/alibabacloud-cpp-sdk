// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLHMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLHMEMBERSREQUEST_HPP_
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
    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->roles_ == nullptr
        && this->userId_ == nullptr; };
      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
      inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
      inline Members& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline Members& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Members& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The role. Valid values:
      // 
      // *   **ADMIN**: workspace administrator. You can add a workspace administrator only as a DMS administrator or a DBA.
      // *   **MEMBER**: workspace member.
      // *   **DEVELOPER**: task flow developer. Only a workspace member can be added as a task flow developer.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> roles_ {};
      // The ID of the user to be added. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to obtain the user ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->members_ == nullptr
        && this->objectId_ == nullptr && this->objectType_ == nullptr && this->tid_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<AddLhMembersRequest::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<AddLhMembersRequest::Members>) };
    inline vector<AddLhMembersRequest::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<AddLhMembersRequest::Members>) };
    inline AddLhMembersRequest& setMembers(const vector<AddLhMembersRequest::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AddLhMembersRequest& setMembers(vector<AddLhMembersRequest::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline int64_t getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, 0L) };
    inline AddLhMembersRequest& setObjectId(int64_t objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline int32_t getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, 0) };
    inline AddLhMembersRequest& setObjectType(int32_t objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AddLhMembersRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The information about the users to be added.
    // 
    // This parameter is required.
    shared_ptr<vector<AddLhMembersRequest::Members>> members_ {};
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
