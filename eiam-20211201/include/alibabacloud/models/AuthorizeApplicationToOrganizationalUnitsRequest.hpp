// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEAPPLICATIONTOORGANIZATIONALUNITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEAPPLICATIONTOORGANIZATIONALUNITSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class AuthorizeApplicationToOrganizationalUnitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeApplicationToOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeApplicationToOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
    };
    AuthorizeApplicationToOrganizationalUnitsRequest() = default ;
    AuthorizeApplicationToOrganizationalUnitsRequest(const AuthorizeApplicationToOrganizationalUnitsRequest &) = default ;
    AuthorizeApplicationToOrganizationalUnitsRequest(AuthorizeApplicationToOrganizationalUnitsRequest &&) = default ;
    AuthorizeApplicationToOrganizationalUnitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeApplicationToOrganizationalUnitsRequest() = default ;
    AuthorizeApplicationToOrganizationalUnitsRequest& operator=(const AuthorizeApplicationToOrganizationalUnitsRequest &) = default ;
    AuthorizeApplicationToOrganizationalUnitsRequest& operator=(AuthorizeApplicationToOrganizationalUnitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->instanceId_ == nullptr && return this->organizationalUnitIds_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline AuthorizeApplicationToOrganizationalUnitsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AuthorizeApplicationToOrganizationalUnitsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & organizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> organizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline AuthorizeApplicationToOrganizationalUnitsRequest& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline AuthorizeApplicationToOrganizationalUnitsRequest& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


  protected:
    // The ID of the application on which you want to grant permissions.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IDs of the organizations to which you want to grant permissions. You can grant permissions to a maximum of 100 organizations at a time.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> organizationalUnitIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
