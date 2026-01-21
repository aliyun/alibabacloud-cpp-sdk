// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Hosts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Hosts& obj) { 
        DARABONBA_PTR_TO_JSON(HostAccountIds, hostAccountIds_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
      };
      friend void from_json(const Darabonba::Json& j, Hosts& obj) { 
        DARABONBA_PTR_FROM_JSON(HostAccountIds, hostAccountIds_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      };
      Hosts() = default ;
      Hosts(const Hosts &) = default ;
      Hosts(Hosts &&) = default ;
      Hosts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Hosts() = default ;
      Hosts& operator=(const Hosts &) = default ;
      Hosts& operator=(Hosts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hostAccountIds_ == nullptr
        && this->hostId_ == nullptr; };
      // hostAccountIds Field Functions 
      bool hasHostAccountIds() const { return this->hostAccountIds_ != nullptr;};
      void deleteHostAccountIds() { this->hostAccountIds_ = nullptr;};
      inline const vector<string> & getHostAccountIds() const { DARABONBA_PTR_GET_CONST(hostAccountIds_, vector<string>) };
      inline vector<string> getHostAccountIds() { DARABONBA_PTR_GET(hostAccountIds_, vector<string>) };
      inline Hosts& setHostAccountIds(const vector<string> & hostAccountIds) { DARABONBA_PTR_SET_VALUE(hostAccountIds_, hostAccountIds) };
      inline Hosts& setHostAccountIds(vector<string> && hostAccountIds) { DARABONBA_PTR_SET_RVALUE(hostAccountIds_, hostAccountIds) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Hosts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    protected:
      // The host account IDs.
      shared_ptr<vector<string>> hostAccountIds_ {};
      // The host ID.
      shared_ptr<string> hostId_ {};
    };

    class HostGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostGroups& obj) { 
        DARABONBA_PTR_TO_JSON(HostAccountNames, hostAccountNames_);
        DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, HostGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(HostAccountNames, hostAccountNames_);
        DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      };
      HostGroups() = default ;
      HostGroups(const HostGroups &) = default ;
      HostGroups(HostGroups &&) = default ;
      HostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostGroups() = default ;
      HostGroups& operator=(const HostGroups &) = default ;
      HostGroups& operator=(HostGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hostAccountNames_ == nullptr
        && this->hostGroupId_ == nullptr; };
      // hostAccountNames Field Functions 
      bool hasHostAccountNames() const { return this->hostAccountNames_ != nullptr;};
      void deleteHostAccountNames() { this->hostAccountNames_ = nullptr;};
      inline const vector<string> & getHostAccountNames() const { DARABONBA_PTR_GET_CONST(hostAccountNames_, vector<string>) };
      inline vector<string> getHostAccountNames() { DARABONBA_PTR_GET(hostAccountNames_, vector<string>) };
      inline HostGroups& setHostAccountNames(const vector<string> & hostAccountNames) { DARABONBA_PTR_SET_VALUE(hostAccountNames_, hostAccountNames) };
      inline HostGroups& setHostAccountNames(vector<string> && hostAccountNames) { DARABONBA_PTR_SET_RVALUE(hostAccountNames_, hostAccountNames) };


      // hostGroupId Field Functions 
      bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
      void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
      inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
      inline HostGroups& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    protected:
      // The names of the asset accounts.
      shared_ptr<vector<string>> hostAccountNames_ {};
      // The asset group ID.
      shared_ptr<string> hostGroupId_ {};
    };

    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseAccountIds, databaseAccountIds_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseAccountIds, databaseAccountIds_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseAccountIds_ == nullptr
        && this->databaseId_ == nullptr; };
      // databaseAccountIds Field Functions 
      bool hasDatabaseAccountIds() const { return this->databaseAccountIds_ != nullptr;};
      void deleteDatabaseAccountIds() { this->databaseAccountIds_ = nullptr;};
      inline const vector<string> & getDatabaseAccountIds() const { DARABONBA_PTR_GET_CONST(databaseAccountIds_, vector<string>) };
      inline vector<string> getDatabaseAccountIds() { DARABONBA_PTR_GET(databaseAccountIds_, vector<string>) };
      inline Databases& setDatabaseAccountIds(const vector<string> & databaseAccountIds) { DARABONBA_PTR_SET_VALUE(databaseAccountIds_, databaseAccountIds) };
      inline Databases& setDatabaseAccountIds(vector<string> && databaseAccountIds) { DARABONBA_PTR_SET_RVALUE(databaseAccountIds_, databaseAccountIds) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Databases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    protected:
      // The database account IDs.
      shared_ptr<vector<string>> databaseAccountIds_ {};
      // The database ID.
      shared_ptr<string> databaseId_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->databases_ == nullptr && this->effectiveEndTime_ == nullptr && this->effectiveStartTime_ == nullptr && this->hostGroups_ == nullptr && this->hosts_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->userGroupIds_ == nullptr
        && this->userIds_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyRuleRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<ModifyRuleRequest::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<ModifyRuleRequest::Databases>) };
    inline vector<ModifyRuleRequest::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<ModifyRuleRequest::Databases>) };
    inline ModifyRuleRequest& setDatabases(const vector<ModifyRuleRequest::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ModifyRuleRequest& setDatabases(vector<ModifyRuleRequest::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline int64_t getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
    inline ModifyRuleRequest& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline int64_t getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
    inline ModifyRuleRequest& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline const vector<ModifyRuleRequest::HostGroups> & getHostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<ModifyRuleRequest::HostGroups>) };
    inline vector<ModifyRuleRequest::HostGroups> getHostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<ModifyRuleRequest::HostGroups>) };
    inline ModifyRuleRequest& setHostGroups(const vector<ModifyRuleRequest::HostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
    inline ModifyRuleRequest& setHostGroups(vector<ModifyRuleRequest::HostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<ModifyRuleRequest::Hosts> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<ModifyRuleRequest::Hosts>) };
    inline vector<ModifyRuleRequest::Hosts> getHosts() { DARABONBA_PTR_GET(hosts_, vector<ModifyRuleRequest::Hosts>) };
    inline ModifyRuleRequest& setHosts(const vector<ModifyRuleRequest::Hosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline ModifyRuleRequest& setHosts(vector<ModifyRuleRequest::Hosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ModifyRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline ModifyRuleRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline ModifyRuleRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline ModifyRuleRequest& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline ModifyRuleRequest& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The new remarks of the authorization rule. It can be up to 500 characters in length.
    shared_ptr<string> comment_ {};
    // The databases and database accounts that a user associated with the modified rule can manage.
    shared_ptr<vector<ModifyRuleRequest::Databases>> databases_ {};
    // The end time of the new validity period of the authorization rule. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> effectiveEndTime_ {};
    // The start time of the new validity period of the authorization rule. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> effectiveStartTime_ {};
    // The asset groups and asset accounts that a user associated with the modified rule can manage.
    shared_ptr<vector<ModifyRuleRequest::HostGroups>> hostGroups_ {};
    // An array that consists of the host IDs and host account IDs with which the modified authorization rule is associated.
    shared_ptr<vector<ModifyRuleRequest::Hosts>> hosts_ {};
    // The ID of the bastion host whose authorization rule you want to modify.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host to which the authorization rule to modify belongs.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the authorization rule to modify.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // The new name of the authorization rule. The name must be 1 to 128 characters in length and can contain periods (.), underscores (_), hyphens (-), single quotation marks (\\"), and spaces. It cannot start with a special character.
    shared_ptr<string> ruleName_ {};
    // The IDs of the user groups with which the modified authorization rule is associated.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The IDs of the users with whom the modified authorization rule is associated.
    shared_ptr<vector<string>> userIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
