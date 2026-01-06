// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKERCSECURITYGROUPPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKERCSECURITYGROUPPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RevokeRCSecurityGroupPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeRCSecurityGroupPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupRuleIdList, securityGroupRuleIdList_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeRCSecurityGroupPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupRuleIdList, securityGroupRuleIdList_);
    };
    RevokeRCSecurityGroupPermissionRequest() = default ;
    RevokeRCSecurityGroupPermissionRequest(const RevokeRCSecurityGroupPermissionRequest &) = default ;
    RevokeRCSecurityGroupPermissionRequest(RevokeRCSecurityGroupPermissionRequest &&) = default ;
    RevokeRCSecurityGroupPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeRCSecurityGroupPermissionRequest() = default ;
    RevokeRCSecurityGroupPermissionRequest& operator=(const RevokeRCSecurityGroupPermissionRequest &) = default ;
    RevokeRCSecurityGroupPermissionRequest& operator=(RevokeRCSecurityGroupPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupRuleIdList_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline RevokeRCSecurityGroupPermissionRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RevokeRCSecurityGroupPermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline RevokeRCSecurityGroupPermissionRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupRuleIdList Field Functions 
    bool hasSecurityGroupRuleIdList() const { return this->securityGroupRuleIdList_ != nullptr;};
    void deleteSecurityGroupRuleIdList() { this->securityGroupRuleIdList_ = nullptr;};
    inline const vector<string> & getSecurityGroupRuleIdList() const { DARABONBA_PTR_GET_CONST(securityGroupRuleIdList_, vector<string>) };
    inline vector<string> getSecurityGroupRuleIdList() { DARABONBA_PTR_GET(securityGroupRuleIdList_, vector<string>) };
    inline RevokeRCSecurityGroupPermissionRequest& setSecurityGroupRuleIdList(const vector<string> & securityGroupRuleIdList) { DARABONBA_PTR_SET_VALUE(securityGroupRuleIdList_, securityGroupRuleIdList) };
    inline RevokeRCSecurityGroupPermissionRequest& setSecurityGroupRuleIdList(vector<string> && securityGroupRuleIdList) { DARABONBA_PTR_SET_RVALUE(securityGroupRuleIdList_, securityGroupRuleIdList) };


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
    shared_ptr<vector<string>> securityGroupRuleIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
