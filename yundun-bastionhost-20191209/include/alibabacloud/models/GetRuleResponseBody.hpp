// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODY_HPP_
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
  class GetRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    GetRuleResponseBody() = default ;
    GetRuleResponseBody(const GetRuleResponseBody &) = default ;
    GetRuleResponseBody(GetRuleResponseBody &&) = default ;
    GetRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBody() = default ;
    GetRuleResponseBody& operator=(const GetRuleResponseBody &) = default ;
    GetRuleResponseBody& operator=(GetRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rule& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Rule& obj) { 
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
      Rule() = default ;
      Rule(const Rule &) = default ;
      Rule(Rule &&) = default ;
      Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rule() = default ;
      Rule& operator=(const Rule &) = default ;
      Rule& operator=(Rule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Users : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Users& obj) { 
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Users& obj) { 
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Users() = default ;
        Users(const Users &) = default ;
        Users(Users &&) = default ;
        Users(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Users() = default ;
        Users& operator=(const Users &) = default ;
        Users& operator=(Users &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userId_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The ID of the authorized user.
        shared_ptr<string> userId_ {};
      };

      class UserGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserGroups& obj) { 
          DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, UserGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
        };
        UserGroups() = default ;
        UserGroups(const UserGroups &) = default ;
        UserGroups(UserGroups &&) = default ;
        UserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserGroups() = default ;
        UserGroups& operator=(const UserGroups &) = default ;
        UserGroups& operator=(UserGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userGroupId_ == nullptr; };
        // userGroupId Field Functions 
        bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
        void deleteUserGroupId() { this->userGroupId_ = nullptr;};
        inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
        inline UserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


      protected:
        // The ID of the authorized user group.
        shared_ptr<string> userGroupId_ {};
      };

      class Hosts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Hosts& obj) { 
          DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
          DARABONBA_PTR_TO_JSON(HostId, hostId_);
        };
        friend void from_json(const Darabonba::Json& j, Hosts& obj) { 
          DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
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
        class HostAccounts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HostAccounts& obj) { 
            DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
          };
          friend void from_json(const Darabonba::Json& j, HostAccounts& obj) { 
            DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
          };
          HostAccounts() = default ;
          HostAccounts(const HostAccounts &) = default ;
          HostAccounts(HostAccounts &&) = default ;
          HostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HostAccounts() = default ;
          HostAccounts& operator=(const HostAccounts &) = default ;
          HostAccounts& operator=(HostAccounts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->hostAccountId_ == nullptr; };
          // hostAccountId Field Functions 
          bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
          void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
          inline string getHostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
          inline HostAccounts& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


        protected:
          // The ID of the host account that the policy authorizes users to manage.
          shared_ptr<string> hostAccountId_ {};
        };

        virtual bool empty() const override { return this->hostAccounts_ == nullptr
        && this->hostId_ == nullptr; };
        // hostAccounts Field Functions 
        bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
        void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
        inline const vector<Hosts::HostAccounts> & getHostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<Hosts::HostAccounts>) };
        inline vector<Hosts::HostAccounts> getHostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<Hosts::HostAccounts>) };
        inline Hosts& setHostAccounts(const vector<Hosts::HostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
        inline Hosts& setHostAccounts(vector<Hosts::HostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


        // hostId Field Functions 
        bool hasHostId() const { return this->hostId_ != nullptr;};
        void deleteHostId() { this->hostId_ = nullptr;};
        inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
        inline Hosts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      protected:
        // The host accounts that the policy authorizes users to manage.
        shared_ptr<vector<Hosts::HostAccounts>> hostAccounts_ {};
        // The ID of the host that the policy authorizes users to manage.
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
        // The asset accounts on which permissions are granted by using the authorization rule.
        shared_ptr<vector<string>> hostAccountNames_ {};
        // The ID of the asset group that the policy authorizes users to manage.
        shared_ptr<string> hostGroupId_ {};
      };

      class Databases : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Databases& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
          DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
        };
        friend void from_json(const Darabonba::Json& j, Databases& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
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
        class DatabaseAccounts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DatabaseAccounts& obj) { 
            DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
          };
          friend void from_json(const Darabonba::Json& j, DatabaseAccounts& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
          };
          DatabaseAccounts() = default ;
          DatabaseAccounts(const DatabaseAccounts &) = default ;
          DatabaseAccounts(DatabaseAccounts &&) = default ;
          DatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DatabaseAccounts() = default ;
          DatabaseAccounts& operator=(const DatabaseAccounts &) = default ;
          DatabaseAccounts& operator=(DatabaseAccounts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->databaseAccountId_ == nullptr; };
          // databaseAccountId Field Functions 
          bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
          void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
          inline string getDatabaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
          inline DatabaseAccounts& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


        protected:
          // The ID of the database account that the policy authorizes users to manage.
          shared_ptr<string> databaseAccountId_ {};
        };

        virtual bool empty() const override { return this->databaseAccounts_ == nullptr
        && this->databaseId_ == nullptr; };
        // databaseAccounts Field Functions 
        bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
        void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
        inline const vector<Databases::DatabaseAccounts> & getDatabaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<Databases::DatabaseAccounts>) };
        inline vector<Databases::DatabaseAccounts> getDatabaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<Databases::DatabaseAccounts>) };
        inline Databases& setDatabaseAccounts(const vector<Databases::DatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
        inline Databases& setDatabaseAccounts(vector<Databases::DatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


        // databaseId Field Functions 
        bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
        void deleteDatabaseId() { this->databaseId_ = nullptr;};
        inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
        inline Databases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


      protected:
        // The database accounts on which permissions are granted by using the authorization rule.
        shared_ptr<vector<Databases::DatabaseAccounts>> databaseAccounts_ {};
        // The ID of the database that the policy authorizes users to manage.
        shared_ptr<string> databaseId_ {};
      };

      virtual bool empty() const override { return this->comment_ == nullptr
        && this->databases_ == nullptr && this->effectiveEndTime_ == nullptr && this->effectiveStartTime_ == nullptr && this->hostGroups_ == nullptr && this->hosts_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->userGroups_ == nullptr && this->users_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Rule& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // databases Field Functions 
      bool hasDatabases() const { return this->databases_ != nullptr;};
      void deleteDatabases() { this->databases_ = nullptr;};
      inline const vector<Rule::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<Rule::Databases>) };
      inline vector<Rule::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<Rule::Databases>) };
      inline Rule& setDatabases(const vector<Rule::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
      inline Rule& setDatabases(vector<Rule::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


      // effectiveEndTime Field Functions 
      bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
      void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
      inline string getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, "") };
      inline Rule& setEffectiveEndTime(string effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


      // effectiveStartTime Field Functions 
      bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
      void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
      inline string getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
      inline Rule& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


      // hostGroups Field Functions 
      bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
      void deleteHostGroups() { this->hostGroups_ = nullptr;};
      inline const vector<Rule::HostGroups> & getHostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<Rule::HostGroups>) };
      inline vector<Rule::HostGroups> getHostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<Rule::HostGroups>) };
      inline Rule& setHostGroups(const vector<Rule::HostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
      inline Rule& setHostGroups(vector<Rule::HostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


      // hosts Field Functions 
      bool hasHosts() const { return this->hosts_ != nullptr;};
      void deleteHosts() { this->hosts_ = nullptr;};
      inline const vector<Rule::Hosts> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<Rule::Hosts>) };
      inline vector<Rule::Hosts> getHosts() { DARABONBA_PTR_GET(hosts_, vector<Rule::Hosts>) };
      inline Rule& setHosts(const vector<Rule::Hosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
      inline Rule& setHosts(vector<Rule::Hosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Rule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // userGroups Field Functions 
      bool hasUserGroups() const { return this->userGroups_ != nullptr;};
      void deleteUserGroups() { this->userGroups_ = nullptr;};
      inline const vector<Rule::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<Rule::UserGroups>) };
      inline vector<Rule::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<Rule::UserGroups>) };
      inline Rule& setUserGroups(const vector<Rule::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
      inline Rule& setUserGroups(vector<Rule::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const vector<Rule::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<Rule::Users>) };
      inline vector<Rule::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<Rule::Users>) };
      inline Rule& setUsers(const vector<Rule::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline Rule& setUsers(vector<Rule::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    protected:
      // The remarks of the authorization rule.
      shared_ptr<string> comment_ {};
      // The databases on which permissions are granted by using the authorization rule.
      shared_ptr<vector<Rule::Databases>> databases_ {};
      // The end time of the validity period of the authorization rule. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<string> effectiveEndTime_ {};
      // The start time of the validity period of the authorization rule. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<string> effectiveStartTime_ {};
      // The asset groups on which permissions are granted by using the authorization rule.
      shared_ptr<vector<Rule::HostGroups>> hostGroups_ {};
      // The information about the hosts that the policy authorizes users to manage.
      shared_ptr<vector<Rule::Hosts>> hosts_ {};
      // The ID of the authorization rule.
      shared_ptr<string> ruleId_ {};
      // The name of the authorization rule.
      shared_ptr<string> ruleName_ {};
      // The authorized user groups.
      shared_ptr<vector<Rule::UserGroups>> userGroups_ {};
      // The authorized users.
      shared_ptr<vector<Rule::Users>> users_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rule_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const GetRuleResponseBody::Rule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, GetRuleResponseBody::Rule) };
    inline GetRuleResponseBody::Rule getRule() { DARABONBA_PTR_GET(rule_, GetRuleResponseBody::Rule) };
    inline GetRuleResponseBody& setRule(const GetRuleResponseBody::Rule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline GetRuleResponseBody& setRule(GetRuleResponseBody::Rule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned information about the authorization rule.
    shared_ptr<GetRuleResponseBody::Rule> rule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
