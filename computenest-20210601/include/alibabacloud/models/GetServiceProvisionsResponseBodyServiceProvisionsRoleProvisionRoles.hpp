// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONSROLEPROVISIONROLES_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONSROLEPROVISIONROLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles& obj) { 
      DARABONBA_PTR_TO_JSON(ApiForCreation, apiForCreation_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiForCreation, apiForCreation_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles() = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles(const GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles(GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles &&) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles() = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles& operator=(const GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles& operator=(GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiForCreation_ != nullptr
        && this->created_ != nullptr && this->function_ != nullptr && this->roleName_ != nullptr; };
    // apiForCreation Field Functions 
    bool hasApiForCreation() const { return this->apiForCreation_ != nullptr;};
    void deleteApiForCreation() { this->apiForCreation_ = nullptr;};
    inline const Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation & apiForCreation() const { DARABONBA_PTR_GET_CONST(apiForCreation_, Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation) };
    inline Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation apiForCreation() { DARABONBA_PTR_GET(apiForCreation_, Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation) };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles& setApiForCreation(const Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation & apiForCreation) { DARABONBA_PTR_SET_VALUE(apiForCreation_, apiForCreation) };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles& setApiForCreation(Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation && apiForCreation) { DARABONBA_PTR_SET_RVALUE(apiForCreation_, apiForCreation) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline bool created() const { DARABONBA_PTR_GET_DEFAULT(created_, false) };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles& setCreated(bool created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The information about the API operation that is used to create the RAM role.
    std::shared_ptr<Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation> apiForCreation_ = nullptr;
    // Indicates whether the RAM role is created. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> created_ = nullptr;
    // The purpose for which the RAM role is used. Default value: Default. A value of Default indicates that the RAM role is the default role of the service.
    std::shared_ptr<string> function_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
