// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    CreateRoleResponseBody() = default ;
    CreateRoleResponseBody(const CreateRoleResponseBody &) = default ;
    CreateRoleResponseBody(CreateRoleResponseBody &&) = default ;
    CreateRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoleResponseBody() = default ;
    CreateRoleResponseBody& operator=(const CreateRoleResponseBody &) = default ;
    CreateRoleResponseBody& operator=(CreateRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Role : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Role& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MaxSessionDuration, maxSessionDuration_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(RolePrincipalName, rolePrincipalName_);
      };
      friend void from_json(const Darabonba::Json& j, Role& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MaxSessionDuration, maxSessionDuration_);
        DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(RolePrincipalName, rolePrincipalName_);
      };
      Role() = default ;
      Role(const Role &) = default ;
      Role(Role &&) = default ;
      Role(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Role() = default ;
      Role& operator=(const Role &) = default ;
      Role& operator=(Role &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->assumeRolePolicyDocument_ == nullptr && this->createDate_ == nullptr && this->description_ == nullptr && this->maxSessionDuration_ == nullptr && this->roleId_ == nullptr
        && this->roleName_ == nullptr && this->rolePrincipalName_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline Role& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // assumeRolePolicyDocument Field Functions 
      bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
      void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
      inline string getAssumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
      inline Role& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Role& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Role& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maxSessionDuration Field Functions 
      bool hasMaxSessionDuration() const { return this->maxSessionDuration_ != nullptr;};
      void deleteMaxSessionDuration() { this->maxSessionDuration_ = nullptr;};
      inline int64_t getMaxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(maxSessionDuration_, 0L) };
      inline Role& setMaxSessionDuration(int64_t maxSessionDuration) { DARABONBA_PTR_SET_VALUE(maxSessionDuration_, maxSessionDuration) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
      inline Role& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Role& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // rolePrincipalName Field Functions 
      bool hasRolePrincipalName() const { return this->rolePrincipalName_ != nullptr;};
      void deleteRolePrincipalName() { this->rolePrincipalName_ = nullptr;};
      inline string getRolePrincipalName() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipalName_, "") };
      inline Role& setRolePrincipalName(string rolePrincipalName) { DARABONBA_PTR_SET_VALUE(rolePrincipalName_, rolePrincipalName) };


    protected:
      // The Alibaba Cloud Resource Name (ARN) of the role.
      shared_ptr<string> arn_ {};
      // The document of the policy in which the entity that can assume the role is specified.
      shared_ptr<string> assumeRolePolicyDocument_ {};
      // The time when the role was created.
      shared_ptr<string> createDate_ {};
      // The description of the role.
      shared_ptr<string> description_ {};
      // The maximum session duration of the role.
      shared_ptr<int64_t> maxSessionDuration_ {};
      // The ID of the role.
      shared_ptr<string> roleId_ {};
      // The name of the role.
      shared_ptr<string> roleName_ {};
      // The name of the role after authorization.
      shared_ptr<string> rolePrincipalName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->role_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const CreateRoleResponseBody::Role & getRole() const { DARABONBA_PTR_GET_CONST(role_, CreateRoleResponseBody::Role) };
    inline CreateRoleResponseBody::Role getRole() { DARABONBA_PTR_GET(role_, CreateRoleResponseBody::Role) };
    inline CreateRoleResponseBody& setRole(const CreateRoleResponseBody::Role & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline CreateRoleResponseBody& setRole(CreateRoleResponseBody::Role && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the role.
    shared_ptr<CreateRoleResponseBody::Role> role_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
