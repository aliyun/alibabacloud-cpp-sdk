// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYDISCOVERRULE_HPP_
#define ALIBABACLOUD_MODELS_ENTITYDISCOVERRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EntityDiscoverRuleAnnotations.hpp>
#include <alibabacloud/models/EntityDiscoverRuleFieldRules.hpp>
#include <alibabacloud/models/EntityDiscoverRuleIpMatchRule.hpp>
#include <alibabacloud/models/EntityDiscoverRuleLabels.hpp>
#include <alibabacloud/models/EntityDiscoverRuleTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EntityDiscoverRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntityDiscoverRule& obj) { 
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
    friend void from_json(const Darabonba::Json& j, EntityDiscoverRule& obj) { 
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
    EntityDiscoverRule() = default ;
    EntityDiscoverRule(const EntityDiscoverRule &) = default ;
    EntityDiscoverRule(EntityDiscoverRule &&) = default ;
    EntityDiscoverRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntityDiscoverRule() = default ;
    EntityDiscoverRule& operator=(const EntityDiscoverRule &) = default ;
    EntityDiscoverRule& operator=(EntityDiscoverRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->annotations_ != nullptr
        && this->entityTypes_ != nullptr && this->fieldRules_ != nullptr && this->instanceIds_ != nullptr && this->ipMatchRule_ != nullptr && this->labels_ != nullptr
        && this->regionIds_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<EntityDiscoverRuleAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<EntityDiscoverRuleAnnotations>) };
    inline vector<EntityDiscoverRuleAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<EntityDiscoverRuleAnnotations>) };
    inline EntityDiscoverRule& setAnnotations(const vector<EntityDiscoverRuleAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline EntityDiscoverRule& setAnnotations(vector<EntityDiscoverRuleAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // entityTypes Field Functions 
    bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
    void deleteEntityTypes() { this->entityTypes_ = nullptr;};
    inline const vector<string> & entityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
    inline vector<string> entityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
    inline EntityDiscoverRule& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
    inline EntityDiscoverRule& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


    // fieldRules Field Functions 
    bool hasFieldRules() const { return this->fieldRules_ != nullptr;};
    void deleteFieldRules() { this->fieldRules_ = nullptr;};
    inline const vector<EntityDiscoverRuleFieldRules> & fieldRules() const { DARABONBA_PTR_GET_CONST(fieldRules_, vector<EntityDiscoverRuleFieldRules>) };
    inline vector<EntityDiscoverRuleFieldRules> fieldRules() { DARABONBA_PTR_GET(fieldRules_, vector<EntityDiscoverRuleFieldRules>) };
    inline EntityDiscoverRule& setFieldRules(const vector<EntityDiscoverRuleFieldRules> & fieldRules) { DARABONBA_PTR_SET_VALUE(fieldRules_, fieldRules) };
    inline EntityDiscoverRule& setFieldRules(vector<EntityDiscoverRuleFieldRules> && fieldRules) { DARABONBA_PTR_SET_RVALUE(fieldRules_, fieldRules) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline EntityDiscoverRule& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline EntityDiscoverRule& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // ipMatchRule Field Functions 
    bool hasIpMatchRule() const { return this->ipMatchRule_ != nullptr;};
    void deleteIpMatchRule() { this->ipMatchRule_ = nullptr;};
    inline const vector<EntityDiscoverRuleIpMatchRule> & ipMatchRule() const { DARABONBA_PTR_GET_CONST(ipMatchRule_, vector<EntityDiscoverRuleIpMatchRule>) };
    inline vector<EntityDiscoverRuleIpMatchRule> ipMatchRule() { DARABONBA_PTR_GET(ipMatchRule_, vector<EntityDiscoverRuleIpMatchRule>) };
    inline EntityDiscoverRule& setIpMatchRule(const vector<EntityDiscoverRuleIpMatchRule> & ipMatchRule) { DARABONBA_PTR_SET_VALUE(ipMatchRule_, ipMatchRule) };
    inline EntityDiscoverRule& setIpMatchRule(vector<EntityDiscoverRuleIpMatchRule> && ipMatchRule) { DARABONBA_PTR_SET_RVALUE(ipMatchRule_, ipMatchRule) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<EntityDiscoverRuleLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<EntityDiscoverRuleLabels>) };
    inline vector<EntityDiscoverRuleLabels> labels() { DARABONBA_PTR_GET(labels_, vector<EntityDiscoverRuleLabels>) };
    inline EntityDiscoverRule& setLabels(const vector<EntityDiscoverRuleLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline EntityDiscoverRule& setLabels(vector<EntityDiscoverRuleLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & regionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> regionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline EntityDiscoverRule& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline EntityDiscoverRule& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline EntityDiscoverRule& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<EntityDiscoverRuleTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<EntityDiscoverRuleTags>) };
    inline vector<EntityDiscoverRuleTags> tags() { DARABONBA_PTR_GET(tags_, vector<EntityDiscoverRuleTags>) };
    inline EntityDiscoverRule& setTags(const vector<EntityDiscoverRuleTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline EntityDiscoverRule& setTags(vector<EntityDiscoverRuleTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<EntityDiscoverRuleAnnotations>> annotations_ = nullptr;
    std::shared_ptr<vector<string>> entityTypes_ = nullptr;
    std::shared_ptr<vector<EntityDiscoverRuleFieldRules>> fieldRules_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<vector<EntityDiscoverRuleIpMatchRule>> ipMatchRule_ = nullptr;
    std::shared_ptr<vector<EntityDiscoverRuleLabels>> labels_ = nullptr;
    std::shared_ptr<vector<string>> regionIds_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<EntityDiscoverRuleTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
