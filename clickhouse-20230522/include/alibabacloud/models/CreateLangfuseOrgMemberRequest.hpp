// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELANGFUSEORGMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELANGFUSEORGMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class CreateLangfuseOrgMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLangfuseOrgMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLangfuseOrgMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    CreateLangfuseOrgMemberRequest() = default ;
    CreateLangfuseOrgMemberRequest(const CreateLangfuseOrgMemberRequest &) = default ;
    CreateLangfuseOrgMemberRequest(CreateLangfuseOrgMemberRequest &&) = default ;
    CreateLangfuseOrgMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLangfuseOrgMemberRequest() = default ;
    CreateLangfuseOrgMemberRequest& operator=(const CreateLangfuseOrgMemberRequest &) = default ;
    CreateLangfuseOrgMemberRequest& operator=(CreateLangfuseOrgMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->email_ == nullptr && this->organizationId_ == nullptr && this->regionId_ == nullptr && this->role_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateLangfuseOrgMemberRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateLangfuseOrgMemberRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateLangfuseOrgMemberRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLangfuseOrgMemberRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateLangfuseOrgMemberRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // The Langfuse instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The email address of the user.
    // 
    // This parameter is required.
    shared_ptr<string> email_ {};
    // The Langfuse organization ID.
    // 
    // This parameter is required.
    shared_ptr<string> organizationId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The role of the user in the organization.
    // 
    // This parameter is required.
    shared_ptr<string> role_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
