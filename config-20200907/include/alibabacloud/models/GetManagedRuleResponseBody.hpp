// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetManagedRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManagedRule, managedRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagedRule, managedRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetManagedRuleResponseBody() = default ;
    GetManagedRuleResponseBody(const GetManagedRuleResponseBody &) = default ;
    GetManagedRuleResponseBody(GetManagedRuleResponseBody &&) = default ;
    GetManagedRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedRuleResponseBody() = default ;
    GetManagedRuleResponseBody& operator=(const GetManagedRuleResponseBody &) = default ;
    GetManagedRuleResponseBody& operator=(GetManagedRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ManagedRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ManagedRule& obj) { 
        DARABONBA_ANY_TO_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
        DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HelpUrls, helpUrls_);
        DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_ANY_TO_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(SourceDetails, sourceDetails_);
      };
      friend void from_json(const Darabonba::Json& j, ManagedRule& obj) { 
        DARABONBA_ANY_FROM_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HelpUrls, helpUrls_);
        DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_ANY_FROM_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(SourceDetails, sourceDetails_);
      };
      ManagedRule() = default ;
      ManagedRule(const ManagedRule &) = default ;
      ManagedRule(ManagedRule &&) = default ;
      ManagedRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ManagedRule() = default ;
      ManagedRule& operator=(const ManagedRule &) = default ;
      ManagedRule& operator=(ManagedRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SourceDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceDetails& obj) { 
          DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
          DARABONBA_PTR_TO_JSON(MessageType, messageType_);
        };
        friend void from_json(const Darabonba::Json& j, SourceDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
          DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
        };
        SourceDetails() = default ;
        SourceDetails(const SourceDetails &) = default ;
        SourceDetails(SourceDetails &&) = default ;
        SourceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceDetails() = default ;
        SourceDetails& operator=(const SourceDetails &) = default ;
        SourceDetails& operator=(SourceDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maximumExecutionFrequency_ == nullptr
        && this->messageType_ == nullptr; };
        // maximumExecutionFrequency Field Functions 
        bool hasMaximumExecutionFrequency() const { return this->maximumExecutionFrequency_ != nullptr;};
        void deleteMaximumExecutionFrequency() { this->maximumExecutionFrequency_ = nullptr;};
        inline string getMaximumExecutionFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumExecutionFrequency_, "") };
        inline SourceDetails& setMaximumExecutionFrequency(string maximumExecutionFrequency) { DARABONBA_PTR_SET_VALUE(maximumExecutionFrequency_, maximumExecutionFrequency) };


        // messageType Field Functions 
        bool hasMessageType() const { return this->messageType_ != nullptr;};
        void deleteMessageType() { this->messageType_ = nullptr;};
        inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
        inline SourceDetails& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


      protected:
        // The interval at which the rule is triggered. Valid values: Valid values:
        // 
        // *   One_Hour
        // *   Three_Hours
        // *   Six_Hours
        // *   Twelve_Hours
        // *   TwentyFour_Hours
        shared_ptr<string> maximumExecutionFrequency_ {};
        // The trigger type of the rule. Valid values:
        // 
        // *   ConfigurationItemChangeNotification: The rule is triggered by configuration changes.
        // *   ScheduledNotification: The rule is periodically triggered.
        shared_ptr<string> messageType_ {};
      };

      class Scope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scope& obj) { 
          DARABONBA_PTR_TO_JSON(ComplianceResourceTypes, complianceResourceTypes_);
        };
        friend void from_json(const Darabonba::Json& j, Scope& obj) { 
          DARABONBA_PTR_FROM_JSON(ComplianceResourceTypes, complianceResourceTypes_);
        };
        Scope() = default ;
        Scope(const Scope &) = default ;
        Scope(Scope &&) = default ;
        Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scope() = default ;
        Scope& operator=(const Scope &) = default ;
        Scope& operator=(Scope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->complianceResourceTypes_ == nullptr; };
        // complianceResourceTypes Field Functions 
        bool hasComplianceResourceTypes() const { return this->complianceResourceTypes_ != nullptr;};
        void deleteComplianceResourceTypes() { this->complianceResourceTypes_ = nullptr;};
        inline const vector<string> & getComplianceResourceTypes() const { DARABONBA_PTR_GET_CONST(complianceResourceTypes_, vector<string>) };
        inline vector<string> getComplianceResourceTypes() { DARABONBA_PTR_GET(complianceResourceTypes_, vector<string>) };
        inline Scope& setComplianceResourceTypes(const vector<string> & complianceResourceTypes) { DARABONBA_PTR_SET_VALUE(complianceResourceTypes_, complianceResourceTypes) };
        inline Scope& setComplianceResourceTypes(vector<string> && complianceResourceTypes) { DARABONBA_PTR_SET_RVALUE(complianceResourceTypes_, complianceResourceTypes) };


      protected:
        // The types of resources to which the managed rule applies.
        shared_ptr<vector<string>> complianceResourceTypes_ {};
      };

      virtual bool empty() const override { return this->compulsoryInputParameterDetails_ == nullptr
        && this->configRuleName_ == nullptr && this->description_ == nullptr && this->helpUrls_ == nullptr && this->identifier_ == nullptr && this->labels_ == nullptr
        && this->optionalInputParameterDetails_ == nullptr && this->riskLevel_ == nullptr && this->scope_ == nullptr && this->sourceDetails_ == nullptr; };
      // compulsoryInputParameterDetails Field Functions 
      bool hasCompulsoryInputParameterDetails() const { return this->compulsoryInputParameterDetails_ != nullptr;};
      void deleteCompulsoryInputParameterDetails() { this->compulsoryInputParameterDetails_ = nullptr;};
      inline       const Darabonba::Json & getCompulsoryInputParameterDetails() const { DARABONBA_GET(compulsoryInputParameterDetails_) };
      Darabonba::Json & getCompulsoryInputParameterDetails() { DARABONBA_GET(compulsoryInputParameterDetails_) };
      inline ManagedRule& setCompulsoryInputParameterDetails(const Darabonba::Json & compulsoryInputParameterDetails) { DARABONBA_SET_VALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };
      inline ManagedRule& setCompulsoryInputParameterDetails(Darabonba::Json && compulsoryInputParameterDetails) { DARABONBA_SET_RVALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };


      // configRuleName Field Functions 
      bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
      void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
      inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
      inline ManagedRule& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ManagedRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // helpUrls Field Functions 
      bool hasHelpUrls() const { return this->helpUrls_ != nullptr;};
      void deleteHelpUrls() { this->helpUrls_ = nullptr;};
      inline string getHelpUrls() const { DARABONBA_PTR_GET_DEFAULT(helpUrls_, "") };
      inline ManagedRule& setHelpUrls(string helpUrls) { DARABONBA_PTR_SET_VALUE(helpUrls_, helpUrls) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline ManagedRule& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
      inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
      inline ManagedRule& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline ManagedRule& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // optionalInputParameterDetails Field Functions 
      bool hasOptionalInputParameterDetails() const { return this->optionalInputParameterDetails_ != nullptr;};
      void deleteOptionalInputParameterDetails() { this->optionalInputParameterDetails_ = nullptr;};
      inline       const Darabonba::Json & getOptionalInputParameterDetails() const { DARABONBA_GET(optionalInputParameterDetails_) };
      Darabonba::Json & getOptionalInputParameterDetails() { DARABONBA_GET(optionalInputParameterDetails_) };
      inline ManagedRule& setOptionalInputParameterDetails(const Darabonba::Json & optionalInputParameterDetails) { DARABONBA_SET_VALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };
      inline ManagedRule& setOptionalInputParameterDetails(Darabonba::Json && optionalInputParameterDetails) { DARABONBA_SET_RVALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline ManagedRule& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const ManagedRule::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, ManagedRule::Scope) };
      inline ManagedRule::Scope getScope() { DARABONBA_PTR_GET(scope_, ManagedRule::Scope) };
      inline ManagedRule& setScope(const ManagedRule::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline ManagedRule& setScope(ManagedRule::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      // sourceDetails Field Functions 
      bool hasSourceDetails() const { return this->sourceDetails_ != nullptr;};
      void deleteSourceDetails() { this->sourceDetails_ = nullptr;};
      inline const vector<ManagedRule::SourceDetails> & getSourceDetails() const { DARABONBA_PTR_GET_CONST(sourceDetails_, vector<ManagedRule::SourceDetails>) };
      inline vector<ManagedRule::SourceDetails> getSourceDetails() { DARABONBA_PTR_GET(sourceDetails_, vector<ManagedRule::SourceDetails>) };
      inline ManagedRule& setSourceDetails(const vector<ManagedRule::SourceDetails> & sourceDetails) { DARABONBA_PTR_SET_VALUE(sourceDetails_, sourceDetails) };
      inline ManagedRule& setSourceDetails(vector<ManagedRule::SourceDetails> && sourceDetails) { DARABONBA_PTR_SET_RVALUE(sourceDetails_, sourceDetails) };


    protected:
      // The details of the required input parameters for the managed rule.
      Darabonba::Json compulsoryInputParameterDetails_ {};
      // The name of the managed rule.
      shared_ptr<string> configRuleName_ {};
      // The description of the managed rule.
      shared_ptr<string> description_ {};
      // The URL of the topic that provides guidance on remediation for the managed rule.
      shared_ptr<string> helpUrls_ {};
      // The identifier of the managed rule.
      shared_ptr<string> identifier_ {};
      // The tags of the managed rule.
      shared_ptr<vector<string>> labels_ {};
      // The details of the optional input parameters for the managed rule.
      Darabonba::Json optionalInputParameterDetails_ {};
      // The risk level of the managed rule. Valid values:
      // 
      // *   1: high
      // *   2: medium
      // *   3: low
      shared_ptr<int32_t> riskLevel_ {};
      // The effective scope of the managed rule.
      shared_ptr<ManagedRule::Scope> scope_ {};
      // The information about the trigger type of the managed rule.
      shared_ptr<vector<ManagedRule::SourceDetails>> sourceDetails_ {};
    };

    virtual bool empty() const override { return this->managedRule_ == nullptr
        && this->requestId_ == nullptr; };
    // managedRule Field Functions 
    bool hasManagedRule() const { return this->managedRule_ != nullptr;};
    void deleteManagedRule() { this->managedRule_ = nullptr;};
    inline const GetManagedRuleResponseBody::ManagedRule & getManagedRule() const { DARABONBA_PTR_GET_CONST(managedRule_, GetManagedRuleResponseBody::ManagedRule) };
    inline GetManagedRuleResponseBody::ManagedRule getManagedRule() { DARABONBA_PTR_GET(managedRule_, GetManagedRuleResponseBody::ManagedRule) };
    inline GetManagedRuleResponseBody& setManagedRule(const GetManagedRuleResponseBody::ManagedRule & managedRule) { DARABONBA_PTR_SET_VALUE(managedRule_, managedRule) };
    inline GetManagedRuleResponseBody& setManagedRule(GetManagedRuleResponseBody::ManagedRule && managedRule) { DARABONBA_PTR_SET_RVALUE(managedRule_, managedRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetManagedRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the managed rule.
    shared_ptr<GetManagedRuleResponseBody::ManagedRule> managedRule_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
