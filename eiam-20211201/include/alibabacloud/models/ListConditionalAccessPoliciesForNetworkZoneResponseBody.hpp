// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORNETWORKZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORNETWORKZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForNetworkZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConditionalAccessPoliciesForNetworkZoneResponseBody() = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody(const ListConditionalAccessPoliciesForNetworkZoneResponseBody &) = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody(ListConditionalAccessPoliciesForNetworkZoneResponseBody &&) = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForNetworkZoneResponseBody() = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody& operator=(const ListConditionalAccessPoliciesForNetworkZoneResponseBody &) = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody& operator=(ListConditionalAccessPoliciesForNetworkZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConditionalAccessPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConditionalAccessPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
        DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyName, conditionalAccessPolicyName_);
        DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyType, conditionalAccessPolicyType_);
        DARABONBA_PTR_TO_JSON(ConditionsConfig, conditionsConfig_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DecisionConfig, decisionConfig_);
        DARABONBA_PTR_TO_JSON(DecisionType, decisionType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EvaluateAt, evaluateAt_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastUpdatedTime, lastUpdatedTime_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ConditionalAccessPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
        DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyName, conditionalAccessPolicyName_);
        DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyType, conditionalAccessPolicyType_);
        DARABONBA_PTR_FROM_JSON(ConditionsConfig, conditionsConfig_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DecisionConfig, decisionConfig_);
        DARABONBA_PTR_FROM_JSON(DecisionType, decisionType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EvaluateAt, evaluateAt_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastUpdatedTime, lastUpdatedTime_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ConditionalAccessPolicies() = default ;
      ConditionalAccessPolicies(const ConditionalAccessPolicies &) = default ;
      ConditionalAccessPolicies(ConditionalAccessPolicies &&) = default ;
      ConditionalAccessPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConditionalAccessPolicies() = default ;
      ConditionalAccessPolicies& operator=(const ConditionalAccessPolicies &) = default ;
      ConditionalAccessPolicies& operator=(ConditionalAccessPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DecisionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DecisionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveSessionReuseStatus, activeSessionReuseStatus_);
          DARABONBA_PTR_TO_JSON(Effect, effect_);
          DARABONBA_PTR_TO_JSON(MfaAuthenticationIntervalSeconds, mfaAuthenticationIntervalSeconds_);
          DARABONBA_PTR_TO_JSON(MfaAuthenticationMethods, mfaAuthenticationMethods_);
          DARABONBA_PTR_TO_JSON(MfaType, mfaType_);
        };
        friend void from_json(const Darabonba::Json& j, DecisionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveSessionReuseStatus, activeSessionReuseStatus_);
          DARABONBA_PTR_FROM_JSON(Effect, effect_);
          DARABONBA_PTR_FROM_JSON(MfaAuthenticationIntervalSeconds, mfaAuthenticationIntervalSeconds_);
          DARABONBA_PTR_FROM_JSON(MfaAuthenticationMethods, mfaAuthenticationMethods_);
          DARABONBA_PTR_FROM_JSON(MfaType, mfaType_);
        };
        DecisionConfig() = default ;
        DecisionConfig(const DecisionConfig &) = default ;
        DecisionConfig(DecisionConfig &&) = default ;
        DecisionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DecisionConfig() = default ;
        DecisionConfig& operator=(const DecisionConfig &) = default ;
        DecisionConfig& operator=(DecisionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeSessionReuseStatus_ == nullptr
        && this->effect_ == nullptr && this->mfaAuthenticationIntervalSeconds_ == nullptr && this->mfaAuthenticationMethods_ == nullptr && this->mfaType_ == nullptr; };
        // activeSessionReuseStatus Field Functions 
        bool hasActiveSessionReuseStatus() const { return this->activeSessionReuseStatus_ != nullptr;};
        void deleteActiveSessionReuseStatus() { this->activeSessionReuseStatus_ = nullptr;};
        inline string getActiveSessionReuseStatus() const { DARABONBA_PTR_GET_DEFAULT(activeSessionReuseStatus_, "") };
        inline DecisionConfig& setActiveSessionReuseStatus(string activeSessionReuseStatus) { DARABONBA_PTR_SET_VALUE(activeSessionReuseStatus_, activeSessionReuseStatus) };


        // effect Field Functions 
        bool hasEffect() const { return this->effect_ != nullptr;};
        void deleteEffect() { this->effect_ = nullptr;};
        inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
        inline DecisionConfig& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


        // mfaAuthenticationIntervalSeconds Field Functions 
        bool hasMfaAuthenticationIntervalSeconds() const { return this->mfaAuthenticationIntervalSeconds_ != nullptr;};
        void deleteMfaAuthenticationIntervalSeconds() { this->mfaAuthenticationIntervalSeconds_ = nullptr;};
        inline int64_t getMfaAuthenticationIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(mfaAuthenticationIntervalSeconds_, 0L) };
        inline DecisionConfig& setMfaAuthenticationIntervalSeconds(int64_t mfaAuthenticationIntervalSeconds) { DARABONBA_PTR_SET_VALUE(mfaAuthenticationIntervalSeconds_, mfaAuthenticationIntervalSeconds) };


        // mfaAuthenticationMethods Field Functions 
        bool hasMfaAuthenticationMethods() const { return this->mfaAuthenticationMethods_ != nullptr;};
        void deleteMfaAuthenticationMethods() { this->mfaAuthenticationMethods_ = nullptr;};
        inline const vector<string> & getMfaAuthenticationMethods() const { DARABONBA_PTR_GET_CONST(mfaAuthenticationMethods_, vector<string>) };
        inline vector<string> getMfaAuthenticationMethods() { DARABONBA_PTR_GET(mfaAuthenticationMethods_, vector<string>) };
        inline DecisionConfig& setMfaAuthenticationMethods(const vector<string> & mfaAuthenticationMethods) { DARABONBA_PTR_SET_VALUE(mfaAuthenticationMethods_, mfaAuthenticationMethods) };
        inline DecisionConfig& setMfaAuthenticationMethods(vector<string> && mfaAuthenticationMethods) { DARABONBA_PTR_SET_RVALUE(mfaAuthenticationMethods_, mfaAuthenticationMethods) };


        // mfaType Field Functions 
        bool hasMfaType() const { return this->mfaType_ != nullptr;};
        void deleteMfaType() { this->mfaType_ = nullptr;};
        inline string getMfaType() const { DARABONBA_PTR_GET_DEFAULT(mfaType_, "") };
        inline DecisionConfig& setMfaType(string mfaType) { DARABONBA_PTR_SET_VALUE(mfaType_, mfaType) };


      protected:
        // Whether session reuse is enabled
        shared_ptr<string> activeSessionReuseStatus_ {};
        // Decision action of the conditional access policy
        shared_ptr<string> effect_ {};
        // Re-authentication interval for conditional access policy (seconds)
        shared_ptr<int64_t> mfaAuthenticationIntervalSeconds_ {};
        // MFA types allowed by the conditional access policy
        shared_ptr<vector<string>> mfaAuthenticationMethods_ {};
        // MFA type of the conditional access policy
        shared_ptr<string> mfaType_ {};
      };

      class ConditionsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConditionsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Applications, applications_);
          DARABONBA_PTR_TO_JSON(NetworkZones, networkZones_);
          DARABONBA_PTR_TO_JSON(Users, users_);
        };
        friend void from_json(const Darabonba::Json& j, ConditionsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Applications, applications_);
          DARABONBA_PTR_FROM_JSON(NetworkZones, networkZones_);
          DARABONBA_PTR_FROM_JSON(Users, users_);
        };
        ConditionsConfig() = default ;
        ConditionsConfig(const ConditionsConfig &) = default ;
        ConditionsConfig(ConditionsConfig &&) = default ;
        ConditionsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConditionsConfig() = default ;
        ConditionsConfig& operator=(const ConditionsConfig &) = default ;
        ConditionsConfig& operator=(ConditionsConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Users : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Users& obj) { 
            DARABONBA_PTR_TO_JSON(ExcludeGroups, excludeGroups_);
            DARABONBA_PTR_TO_JSON(ExcludeOrganizationalUnits, excludeOrganizationalUnits_);
            DARABONBA_PTR_TO_JSON(ExcludeUsers, excludeUsers_);
            DARABONBA_PTR_TO_JSON(IncludeGroups, includeGroups_);
            DARABONBA_PTR_TO_JSON(IncludeOrganizationalUnits, includeOrganizationalUnits_);
            DARABONBA_PTR_TO_JSON(IncludeUsers, includeUsers_);
          };
          friend void from_json(const Darabonba::Json& j, Users& obj) { 
            DARABONBA_PTR_FROM_JSON(ExcludeGroups, excludeGroups_);
            DARABONBA_PTR_FROM_JSON(ExcludeOrganizationalUnits, excludeOrganizationalUnits_);
            DARABONBA_PTR_FROM_JSON(ExcludeUsers, excludeUsers_);
            DARABONBA_PTR_FROM_JSON(IncludeGroups, includeGroups_);
            DARABONBA_PTR_FROM_JSON(IncludeOrganizationalUnits, includeOrganizationalUnits_);
            DARABONBA_PTR_FROM_JSON(IncludeUsers, includeUsers_);
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
          virtual bool empty() const override { return this->excludeGroups_ == nullptr
        && this->excludeOrganizationalUnits_ == nullptr && this->excludeUsers_ == nullptr && this->includeGroups_ == nullptr && this->includeOrganizationalUnits_ == nullptr && this->includeUsers_ == nullptr; };
          // excludeGroups Field Functions 
          bool hasExcludeGroups() const { return this->excludeGroups_ != nullptr;};
          void deleteExcludeGroups() { this->excludeGroups_ = nullptr;};
          inline const vector<string> & getExcludeGroups() const { DARABONBA_PTR_GET_CONST(excludeGroups_, vector<string>) };
          inline vector<string> getExcludeGroups() { DARABONBA_PTR_GET(excludeGroups_, vector<string>) };
          inline Users& setExcludeGroups(const vector<string> & excludeGroups) { DARABONBA_PTR_SET_VALUE(excludeGroups_, excludeGroups) };
          inline Users& setExcludeGroups(vector<string> && excludeGroups) { DARABONBA_PTR_SET_RVALUE(excludeGroups_, excludeGroups) };


          // excludeOrganizationalUnits Field Functions 
          bool hasExcludeOrganizationalUnits() const { return this->excludeOrganizationalUnits_ != nullptr;};
          void deleteExcludeOrganizationalUnits() { this->excludeOrganizationalUnits_ = nullptr;};
          inline const vector<string> & getExcludeOrganizationalUnits() const { DARABONBA_PTR_GET_CONST(excludeOrganizationalUnits_, vector<string>) };
          inline vector<string> getExcludeOrganizationalUnits() { DARABONBA_PTR_GET(excludeOrganizationalUnits_, vector<string>) };
          inline Users& setExcludeOrganizationalUnits(const vector<string> & excludeOrganizationalUnits) { DARABONBA_PTR_SET_VALUE(excludeOrganizationalUnits_, excludeOrganizationalUnits) };
          inline Users& setExcludeOrganizationalUnits(vector<string> && excludeOrganizationalUnits) { DARABONBA_PTR_SET_RVALUE(excludeOrganizationalUnits_, excludeOrganizationalUnits) };


          // excludeUsers Field Functions 
          bool hasExcludeUsers() const { return this->excludeUsers_ != nullptr;};
          void deleteExcludeUsers() { this->excludeUsers_ = nullptr;};
          inline const vector<string> & getExcludeUsers() const { DARABONBA_PTR_GET_CONST(excludeUsers_, vector<string>) };
          inline vector<string> getExcludeUsers() { DARABONBA_PTR_GET(excludeUsers_, vector<string>) };
          inline Users& setExcludeUsers(const vector<string> & excludeUsers) { DARABONBA_PTR_SET_VALUE(excludeUsers_, excludeUsers) };
          inline Users& setExcludeUsers(vector<string> && excludeUsers) { DARABONBA_PTR_SET_RVALUE(excludeUsers_, excludeUsers) };


          // includeGroups Field Functions 
          bool hasIncludeGroups() const { return this->includeGroups_ != nullptr;};
          void deleteIncludeGroups() { this->includeGroups_ = nullptr;};
          inline const vector<string> & getIncludeGroups() const { DARABONBA_PTR_GET_CONST(includeGroups_, vector<string>) };
          inline vector<string> getIncludeGroups() { DARABONBA_PTR_GET(includeGroups_, vector<string>) };
          inline Users& setIncludeGroups(const vector<string> & includeGroups) { DARABONBA_PTR_SET_VALUE(includeGroups_, includeGroups) };
          inline Users& setIncludeGroups(vector<string> && includeGroups) { DARABONBA_PTR_SET_RVALUE(includeGroups_, includeGroups) };


          // includeOrganizationalUnits Field Functions 
          bool hasIncludeOrganizationalUnits() const { return this->includeOrganizationalUnits_ != nullptr;};
          void deleteIncludeOrganizationalUnits() { this->includeOrganizationalUnits_ = nullptr;};
          inline const vector<string> & getIncludeOrganizationalUnits() const { DARABONBA_PTR_GET_CONST(includeOrganizationalUnits_, vector<string>) };
          inline vector<string> getIncludeOrganizationalUnits() { DARABONBA_PTR_GET(includeOrganizationalUnits_, vector<string>) };
          inline Users& setIncludeOrganizationalUnits(const vector<string> & includeOrganizationalUnits) { DARABONBA_PTR_SET_VALUE(includeOrganizationalUnits_, includeOrganizationalUnits) };
          inline Users& setIncludeOrganizationalUnits(vector<string> && includeOrganizationalUnits) { DARABONBA_PTR_SET_RVALUE(includeOrganizationalUnits_, includeOrganizationalUnits) };


          // includeUsers Field Functions 
          bool hasIncludeUsers() const { return this->includeUsers_ != nullptr;};
          void deleteIncludeUsers() { this->includeUsers_ = nullptr;};
          inline const vector<string> & getIncludeUsers() const { DARABONBA_PTR_GET_CONST(includeUsers_, vector<string>) };
          inline vector<string> getIncludeUsers() { DARABONBA_PTR_GET(includeUsers_, vector<string>) };
          inline Users& setIncludeUsers(const vector<string> & includeUsers) { DARABONBA_PTR_SET_VALUE(includeUsers_, includeUsers) };
          inline Users& setIncludeUsers(vector<string> && includeUsers) { DARABONBA_PTR_SET_RVALUE(includeUsers_, includeUsers) };


        protected:
          // Excluded user groups
          shared_ptr<vector<string>> excludeGroups_ {};
          // Excluded organizations
          shared_ptr<vector<string>> excludeOrganizationalUnits_ {};
          // Excluded Users
          shared_ptr<vector<string>> excludeUsers_ {};
          // Selected user groups
          shared_ptr<vector<string>> includeGroups_ {};
          // Selected organizations
          shared_ptr<vector<string>> includeOrganizationalUnits_ {};
          // Selected users
          shared_ptr<vector<string>> includeUsers_ {};
        };

        class NetworkZones : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkZones& obj) { 
            DARABONBA_PTR_TO_JSON(ExcludeNetworkZones, excludeNetworkZones_);
            DARABONBA_PTR_TO_JSON(IncludeNetworkZones, includeNetworkZones_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkZones& obj) { 
            DARABONBA_PTR_FROM_JSON(ExcludeNetworkZones, excludeNetworkZones_);
            DARABONBA_PTR_FROM_JSON(IncludeNetworkZones, includeNetworkZones_);
          };
          NetworkZones() = default ;
          NetworkZones(const NetworkZones &) = default ;
          NetworkZones(NetworkZones &&) = default ;
          NetworkZones(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkZones() = default ;
          NetworkZones& operator=(const NetworkZones &) = default ;
          NetworkZones& operator=(NetworkZones &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->excludeNetworkZones_ == nullptr
        && this->includeNetworkZones_ == nullptr; };
          // excludeNetworkZones Field Functions 
          bool hasExcludeNetworkZones() const { return this->excludeNetworkZones_ != nullptr;};
          void deleteExcludeNetworkZones() { this->excludeNetworkZones_ = nullptr;};
          inline const vector<string> & getExcludeNetworkZones() const { DARABONBA_PTR_GET_CONST(excludeNetworkZones_, vector<string>) };
          inline vector<string> getExcludeNetworkZones() { DARABONBA_PTR_GET(excludeNetworkZones_, vector<string>) };
          inline NetworkZones& setExcludeNetworkZones(const vector<string> & excludeNetworkZones) { DARABONBA_PTR_SET_VALUE(excludeNetworkZones_, excludeNetworkZones) };
          inline NetworkZones& setExcludeNetworkZones(vector<string> && excludeNetworkZones) { DARABONBA_PTR_SET_RVALUE(excludeNetworkZones_, excludeNetworkZones) };


          // includeNetworkZones Field Functions 
          bool hasIncludeNetworkZones() const { return this->includeNetworkZones_ != nullptr;};
          void deleteIncludeNetworkZones() { this->includeNetworkZones_ = nullptr;};
          inline const vector<string> & getIncludeNetworkZones() const { DARABONBA_PTR_GET_CONST(includeNetworkZones_, vector<string>) };
          inline vector<string> getIncludeNetworkZones() { DARABONBA_PTR_GET(includeNetworkZones_, vector<string>) };
          inline NetworkZones& setIncludeNetworkZones(const vector<string> & includeNetworkZones) { DARABONBA_PTR_SET_VALUE(includeNetworkZones_, includeNetworkZones) };
          inline NetworkZones& setIncludeNetworkZones(vector<string> && includeNetworkZones) { DARABONBA_PTR_SET_RVALUE(includeNetworkZones_, includeNetworkZones) };


        protected:
          // Excluded network zones
          shared_ptr<vector<string>> excludeNetworkZones_ {};
          // Included network zones
          shared_ptr<vector<string>> includeNetworkZones_ {};
        };

        class Applications : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Applications& obj) { 
            DARABONBA_PTR_TO_JSON(ExcludeApplications, excludeApplications_);
            DARABONBA_PTR_TO_JSON(IncludeApplications, includeApplications_);
          };
          friend void from_json(const Darabonba::Json& j, Applications& obj) { 
            DARABONBA_PTR_FROM_JSON(ExcludeApplications, excludeApplications_);
            DARABONBA_PTR_FROM_JSON(IncludeApplications, includeApplications_);
          };
          Applications() = default ;
          Applications(const Applications &) = default ;
          Applications(Applications &&) = default ;
          Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Applications() = default ;
          Applications& operator=(const Applications &) = default ;
          Applications& operator=(Applications &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->excludeApplications_ == nullptr
        && this->includeApplications_ == nullptr; };
          // excludeApplications Field Functions 
          bool hasExcludeApplications() const { return this->excludeApplications_ != nullptr;};
          void deleteExcludeApplications() { this->excludeApplications_ = nullptr;};
          inline const vector<string> & getExcludeApplications() const { DARABONBA_PTR_GET_CONST(excludeApplications_, vector<string>) };
          inline vector<string> getExcludeApplications() { DARABONBA_PTR_GET(excludeApplications_, vector<string>) };
          inline Applications& setExcludeApplications(const vector<string> & excludeApplications) { DARABONBA_PTR_SET_VALUE(excludeApplications_, excludeApplications) };
          inline Applications& setExcludeApplications(vector<string> && excludeApplications) { DARABONBA_PTR_SET_RVALUE(excludeApplications_, excludeApplications) };


          // includeApplications Field Functions 
          bool hasIncludeApplications() const { return this->includeApplications_ != nullptr;};
          void deleteIncludeApplications() { this->includeApplications_ = nullptr;};
          inline const vector<string> & getIncludeApplications() const { DARABONBA_PTR_GET_CONST(includeApplications_, vector<string>) };
          inline vector<string> getIncludeApplications() { DARABONBA_PTR_GET(includeApplications_, vector<string>) };
          inline Applications& setIncludeApplications(const vector<string> & includeApplications) { DARABONBA_PTR_SET_VALUE(includeApplications_, includeApplications) };
          inline Applications& setIncludeApplications(vector<string> && includeApplications) { DARABONBA_PTR_SET_RVALUE(includeApplications_, includeApplications) };


        protected:
          // Excluded applications
          shared_ptr<vector<string>> excludeApplications_ {};
          // Selected applications
          shared_ptr<vector<string>> includeApplications_ {};
        };

        virtual bool empty() const override { return this->applications_ == nullptr
        && this->networkZones_ == nullptr && this->users_ == nullptr; };
        // applications Field Functions 
        bool hasApplications() const { return this->applications_ != nullptr;};
        void deleteApplications() { this->applications_ = nullptr;};
        inline const ConditionsConfig::Applications & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, ConditionsConfig::Applications) };
        inline ConditionsConfig::Applications getApplications() { DARABONBA_PTR_GET(applications_, ConditionsConfig::Applications) };
        inline ConditionsConfig& setApplications(const ConditionsConfig::Applications & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
        inline ConditionsConfig& setApplications(ConditionsConfig::Applications && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


        // networkZones Field Functions 
        bool hasNetworkZones() const { return this->networkZones_ != nullptr;};
        void deleteNetworkZones() { this->networkZones_ = nullptr;};
        inline const ConditionsConfig::NetworkZones & getNetworkZones() const { DARABONBA_PTR_GET_CONST(networkZones_, ConditionsConfig::NetworkZones) };
        inline ConditionsConfig::NetworkZones getNetworkZones() { DARABONBA_PTR_GET(networkZones_, ConditionsConfig::NetworkZones) };
        inline ConditionsConfig& setNetworkZones(const ConditionsConfig::NetworkZones & networkZones) { DARABONBA_PTR_SET_VALUE(networkZones_, networkZones) };
        inline ConditionsConfig& setNetworkZones(ConditionsConfig::NetworkZones && networkZones) { DARABONBA_PTR_SET_RVALUE(networkZones_, networkZones) };


        // users Field Functions 
        bool hasUsers() const { return this->users_ != nullptr;};
        void deleteUsers() { this->users_ = nullptr;};
        inline const ConditionsConfig::Users & getUsers() const { DARABONBA_PTR_GET_CONST(users_, ConditionsConfig::Users) };
        inline ConditionsConfig::Users getUsers() { DARABONBA_PTR_GET(users_, ConditionsConfig::Users) };
        inline ConditionsConfig& setUsers(const ConditionsConfig::Users & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
        inline ConditionsConfig& setUsers(ConditionsConfig::Users && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


      protected:
        // Target applications of the conditional access policy
        shared_ptr<ConditionsConfig::Applications> applications_ {};
        // Network zones for conditional access policies
        shared_ptr<ConditionsConfig::NetworkZones> networkZones_ {};
        // Target users of the conditional access policy
        shared_ptr<ConditionsConfig::Users> users_ {};
      };

      virtual bool empty() const override { return this->conditionalAccessPolicyId_ == nullptr
        && this->conditionalAccessPolicyName_ == nullptr && this->conditionalAccessPolicyType_ == nullptr && this->conditionsConfig_ == nullptr && this->createTime_ == nullptr && this->decisionConfig_ == nullptr
        && this->decisionType_ == nullptr && this->description_ == nullptr && this->evaluateAt_ == nullptr && this->instanceId_ == nullptr && this->lastUpdatedTime_ == nullptr
        && this->priority_ == nullptr && this->status_ == nullptr; };
      // conditionalAccessPolicyId Field Functions 
      bool hasConditionalAccessPolicyId() const { return this->conditionalAccessPolicyId_ != nullptr;};
      void deleteConditionalAccessPolicyId() { this->conditionalAccessPolicyId_ = nullptr;};
      inline string getConditionalAccessPolicyId() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyId_, "") };
      inline ConditionalAccessPolicies& setConditionalAccessPolicyId(string conditionalAccessPolicyId) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyId_, conditionalAccessPolicyId) };


      // conditionalAccessPolicyName Field Functions 
      bool hasConditionalAccessPolicyName() const { return this->conditionalAccessPolicyName_ != nullptr;};
      void deleteConditionalAccessPolicyName() { this->conditionalAccessPolicyName_ = nullptr;};
      inline string getConditionalAccessPolicyName() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyName_, "") };
      inline ConditionalAccessPolicies& setConditionalAccessPolicyName(string conditionalAccessPolicyName) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyName_, conditionalAccessPolicyName) };


      // conditionalAccessPolicyType Field Functions 
      bool hasConditionalAccessPolicyType() const { return this->conditionalAccessPolicyType_ != nullptr;};
      void deleteConditionalAccessPolicyType() { this->conditionalAccessPolicyType_ = nullptr;};
      inline string getConditionalAccessPolicyType() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyType_, "") };
      inline ConditionalAccessPolicies& setConditionalAccessPolicyType(string conditionalAccessPolicyType) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyType_, conditionalAccessPolicyType) };


      // conditionsConfig Field Functions 
      bool hasConditionsConfig() const { return this->conditionsConfig_ != nullptr;};
      void deleteConditionsConfig() { this->conditionsConfig_ = nullptr;};
      inline const ConditionalAccessPolicies::ConditionsConfig & getConditionsConfig() const { DARABONBA_PTR_GET_CONST(conditionsConfig_, ConditionalAccessPolicies::ConditionsConfig) };
      inline ConditionalAccessPolicies::ConditionsConfig getConditionsConfig() { DARABONBA_PTR_GET(conditionsConfig_, ConditionalAccessPolicies::ConditionsConfig) };
      inline ConditionalAccessPolicies& setConditionsConfig(const ConditionalAccessPolicies::ConditionsConfig & conditionsConfig) { DARABONBA_PTR_SET_VALUE(conditionsConfig_, conditionsConfig) };
      inline ConditionalAccessPolicies& setConditionsConfig(ConditionalAccessPolicies::ConditionsConfig && conditionsConfig) { DARABONBA_PTR_SET_RVALUE(conditionsConfig_, conditionsConfig) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ConditionalAccessPolicies& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // decisionConfig Field Functions 
      bool hasDecisionConfig() const { return this->decisionConfig_ != nullptr;};
      void deleteDecisionConfig() { this->decisionConfig_ = nullptr;};
      inline const ConditionalAccessPolicies::DecisionConfig & getDecisionConfig() const { DARABONBA_PTR_GET_CONST(decisionConfig_, ConditionalAccessPolicies::DecisionConfig) };
      inline ConditionalAccessPolicies::DecisionConfig getDecisionConfig() { DARABONBA_PTR_GET(decisionConfig_, ConditionalAccessPolicies::DecisionConfig) };
      inline ConditionalAccessPolicies& setDecisionConfig(const ConditionalAccessPolicies::DecisionConfig & decisionConfig) { DARABONBA_PTR_SET_VALUE(decisionConfig_, decisionConfig) };
      inline ConditionalAccessPolicies& setDecisionConfig(ConditionalAccessPolicies::DecisionConfig && decisionConfig) { DARABONBA_PTR_SET_RVALUE(decisionConfig_, decisionConfig) };


      // decisionType Field Functions 
      bool hasDecisionType() const { return this->decisionType_ != nullptr;};
      void deleteDecisionType() { this->decisionType_ = nullptr;};
      inline string getDecisionType() const { DARABONBA_PTR_GET_DEFAULT(decisionType_, "") };
      inline ConditionalAccessPolicies& setDecisionType(string decisionType) { DARABONBA_PTR_SET_VALUE(decisionType_, decisionType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ConditionalAccessPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // evaluateAt Field Functions 
      bool hasEvaluateAt() const { return this->evaluateAt_ != nullptr;};
      void deleteEvaluateAt() { this->evaluateAt_ = nullptr;};
      inline string getEvaluateAt() const { DARABONBA_PTR_GET_DEFAULT(evaluateAt_, "") };
      inline ConditionalAccessPolicies& setEvaluateAt(string evaluateAt) { DARABONBA_PTR_SET_VALUE(evaluateAt_, evaluateAt) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ConditionalAccessPolicies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUpdatedTime Field Functions 
      bool hasLastUpdatedTime() const { return this->lastUpdatedTime_ != nullptr;};
      void deleteLastUpdatedTime() { this->lastUpdatedTime_ = nullptr;};
      inline int64_t getLastUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedTime_, 0L) };
      inline ConditionalAccessPolicies& setLastUpdatedTime(int64_t lastUpdatedTime) { DARABONBA_PTR_SET_VALUE(lastUpdatedTime_, lastUpdatedTime) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline ConditionalAccessPolicies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ConditionalAccessPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Conditional access policy ID
      shared_ptr<string> conditionalAccessPolicyId_ {};
      // Conditional access policy name
      shared_ptr<string> conditionalAccessPolicyName_ {};
      // Type of the conditional access policy
      shared_ptr<string> conditionalAccessPolicyType_ {};
      // Content of the conditional access policy
      shared_ptr<ConditionalAccessPolicies::ConditionsConfig> conditionsConfig_ {};
      // Creation Time
      shared_ptr<int64_t> createTime_ {};
      // Action of the conditional access policy
      shared_ptr<ConditionalAccessPolicies::DecisionConfig> decisionConfig_ {};
      // Execution type of the conditional access policy
      shared_ptr<string> decisionType_ {};
      // Description of the conditional access policy
      shared_ptr<string> description_ {};
      // Execution point of the conditional access policy
      shared_ptr<string> evaluateAt_ {};
      // Instance ID
      shared_ptr<string> instanceId_ {};
      // Last Updated Time
      shared_ptr<int64_t> lastUpdatedTime_ {};
      // Priority
      shared_ptr<int32_t> priority_ {};
      // Enable or disable status of the conditional access policy
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->conditionalAccessPolicies_ == nullptr
        && this->requestId_ == nullptr; };
    // conditionalAccessPolicies Field Functions 
    bool hasConditionalAccessPolicies() const { return this->conditionalAccessPolicies_ != nullptr;};
    void deleteConditionalAccessPolicies() { this->conditionalAccessPolicies_ = nullptr;};
    inline const vector<ListConditionalAccessPoliciesForNetworkZoneResponseBody::ConditionalAccessPolicies> & getConditionalAccessPolicies() const { DARABONBA_PTR_GET_CONST(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesForNetworkZoneResponseBody::ConditionalAccessPolicies>) };
    inline vector<ListConditionalAccessPoliciesForNetworkZoneResponseBody::ConditionalAccessPolicies> getConditionalAccessPolicies() { DARABONBA_PTR_GET(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesForNetworkZoneResponseBody::ConditionalAccessPolicies>) };
    inline ListConditionalAccessPoliciesForNetworkZoneResponseBody& setConditionalAccessPolicies(const vector<ListConditionalAccessPoliciesForNetworkZoneResponseBody::ConditionalAccessPolicies> & conditionalAccessPolicies) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };
    inline ListConditionalAccessPoliciesForNetworkZoneResponseBody& setConditionalAccessPolicies(vector<ListConditionalAccessPoliciesForNetworkZoneResponseBody::ConditionalAccessPolicies> && conditionalAccessPolicies) { DARABONBA_PTR_SET_RVALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConditionalAccessPoliciesForNetworkZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Collection of conditional access policies
    shared_ptr<vector<ListConditionalAccessPoliciesForNetworkZoneResponseBody::ConditionalAccessPolicies>> conditionalAccessPolicies_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
