// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYDISCOVERRULE_HPP_
#define ALIBABACLOUD_MODELS_ENTITYDISCOVERRULE_HPP_
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(op, op_);
        DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(tagValues, tagValues_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(op, op_);
        DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(tagValues, tagValues_);
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
      shared_ptr<string> op_ {};
      shared_ptr<string> tagKey_ {};
      shared_ptr<vector<string>> tagValues_ {};
    };

    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(op, op_);
        DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(tagValues, tagValues_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(op, op_);
        DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(tagValues, tagValues_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
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
      inline Labels& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Labels& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValues Field Functions 
      bool hasTagValues() const { return this->tagValues_ != nullptr;};
      void deleteTagValues() { this->tagValues_ = nullptr;};
      inline const vector<string> & getTagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
      inline vector<string> getTagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
      inline Labels& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
      inline Labels& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


    protected:
      shared_ptr<string> op_ {};
      shared_ptr<string> tagKey_ {};
      shared_ptr<vector<string>> tagValues_ {};
    };

    class IpMatchRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpMatchRule& obj) { 
        DARABONBA_PTR_TO_JSON(ipCIDR, ipCIDR_);
        DARABONBA_PTR_TO_JSON(ipFieldKey, ipFieldKey_);
      };
      friend void from_json(const Darabonba::Json& j, IpMatchRule& obj) { 
        DARABONBA_PTR_FROM_JSON(ipCIDR, ipCIDR_);
        DARABONBA_PTR_FROM_JSON(ipFieldKey, ipFieldKey_);
      };
      IpMatchRule() = default ;
      IpMatchRule(const IpMatchRule &) = default ;
      IpMatchRule(IpMatchRule &&) = default ;
      IpMatchRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpMatchRule() = default ;
      IpMatchRule& operator=(const IpMatchRule &) = default ;
      IpMatchRule& operator=(IpMatchRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipCIDR_ == nullptr
        && this->ipFieldKey_ == nullptr; };
      // ipCIDR Field Functions 
      bool hasIpCIDR() const { return this->ipCIDR_ != nullptr;};
      void deleteIpCIDR() { this->ipCIDR_ = nullptr;};
      inline string getIpCIDR() const { DARABONBA_PTR_GET_DEFAULT(ipCIDR_, "") };
      inline IpMatchRule& setIpCIDR(string ipCIDR) { DARABONBA_PTR_SET_VALUE(ipCIDR_, ipCIDR) };


      // ipFieldKey Field Functions 
      bool hasIpFieldKey() const { return this->ipFieldKey_ != nullptr;};
      void deleteIpFieldKey() { this->ipFieldKey_ = nullptr;};
      inline string getIpFieldKey() const { DARABONBA_PTR_GET_DEFAULT(ipFieldKey_, "") };
      inline IpMatchRule& setIpFieldKey(string ipFieldKey) { DARABONBA_PTR_SET_VALUE(ipFieldKey_, ipFieldKey) };


    protected:
      shared_ptr<string> ipCIDR_ {};
      shared_ptr<string> ipFieldKey_ {};
    };

    class FieldRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FieldRules& obj) { 
        DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
        DARABONBA_PTR_TO_JSON(fieldValues, fieldValues_);
        DARABONBA_PTR_TO_JSON(op, op_);
      };
      friend void from_json(const Darabonba::Json& j, FieldRules& obj) { 
        DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
        DARABONBA_PTR_FROM_JSON(fieldValues, fieldValues_);
        DARABONBA_PTR_FROM_JSON(op, op_);
      };
      FieldRules() = default ;
      FieldRules(const FieldRules &) = default ;
      FieldRules(FieldRules &&) = default ;
      FieldRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FieldRules() = default ;
      FieldRules& operator=(const FieldRules &) = default ;
      FieldRules& operator=(FieldRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldKey_ == nullptr
        && this->fieldValues_ == nullptr && this->op_ == nullptr; };
      // fieldKey Field Functions 
      bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
      void deleteFieldKey() { this->fieldKey_ = nullptr;};
      inline string getFieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
      inline FieldRules& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


      // fieldValues Field Functions 
      bool hasFieldValues() const { return this->fieldValues_ != nullptr;};
      void deleteFieldValues() { this->fieldValues_ = nullptr;};
      inline const vector<string> & getFieldValues() const { DARABONBA_PTR_GET_CONST(fieldValues_, vector<string>) };
      inline vector<string> getFieldValues() { DARABONBA_PTR_GET(fieldValues_, vector<string>) };
      inline FieldRules& setFieldValues(const vector<string> & fieldValues) { DARABONBA_PTR_SET_VALUE(fieldValues_, fieldValues) };
      inline FieldRules& setFieldValues(vector<string> && fieldValues) { DARABONBA_PTR_SET_RVALUE(fieldValues_, fieldValues) };


      // op Field Functions 
      bool hasOp() const { return this->op_ != nullptr;};
      void deleteOp() { this->op_ = nullptr;};
      inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
      inline FieldRules& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    protected:
      shared_ptr<string> fieldKey_ {};
      shared_ptr<vector<string>> fieldValues_ {};
      shared_ptr<string> op_ {};
    };

    class Annotations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Annotations& obj) { 
        DARABONBA_PTR_TO_JSON(op, op_);
        DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(tagValues, tagValues_);
      };
      friend void from_json(const Darabonba::Json& j, Annotations& obj) { 
        DARABONBA_PTR_FROM_JSON(op, op_);
        DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(tagValues, tagValues_);
      };
      Annotations() = default ;
      Annotations(const Annotations &) = default ;
      Annotations(Annotations &&) = default ;
      Annotations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Annotations() = default ;
      Annotations& operator=(const Annotations &) = default ;
      Annotations& operator=(Annotations &&) = default ;
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
      inline Annotations& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Annotations& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValues Field Functions 
      bool hasTagValues() const { return this->tagValues_ != nullptr;};
      void deleteTagValues() { this->tagValues_ = nullptr;};
      inline const vector<string> & getTagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
      inline vector<string> getTagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
      inline Annotations& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
      inline Annotations& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


    protected:
      shared_ptr<string> op_ {};
      shared_ptr<string> tagKey_ {};
      shared_ptr<vector<string>> tagValues_ {};
    };

    virtual bool empty() const override { return this->annotations_ == nullptr
        && this->entityTypes_ == nullptr && this->fieldRules_ == nullptr && this->instanceIds_ == nullptr && this->ipMatchRule_ == nullptr && this->labels_ == nullptr
        && this->regionIds_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<EntityDiscoverRule::Annotations> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<EntityDiscoverRule::Annotations>) };
    inline vector<EntityDiscoverRule::Annotations> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<EntityDiscoverRule::Annotations>) };
    inline EntityDiscoverRule& setAnnotations(const vector<EntityDiscoverRule::Annotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline EntityDiscoverRule& setAnnotations(vector<EntityDiscoverRule::Annotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // entityTypes Field Functions 
    bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
    void deleteEntityTypes() { this->entityTypes_ = nullptr;};
    inline const vector<string> & getEntityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
    inline vector<string> getEntityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
    inline EntityDiscoverRule& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
    inline EntityDiscoverRule& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


    // fieldRules Field Functions 
    bool hasFieldRules() const { return this->fieldRules_ != nullptr;};
    void deleteFieldRules() { this->fieldRules_ = nullptr;};
    inline const vector<EntityDiscoverRule::FieldRules> & getFieldRules() const { DARABONBA_PTR_GET_CONST(fieldRules_, vector<EntityDiscoverRule::FieldRules>) };
    inline vector<EntityDiscoverRule::FieldRules> getFieldRules() { DARABONBA_PTR_GET(fieldRules_, vector<EntityDiscoverRule::FieldRules>) };
    inline EntityDiscoverRule& setFieldRules(const vector<EntityDiscoverRule::FieldRules> & fieldRules) { DARABONBA_PTR_SET_VALUE(fieldRules_, fieldRules) };
    inline EntityDiscoverRule& setFieldRules(vector<EntityDiscoverRule::FieldRules> && fieldRules) { DARABONBA_PTR_SET_RVALUE(fieldRules_, fieldRules) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline EntityDiscoverRule& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline EntityDiscoverRule& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // ipMatchRule Field Functions 
    bool hasIpMatchRule() const { return this->ipMatchRule_ != nullptr;};
    void deleteIpMatchRule() { this->ipMatchRule_ = nullptr;};
    inline const vector<EntityDiscoverRule::IpMatchRule> & getIpMatchRule() const { DARABONBA_PTR_GET_CONST(ipMatchRule_, vector<EntityDiscoverRule::IpMatchRule>) };
    inline vector<EntityDiscoverRule::IpMatchRule> getIpMatchRule() { DARABONBA_PTR_GET(ipMatchRule_, vector<EntityDiscoverRule::IpMatchRule>) };
    inline EntityDiscoverRule& setIpMatchRule(const vector<EntityDiscoverRule::IpMatchRule> & ipMatchRule) { DARABONBA_PTR_SET_VALUE(ipMatchRule_, ipMatchRule) };
    inline EntityDiscoverRule& setIpMatchRule(vector<EntityDiscoverRule::IpMatchRule> && ipMatchRule) { DARABONBA_PTR_SET_RVALUE(ipMatchRule_, ipMatchRule) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<EntityDiscoverRule::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<EntityDiscoverRule::Labels>) };
    inline vector<EntityDiscoverRule::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<EntityDiscoverRule::Labels>) };
    inline EntityDiscoverRule& setLabels(const vector<EntityDiscoverRule::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline EntityDiscoverRule& setLabels(vector<EntityDiscoverRule::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline EntityDiscoverRule& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline EntityDiscoverRule& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline EntityDiscoverRule& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<EntityDiscoverRule::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<EntityDiscoverRule::Tags>) };
    inline vector<EntityDiscoverRule::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<EntityDiscoverRule::Tags>) };
    inline EntityDiscoverRule& setTags(const vector<EntityDiscoverRule::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline EntityDiscoverRule& setTags(vector<EntityDiscoverRule::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<vector<EntityDiscoverRule::Annotations>> annotations_ {};
    shared_ptr<vector<string>> entityTypes_ {};
    shared_ptr<vector<EntityDiscoverRule::FieldRules>> fieldRules_ {};
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<vector<EntityDiscoverRule::IpMatchRule>> ipMatchRule_ {};
    shared_ptr<vector<EntityDiscoverRule::Labels>> labels_ {};
    shared_ptr<vector<string>> regionIds_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<EntityDiscoverRule::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
