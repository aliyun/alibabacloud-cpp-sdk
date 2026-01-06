// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKERCSECURITYGROUPPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKERCSECURITYGROUPPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RevokeRCSecurityGroupPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeRCSecurityGroupPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupRuleIdList, securityGroupRuleIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeRCSecurityGroupPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupRuleIdList, securityGroupRuleIdListShrink_);
    };
    RevokeRCSecurityGroupPermissionShrinkRequest() = default ;
    RevokeRCSecurityGroupPermissionShrinkRequest(const RevokeRCSecurityGroupPermissionShrinkRequest &) = default ;
    RevokeRCSecurityGroupPermissionShrinkRequest(RevokeRCSecurityGroupPermissionShrinkRequest &&) = default ;
    RevokeRCSecurityGroupPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeRCSecurityGroupPermissionShrinkRequest() = default ;
    RevokeRCSecurityGroupPermissionShrinkRequest& operator=(const RevokeRCSecurityGroupPermissionShrinkRequest &) = default ;
    RevokeRCSecurityGroupPermissionShrinkRequest& operator=(RevokeRCSecurityGroupPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupRuleIdListShrink_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline RevokeRCSecurityGroupPermissionShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RevokeRCSecurityGroupPermissionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline RevokeRCSecurityGroupPermissionShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupRuleIdListShrink Field Functions 
    bool hasSecurityGroupRuleIdListShrink() const { return this->securityGroupRuleIdListShrink_ != nullptr;};
    void deleteSecurityGroupRuleIdListShrink() { this->securityGroupRuleIdListShrink_ = nullptr;};
    inline string getSecurityGroupRuleIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(securityGroupRuleIdListShrink_, "") };
    inline RevokeRCSecurityGroupPermissionShrinkRequest& setSecurityGroupRuleIdListShrink(string securityGroupRuleIdListShrink) { DARABONBA_PTR_SET_VALUE(securityGroupRuleIdListShrink_, securityGroupRuleIdListShrink) };


  protected:
    // The direction of the security group rules that you want to delete. Valid values:
    // 
    // *   **ingress**: inbound security group rules.
    // *   **egress**: outbound security group rules.
    // 
    // >  You can specify security group rules only in the same direction in a request.
    shared_ptr<string> direction_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the security group.
    shared_ptr<string> securityGroupId_ {};
    // The IDs of the security group rules that you want to delete.
    shared_ptr<string> securityGroupRuleIdListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
