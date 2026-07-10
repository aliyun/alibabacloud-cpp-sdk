// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLANGFUSEPROJECTMEMBERSHIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLANGFUSEPROJECTMEMBERSHIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyLangfuseProjectMembershipRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLangfuseProjectMembershipRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLangfuseProjectMembershipRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ModifyLangfuseProjectMembershipRequest() = default ;
    ModifyLangfuseProjectMembershipRequest(const ModifyLangfuseProjectMembershipRequest &) = default ;
    ModifyLangfuseProjectMembershipRequest(ModifyLangfuseProjectMembershipRequest &&) = default ;
    ModifyLangfuseProjectMembershipRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLangfuseProjectMembershipRequest() = default ;
    ModifyLangfuseProjectMembershipRequest& operator=(const ModifyLangfuseProjectMembershipRequest &) = default ;
    ModifyLangfuseProjectMembershipRequest& operator=(ModifyLangfuseProjectMembershipRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->email_ == nullptr && this->organizationId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->role_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyLangfuseProjectMembershipRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ModifyLangfuseProjectMembershipRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ModifyLangfuseProjectMembershipRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifyLangfuseProjectMembershipRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLangfuseProjectMembershipRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ModifyLangfuseProjectMembershipRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


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
    // The Langfuse project ID.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The role of the user in the project.
    // 
    // This parameter is required.
    shared_ptr<string> role_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
