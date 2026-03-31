// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODY_HPP_
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
  class GetConfigRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRule, configRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRule, configRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigRuleResponseBody() = default ;
    GetConfigRuleResponseBody(const GetConfigRuleResponseBody &) = default ;
    GetConfigRuleResponseBody(GetConfigRuleResponseBody &&) = default ;
    GetConfigRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleResponseBody() = default ;
    GetConfigRuleResponseBody& operator=(const GetConfigRuleResponseBody &) = default ;
    GetConfigRuleResponseBody& operator=(GetConfigRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigRule& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(Compliance, compliance_);
        DARABONBA_PTR_TO_JSON(ConfigRuleArn, configRuleArn_);
        DARABONBA_PTR_TO_JSON(ConfigRuleEvaluationStatus, configRuleEvaluationStatus_);
        DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
        DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_TO_JSON(ConfigRuleState, configRuleState_);
        DARABONBA_PTR_TO_JSON(ConfigRuleTriggerTypes, configRuleTriggerTypes_);
        DARABONBA_PTR_TO_JSON(CreateBy, createBy_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
        DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
        DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
        DARABONBA_PTR_TO_JSON(ExcludeTagsScope, excludeTagsScope_);
        DARABONBA_PTR_TO_JSON(ExtendContent, extendContent_);
        DARABONBA_ANY_TO_JSON(InputParameters, inputParameters_);
        DARABONBA_PTR_TO_JSON(ManagedRule, managedRule_);
        DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
        DARABONBA_PTR_TO_JSON(ModifiedTimestamp, modifiedTimestamp_);
        DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
        DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
        DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
        DARABONBA_PTR_TO_JSON(ResourceNameScope, resourceNameScope_);
        DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(TagKeyLogicScope, tagKeyLogicScope_);
        DARABONBA_PTR_TO_JSON(TagKeyScope, tagKeyScope_);
        DARABONBA_PTR_TO_JSON(TagValueScope, tagValueScope_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TagsScope, tagsScope_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigRule& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(Compliance, compliance_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleArn, configRuleArn_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleEvaluationStatus, configRuleEvaluationStatus_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleState, configRuleState_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleTriggerTypes, configRuleTriggerTypes_);
        DARABONBA_PTR_FROM_JSON(CreateBy, createBy_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
        DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
        DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
        DARABONBA_PTR_FROM_JSON(ExcludeTagsScope, excludeTagsScope_);
        DARABONBA_PTR_FROM_JSON(ExtendContent, extendContent_);
        DARABONBA_ANY_FROM_JSON(InputParameters, inputParameters_);
        DARABONBA_PTR_FROM_JSON(ManagedRule, managedRule_);
        DARABONBA_PTR_FROM_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
        DARABONBA_PTR_FROM_JSON(ModifiedTimestamp, modifiedTimestamp_);
        DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
        DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
        DARABONBA_PTR_FROM_JSON(ResourceNameScope, resourceNameScope_);
        DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(TagKeyLogicScope, tagKeyLogicScope_);
        DARABONBA_PTR_FROM_JSON(TagKeyScope, tagKeyScope_);
        DARABONBA_PTR_FROM_JSON(TagValueScope, tagValueScope_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TagsScope, tagsScope_);
      };
      ConfigRule() = default ;
      ConfigRule(const ConfigRule &) = default ;
      ConfigRule(ConfigRule &&) = default ;
      ConfigRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigRule() = default ;
      ConfigRule& operator=(const ConfigRule &) = default ;
      ConfigRule& operator=(ConfigRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagsScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagsScope& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagsScope& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        TagsScope() = default ;
        TagsScope(const TagsScope &) = default ;
        TagsScope(TagsScope &&) = default ;
        TagsScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagsScope() = default ;
        TagsScope& operator=(const TagsScope &) = default ;
        TagsScope& operator=(TagsScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagsScope& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline TagsScope& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // TagKey
        shared_ptr<string> tagKey_ {};
        // TagValue
        shared_ptr<string> tagValue_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(Identifier, identifier_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(SourceDetails, sourceDetails_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(SourceDetails, sourceDetails_);
        };
        Source() = default ;
        Source(const Source &) = default ;
        Source(Source &&) = default ;
        Source(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Source() = default ;
        Source& operator=(const Source &) = default ;
        Source& operator=(Source &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SourceDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceDetails& obj) { 
            DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
            DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
            DARABONBA_PTR_TO_JSON(MessageType, messageType_);
          };
          friend void from_json(const Darabonba::Json& j, SourceDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
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
          virtual bool empty() const override { return this->eventSource_ == nullptr
        && this->maximumExecutionFrequency_ == nullptr && this->messageType_ == nullptr; };
          // eventSource Field Functions 
          bool hasEventSource() const { return this->eventSource_ != nullptr;};
          void deleteEventSource() { this->eventSource_ = nullptr;};
          inline string getEventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
          inline SourceDetails& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


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
          // The event source.
          // 
          // >  Only aliyun.config is returned, which indicates that only events related to Cloud Config are supported.
          shared_ptr<string> eventSource_ {};
          // The interval at which the rule is triggered. Valid values:
          // 
          // *   One_Hour
          // *   Three_Hours
          // *   Six_Hours
          // *   Twelve_Hours
          // *   TwentyFour_Hours
          // 
          // >  This parameter is returned if the rule is periodically triggered.
          shared_ptr<string> maximumExecutionFrequency_ {};
          // The trigger type of the rule. Valid values:
          // 
          // *   ConfigurationItemChangeNotification: The rule is triggered by configuration changes.
          // *   ScheduledNotification: The rule is periodically triggered.
          shared_ptr<string> messageType_ {};
        };

        virtual bool empty() const override { return this->identifier_ == nullptr
        && this->owner_ == nullptr && this->sourceDetails_ == nullptr; };
        // identifier Field Functions 
        bool hasIdentifier() const { return this->identifier_ != nullptr;};
        void deleteIdentifier() { this->identifier_ = nullptr;};
        inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
        inline Source& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Source& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // sourceDetails Field Functions 
        bool hasSourceDetails() const { return this->sourceDetails_ != nullptr;};
        void deleteSourceDetails() { this->sourceDetails_ = nullptr;};
        inline const vector<Source::SourceDetails> & getSourceDetails() const { DARABONBA_PTR_GET_CONST(sourceDetails_, vector<Source::SourceDetails>) };
        inline vector<Source::SourceDetails> getSourceDetails() { DARABONBA_PTR_GET(sourceDetails_, vector<Source::SourceDetails>) };
        inline Source& setSourceDetails(const vector<Source::SourceDetails> & sourceDetails) { DARABONBA_PTR_SET_VALUE(sourceDetails_, sourceDetails) };
        inline Source& setSourceDetails(vector<Source::SourceDetails> && sourceDetails) { DARABONBA_PTR_SET_RVALUE(sourceDetails_, sourceDetails) };


      protected:
        // The identifier of the rule.
        // 
        // *   If the rule is a managed rule, the value of this parameter is the identifier of the managed rule.
        // *   If the rule is a custom rule, the value of this parameter is the Alibaba Cloud Resource Name (ARN) of a function.
        shared_ptr<string> identifier_ {};
        // The type of the rule. Valid values:
        // 
        // *   CUSTOM_FC: a custom rule.
        // *   ALIYUN: a managed rule.
        shared_ptr<string> owner_ {};
        // The details of the source of the rule.
        shared_ptr<vector<Source::SourceDetails>> sourceDetails_ {};
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
        // The types of the resources to be evaluated against the rule. You can also view the resource types by using the ResourceTypesScope parameter.
        shared_ptr<vector<string>> complianceResourceTypes_ {};
      };

      class ManagedRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagedRule& obj) { 
          DARABONBA_ANY_TO_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Identifier, identifier_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(ManagedRuleName, managedRuleName_);
          DARABONBA_ANY_TO_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
          DARABONBA_PTR_TO_JSON(SourceDetails, sourceDetails_);
        };
        friend void from_json(const Darabonba::Json& j, ManagedRule& obj) { 
          DARABONBA_ANY_FROM_JSON(CompulsoryInputParameterDetails, compulsoryInputParameterDetails_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(ManagedRuleName, managedRuleName_);
          DARABONBA_ANY_FROM_JSON(OptionalInputParameterDetails, optionalInputParameterDetails_);
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
            DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
            DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
            DARABONBA_PTR_TO_JSON(MessageType, messageType_);
          };
          friend void from_json(const Darabonba::Json& j, SourceDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
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
          virtual bool empty() const override { return this->eventSource_ == nullptr
        && this->maximumExecutionFrequency_ == nullptr && this->messageType_ == nullptr; };
          // eventSource Field Functions 
          bool hasEventSource() const { return this->eventSource_ != nullptr;};
          void deleteEventSource() { this->eventSource_ = nullptr;};
          inline string getEventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
          inline SourceDetails& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


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
          // The event source.
          // 
          // >  Only aliyun.config is returned, which indicates that only events related to Cloud Config are supported.
          shared_ptr<string> eventSource_ {};
          // The interval at which the rule is triggered. Valid values:
          // 
          // *   One_Hour
          // *   Three_Hours
          // *   Six_Hours
          // *   Twelve_Hours
          // *   TwentyFour_Hours
          // 
          // >  This parameter is returned if the rule is periodically triggered.
          shared_ptr<string> maximumExecutionFrequency_ {};
          // The trigger type of the rule. Valid values:
          // 
          // *   ConfigurationItemChangeNotification: The rule is triggered by configuration changes.
          // *   ScheduledNotification: The rule is periodically triggered.
          shared_ptr<string> messageType_ {};
        };

        virtual bool empty() const override { return this->compulsoryInputParameterDetails_ == nullptr
        && this->description_ == nullptr && this->identifier_ == nullptr && this->labels_ == nullptr && this->managedRuleName_ == nullptr && this->optionalInputParameterDetails_ == nullptr
        && this->sourceDetails_ == nullptr; };
        // compulsoryInputParameterDetails Field Functions 
        bool hasCompulsoryInputParameterDetails() const { return this->compulsoryInputParameterDetails_ != nullptr;};
        void deleteCompulsoryInputParameterDetails() { this->compulsoryInputParameterDetails_ = nullptr;};
        inline         const Darabonba::Json & getCompulsoryInputParameterDetails() const { DARABONBA_GET(compulsoryInputParameterDetails_) };
        Darabonba::Json & getCompulsoryInputParameterDetails() { DARABONBA_GET(compulsoryInputParameterDetails_) };
        inline ManagedRule& setCompulsoryInputParameterDetails(const Darabonba::Json & compulsoryInputParameterDetails) { DARABONBA_SET_VALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };
        inline ManagedRule& setCompulsoryInputParameterDetails(Darabonba::Json && compulsoryInputParameterDetails) { DARABONBA_SET_RVALUE(compulsoryInputParameterDetails_, compulsoryInputParameterDetails) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ManagedRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


        // managedRuleName Field Functions 
        bool hasManagedRuleName() const { return this->managedRuleName_ != nullptr;};
        void deleteManagedRuleName() { this->managedRuleName_ = nullptr;};
        inline string getManagedRuleName() const { DARABONBA_PTR_GET_DEFAULT(managedRuleName_, "") };
        inline ManagedRule& setManagedRuleName(string managedRuleName) { DARABONBA_PTR_SET_VALUE(managedRuleName_, managedRuleName) };


        // optionalInputParameterDetails Field Functions 
        bool hasOptionalInputParameterDetails() const { return this->optionalInputParameterDetails_ != nullptr;};
        void deleteOptionalInputParameterDetails() { this->optionalInputParameterDetails_ = nullptr;};
        inline         const Darabonba::Json & getOptionalInputParameterDetails() const { DARABONBA_GET(optionalInputParameterDetails_) };
        Darabonba::Json & getOptionalInputParameterDetails() { DARABONBA_GET(optionalInputParameterDetails_) };
        inline ManagedRule& setOptionalInputParameterDetails(const Darabonba::Json & optionalInputParameterDetails) { DARABONBA_SET_VALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };
        inline ManagedRule& setOptionalInputParameterDetails(Darabonba::Json && optionalInputParameterDetails) { DARABONBA_SET_RVALUE(optionalInputParameterDetails_, optionalInputParameterDetails) };


        // sourceDetails Field Functions 
        bool hasSourceDetails() const { return this->sourceDetails_ != nullptr;};
        void deleteSourceDetails() { this->sourceDetails_ = nullptr;};
        inline const vector<ManagedRule::SourceDetails> & getSourceDetails() const { DARABONBA_PTR_GET_CONST(sourceDetails_, vector<ManagedRule::SourceDetails>) };
        inline vector<ManagedRule::SourceDetails> getSourceDetails() { DARABONBA_PTR_GET(sourceDetails_, vector<ManagedRule::SourceDetails>) };
        inline ManagedRule& setSourceDetails(const vector<ManagedRule::SourceDetails> & sourceDetails) { DARABONBA_PTR_SET_VALUE(sourceDetails_, sourceDetails) };
        inline ManagedRule& setSourceDetails(vector<ManagedRule::SourceDetails> && sourceDetails) { DARABONBA_PTR_SET_RVALUE(sourceDetails_, sourceDetails) };


      protected:
        // The settings of the required input parameters for the managed rule.
        Darabonba::Json compulsoryInputParameterDetails_ {};
        // The description of the managed rule.
        shared_ptr<string> description_ {};
        // The identifier of the managed rule.
        shared_ptr<string> identifier_ {};
        // The rule tags.
        shared_ptr<vector<string>> labels_ {};
        // The name of the managed rule.
        shared_ptr<string> managedRuleName_ {};
        // The settings of the optional input parameters for the managed rule.
        Darabonba::Json optionalInputParameterDetails_ {};
        // The details of the source of the managed rule.
        shared_ptr<vector<ManagedRule::SourceDetails>> sourceDetails_ {};
      };

      class ExcludeTagsScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExcludeTagsScope& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, ExcludeTagsScope& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        ExcludeTagsScope() = default ;
        ExcludeTagsScope(const ExcludeTagsScope &) = default ;
        ExcludeTagsScope(ExcludeTagsScope &&) = default ;
        ExcludeTagsScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExcludeTagsScope() = default ;
        ExcludeTagsScope& operator=(const ExcludeTagsScope &) = default ;
        ExcludeTagsScope& operator=(ExcludeTagsScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline ExcludeTagsScope& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline ExcludeTagsScope& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      class CreateBy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreateBy& obj) { 
          DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
          DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        };
        friend void from_json(const Darabonba::Json& j, CreateBy& obj) { 
          DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
          DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        };
        CreateBy() = default ;
        CreateBy(const CreateBy &) = default ;
        CreateBy(CreateBy &&) = default ;
        CreateBy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreateBy() = default ;
        CreateBy& operator=(const CreateBy &) = default ;
        CreateBy& operator=(CreateBy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->compliancePackName_ == nullptr && this->creatorId_ == nullptr && this->creatorName_ == nullptr; };
        // compliancePackId Field Functions 
        bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
        void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
        inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
        inline CreateBy& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


        // compliancePackName Field Functions 
        bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
        void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
        inline string getCompliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
        inline CreateBy& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline CreateBy& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline CreateBy& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      protected:
        // The compliance package ID.
        shared_ptr<string> compliancePackId_ {};
        // The name of the compliance package.
        shared_ptr<string> compliancePackName_ {};
        // The ID of the account that was used to create the rule.
        shared_ptr<string> creatorId_ {};
        // The name of the account that was used to create the rule.
        shared_ptr<string> creatorName_ {};
      };

      class ConfigRuleEvaluationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigRuleEvaluationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(FirstActivatedTimestamp, firstActivatedTimestamp_);
          DARABONBA_PTR_TO_JSON(FirstEvaluationStarted, firstEvaluationStarted_);
          DARABONBA_PTR_TO_JSON(LastErrorCode, lastErrorCode_);
          DARABONBA_PTR_TO_JSON(LastErrorMessage, lastErrorMessage_);
          DARABONBA_PTR_TO_JSON(LastFailedEvaluationTimestamp, lastFailedEvaluationTimestamp_);
          DARABONBA_PTR_TO_JSON(LastFailedInvocationTimestamp, lastFailedInvocationTimestamp_);
          DARABONBA_PTR_TO_JSON(LastSuccessfulEvaluationTimestamp, lastSuccessfulEvaluationTimestamp_);
          DARABONBA_PTR_TO_JSON(LastSuccessfulInvocationTimestamp, lastSuccessfulInvocationTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigRuleEvaluationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(FirstActivatedTimestamp, firstActivatedTimestamp_);
          DARABONBA_PTR_FROM_JSON(FirstEvaluationStarted, firstEvaluationStarted_);
          DARABONBA_PTR_FROM_JSON(LastErrorCode, lastErrorCode_);
          DARABONBA_PTR_FROM_JSON(LastErrorMessage, lastErrorMessage_);
          DARABONBA_PTR_FROM_JSON(LastFailedEvaluationTimestamp, lastFailedEvaluationTimestamp_);
          DARABONBA_PTR_FROM_JSON(LastFailedInvocationTimestamp, lastFailedInvocationTimestamp_);
          DARABONBA_PTR_FROM_JSON(LastSuccessfulEvaluationTimestamp, lastSuccessfulEvaluationTimestamp_);
          DARABONBA_PTR_FROM_JSON(LastSuccessfulInvocationTimestamp, lastSuccessfulInvocationTimestamp_);
        };
        ConfigRuleEvaluationStatus() = default ;
        ConfigRuleEvaluationStatus(const ConfigRuleEvaluationStatus &) = default ;
        ConfigRuleEvaluationStatus(ConfigRuleEvaluationStatus &&) = default ;
        ConfigRuleEvaluationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigRuleEvaluationStatus() = default ;
        ConfigRuleEvaluationStatus& operator=(const ConfigRuleEvaluationStatus &) = default ;
        ConfigRuleEvaluationStatus& operator=(ConfigRuleEvaluationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->firstActivatedTimestamp_ == nullptr
        && this->firstEvaluationStarted_ == nullptr && this->lastErrorCode_ == nullptr && this->lastErrorMessage_ == nullptr && this->lastFailedEvaluationTimestamp_ == nullptr && this->lastFailedInvocationTimestamp_ == nullptr
        && this->lastSuccessfulEvaluationTimestamp_ == nullptr && this->lastSuccessfulInvocationTimestamp_ == nullptr; };
        // firstActivatedTimestamp Field Functions 
        bool hasFirstActivatedTimestamp() const { return this->firstActivatedTimestamp_ != nullptr;};
        void deleteFirstActivatedTimestamp() { this->firstActivatedTimestamp_ = nullptr;};
        inline int64_t getFirstActivatedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstActivatedTimestamp_, 0L) };
        inline ConfigRuleEvaluationStatus& setFirstActivatedTimestamp(int64_t firstActivatedTimestamp) { DARABONBA_PTR_SET_VALUE(firstActivatedTimestamp_, firstActivatedTimestamp) };


        // firstEvaluationStarted Field Functions 
        bool hasFirstEvaluationStarted() const { return this->firstEvaluationStarted_ != nullptr;};
        void deleteFirstEvaluationStarted() { this->firstEvaluationStarted_ = nullptr;};
        inline bool getFirstEvaluationStarted() const { DARABONBA_PTR_GET_DEFAULT(firstEvaluationStarted_, false) };
        inline ConfigRuleEvaluationStatus& setFirstEvaluationStarted(bool firstEvaluationStarted) { DARABONBA_PTR_SET_VALUE(firstEvaluationStarted_, firstEvaluationStarted) };


        // lastErrorCode Field Functions 
        bool hasLastErrorCode() const { return this->lastErrorCode_ != nullptr;};
        void deleteLastErrorCode() { this->lastErrorCode_ = nullptr;};
        inline string getLastErrorCode() const { DARABONBA_PTR_GET_DEFAULT(lastErrorCode_, "") };
        inline ConfigRuleEvaluationStatus& setLastErrorCode(string lastErrorCode) { DARABONBA_PTR_SET_VALUE(lastErrorCode_, lastErrorCode) };


        // lastErrorMessage Field Functions 
        bool hasLastErrorMessage() const { return this->lastErrorMessage_ != nullptr;};
        void deleteLastErrorMessage() { this->lastErrorMessage_ = nullptr;};
        inline string getLastErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(lastErrorMessage_, "") };
        inline ConfigRuleEvaluationStatus& setLastErrorMessage(string lastErrorMessage) { DARABONBA_PTR_SET_VALUE(lastErrorMessage_, lastErrorMessage) };


        // lastFailedEvaluationTimestamp Field Functions 
        bool hasLastFailedEvaluationTimestamp() const { return this->lastFailedEvaluationTimestamp_ != nullptr;};
        void deleteLastFailedEvaluationTimestamp() { this->lastFailedEvaluationTimestamp_ = nullptr;};
        inline int64_t getLastFailedEvaluationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastFailedEvaluationTimestamp_, 0L) };
        inline ConfigRuleEvaluationStatus& setLastFailedEvaluationTimestamp(int64_t lastFailedEvaluationTimestamp) { DARABONBA_PTR_SET_VALUE(lastFailedEvaluationTimestamp_, lastFailedEvaluationTimestamp) };


        // lastFailedInvocationTimestamp Field Functions 
        bool hasLastFailedInvocationTimestamp() const { return this->lastFailedInvocationTimestamp_ != nullptr;};
        void deleteLastFailedInvocationTimestamp() { this->lastFailedInvocationTimestamp_ = nullptr;};
        inline int64_t getLastFailedInvocationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastFailedInvocationTimestamp_, 0L) };
        inline ConfigRuleEvaluationStatus& setLastFailedInvocationTimestamp(int64_t lastFailedInvocationTimestamp) { DARABONBA_PTR_SET_VALUE(lastFailedInvocationTimestamp_, lastFailedInvocationTimestamp) };


        // lastSuccessfulEvaluationTimestamp Field Functions 
        bool hasLastSuccessfulEvaluationTimestamp() const { return this->lastSuccessfulEvaluationTimestamp_ != nullptr;};
        void deleteLastSuccessfulEvaluationTimestamp() { this->lastSuccessfulEvaluationTimestamp_ = nullptr;};
        inline int64_t getLastSuccessfulEvaluationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulEvaluationTimestamp_, 0L) };
        inline ConfigRuleEvaluationStatus& setLastSuccessfulEvaluationTimestamp(int64_t lastSuccessfulEvaluationTimestamp) { DARABONBA_PTR_SET_VALUE(lastSuccessfulEvaluationTimestamp_, lastSuccessfulEvaluationTimestamp) };


        // lastSuccessfulInvocationTimestamp Field Functions 
        bool hasLastSuccessfulInvocationTimestamp() const { return this->lastSuccessfulInvocationTimestamp_ != nullptr;};
        void deleteLastSuccessfulInvocationTimestamp() { this->lastSuccessfulInvocationTimestamp_ = nullptr;};
        inline int64_t getLastSuccessfulInvocationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationTimestamp_, 0L) };
        inline ConfigRuleEvaluationStatus& setLastSuccessfulInvocationTimestamp(int64_t lastSuccessfulInvocationTimestamp) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationTimestamp_, lastSuccessfulInvocationTimestamp) };


      protected:
        // The timestamp generated when the rule was first triggered. Unit: millisecond.
        shared_ptr<int64_t> firstActivatedTimestamp_ {};
        // Indicates whether resource configurations were evaluated based on the rule. Valid values:
        // 
        // *   true: Resource configurations were evaluated based on the rule.
        // *   false: Resource configurations were not evaluated based on the rule.
        shared_ptr<bool> firstEvaluationStarted_ {};
        // The error code returned for the previous failed compliance evaluation.
        shared_ptr<string> lastErrorCode_ {};
        // The error message returned for the previous failed compliance evaluation.
        shared_ptr<string> lastErrorMessage_ {};
        // The timestamp generated when the previous failed compliance evaluation of the rule ended. Unit: millisecond.
        shared_ptr<int64_t> lastFailedEvaluationTimestamp_ {};
        // The timestamp generated when the previous failed compliance evaluation of the rule started. Unit: millisecond.
        shared_ptr<int64_t> lastFailedInvocationTimestamp_ {};
        // The timestamp generated when the previous successful compliance evaluation of the rule ended. Unit: millisecond.
        shared_ptr<int64_t> lastSuccessfulEvaluationTimestamp_ {};
        // The timestamp generated when the previous successful compliance evaluation of the rule started. Unit: millisecond.
        shared_ptr<int64_t> lastSuccessfulInvocationTimestamp_ {};
      };

      class Compliance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Compliance& obj) { 
          DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_TO_JSON(Count, count_);
        };
        friend void from_json(const Darabonba::Json& j, Compliance& obj) { 
          DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
        };
        Compliance() = default ;
        Compliance(const Compliance &) = default ;
        Compliance(Compliance &&) = default ;
        Compliance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Compliance() = default ;
        Compliance& operator=(const Compliance &) = default ;
        Compliance& operator=(Compliance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->complianceType_ == nullptr
        && this->count_ == nullptr; };
        // complianceType Field Functions 
        bool hasComplianceType() const { return this->complianceType_ != nullptr;};
        void deleteComplianceType() { this->complianceType_ = nullptr;};
        inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
        inline Compliance& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline Compliance& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      protected:
        // The statistics on the compliance evaluation results by compliance type. Valid values:
        // 
        // *   COMPLIANT: The resource was evaluated as compliant.
        // *   NON_COMPLIANT: The resource was evaluated as incompliant.
        // *   NOT_APPLICABLE: The rule did not apply to your resource.
        // *   INSUFFICIENT_DATA: No resource data was available.
        shared_ptr<string> complianceType_ {};
        // The number of evaluated resources.
        shared_ptr<int32_t> count_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->compliance_ == nullptr && this->configRuleArn_ == nullptr && this->configRuleEvaluationStatus_ == nullptr && this->configRuleId_ == nullptr && this->configRuleName_ == nullptr
        && this->configRuleState_ == nullptr && this->configRuleTriggerTypes_ == nullptr && this->createBy_ == nullptr && this->createTimestamp_ == nullptr && this->description_ == nullptr
        && this->excludeRegionIdsScope_ == nullptr && this->excludeResourceGroupIdsScope_ == nullptr && this->excludeResourceIdsScope_ == nullptr && this->excludeTagsScope_ == nullptr && this->extendContent_ == nullptr
        && this->inputParameters_ == nullptr && this->managedRule_ == nullptr && this->maximumExecutionFrequency_ == nullptr && this->modifiedTimestamp_ == nullptr && this->regionIdsScope_ == nullptr
        && this->resourceGroupIdsScope_ == nullptr && this->resourceIdsScope_ == nullptr && this->resourceNameScope_ == nullptr && this->resourceTypesScope_ == nullptr && this->riskLevel_ == nullptr
        && this->scope_ == nullptr && this->source_ == nullptr && this->tagKeyLogicScope_ == nullptr && this->tagKeyScope_ == nullptr && this->tagValueScope_ == nullptr
        && this->tags_ == nullptr && this->tagsScope_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline ConfigRule& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // compliance Field Functions 
      bool hasCompliance() const { return this->compliance_ != nullptr;};
      void deleteCompliance() { this->compliance_ = nullptr;};
      inline const ConfigRule::Compliance & getCompliance() const { DARABONBA_PTR_GET_CONST(compliance_, ConfigRule::Compliance) };
      inline ConfigRule::Compliance getCompliance() { DARABONBA_PTR_GET(compliance_, ConfigRule::Compliance) };
      inline ConfigRule& setCompliance(const ConfigRule::Compliance & compliance) { DARABONBA_PTR_SET_VALUE(compliance_, compliance) };
      inline ConfigRule& setCompliance(ConfigRule::Compliance && compliance) { DARABONBA_PTR_SET_RVALUE(compliance_, compliance) };


      // configRuleArn Field Functions 
      bool hasConfigRuleArn() const { return this->configRuleArn_ != nullptr;};
      void deleteConfigRuleArn() { this->configRuleArn_ = nullptr;};
      inline string getConfigRuleArn() const { DARABONBA_PTR_GET_DEFAULT(configRuleArn_, "") };
      inline ConfigRule& setConfigRuleArn(string configRuleArn) { DARABONBA_PTR_SET_VALUE(configRuleArn_, configRuleArn) };


      // configRuleEvaluationStatus Field Functions 
      bool hasConfigRuleEvaluationStatus() const { return this->configRuleEvaluationStatus_ != nullptr;};
      void deleteConfigRuleEvaluationStatus() { this->configRuleEvaluationStatus_ = nullptr;};
      inline const ConfigRule::ConfigRuleEvaluationStatus & getConfigRuleEvaluationStatus() const { DARABONBA_PTR_GET_CONST(configRuleEvaluationStatus_, ConfigRule::ConfigRuleEvaluationStatus) };
      inline ConfigRule::ConfigRuleEvaluationStatus getConfigRuleEvaluationStatus() { DARABONBA_PTR_GET(configRuleEvaluationStatus_, ConfigRule::ConfigRuleEvaluationStatus) };
      inline ConfigRule& setConfigRuleEvaluationStatus(const ConfigRule::ConfigRuleEvaluationStatus & configRuleEvaluationStatus) { DARABONBA_PTR_SET_VALUE(configRuleEvaluationStatus_, configRuleEvaluationStatus) };
      inline ConfigRule& setConfigRuleEvaluationStatus(ConfigRule::ConfigRuleEvaluationStatus && configRuleEvaluationStatus) { DARABONBA_PTR_SET_RVALUE(configRuleEvaluationStatus_, configRuleEvaluationStatus) };


      // configRuleId Field Functions 
      bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
      void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
      inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
      inline ConfigRule& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


      // configRuleName Field Functions 
      bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
      void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
      inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
      inline ConfigRule& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


      // configRuleState Field Functions 
      bool hasConfigRuleState() const { return this->configRuleState_ != nullptr;};
      void deleteConfigRuleState() { this->configRuleState_ = nullptr;};
      inline string getConfigRuleState() const { DARABONBA_PTR_GET_DEFAULT(configRuleState_, "") };
      inline ConfigRule& setConfigRuleState(string configRuleState) { DARABONBA_PTR_SET_VALUE(configRuleState_, configRuleState) };


      // configRuleTriggerTypes Field Functions 
      bool hasConfigRuleTriggerTypes() const { return this->configRuleTriggerTypes_ != nullptr;};
      void deleteConfigRuleTriggerTypes() { this->configRuleTriggerTypes_ = nullptr;};
      inline string getConfigRuleTriggerTypes() const { DARABONBA_PTR_GET_DEFAULT(configRuleTriggerTypes_, "") };
      inline ConfigRule& setConfigRuleTriggerTypes(string configRuleTriggerTypes) { DARABONBA_PTR_SET_VALUE(configRuleTriggerTypes_, configRuleTriggerTypes) };


      // createBy Field Functions 
      bool hasCreateBy() const { return this->createBy_ != nullptr;};
      void deleteCreateBy() { this->createBy_ = nullptr;};
      inline const ConfigRule::CreateBy & getCreateBy() const { DARABONBA_PTR_GET_CONST(createBy_, ConfigRule::CreateBy) };
      inline ConfigRule::CreateBy getCreateBy() { DARABONBA_PTR_GET(createBy_, ConfigRule::CreateBy) };
      inline ConfigRule& setCreateBy(const ConfigRule::CreateBy & createBy) { DARABONBA_PTR_SET_VALUE(createBy_, createBy) };
      inline ConfigRule& setCreateBy(ConfigRule::CreateBy && createBy) { DARABONBA_PTR_SET_RVALUE(createBy_, createBy) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline ConfigRule& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ConfigRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // excludeRegionIdsScope Field Functions 
      bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
      void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
      inline string getExcludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
      inline ConfigRule& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


      // excludeResourceGroupIdsScope Field Functions 
      bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
      void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
      inline string getExcludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
      inline ConfigRule& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


      // excludeResourceIdsScope Field Functions 
      bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
      void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
      inline string getExcludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
      inline ConfigRule& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


      // excludeTagsScope Field Functions 
      bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
      void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
      inline const vector<ConfigRule::ExcludeTagsScope> & getExcludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<ConfigRule::ExcludeTagsScope>) };
      inline vector<ConfigRule::ExcludeTagsScope> getExcludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<ConfigRule::ExcludeTagsScope>) };
      inline ConfigRule& setExcludeTagsScope(const vector<ConfigRule::ExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
      inline ConfigRule& setExcludeTagsScope(vector<ConfigRule::ExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


      // extendContent Field Functions 
      bool hasExtendContent() const { return this->extendContent_ != nullptr;};
      void deleteExtendContent() { this->extendContent_ = nullptr;};
      inline string getExtendContent() const { DARABONBA_PTR_GET_DEFAULT(extendContent_, "") };
      inline ConfigRule& setExtendContent(string extendContent) { DARABONBA_PTR_SET_VALUE(extendContent_, extendContent) };


      // inputParameters Field Functions 
      bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
      void deleteInputParameters() { this->inputParameters_ = nullptr;};
      inline       const Darabonba::Json & getInputParameters() const { DARABONBA_GET(inputParameters_) };
      Darabonba::Json & getInputParameters() { DARABONBA_GET(inputParameters_) };
      inline ConfigRule& setInputParameters(const Darabonba::Json & inputParameters) { DARABONBA_SET_VALUE(inputParameters_, inputParameters) };
      inline ConfigRule& setInputParameters(Darabonba::Json && inputParameters) { DARABONBA_SET_RVALUE(inputParameters_, inputParameters) };


      // managedRule Field Functions 
      bool hasManagedRule() const { return this->managedRule_ != nullptr;};
      void deleteManagedRule() { this->managedRule_ = nullptr;};
      inline const ConfigRule::ManagedRule & getManagedRule() const { DARABONBA_PTR_GET_CONST(managedRule_, ConfigRule::ManagedRule) };
      inline ConfigRule::ManagedRule getManagedRule() { DARABONBA_PTR_GET(managedRule_, ConfigRule::ManagedRule) };
      inline ConfigRule& setManagedRule(const ConfigRule::ManagedRule & managedRule) { DARABONBA_PTR_SET_VALUE(managedRule_, managedRule) };
      inline ConfigRule& setManagedRule(ConfigRule::ManagedRule && managedRule) { DARABONBA_PTR_SET_RVALUE(managedRule_, managedRule) };


      // maximumExecutionFrequency Field Functions 
      bool hasMaximumExecutionFrequency() const { return this->maximumExecutionFrequency_ != nullptr;};
      void deleteMaximumExecutionFrequency() { this->maximumExecutionFrequency_ = nullptr;};
      inline string getMaximumExecutionFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumExecutionFrequency_, "") };
      inline ConfigRule& setMaximumExecutionFrequency(string maximumExecutionFrequency) { DARABONBA_PTR_SET_VALUE(maximumExecutionFrequency_, maximumExecutionFrequency) };


      // modifiedTimestamp Field Functions 
      bool hasModifiedTimestamp() const { return this->modifiedTimestamp_ != nullptr;};
      void deleteModifiedTimestamp() { this->modifiedTimestamp_ = nullptr;};
      inline int64_t getModifiedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimestamp_, 0L) };
      inline ConfigRule& setModifiedTimestamp(int64_t modifiedTimestamp) { DARABONBA_PTR_SET_VALUE(modifiedTimestamp_, modifiedTimestamp) };


      // regionIdsScope Field Functions 
      bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
      void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
      inline string getRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
      inline ConfigRule& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


      // resourceGroupIdsScope Field Functions 
      bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
      void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
      inline string getResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
      inline ConfigRule& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


      // resourceIdsScope Field Functions 
      bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
      void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
      inline string getResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
      inline ConfigRule& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


      // resourceNameScope Field Functions 
      bool hasResourceNameScope() const { return this->resourceNameScope_ != nullptr;};
      void deleteResourceNameScope() { this->resourceNameScope_ = nullptr;};
      inline string getResourceNameScope() const { DARABONBA_PTR_GET_DEFAULT(resourceNameScope_, "") };
      inline ConfigRule& setResourceNameScope(string resourceNameScope) { DARABONBA_PTR_SET_VALUE(resourceNameScope_, resourceNameScope) };


      // resourceTypesScope Field Functions 
      bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
      void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
      inline string getResourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
      inline ConfigRule& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline ConfigRule& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const ConfigRule::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, ConfigRule::Scope) };
      inline ConfigRule::Scope getScope() { DARABONBA_PTR_GET(scope_, ConfigRule::Scope) };
      inline ConfigRule& setScope(const ConfigRule::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline ConfigRule& setScope(ConfigRule::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const ConfigRule::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, ConfigRule::Source) };
      inline ConfigRule::Source getSource() { DARABONBA_PTR_GET(source_, ConfigRule::Source) };
      inline ConfigRule& setSource(const ConfigRule::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline ConfigRule& setSource(ConfigRule::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


      // tagKeyLogicScope Field Functions 
      bool hasTagKeyLogicScope() const { return this->tagKeyLogicScope_ != nullptr;};
      void deleteTagKeyLogicScope() { this->tagKeyLogicScope_ = nullptr;};
      inline string getTagKeyLogicScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyLogicScope_, "") };
      inline ConfigRule& setTagKeyLogicScope(string tagKeyLogicScope) { DARABONBA_PTR_SET_VALUE(tagKeyLogicScope_, tagKeyLogicScope) };


      // tagKeyScope Field Functions 
      bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
      void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
      inline string getTagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
      inline ConfigRule& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


      // tagValueScope Field Functions 
      bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
      void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
      inline string getTagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
      inline ConfigRule& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ConfigRule::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ConfigRule::Tags>) };
      inline vector<ConfigRule::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ConfigRule::Tags>) };
      inline ConfigRule& setTags(const vector<ConfigRule::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ConfigRule& setTags(vector<ConfigRule::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tagsScope Field Functions 
      bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
      void deleteTagsScope() { this->tagsScope_ = nullptr;};
      inline const vector<ConfigRule::TagsScope> & getTagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<ConfigRule::TagsScope>) };
      inline vector<ConfigRule::TagsScope> getTagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<ConfigRule::TagsScope>) };
      inline ConfigRule& setTagsScope(const vector<ConfigRule::TagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
      inline ConfigRule& setTagsScope(vector<ConfigRule::TagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


    protected:
      // The ID of the Alibaba Cloud account to which the rule belongs.
      shared_ptr<int64_t> accountId_ {};
      // The details of compliance evaluation results.
      shared_ptr<ConfigRule::Compliance> compliance_ {};
      // The ARN of the managed rule.
      shared_ptr<string> configRuleArn_ {};
      // The information about compliance evaluations performed by the rule.
      shared_ptr<ConfigRule::ConfigRuleEvaluationStatus> configRuleEvaluationStatus_ {};
      // The rule ID.
      shared_ptr<string> configRuleId_ {};
      // The name of the rule.
      shared_ptr<string> configRuleName_ {};
      // The status of the rule. Valid values:
      // 
      // *   ACTIVE: The rule is enabled.
      // *   DELETING: The rule is being deleted.
      // *   EVALUATING: The rule is being used to evaluate resource configurations.
      // *   INACTIVE: The rule is disabled.
      shared_ptr<string> configRuleState_ {};
      // The trigger type of the rule. Valid values:
      // 
      // *   ConfigurationItemChangeNotification: The rule was triggered by configuration changes.
      // *   ScheduledNotification: The rule was periodically triggered.
      shared_ptr<string> configRuleTriggerTypes_ {};
      // The information about the creation of the rule.
      shared_ptr<ConfigRule::CreateBy> createBy_ {};
      // The timestamp generated when the rule was created. Unit: millisecond.
      shared_ptr<int64_t> createTimestamp_ {};
      // The description of the managed rule.
      shared_ptr<string> description_ {};
      // ExcludeRegionIdsScope
      shared_ptr<string> excludeRegionIdsScope_ {};
      // ExcludeResourceGroupIdsScope
      shared_ptr<string> excludeResourceGroupIdsScope_ {};
      // The ID of the resource excluded from the compliance evaluations performed by the rule.
      shared_ptr<string> excludeResourceIdsScope_ {};
      // ExcludeTagsScope
      shared_ptr<vector<ConfigRule::ExcludeTagsScope>> excludeTagsScope_ {};
      // Optional field, only used in conjunction with the 24-hour cycle execution to set the trigger time.
      shared_ptr<string> extendContent_ {};
      // The input parameters of the rule.
      Darabonba::Json inputParameters_ {};
      // The details of the managed rule.
      shared_ptr<ConfigRule::ManagedRule> managedRule_ {};
      // The interval at which the rule is triggered. Valid values:
      // 
      // *   One_Hour
      // *   Three_Hours
      // *   Six_Hours
      // *   Twelve_Hours
      // *   TwentyFour_Hours
      // 
      // >  This parameter is returned if the rule is periodically triggered.
      shared_ptr<string> maximumExecutionFrequency_ {};
      // The timestamp generated when the rule was last updated. Unit: millisecond.
      shared_ptr<int64_t> modifiedTimestamp_ {};
      // The ID of the region to which the rule applies.
      shared_ptr<string> regionIdsScope_ {};
      // The ID of the resource group to which the rule applies.
      shared_ptr<string> resourceGroupIdsScope_ {};
      // ResourceIdsScope
      shared_ptr<string> resourceIdsScope_ {};
      // The names of the resource to which the rule applies.
      shared_ptr<string> resourceNameScope_ {};
      // The type of the resource to be evaluated by the rule.
      shared_ptr<string> resourceTypesScope_ {};
      // The risk level of the resources that do not comply with the rule. Valid values:
      // 
      // *   1: high.
      // *   2: medium.
      // *   3: low.
      shared_ptr<int32_t> riskLevel_ {};
      // The effective scope of the rule.
      shared_ptr<ConfigRule::Scope> scope_ {};
      // The information about how the rule was created.
      shared_ptr<ConfigRule::Source> source_ {};
      // When retrieving details of rules created using the parameter `TagsScope`, this field will not be returned.
      // 
      // To retrieve rules created using the deprecated field `TagKeyScope` (not recommended): for example, when the parameter `TagKeyScope` has a value of ECS,OSS, if this parameter is set to `AND`, it means that the rule only applies to resources bound with both labels ECS and OSS.
      // 
      // Values:
      // 
      //  - AND: And.
      // 
      //  - OR: Or.
      shared_ptr<string> tagKeyLogicScope_ {};
      // This parameter is deprecated. We recommend that you use the `TagsScope` parameter.
      // 
      // The tag key used to filter resources. The rule applies only to the resources with the specified tag key.
      // 
      // >  The TagKeyScope and `TagValueScope` parameters are returned at the same time.``
      shared_ptr<string> tagKeyScope_ {};
      // This parameter is deprecated. We recommend that you use the `TagsScope` parameter.
      // 
      // The tag value used to filter resources. The rule applies only to the resources that use the specified tag value.
      // 
      // >  The TagKeyScope and `TagValueScope` parameters are returned at the same time.``
      shared_ptr<string> tagValueScope_ {};
      // The tag list.
      shared_ptr<vector<ConfigRule::Tags>> tags_ {};
      // TagsScope
      shared_ptr<vector<ConfigRule::TagsScope>> tagsScope_ {};
    };

    virtual bool empty() const override { return this->configRule_ == nullptr
        && this->requestId_ == nullptr; };
    // configRule Field Functions 
    bool hasConfigRule() const { return this->configRule_ != nullptr;};
    void deleteConfigRule() { this->configRule_ = nullptr;};
    inline const GetConfigRuleResponseBody::ConfigRule & getConfigRule() const { DARABONBA_PTR_GET_CONST(configRule_, GetConfigRuleResponseBody::ConfigRule) };
    inline GetConfigRuleResponseBody::ConfigRule getConfigRule() { DARABONBA_PTR_GET(configRule_, GetConfigRuleResponseBody::ConfigRule) };
    inline GetConfigRuleResponseBody& setConfigRule(const GetConfigRuleResponseBody::ConfigRule & configRule) { DARABONBA_PTR_SET_VALUE(configRule_, configRule) };
    inline GetConfigRuleResponseBody& setConfigRule(GetConfigRuleResponseBody::ConfigRule && configRule) { DARABONBA_PTR_SET_RVALUE(configRule_, configRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the rule.
    shared_ptr<GetConfigRuleResponseBody::ConfigRule> configRule_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
