// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONSROLEPROVISION_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONSROLEPROVISION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationURL, authorizationURL_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationURL, authorizationURL_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
    };
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision() = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision(const GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision(GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision &&) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision() = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision& operator=(const GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision& operator=(GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationURL_ != nullptr
        && this->roles_ != nullptr; };
    // authorizationURL Field Functions 
    bool hasAuthorizationURL() const { return this->authorizationURL_ != nullptr;};
    void deleteAuthorizationURL() { this->authorizationURL_ = nullptr;};
    inline string authorizationURL() const { DARABONBA_PTR_GET_DEFAULT(authorizationURL_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision& setAuthorizationURL(string authorizationURL) { DARABONBA_PTR_SET_VALUE(authorizationURL_, authorizationURL) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles>) };
    inline vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles> roles() { DARABONBA_PTR_GET(roles_, vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles>) };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision& setRoles(const vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision& setRoles(vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    // The authorization URL of the RAM role.
    // 
    // > This parameter is returned if Created is set to false.
    std::shared_ptr<string> authorizationURL_ = nullptr;
    // The RAM roles of the service.
    std::shared_ptr<vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles>> roles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
