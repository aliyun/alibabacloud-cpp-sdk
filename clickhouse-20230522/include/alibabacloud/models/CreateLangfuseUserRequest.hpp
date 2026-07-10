// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELANGFUSEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELANGFUSEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class CreateLangfuseUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLangfuseUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrgRole, orgRole_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLangfuseUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrgRole, orgRole_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateLangfuseUserRequest() = default ;
    CreateLangfuseUserRequest(const CreateLangfuseUserRequest &) = default ;
    CreateLangfuseUserRequest(CreateLangfuseUserRequest &&) = default ;
    CreateLangfuseUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLangfuseUserRequest() = default ;
    CreateLangfuseUserRequest& operator=(const CreateLangfuseUserRequest &) = default ;
    CreateLangfuseUserRequest& operator=(CreateLangfuseUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->email_ == nullptr && this->name_ == nullptr && this->orgRole_ == nullptr && this->organizationId_ == nullptr && this->password_ == nullptr
        && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateLangfuseUserRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateLangfuseUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLangfuseUserRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orgRole Field Functions 
    bool hasOrgRole() const { return this->orgRole_ != nullptr;};
    void deleteOrgRole() { this->orgRole_ = nullptr;};
    inline string getOrgRole() const { DARABONBA_PTR_GET_DEFAULT(orgRole_, "") };
    inline CreateLangfuseUserRequest& setOrgRole(string orgRole) { DARABONBA_PTR_SET_VALUE(orgRole_, orgRole) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateLangfuseUserRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateLangfuseUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLangfuseUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Langfuse instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The email address of the user.
    // 
    // This parameter is required.
    shared_ptr<string> email_ {};
    // The username.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The role of the user in the organization.
    shared_ptr<string> orgRole_ {};
    // The Langfuse organization ID.
    shared_ptr<string> organizationId_ {};
    // The password of the user account. The password must meet the following requirements:
    // 
    // - Contains at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // 
    // - The following special characters are supported: !@#$%^&*()_+-=
    // 
    // - The password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
