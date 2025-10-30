// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICYENTITYGROUPENTITYRULES_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICYENTITYGROUPENTITYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesAnnotations.hpp>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesFieldRules.hpp>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule.hpp>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesLabels.hpp>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& obj) { 
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_PTR_TO_JSON(entityTypes, entityTypes_);
      DARABONBA_PTR_TO_JSON(fieldRules, fieldRules_);
      DARABONBA_PTR_TO_JSON(instanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ipMatchRule, ipMatchRule_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(regionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& obj) { 
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(entityTypes, entityTypes_);
      DARABONBA_PTR_FROM_JSON(fieldRules, fieldRules_);
      DARABONBA_PTR_FROM_JSON(instanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ipMatchRule, ipMatchRule_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(regionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules() = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules(const GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules &) = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules(GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules &&) = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules() = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& operator=(const GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules &) = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& operator=(GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && return this->entityTypes_ == nullptr && return this->fieldRules_ == nullptr && return this->instanceIds_ == nullptr && return this->ipMatchRule_ == nullptr && return this->labels_ == nullptr
        && return this->regionIds_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesAnnotations>) };
    inline vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesAnnotations>) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setAnnotations(const vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setAnnotations(vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // entityTypes Field Functions 
    bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
    void deleteEntityTypes() { this->entityTypes_ = nullptr;};
    inline const vector<string> & entityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
    inline vector<string> entityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


    // fieldRules Field Functions 
    bool hasFieldRules() const { return this->fieldRules_ != nullptr;};
    void deleteFieldRules() { this->fieldRules_ = nullptr;};
    inline const vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesFieldRules> & fieldRules() const { DARABONBA_PTR_GET_CONST(fieldRules_, vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesFieldRules>) };
    inline vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesFieldRules> fieldRules() { DARABONBA_PTR_GET(fieldRules_, vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesFieldRules>) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setFieldRules(const vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesFieldRules> & fieldRules) { DARABONBA_PTR_SET_VALUE(fieldRules_, fieldRules) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setFieldRules(vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesFieldRules> && fieldRules) { DARABONBA_PTR_SET_RVALUE(fieldRules_, fieldRules) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // ipMatchRule Field Functions 
    bool hasIpMatchRule() const { return this->ipMatchRule_ != nullptr;};
    void deleteIpMatchRule() { this->ipMatchRule_ = nullptr;};
    inline const Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule & ipMatchRule() const { DARABONBA_PTR_GET_CONST(ipMatchRule_, Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule) };
    inline Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule ipMatchRule() { DARABONBA_PTR_GET(ipMatchRule_, Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setIpMatchRule(const Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule & ipMatchRule) { DARABONBA_PTR_SET_VALUE(ipMatchRule_, ipMatchRule) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setIpMatchRule(Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule && ipMatchRule) { DARABONBA_PTR_SET_RVALUE(ipMatchRule_, ipMatchRule) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesLabels>) };
    inline vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesLabels>) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setLabels(const vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setLabels(vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & regionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> regionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags>) };
    inline vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags>) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setTags(const vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRules& setTags(vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // Annotations.
    std::shared_ptr<vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesAnnotations>> annotations_ = nullptr;
    // List of entity types.
    std::shared_ptr<vector<string>> entityTypes_ = nullptr;
    // List of field rules.
    std::shared_ptr<vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesFieldRules>> fieldRules_ = nullptr;
    // Instance ID.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // IP matching rule.
    std::shared_ptr<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesIpMatchRule> ipMatchRule_ = nullptr;
    // Labels.
    std::shared_ptr<vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesLabels>> labels_ = nullptr;
    // List of region IDs.
    std::shared_ptr<vector<string>> regionIds_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Tag values.
    std::shared_ptr<vector<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
