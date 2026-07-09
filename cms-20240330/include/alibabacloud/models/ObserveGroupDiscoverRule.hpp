// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVEGROUPDISCOVERRULE_HPP_
#define ALIBABACLOUD_MODELS_OBSERVEGROUPDISCOVERRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveGroupDiscoverRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveGroupDiscoverRule& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(NameRules, nameRules_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Spl, spl_);
      DARABONBA_PTR_TO_JSON(TagRules, tagRules_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveGroupDiscoverRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(NameRules, nameRules_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Spl, spl_);
      DARABONBA_PTR_FROM_JSON(TagRules, tagRules_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ObserveGroupDiscoverRule() = default ;
    ObserveGroupDiscoverRule(const ObserveGroupDiscoverRule &) = default ;
    ObserveGroupDiscoverRule(ObserveGroupDiscoverRule &&) = default ;
    ObserveGroupDiscoverRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveGroupDiscoverRule() = default ;
    ObserveGroupDiscoverRule& operator=(const ObserveGroupDiscoverRule &) = default ;
    ObserveGroupDiscoverRule& operator=(ObserveGroupDiscoverRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagRules& obj) { 
        DARABONBA_PTR_TO_JSON(Op, op_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, TagRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Op, op_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      TagRules() = default ;
      TagRules(const TagRules &) = default ;
      TagRules(TagRules &&) = default ;
      TagRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagRules() = default ;
      TagRules& operator=(const TagRules &) = default ;
      TagRules& operator=(TagRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Op, op_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValues, tagValues_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Op, op_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValues, tagValues_);
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
        virtual bool empty() const override { return this->op_ == nullptr
        && this->tagKey_ == nullptr && this->tagValues_ == nullptr; };
        // op Field Functions 
        bool hasOp() const { return this->op_ != nullptr;};
        void deleteOp() { this->op_ = nullptr;};
        inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
        inline Tags& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValues Field Functions 
        bool hasTagValues() const { return this->tagValues_ != nullptr;};
        void deleteTagValues() { this->tagValues_ = nullptr;};
        inline const vector<string> & getTagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
        inline vector<string> getTagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
        inline Tags& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
        inline Tags& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


      protected:
        // The matching operation.
        shared_ptr<string> op_ {};
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The list of tag values.
        shared_ptr<vector<string>> tagValues_ {};
      };

      virtual bool empty() const override { return this->op_ == nullptr
        && this->tags_ == nullptr; };
      // op Field Functions 
      bool hasOp() const { return this->op_ != nullptr;};
      void deleteOp() { this->op_ = nullptr;};
      inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
      inline TagRules& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TagRules::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TagRules::Tags>) };
      inline vector<TagRules::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TagRules::Tags>) };
      inline TagRules& setTags(const vector<TagRules::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TagRules& setTags(vector<TagRules::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The tag matching logic.
      shared_ptr<string> op_ {};
      // The list of tag conditions.
      shared_ptr<vector<TagRules::Tags>> tags_ {};
    };

    class NameRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NameRules& obj) { 
        DARABONBA_PTR_TO_JSON(Op, op_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, NameRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Op, op_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      NameRules() = default ;
      NameRules(const NameRules &) = default ;
      NameRules(NameRules &&) = default ;
      NameRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NameRules() = default ;
      NameRules& operator=(const NameRules &) = default ;
      NameRules& operator=(NameRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Op, op_);
          DARABONBA_PTR_TO_JSON(TagValues, tagValues_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Op, op_);
          DARABONBA_PTR_FROM_JSON(TagValues, tagValues_);
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
        virtual bool empty() const override { return this->op_ == nullptr
        && this->tagValues_ == nullptr; };
        // op Field Functions 
        bool hasOp() const { return this->op_ != nullptr;};
        void deleteOp() { this->op_ = nullptr;};
        inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
        inline Tags& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


        // tagValues Field Functions 
        bool hasTagValues() const { return this->tagValues_ != nullptr;};
        void deleteTagValues() { this->tagValues_ = nullptr;};
        inline const vector<string> & getTagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
        inline vector<string> getTagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
        inline Tags& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
        inline Tags& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


      protected:
        // The matching operation.
        shared_ptr<string> op_ {};
        // The list of matching values.
        shared_ptr<vector<string>> tagValues_ {};
      };

      virtual bool empty() const override { return this->op_ == nullptr
        && this->tags_ == nullptr; };
      // op Field Functions 
      bool hasOp() const { return this->op_ != nullptr;};
      void deleteOp() { this->op_ = nullptr;};
      inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
      inline NameRules& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<NameRules::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<NameRules::Tags>) };
      inline vector<NameRules::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<NameRules::Tags>) };
      inline NameRules& setTags(const vector<NameRules::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline NameRules& setTags(vector<NameRules::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The name matching logic.
      shared_ptr<string> op_ {};
      // The list of name conditions.
      shared_ptr<vector<NameRules::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->entityType_ == nullptr && this->entityTypes_ == nullptr && this->gmtCreate_ == nullptr && this->instanceIds_ == nullptr && this->nameRules_ == nullptr
        && this->regionIds_ == nullptr && this->resourceGroupId_ == nullptr && this->ruleId_ == nullptr && this->ruleType_ == nullptr && this->scope_ == nullptr
        && this->spl_ == nullptr && this->tagRules_ == nullptr && this->userId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ObserveGroupDiscoverRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ObserveGroupDiscoverRule& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityTypes Field Functions 
    bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
    void deleteEntityTypes() { this->entityTypes_ = nullptr;};
    inline const vector<string> & getEntityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
    inline vector<string> getEntityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
    inline ObserveGroupDiscoverRule& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
    inline ObserveGroupDiscoverRule& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ObserveGroupDiscoverRule& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ObserveGroupDiscoverRule& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ObserveGroupDiscoverRule& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // nameRules Field Functions 
    bool hasNameRules() const { return this->nameRules_ != nullptr;};
    void deleteNameRules() { this->nameRules_ = nullptr;};
    inline const ObserveGroupDiscoverRule::NameRules & getNameRules() const { DARABONBA_PTR_GET_CONST(nameRules_, ObserveGroupDiscoverRule::NameRules) };
    inline ObserveGroupDiscoverRule::NameRules getNameRules() { DARABONBA_PTR_GET(nameRules_, ObserveGroupDiscoverRule::NameRules) };
    inline ObserveGroupDiscoverRule& setNameRules(const ObserveGroupDiscoverRule::NameRules & nameRules) { DARABONBA_PTR_SET_VALUE(nameRules_, nameRules) };
    inline ObserveGroupDiscoverRule& setNameRules(ObserveGroupDiscoverRule::NameRules && nameRules) { DARABONBA_PTR_SET_RVALUE(nameRules_, nameRules) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline ObserveGroupDiscoverRule& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline ObserveGroupDiscoverRule& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ObserveGroupDiscoverRule& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ObserveGroupDiscoverRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ObserveGroupDiscoverRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ObserveGroupDiscoverRule& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // spl Field Functions 
    bool hasSpl() const { return this->spl_ != nullptr;};
    void deleteSpl() { this->spl_ = nullptr;};
    inline string getSpl() const { DARABONBA_PTR_GET_DEFAULT(spl_, "") };
    inline ObserveGroupDiscoverRule& setSpl(string spl) { DARABONBA_PTR_SET_VALUE(spl_, spl) };


    // tagRules Field Functions 
    bool hasTagRules() const { return this->tagRules_ != nullptr;};
    void deleteTagRules() { this->tagRules_ = nullptr;};
    inline const ObserveGroupDiscoverRule::TagRules & getTagRules() const { DARABONBA_PTR_GET_CONST(tagRules_, ObserveGroupDiscoverRule::TagRules) };
    inline ObserveGroupDiscoverRule::TagRules getTagRules() { DARABONBA_PTR_GET(tagRules_, ObserveGroupDiscoverRule::TagRules) };
    inline ObserveGroupDiscoverRule& setTagRules(const ObserveGroupDiscoverRule::TagRules & tagRules) { DARABONBA_PTR_SET_VALUE(tagRules_, tagRules) };
    inline ObserveGroupDiscoverRule& setTagRules(ObserveGroupDiscoverRule::TagRules && tagRules) { DARABONBA_PTR_SET_RVALUE(tagRules_, tagRules) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ObserveGroupDiscoverRule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Indicates whether the rule is enabled. If set to false, the data plane skips this rule and does not perform matching, tagging, or delivery.
    shared_ptr<bool> enabled_ {};
    // The entity type (legacy). This parameter is retained for backward compatibility. Use entityTypes instead.
    shared_ptr<string> entityType_ {};
    // The list of entity types. A single rule can match across multiple types, such as acs.ecs.instance, acs.rds.instance, and acs.arms.service.
    shared_ptr<vector<string>> entityTypes_ {};
    // The time when the rule was created, in UNIX millisecond timestamp format. This value is used for display in the console.
    shared_ptr<int64_t> gmtCreate_ {};
    // The list of manually specified instance IDs. This is an enumeration type and includes instances synchronized manually in version 1.0.
    shared_ptr<vector<string>> instanceIds_ {};
    // The name matching rules.
    shared_ptr<ObserveGroupDiscoverRule::NameRules> nameRules_ {};
    // The list of region IDs used for region-based filtering.
    shared_ptr<vector<string>> regionIds_ {};
    // The resource group ID used for filtering.
    shared_ptr<string> resourceGroupId_ {};
    // The stable ID of the rule, used as an anchor for editing, deleting, and enabling or disabling operations. Format: dr-<16-character hash>.
    shared_ptr<string> ruleId_ {};
    // The matching method. Valid values: byTag, byResourceGroup, byInstanceName, byManual, and bySpl.
    shared_ptr<string> ruleType_ {};
    // The applicable scope. Valid values: all (all entity types, exclusive) and entity (specified entity types).
    shared_ptr<string> scope_ {};
    // The complete SPL expression for advanced configuration. If this parameter is not empty, it takes precedence over other filter fields.
    shared_ptr<string> spl_ {};
    // The tag matching rules.
    shared_ptr<ObserveGroupDiscoverRule::TagRules> tagRules_ {};
    // The UID of the user to whom the rule belongs.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
