// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROLEASSIGNMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROLEASSIGNMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateRoleAssignmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoleAssignmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleAssignment, roleAssignment_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoleAssignmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleAssignment, roleAssignment_);
    };
    CreateRoleAssignmentResponseBody() = default ;
    CreateRoleAssignmentResponseBody(const CreateRoleAssignmentResponseBody &) = default ;
    CreateRoleAssignmentResponseBody(CreateRoleAssignmentResponseBody &&) = default ;
    CreateRoleAssignmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoleAssignmentResponseBody() = default ;
    CreateRoleAssignmentResponseBody& operator=(const CreateRoleAssignmentResponseBody &) = default ;
    CreateRoleAssignmentResponseBody& operator=(CreateRoleAssignmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoleAssignment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleAssignment& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(UserPoolId, userPoolId_);
      };
      friend void from_json(const Darabonba::Json& j, RoleAssignment& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(UserPoolId, userPoolId_);
      };
      RoleAssignment() = default ;
      RoleAssignment(const RoleAssignment &) = default ;
      RoleAssignment(RoleAssignment &&) = default ;
      RoleAssignment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleAssignment() = default ;
      RoleAssignment& operator=(const RoleAssignment &) = default ;
      RoleAssignment& operator=(RoleAssignment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->principalId_ == nullptr && this->principalName_ == nullptr && this->principalType_ == nullptr && this->roleId_ == nullptr && this->roleName_ == nullptr
        && this->userPoolId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RoleAssignment& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline RoleAssignment& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline RoleAssignment& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline RoleAssignment& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
      inline RoleAssignment& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline RoleAssignment& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // userPoolId Field Functions 
      bool hasUserPoolId() const { return this->userPoolId_ != nullptr;};
      void deleteUserPoolId() { this->userPoolId_ = nullptr;};
      inline string getUserPoolId() const { DARABONBA_PTR_GET_DEFAULT(userPoolId_, "") };
      inline RoleAssignment& setUserPoolId(string userPoolId) { DARABONBA_PTR_SET_VALUE(userPoolId_, userPoolId) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> principalId_ {};
      shared_ptr<string> principalName_ {};
      shared_ptr<string> principalType_ {};
      shared_ptr<string> roleId_ {};
      shared_ptr<string> roleName_ {};
      shared_ptr<string> userPoolId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->roleAssignment_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRoleAssignmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleAssignment Field Functions 
    bool hasRoleAssignment() const { return this->roleAssignment_ != nullptr;};
    void deleteRoleAssignment() { this->roleAssignment_ = nullptr;};
    inline const CreateRoleAssignmentResponseBody::RoleAssignment & getRoleAssignment() const { DARABONBA_PTR_GET_CONST(roleAssignment_, CreateRoleAssignmentResponseBody::RoleAssignment) };
    inline CreateRoleAssignmentResponseBody::RoleAssignment getRoleAssignment() { DARABONBA_PTR_GET(roleAssignment_, CreateRoleAssignmentResponseBody::RoleAssignment) };
    inline CreateRoleAssignmentResponseBody& setRoleAssignment(const CreateRoleAssignmentResponseBody::RoleAssignment & roleAssignment) { DARABONBA_PTR_SET_VALUE(roleAssignment_, roleAssignment) };
    inline CreateRoleAssignmentResponseBody& setRoleAssignment(CreateRoleAssignmentResponseBody::RoleAssignment && roleAssignment) { DARABONBA_PTR_SET_RVALUE(roleAssignment_, roleAssignment) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateRoleAssignmentResponseBody::RoleAssignment> roleAssignment_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
