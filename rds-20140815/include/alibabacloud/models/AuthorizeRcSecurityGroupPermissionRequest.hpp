// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZERCSECURITYGROUPPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZERCSECURITYGROUPPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AuthorizeRCSecurityGroupPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeRCSecurityGroupPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupPermissions, securityGroupPermissions_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeRCSecurityGroupPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupPermissions, securityGroupPermissions_);
    };
    AuthorizeRCSecurityGroupPermissionRequest() = default ;
    AuthorizeRCSecurityGroupPermissionRequest(const AuthorizeRCSecurityGroupPermissionRequest &) = default ;
    AuthorizeRCSecurityGroupPermissionRequest(AuthorizeRCSecurityGroupPermissionRequest &&) = default ;
    AuthorizeRCSecurityGroupPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeRCSecurityGroupPermissionRequest() = default ;
    AuthorizeRCSecurityGroupPermissionRequest& operator=(const AuthorizeRCSecurityGroupPermissionRequest &) = default ;
    AuthorizeRCSecurityGroupPermissionRequest& operator=(AuthorizeRCSecurityGroupPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && return this->regionId_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupPermissions_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupPermissions Field Functions 
    bool hasSecurityGroupPermissions() const { return this->securityGroupPermissions_ != nullptr;};
    void deleteSecurityGroupPermissions() { this->securityGroupPermissions_ = nullptr;};
    inline const vector<AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions> & securityGroupPermissions() const { DARABONBA_PTR_GET_CONST(securityGroupPermissions_, vector<AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions>) };
    inline vector<AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions> securityGroupPermissions() { DARABONBA_PTR_GET(securityGroupPermissions_, vector<AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions>) };
    inline AuthorizeRCSecurityGroupPermissionRequest& setSecurityGroupPermissions(const vector<AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions> & securityGroupPermissions) { DARABONBA_PTR_SET_VALUE(securityGroupPermissions_, securityGroupPermissions) };
    inline AuthorizeRCSecurityGroupPermissionRequest& setSecurityGroupPermissions(vector<AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions> && securityGroupPermissions) { DARABONBA_PTR_SET_RVALUE(securityGroupPermissions_, securityGroupPermissions) };


  protected:
    // The direction of the rule. Valid values:
    // 
    // *   **ingress**: the inbound security group rule.
    // *   **egress**: the outbound security group rule.
    std::shared_ptr<string> direction_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The information about the security group.
    std::shared_ptr<vector<AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions>> securityGroupPermissions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
