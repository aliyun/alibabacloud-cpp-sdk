// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZERCSECURITYGROUPPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZERCSECURITYGROUPPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AuthorizeRCSecurityGroupPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeRCSecurityGroupPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupPermissions, securityGroupPermissionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeRCSecurityGroupPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupPermissions, securityGroupPermissionsShrink_);
    };
    AuthorizeRCSecurityGroupPermissionShrinkRequest() = default ;
    AuthorizeRCSecurityGroupPermissionShrinkRequest(const AuthorizeRCSecurityGroupPermissionShrinkRequest &) = default ;
    AuthorizeRCSecurityGroupPermissionShrinkRequest(AuthorizeRCSecurityGroupPermissionShrinkRequest &&) = default ;
    AuthorizeRCSecurityGroupPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeRCSecurityGroupPermissionShrinkRequest() = default ;
    AuthorizeRCSecurityGroupPermissionShrinkRequest& operator=(const AuthorizeRCSecurityGroupPermissionShrinkRequest &) = default ;
    AuthorizeRCSecurityGroupPermissionShrinkRequest& operator=(AuthorizeRCSecurityGroupPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupPermissionsShrink_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline AuthorizeRCSecurityGroupPermissionShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AuthorizeRCSecurityGroupPermissionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline AuthorizeRCSecurityGroupPermissionShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupPermissionsShrink Field Functions 
    bool hasSecurityGroupPermissionsShrink() const { return this->securityGroupPermissionsShrink_ != nullptr;};
    void deleteSecurityGroupPermissionsShrink() { this->securityGroupPermissionsShrink_ = nullptr;};
    inline string getSecurityGroupPermissionsShrink() const { DARABONBA_PTR_GET_DEFAULT(securityGroupPermissionsShrink_, "") };
    inline AuthorizeRCSecurityGroupPermissionShrinkRequest& setSecurityGroupPermissionsShrink(string securityGroupPermissionsShrink) { DARABONBA_PTR_SET_VALUE(securityGroupPermissionsShrink_, securityGroupPermissionsShrink) };


  protected:
    // The direction of the rule. Valid values:
    // 
    // *   **ingress**: the inbound security group rule.
    // *   **egress**: the outbound security group rule.
    shared_ptr<string> direction_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the security group.
    shared_ptr<string> securityGroupId_ {};
    // The information about the security group.
    shared_ptr<string> securityGroupPermissionsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
