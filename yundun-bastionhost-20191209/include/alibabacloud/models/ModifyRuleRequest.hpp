// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyRuleRequestDatabases.hpp>
#include <alibabacloud/models/ModifyRuleRequestHostGroups.hpp>
#include <alibabacloud/models/ModifyRuleRequestHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    ModifyRuleRequest() = default ;
    ModifyRuleRequest(const ModifyRuleRequest &) = default ;
    ModifyRuleRequest(ModifyRuleRequest &&) = default ;
    ModifyRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRuleRequest() = default ;
    ModifyRuleRequest& operator=(const ModifyRuleRequest &) = default ;
    ModifyRuleRequest& operator=(ModifyRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->databases_ != nullptr && this->effectiveEndTime_ != nullptr && this->effectiveStartTime_ != nullptr && this->hostGroups_ != nullptr && this->hosts_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->userGroupIds_ != nullptr
        && this->userIds_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyRuleRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<ModifyRuleRequestDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<ModifyRuleRequestDatabases>) };
    inline vector<ModifyRuleRequestDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<ModifyRuleRequestDatabases>) };
    inline ModifyRuleRequest& setDatabases(const vector<ModifyRuleRequestDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ModifyRuleRequest& setDatabases(vector<ModifyRuleRequestDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline int64_t effectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
    inline ModifyRuleRequest& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline int64_t effectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
    inline ModifyRuleRequest& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline const vector<ModifyRuleRequestHostGroups> & hostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<ModifyRuleRequestHostGroups>) };
    inline vector<ModifyRuleRequestHostGroups> hostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<ModifyRuleRequestHostGroups>) };
    inline ModifyRuleRequest& setHostGroups(const vector<ModifyRuleRequestHostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
    inline ModifyRuleRequest& setHostGroups(vector<ModifyRuleRequestHostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<ModifyRuleRequestHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<ModifyRuleRequestHosts>) };
    inline vector<ModifyRuleRequestHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<ModifyRuleRequestHosts>) };
    inline ModifyRuleRequest& setHosts(const vector<ModifyRuleRequestHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline ModifyRuleRequest& setHosts(vector<ModifyRuleRequestHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ModifyRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline ModifyRuleRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline ModifyRuleRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & userIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> userIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline ModifyRuleRequest& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline ModifyRuleRequest& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The new remarks of the authorization rule. It can be up to 500 characters in length.
    std::shared_ptr<string> comment_ = nullptr;
    // The databases and database accounts that a user associated with the modified rule can manage.
    std::shared_ptr<vector<ModifyRuleRequestDatabases>> databases_ = nullptr;
    // The end time of the new validity period of the authorization rule. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> effectiveEndTime_ = nullptr;
    // The start time of the new validity period of the authorization rule. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> effectiveStartTime_ = nullptr;
    // The asset groups and asset accounts that a user associated with the modified rule can manage.
    std::shared_ptr<vector<ModifyRuleRequestHostGroups>> hostGroups_ = nullptr;
    // An array that consists of the host IDs and host account IDs with which the modified authorization rule is associated.
    std::shared_ptr<vector<ModifyRuleRequestHosts>> hosts_ = nullptr;
    // The ID of the bastion host whose authorization rule you want to modify.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host to which the authorization rule to modify belongs.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the authorization rule to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The new name of the authorization rule. The name must be 1 to 128 characters in length and can contain periods (.), underscores (_), hyphens (-), single quotation marks (\\"), and spaces. It cannot start with a special character.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The IDs of the user groups with which the modified authorization rule is associated.
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    // The IDs of the users with whom the modified authorization rule is associated.
    std::shared_ptr<vector<string>> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
