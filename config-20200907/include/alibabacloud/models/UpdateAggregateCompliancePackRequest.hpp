// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGREGATECOMPLIANCEPACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGREGATECOMPLIANCEPACKREQUEST_HPP_
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
  class UpdateAggregateCompliancePackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggregateCompliancePackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_TO_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_TO_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_TO_JSON(TagsScope, tagsScope_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggregateCompliancePackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_FROM_JSON(ConfigRules, configRules_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_FROM_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_FROM_JSON(TagsScope, tagsScope_);
    };
    UpdateAggregateCompliancePackRequest() = default ;
    UpdateAggregateCompliancePackRequest(const UpdateAggregateCompliancePackRequest &) = default ;
    UpdateAggregateCompliancePackRequest(UpdateAggregateCompliancePackRequest &&) = default ;
    UpdateAggregateCompliancePackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggregateCompliancePackRequest() = default ;
    UpdateAggregateCompliancePackRequest& operator=(const UpdateAggregateCompliancePackRequest &) = default ;
    UpdateAggregateCompliancePackRequest& operator=(UpdateAggregateCompliancePackRequest &&) = default ;
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
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the resource. You can specify up to 20 tag keys.
      // 
      // The tag key cannot be an empty string. The tag key must be 1 to 64 characters in length and cannot start with `aliyun` or `acs`:. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag values.
      // 
      // The tag values can be an empty string or up to 128 characters in length. The tag values cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      // 
      // Each key-value must be unique. You can specify at most 20 tag values in each call.
      shared_ptr<string> value_ {};
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

    class ConfigRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigRules& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
        DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_TO_JSON(ConfigRuleParameters, configRuleParameters_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigRules& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleParameters, configRuleParameters_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      };
      ConfigRules() = default ;
      ConfigRules(const ConfigRules &) = default ;
      ConfigRules(ConfigRules &&) = default ;
      ConfigRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigRules() = default ;
      ConfigRules& operator=(const ConfigRules &) = default ;
      ConfigRules& operator=(ConfigRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigRuleParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigRuleParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigRuleParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        ConfigRuleParameters() = default ;
        ConfigRuleParameters(const ConfigRuleParameters &) = default ;
        ConfigRuleParameters(ConfigRuleParameters &&) = default ;
        ConfigRuleParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigRuleParameters() = default ;
        ConfigRuleParameters& operator=(const ConfigRuleParameters &) = default ;
        ConfigRuleParameters& operator=(ConfigRuleParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterName_ == nullptr
        && this->parameterValue_ == nullptr; };
        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline ConfigRuleParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline ConfigRuleParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The name of the input parameter.
        // 
        // You must specify both `ParameterName` and `ParameterValue` or neither of them. If the managed rule has an input parameter but no default value exists, you must configure this parameter. For more information about how to obtain the name of an input parameter for a managed rule, see [ListCompliancePackTemplates](https://help.aliyun.com/document_detail/261176.html).
        shared_ptr<string> parameterName_ {};
        // The value of the input parameter.
        // 
        // You must specify both `ParameterName` and `ParameterValue` or neither of them. If the managed rule has an input parameter but no default value exists, you must configure this parameter. For more information about how to obtain the value of an input parameter for a managed rule, see [ListCompliancePackTemplates](https://help.aliyun.com/document_detail/261176.html).
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->configRuleId_ == nullptr
        && this->configRuleName_ == nullptr && this->configRuleParameters_ == nullptr && this->description_ == nullptr && this->managedRuleIdentifier_ == nullptr && this->riskLevel_ == nullptr; };
      // configRuleId Field Functions 
      bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
      void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
      inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
      inline ConfigRules& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


      // configRuleName Field Functions 
      bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
      void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
      inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
      inline ConfigRules& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


      // configRuleParameters Field Functions 
      bool hasConfigRuleParameters() const { return this->configRuleParameters_ != nullptr;};
      void deleteConfigRuleParameters() { this->configRuleParameters_ = nullptr;};
      inline const vector<ConfigRules::ConfigRuleParameters> & getConfigRuleParameters() const { DARABONBA_PTR_GET_CONST(configRuleParameters_, vector<ConfigRules::ConfigRuleParameters>) };
      inline vector<ConfigRules::ConfigRuleParameters> getConfigRuleParameters() { DARABONBA_PTR_GET(configRuleParameters_, vector<ConfigRules::ConfigRuleParameters>) };
      inline ConfigRules& setConfigRuleParameters(const vector<ConfigRules::ConfigRuleParameters> & configRuleParameters) { DARABONBA_PTR_SET_VALUE(configRuleParameters_, configRuleParameters) };
      inline ConfigRules& setConfigRuleParameters(vector<ConfigRules::ConfigRuleParameters> && configRuleParameters) { DARABONBA_PTR_SET_RVALUE(configRuleParameters_, configRuleParameters) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ConfigRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // managedRuleIdentifier Field Functions 
      bool hasManagedRuleIdentifier() const { return this->managedRuleIdentifier_ != nullptr;};
      void deleteManagedRuleIdentifier() { this->managedRuleIdentifier_ = nullptr;};
      inline string getManagedRuleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(managedRuleIdentifier_, "") };
      inline ConfigRules& setManagedRuleIdentifier(string managedRuleIdentifier) { DARABONBA_PTR_SET_VALUE(managedRuleIdentifier_, managedRuleIdentifier) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline ConfigRules& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      // The rule ID. If you specify this parameter, Cloud Config adds the rule that has the specified ID to the compliance package.
      // 
      // You only need to configure the `ManagedRuleIdentifier` or `ConfigRuleId` parameter. If you configure both parameters, the value of the `ConfigRuleId` parameter takes precedence. For more information about how to obtain the ID of a rule, see [ListAggregateConfigRules](https://help.aliyun.com/document_detail/264148.html).
      shared_ptr<string> configRuleId_ {};
      // The rule name.
      shared_ptr<string> configRuleName_ {};
      // The details of the input parameter of the rule.
      shared_ptr<vector<ConfigRules::ConfigRuleParameters>> configRuleParameters_ {};
      // The rule description.
      shared_ptr<string> description_ {};
      // The identifier of the managed rule. Cloud Config automatically creates a rule based on the identifier of the managed rule and adds the rule to the current compliance package.
      // 
      // You need to only configure the `ManagedRuleIdentifier` or `ConfigRuleId` parameter. If you configure both parameters, the value of the `ConfigRuleId` parameter takes precedence. You can call the [ListCompliancePackTemplates](https://help.aliyun.com/document_detail/261176.html) operation to obtain the identifier of the managed rule.
      shared_ptr<string> managedRuleIdentifier_ {};
      // The risk level of the resources that do not comply with the rule. Valid values:
      // 
      // *   1: high risk level
      // *   2: medium risk level
      // *   3: low risk level
      shared_ptr<int32_t> riskLevel_ {};
    };

    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->clientToken_ == nullptr && this->compliancePackId_ == nullptr && this->compliancePackName_ == nullptr && this->configRules_ == nullptr && this->description_ == nullptr
        && this->excludeRegionIdsScope_ == nullptr && this->excludeResourceGroupIdsScope_ == nullptr && this->excludeResourceIdsScope_ == nullptr && this->excludeTagsScope_ == nullptr && this->regionIdsScope_ == nullptr
        && this->resourceGroupIdsScope_ == nullptr && this->resourceIdsScope_ == nullptr && this->riskLevel_ == nullptr && this->tag_ == nullptr && this->tagKeyScope_ == nullptr
        && this->tagValueScope_ == nullptr && this->tagsScope_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline UpdateAggregateCompliancePackRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAggregateCompliancePackRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline UpdateAggregateCompliancePackRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // compliancePackName Field Functions 
    bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
    void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
    inline string getCompliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
    inline UpdateAggregateCompliancePackRequest& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


    // configRules Field Functions 
    bool hasConfigRules() const { return this->configRules_ != nullptr;};
    void deleteConfigRules() { this->configRules_ = nullptr;};
    inline const vector<UpdateAggregateCompliancePackRequest::ConfigRules> & getConfigRules() const { DARABONBA_PTR_GET_CONST(configRules_, vector<UpdateAggregateCompliancePackRequest::ConfigRules>) };
    inline vector<UpdateAggregateCompliancePackRequest::ConfigRules> getConfigRules() { DARABONBA_PTR_GET(configRules_, vector<UpdateAggregateCompliancePackRequest::ConfigRules>) };
    inline UpdateAggregateCompliancePackRequest& setConfigRules(const vector<UpdateAggregateCompliancePackRequest::ConfigRules> & configRules) { DARABONBA_PTR_SET_VALUE(configRules_, configRules) };
    inline UpdateAggregateCompliancePackRequest& setConfigRules(vector<UpdateAggregateCompliancePackRequest::ConfigRules> && configRules) { DARABONBA_PTR_SET_RVALUE(configRules_, configRules) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAggregateCompliancePackRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string getExcludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline UpdateAggregateCompliancePackRequest& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string getExcludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline UpdateAggregateCompliancePackRequest& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string getExcludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline UpdateAggregateCompliancePackRequest& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeTagsScope Field Functions 
    bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
    void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
    inline const vector<UpdateAggregateCompliancePackRequest::ExcludeTagsScope> & getExcludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<UpdateAggregateCompliancePackRequest::ExcludeTagsScope>) };
    inline vector<UpdateAggregateCompliancePackRequest::ExcludeTagsScope> getExcludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<UpdateAggregateCompliancePackRequest::ExcludeTagsScope>) };
    inline UpdateAggregateCompliancePackRequest& setExcludeTagsScope(const vector<UpdateAggregateCompliancePackRequest::ExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
    inline UpdateAggregateCompliancePackRequest& setExcludeTagsScope(vector<UpdateAggregateCompliancePackRequest::ExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string getRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline UpdateAggregateCompliancePackRequest& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string getResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline UpdateAggregateCompliancePackRequest& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string getResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline UpdateAggregateCompliancePackRequest& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline UpdateAggregateCompliancePackRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<UpdateAggregateCompliancePackRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<UpdateAggregateCompliancePackRequest::Tag>) };
    inline vector<UpdateAggregateCompliancePackRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<UpdateAggregateCompliancePackRequest::Tag>) };
    inline UpdateAggregateCompliancePackRequest& setTag(const vector<UpdateAggregateCompliancePackRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline UpdateAggregateCompliancePackRequest& setTag(vector<UpdateAggregateCompliancePackRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tagKeyScope Field Functions 
    bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
    void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
    inline string getTagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
    inline UpdateAggregateCompliancePackRequest& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


    // tagValueScope Field Functions 
    bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
    void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
    inline string getTagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
    inline UpdateAggregateCompliancePackRequest& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


    // tagsScope Field Functions 
    bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
    void deleteTagsScope() { this->tagsScope_ = nullptr;};
    inline const vector<UpdateAggregateCompliancePackRequest::TagsScope> & getTagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<UpdateAggregateCompliancePackRequest::TagsScope>) };
    inline vector<UpdateAggregateCompliancePackRequest::TagsScope> getTagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<UpdateAggregateCompliancePackRequest::TagsScope>) };
    inline UpdateAggregateCompliancePackRequest& setTagsScope(const vector<UpdateAggregateCompliancePackRequest::TagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
    inline UpdateAggregateCompliancePackRequest& setTagsScope(vector<UpdateAggregateCompliancePackRequest::TagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The client token that you want to use to ensure the idempotency of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.``
    shared_ptr<string> clientToken_ {};
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListAggregateCompliancePacks](https://help.aliyun.com/document_detail/262059.html).
    // 
    // This parameter is required.
    shared_ptr<string> compliancePackId_ {};
    // The name of the compliance package.
    // 
    // For more information about how to obtain the name of a compliance package, see [ListAggregateCompliancePacks](https://help.aliyun.com/document_detail/262059.html).
    shared_ptr<string> compliancePackName_ {};
    // The rules in the compliance package.
    // 
    // If you leave this parameter empty, the rules in the compliance package remain unchanged. If you set this parameter, Cloud Config replaces the existing rules in the compliance package with the specified rules.
    shared_ptr<vector<UpdateAggregateCompliancePackRequest::ConfigRules>> configRules_ {};
    // The description of the compliance package.
    shared_ptr<string> description_ {};
    // The IDs of the regions to which the rule not applies. Separate multiple region IDs with commas (,).
    shared_ptr<string> excludeRegionIdsScope_ {};
    // ExcludeResourceGroupIdsScope. Separate multiple resource group IDs with commas (,).
    shared_ptr<string> excludeResourceGroupIdsScope_ {};
    // The ID of the resource that you do not want to evaluate by using the compliance package. Separate multiple resource IDs with commas (,).
    shared_ptr<string> excludeResourceIdsScope_ {};
    // ExcludeTagsScope
    shared_ptr<vector<UpdateAggregateCompliancePackRequest::ExcludeTagsScope>> excludeTagsScope_ {};
    // The ID of the region whose resources you want to evaluate by using the compliance package. Separate multiple region IDs with commas (,).
    shared_ptr<string> regionIdsScope_ {};
    // The ID of the resource group whose resources you want to evaluate by using the compliance package. Separate multiple resource group IDs with commas (,).
    shared_ptr<string> resourceGroupIdsScope_ {};
    // The IDs of the resources included from the compliance evaluations performed by the rule. Separate multiple resource IDs with commas (,).
    shared_ptr<string> resourceIdsScope_ {};
    // The risk level of the resources that are not compliant with the rules in the compliance package. Valid values:
    // 
    // *   1: high risk level
    // *   2: medium risk level
    // *   3: low risk level
    shared_ptr<int32_t> riskLevel_ {};
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    shared_ptr<vector<UpdateAggregateCompliancePackRequest::Tag>> tag_ {};
    // The tag key of the resource that you want to evaluate by using the compliance package.
    shared_ptr<string> tagKeyScope_ {};
    // The tag value of the resource that you want to evaluate by using the compliance package.
    // 
    // >  You must configure the TagValueScope parameter together with the TagKeyScope parameter.
    shared_ptr<string> tagValueScope_ {};
    // TagsScope
    shared_ptr<vector<UpdateAggregateCompliancePackRequest::TagsScope>> tagsScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
