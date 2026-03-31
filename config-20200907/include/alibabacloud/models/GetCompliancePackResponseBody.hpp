// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKRESPONSEBODY_HPP_
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
  class GetCompliancePackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePack, compliancePack_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePack, compliancePack_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCompliancePackResponseBody() = default ;
    GetCompliancePackResponseBody(const GetCompliancePackResponseBody &) = default ;
    GetCompliancePackResponseBody(GetCompliancePackResponseBody &&) = default ;
    GetCompliancePackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompliancePackResponseBody() = default ;
    GetCompliancePackResponseBody& operator=(const GetCompliancePackResponseBody &) = default ;
    GetCompliancePackResponseBody& operator=(GetCompliancePackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CompliancePack : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompliancePack& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
        DARABONBA_PTR_TO_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
        DARABONBA_PTR_TO_JSON(ConfigRules, configRules_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      };
      friend void from_json(const Darabonba::Json& j, CompliancePack& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
        DARABONBA_PTR_FROM_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
        DARABONBA_PTR_FROM_JSON(ConfigRules, configRules_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      };
      CompliancePack() = default ;
      CompliancePack(const CompliancePack &) = default ;
      CompliancePack(CompliancePack &&) = default ;
      CompliancePack(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompliancePack() = default ;
      CompliancePack& operator=(const CompliancePack &) = default ;
      CompliancePack& operator=(CompliancePack &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The tag keys of the resource.
        shared_ptr<string> tagKey_ {};
        // The tag values of the resource.
        shared_ptr<string> tagValue_ {};
      };

      class Scope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scope& obj) { 
          DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
          DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
          DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
          DARABONBA_PTR_TO_JSON(ExcludeTagsScope, excludeTagsScope_);
          DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
          DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
          DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
          DARABONBA_PTR_TO_JSON(TagKeyScope, tagKeyScope_);
          DARABONBA_PTR_TO_JSON(TagValueScope, tagValueScope_);
          DARABONBA_PTR_TO_JSON(TagsScope, tagsScope_);
        };
        friend void from_json(const Darabonba::Json& j, Scope& obj) { 
          DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
          DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
          DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
          DARABONBA_PTR_FROM_JSON(ExcludeTagsScope, excludeTagsScope_);
          DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
          DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
          DARABONBA_PTR_FROM_JSON(TagKeyScope, tagKeyScope_);
          DARABONBA_PTR_FROM_JSON(TagValueScope, tagValueScope_);
          DARABONBA_PTR_FROM_JSON(TagsScope, tagsScope_);
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
          // The key of the tag.
          shared_ptr<string> tagKey_ {};
          // The value of the tag.
          shared_ptr<string> tagValue_ {};
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
          // The key of the tag.
          shared_ptr<string> tagKey_ {};
          // The value of the tag.
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->excludeRegionIdsScope_ == nullptr
        && this->excludeResourceGroupIdsScope_ == nullptr && this->excludeResourceIdsScope_ == nullptr && this->excludeTagsScope_ == nullptr && this->regionIdsScope_ == nullptr && this->resourceGroupIdsScope_ == nullptr
        && this->resourceIdsScope_ == nullptr && this->tagKeyScope_ == nullptr && this->tagValueScope_ == nullptr && this->tagsScope_ == nullptr; };
        // excludeRegionIdsScope Field Functions 
        bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
        void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
        inline string getExcludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
        inline Scope& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


        // excludeResourceGroupIdsScope Field Functions 
        bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
        void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
        inline string getExcludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
        inline Scope& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


        // excludeResourceIdsScope Field Functions 
        bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
        void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
        inline string getExcludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
        inline Scope& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


        // excludeTagsScope Field Functions 
        bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
        void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
        inline const vector<Scope::ExcludeTagsScope> & getExcludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<Scope::ExcludeTagsScope>) };
        inline vector<Scope::ExcludeTagsScope> getExcludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<Scope::ExcludeTagsScope>) };
        inline Scope& setExcludeTagsScope(const vector<Scope::ExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
        inline Scope& setExcludeTagsScope(vector<Scope::ExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


        // regionIdsScope Field Functions 
        bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
        void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
        inline string getRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
        inline Scope& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


        // resourceGroupIdsScope Field Functions 
        bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
        void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
        inline string getResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
        inline Scope& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


        // resourceIdsScope Field Functions 
        bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
        void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
        inline string getResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
        inline Scope& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


        // tagKeyScope Field Functions 
        bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
        void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
        inline string getTagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
        inline Scope& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


        // tagValueScope Field Functions 
        bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
        void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
        inline string getTagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
        inline Scope& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


        // tagsScope Field Functions 
        bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
        void deleteTagsScope() { this->tagsScope_ = nullptr;};
        inline const vector<Scope::TagsScope> & getTagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<Scope::TagsScope>) };
        inline vector<Scope::TagsScope> getTagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<Scope::TagsScope>) };
        inline Scope& setTagsScope(const vector<Scope::TagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
        inline Scope& setTagsScope(vector<Scope::TagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


      protected:
        // The IDs of regions that are excluded. Separate multiple region IDs with commas (,).
        shared_ptr<string> excludeRegionIdsScope_ {};
        // The IDs of the resource groups whose resources you do not want to evaluate by using the compliance package. Separate multiple resource group IDs with commas (,).
        shared_ptr<string> excludeResourceGroupIdsScope_ {};
        // The ID of the resource that you do not want to evaluate by using the compliance package.
        shared_ptr<string> excludeResourceIdsScope_ {};
        // The scope of the tag that is excluded.
        // 
        // This parameter is required.
        shared_ptr<vector<Scope::ExcludeTagsScope>> excludeTagsScope_ {};
        // The ID of the region whose resources you want to evaluate by using the compliance package.
        shared_ptr<string> regionIdsScope_ {};
        // The ID of the resource group whose resources you want to evaluate by using the compliance package.
        shared_ptr<string> resourceGroupIdsScope_ {};
        // The IDs of the resources to which the rule applies. Separate multiple resource IDs with commas (,).
        shared_ptr<string> resourceIdsScope_ {};
        // The tag key of the resource that you want to evaluate by using the compliance package.
        shared_ptr<string> tagKeyScope_ {};
        // The tag value of the resource that you want to evaluate by using the compliance package.
        shared_ptr<string> tagValueScope_ {};
        // The tag scope.
        // 
        // This parameter is required.
        shared_ptr<vector<Scope::TagsScope>> tagsScope_ {};
      };

      class ConfigRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigRules& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
          DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
          DARABONBA_PTR_TO_JSON(ConfigRuleParameters, configRuleParameters_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
          DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
          DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
          DARABONBA_PTR_FROM_JSON(ConfigRuleParameters, configRuleParameters_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
          DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
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
            DARABONBA_PTR_TO_JSON(Required, required_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigRuleParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
            DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
            DARABONBA_PTR_FROM_JSON(Required, required_);
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
        && this->parameterValue_ == nullptr && this->required_ == nullptr; };
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


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
          inline ConfigRuleParameters& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        protected:
          // The name of the input parameter.
          shared_ptr<string> parameterName_ {};
          // The value of the input parameter.
          shared_ptr<string> parameterValue_ {};
          // Indicates whether the input parameters are required. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> required_ {};
        };

        virtual bool empty() const override { return this->configRuleId_ == nullptr
        && this->configRuleName_ == nullptr && this->configRuleParameters_ == nullptr && this->description_ == nullptr && this->managedRuleIdentifier_ == nullptr && this->resourceTypesScope_ == nullptr
        && this->riskLevel_ == nullptr; };
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


        // resourceTypesScope Field Functions 
        bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
        void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
        inline string getResourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
        inline ConfigRules& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline ConfigRules& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The rule ID.
        shared_ptr<string> configRuleId_ {};
        // The rule name.
        shared_ptr<string> configRuleName_ {};
        // The input parameters of the rule.
        shared_ptr<vector<ConfigRules::ConfigRuleParameters>> configRuleParameters_ {};
        // The rule description.
        shared_ptr<string> description_ {};
        // The identifier of the managed rule.
        shared_ptr<string> managedRuleIdentifier_ {};
        // The type of the resource evaluated based on the rule. Separate multiple resource types with commas (,).
        shared_ptr<string> resourceTypesScope_ {};
        // The risk level of the resources that do not comply with the rule. Valid values:
        // 
        // *   1: high
        // *   2: medium
        // *   3: low
        shared_ptr<int32_t> riskLevel_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->compliancePackId_ == nullptr && this->compliancePackName_ == nullptr && this->compliancePackTemplateId_ == nullptr && this->configRules_ == nullptr && this->createTimestamp_ == nullptr
        && this->description_ == nullptr && this->riskLevel_ == nullptr && this->scope_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->templateContent_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline CompliancePack& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // compliancePackId Field Functions 
      bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
      void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
      inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
      inline CompliancePack& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


      // compliancePackName Field Functions 
      bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
      void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
      inline string getCompliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
      inline CompliancePack& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


      // compliancePackTemplateId Field Functions 
      bool hasCompliancePackTemplateId() const { return this->compliancePackTemplateId_ != nullptr;};
      void deleteCompliancePackTemplateId() { this->compliancePackTemplateId_ = nullptr;};
      inline string getCompliancePackTemplateId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateId_, "") };
      inline CompliancePack& setCompliancePackTemplateId(string compliancePackTemplateId) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateId_, compliancePackTemplateId) };


      // configRules Field Functions 
      bool hasConfigRules() const { return this->configRules_ != nullptr;};
      void deleteConfigRules() { this->configRules_ = nullptr;};
      inline const vector<CompliancePack::ConfigRules> & getConfigRules() const { DARABONBA_PTR_GET_CONST(configRules_, vector<CompliancePack::ConfigRules>) };
      inline vector<CompliancePack::ConfigRules> getConfigRules() { DARABONBA_PTR_GET(configRules_, vector<CompliancePack::ConfigRules>) };
      inline CompliancePack& setConfigRules(const vector<CompliancePack::ConfigRules> & configRules) { DARABONBA_PTR_SET_VALUE(configRules_, configRules) };
      inline CompliancePack& setConfigRules(vector<CompliancePack::ConfigRules> && configRules) { DARABONBA_PTR_SET_RVALUE(configRules_, configRules) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline CompliancePack& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CompliancePack& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline CompliancePack& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const CompliancePack::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, CompliancePack::Scope) };
      inline CompliancePack::Scope getScope() { DARABONBA_PTR_GET(scope_, CompliancePack::Scope) };
      inline CompliancePack& setScope(const CompliancePack::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline CompliancePack& setScope(CompliancePack::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CompliancePack& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<CompliancePack::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CompliancePack::Tags>) };
      inline vector<CompliancePack::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CompliancePack::Tags>) };
      inline CompliancePack& setTags(const vector<CompliancePack::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline CompliancePack& setTags(vector<CompliancePack::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // templateContent Field Functions 
      bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
      void deleteTemplateContent() { this->templateContent_ = nullptr;};
      inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
      inline CompliancePack& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    protected:
      // The ID of the Alibaba Cloud account to which the compliance package belongs.
      shared_ptr<int64_t> accountId_ {};
      // The ID of the compliance package.
      shared_ptr<string> compliancePackId_ {};
      // The name of the compliance package.
      shared_ptr<string> compliancePackName_ {};
      // The ID of the compliance package template.
      shared_ptr<string> compliancePackTemplateId_ {};
      // The rules in the compliance package.
      shared_ptr<vector<CompliancePack::ConfigRules>> configRules_ {};
      // The timestamp when the compliance package was created. Unit: milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      // The description of the compliance package.
      shared_ptr<string> description_ {};
      // The risk level of the resources that are not compliant with the rules in the compliance package. Valid values:
      // 
      // *   1: high
      // *   2: medium
      // *   3: low
      shared_ptr<int32_t> riskLevel_ {};
      // The resource group for which the compliance package took effect.
      shared_ptr<CompliancePack::Scope> scope_ {};
      // The status of the compliance package. Valid values:
      // 
      // *   ACTIVE: The compliance package is normal.
      // *   CREATING: The compliance package is being created.
      shared_ptr<string> status_ {};
      // The list of tags.
      shared_ptr<vector<CompliancePack::Tags>> tags_ {};
      // The information about the current compliance package template. The rules in the template do not contain custom function rules. You can quickly create the same compliance package for other accounts or account groups based on the template information.
      shared_ptr<string> templateContent_ {};
    };

    virtual bool empty() const override { return this->compliancePack_ == nullptr
        && this->requestId_ == nullptr; };
    // compliancePack Field Functions 
    bool hasCompliancePack() const { return this->compliancePack_ != nullptr;};
    void deleteCompliancePack() { this->compliancePack_ = nullptr;};
    inline const GetCompliancePackResponseBody::CompliancePack & getCompliancePack() const { DARABONBA_PTR_GET_CONST(compliancePack_, GetCompliancePackResponseBody::CompliancePack) };
    inline GetCompliancePackResponseBody::CompliancePack getCompliancePack() { DARABONBA_PTR_GET(compliancePack_, GetCompliancePackResponseBody::CompliancePack) };
    inline GetCompliancePackResponseBody& setCompliancePack(const GetCompliancePackResponseBody::CompliancePack & compliancePack) { DARABONBA_PTR_SET_VALUE(compliancePack_, compliancePack) };
    inline GetCompliancePackResponseBody& setCompliancePack(GetCompliancePackResponseBody::CompliancePack && compliancePack) { DARABONBA_PTR_SET_RVALUE(compliancePack_, compliancePack) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCompliancePackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the compliance package.
    shared_ptr<GetCompliancePackResponseBody::CompliancePack> compliancePack_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
