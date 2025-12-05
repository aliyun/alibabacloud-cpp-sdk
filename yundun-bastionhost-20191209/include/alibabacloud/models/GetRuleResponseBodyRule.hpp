// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULE_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRuleResponseBodyRuleDatabases.hpp>
#include <alibabacloud/models/GetRuleResponseBodyRuleHostGroups.hpp>
#include <alibabacloud/models/GetRuleResponseBodyRuleHosts.hpp>
#include <alibabacloud/models/GetRuleResponseBodyRuleUserGroups.hpp>
#include <alibabacloud/models/GetRuleResponseBodyRuleUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetRuleResponseBodyRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyRule& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    GetRuleResponseBodyRule() = default ;
    GetRuleResponseBodyRule(const GetRuleResponseBodyRule &) = default ;
    GetRuleResponseBodyRule(GetRuleResponseBodyRule &&) = default ;
    GetRuleResponseBodyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyRule() = default ;
    GetRuleResponseBodyRule& operator=(const GetRuleResponseBodyRule &) = default ;
    GetRuleResponseBodyRule& operator=(GetRuleResponseBodyRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->databases_ == nullptr && return this->effectiveEndTime_ == nullptr && return this->effectiveStartTime_ == nullptr && return this->hostGroups_ == nullptr && return this->hosts_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->userGroups_ == nullptr && return this->users_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetRuleResponseBodyRule& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<Models::GetRuleResponseBodyRuleDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<Models::GetRuleResponseBodyRuleDatabases>) };
    inline vector<Models::GetRuleResponseBodyRuleDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<Models::GetRuleResponseBodyRuleDatabases>) };
    inline GetRuleResponseBodyRule& setDatabases(const vector<Models::GetRuleResponseBodyRuleDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline GetRuleResponseBodyRule& setDatabases(vector<Models::GetRuleResponseBodyRuleDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline string effectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, "") };
    inline GetRuleResponseBodyRule& setEffectiveEndTime(string effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline string effectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
    inline GetRuleResponseBodyRule& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline const vector<Models::GetRuleResponseBodyRuleHostGroups> & hostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<Models::GetRuleResponseBodyRuleHostGroups>) };
    inline vector<Models::GetRuleResponseBodyRuleHostGroups> hostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<Models::GetRuleResponseBodyRuleHostGroups>) };
    inline GetRuleResponseBodyRule& setHostGroups(const vector<Models::GetRuleResponseBodyRuleHostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
    inline GetRuleResponseBodyRule& setHostGroups(vector<Models::GetRuleResponseBodyRuleHostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<Models::GetRuleResponseBodyRuleHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<Models::GetRuleResponseBodyRuleHosts>) };
    inline vector<Models::GetRuleResponseBodyRuleHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<Models::GetRuleResponseBodyRuleHosts>) };
    inline GetRuleResponseBodyRule& setHosts(const vector<Models::GetRuleResponseBodyRuleHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline GetRuleResponseBodyRule& setHosts(vector<Models::GetRuleResponseBodyRuleHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetRuleResponseBodyRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetRuleResponseBodyRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<Models::GetRuleResponseBodyRuleUserGroups> & userGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<Models::GetRuleResponseBodyRuleUserGroups>) };
    inline vector<Models::GetRuleResponseBodyRuleUserGroups> userGroups() { DARABONBA_PTR_GET(userGroups_, vector<Models::GetRuleResponseBodyRuleUserGroups>) };
    inline GetRuleResponseBodyRule& setUserGroups(const vector<Models::GetRuleResponseBodyRuleUserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline GetRuleResponseBodyRule& setUserGroups(vector<Models::GetRuleResponseBodyRuleUserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<Models::GetRuleResponseBodyRuleUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<Models::GetRuleResponseBodyRuleUsers>) };
    inline vector<Models::GetRuleResponseBodyRuleUsers> users() { DARABONBA_PTR_GET(users_, vector<Models::GetRuleResponseBodyRuleUsers>) };
    inline GetRuleResponseBodyRule& setUsers(const vector<Models::GetRuleResponseBodyRuleUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline GetRuleResponseBodyRule& setUsers(vector<Models::GetRuleResponseBodyRuleUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The remarks of the authorization rule.
    std::shared_ptr<string> comment_ = nullptr;
    // The databases on which permissions are granted by using the authorization rule.
    std::shared_ptr<vector<Models::GetRuleResponseBodyRuleDatabases>> databases_ = nullptr;
    // The end time of the validity period of the authorization rule. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<string> effectiveEndTime_ = nullptr;
    // The start time of the validity period of the authorization rule. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<string> effectiveStartTime_ = nullptr;
    // The asset groups on which permissions are granted by using the authorization rule.
    std::shared_ptr<vector<Models::GetRuleResponseBodyRuleHostGroups>> hostGroups_ = nullptr;
    // The information about the hosts that the policy authorizes users to manage.
    std::shared_ptr<vector<Models::GetRuleResponseBodyRuleHosts>> hosts_ = nullptr;
    // The ID of the authorization rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the authorization rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The authorized user groups.
    std::shared_ptr<vector<Models::GetRuleResponseBodyRuleUserGroups>> userGroups_ = nullptr;
    // The authorized users.
    std::shared_ptr<vector<Models::GetRuleResponseBodyRuleUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
