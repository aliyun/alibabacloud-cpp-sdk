// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODY_HPP_
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
  class ListIntegrationPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(policies, policies_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(policies, policies_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListIntegrationPoliciesResponseBody() = default ;
    ListIntegrationPoliciesResponseBody(const ListIntegrationPoliciesResponseBody &) = default ;
    ListIntegrationPoliciesResponseBody(ListIntegrationPoliciesResponseBody &&) = default ;
    ListIntegrationPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPoliciesResponseBody() = default ;
    ListIntegrationPoliciesResponseBody& operator=(const ListIntegrationPoliciesResponseBody &) = default ;
    ListIntegrationPoliciesResponseBody& operator=(ListIntegrationPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(bindResource, bindResource_);
        DARABONBA_PTR_TO_JSON(csUmodelStatus, csUmodelStatus_);
        DARABONBA_PTR_TO_JSON(entityGroup, entityGroup_);
        DARABONBA_PTR_TO_JSON(feePackage, feePackage_);
        DARABONBA_PTR_TO_JSON(managedInfo, managedInfo_);
        DARABONBA_PTR_TO_JSON(policyId, policyId_);
        DARABONBA_PTR_TO_JSON(policyName, policyName_);
        DARABONBA_PTR_TO_JSON(policyType, policyType_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(subAddonRelease, subAddonRelease_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(bindResource, bindResource_);
        DARABONBA_PTR_FROM_JSON(csUmodelStatus, csUmodelStatus_);
        DARABONBA_PTR_FROM_JSON(entityGroup, entityGroup_);
        DARABONBA_PTR_FROM_JSON(feePackage, feePackage_);
        DARABONBA_PTR_FROM_JSON(managedInfo, managedInfo_);
        DARABONBA_PTR_FROM_JSON(policyId, policyId_);
        DARABONBA_PTR_FROM_JSON(policyName, policyName_);
        DARABONBA_PTR_FROM_JSON(policyType, policyType_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(subAddonRelease, subAddonRelease_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Tag key
        shared_ptr<string> key_ {};
        // Match value.
        shared_ptr<string> value_ {};
      };

      class SubAddonRelease : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubAddonRelease& obj) { 
          DARABONBA_PTR_TO_JSON(ready, ready_);
          DARABONBA_PTR_TO_JSON(total, total_);
        };
        friend void from_json(const Darabonba::Json& j, SubAddonRelease& obj) { 
          DARABONBA_PTR_FROM_JSON(ready, ready_);
          DARABONBA_PTR_FROM_JSON(total, total_);
        };
        SubAddonRelease() = default ;
        SubAddonRelease(const SubAddonRelease &) = default ;
        SubAddonRelease(SubAddonRelease &&) = default ;
        SubAddonRelease(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubAddonRelease() = default ;
        SubAddonRelease& operator=(const SubAddonRelease &) = default ;
        SubAddonRelease& operator=(SubAddonRelease &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ready_ == nullptr
        && this->total_ == nullptr; };
        // ready Field Functions 
        bool hasReady() const { return this->ready_ != nullptr;};
        void deleteReady() { this->ready_ = nullptr;};
        inline int32_t getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0) };
        inline SubAddonRelease& setReady(int32_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline SubAddonRelease& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        // Number of ready sub-releases
        shared_ptr<int32_t> ready_ {};
        // Number of rules.
        shared_ptr<int32_t> total_ {};
      };

      class ManagedInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagedInfo& obj) { 
          DARABONBA_PTR_TO_JSON(eniId, eniId_);
          DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
        };
        friend void from_json(const Darabonba::Json& j, ManagedInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(eniId, eniId_);
          DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
        };
        ManagedInfo() = default ;
        ManagedInfo(const ManagedInfo &) = default ;
        ManagedInfo(ManagedInfo &&) = default ;
        ManagedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManagedInfo() = default ;
        ManagedInfo& operator=(const ManagedInfo &) = default ;
        ManagedInfo& operator=(ManagedInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eniId_ == nullptr
        && this->securityGroupId_ == nullptr && this->vswitchId_ == nullptr; };
        // eniId Field Functions 
        bool hasEniId() const { return this->eniId_ != nullptr;};
        void deleteEniId() { this->eniId_ = nullptr;};
        inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
        inline ManagedInfo& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline ManagedInfo& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline ManagedInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      protected:
        // ENI card ID of the managed probe. For example: eni-xxxx.
        shared_ptr<string> eniId_ {};
        // Security group ID
        shared_ptr<string> securityGroupId_ {};
        // VSwitch ID.
        shared_ptr<string> vswitchId_ {};
      };

      class EntityGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntityGroup& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(entityGroupId, entityGroupId_);
          DARABONBA_PTR_TO_JSON(entityGroupName, entityGroupName_);
          DARABONBA_PTR_TO_JSON(entityRules, entityRules_);
          DARABONBA_PTR_TO_JSON(query, query_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
          DARABONBA_PTR_TO_JSON(workspace, workspace_);
        };
        friend void from_json(const Darabonba::Json& j, EntityGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(entityGroupId, entityGroupId_);
          DARABONBA_PTR_FROM_JSON(entityGroupName, entityGroupName_);
          DARABONBA_PTR_FROM_JSON(entityRules, entityRules_);
          DARABONBA_PTR_FROM_JSON(query, query_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
          DARABONBA_PTR_FROM_JSON(workspace, workspace_);
        };
        EntityGroup() = default ;
        EntityGroup(const EntityGroup &) = default ;
        EntityGroup(EntityGroup &&) = default ;
        EntityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntityGroup() = default ;
        EntityGroup& operator=(const EntityGroup &) = default ;
        EntityGroup& operator=(EntityGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EntityRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EntityRules& obj) { 
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
          friend void from_json(const Darabonba::Json& j, EntityRules& obj) { 
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
          EntityRules() = default ;
          EntityRules(const EntityRules &) = default ;
          EntityRules(EntityRules &&) = default ;
          EntityRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EntityRules() = default ;
          EntityRules& operator=(const EntityRules &) = default ;
          EntityRules& operator=(EntityRules &&) = default ;
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
            // Operation to be performed.
            shared_ptr<string> op_ {};
            // Tag key.
            shared_ptr<string> tagKey_ {};
            // Tag value.
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
            // Operation to be performed.
            shared_ptr<string> op_ {};
            // Tag key.
            shared_ptr<string> tagKey_ {};
            // Tag values
            shared_ptr<vector<string>> tagValues_ {};
          };

          class IpMatchRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const IpMatchRule& obj) { 
              DARABONBA_PTR_TO_JSON(ipCidr, ipCidr_);
              DARABONBA_PTR_TO_JSON(ipFieldKey, ipFieldKey_);
            };
            friend void from_json(const Darabonba::Json& j, IpMatchRule& obj) { 
              DARABONBA_PTR_FROM_JSON(ipCidr, ipCidr_);
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
            virtual bool empty() const override { return this->ipCidr_ == nullptr
        && this->ipFieldKey_ == nullptr; };
            // ipCidr Field Functions 
            bool hasIpCidr() const { return this->ipCidr_ != nullptr;};
            void deleteIpCidr() { this->ipCidr_ = nullptr;};
            inline string getIpCidr() const { DARABONBA_PTR_GET_DEFAULT(ipCidr_, "") };
            inline IpMatchRule& setIpCidr(string ipCidr) { DARABONBA_PTR_SET_VALUE(ipCidr_, ipCidr) };


            // ipFieldKey Field Functions 
            bool hasIpFieldKey() const { return this->ipFieldKey_ != nullptr;};
            void deleteIpFieldKey() { this->ipFieldKey_ = nullptr;};
            inline string getIpFieldKey() const { DARABONBA_PTR_GET_DEFAULT(ipFieldKey_, "") };
            inline IpMatchRule& setIpFieldKey(string ipFieldKey) { DARABONBA_PTR_SET_VALUE(ipFieldKey_, ipFieldKey) };


          protected:
            // IP segment
            shared_ptr<string> ipCidr_ {};
            // Key of the IP field
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
            // Unique identifier for the field.
            shared_ptr<string> fieldKey_ {};
            // Field content, multiple values separated by English commas.
            shared_ptr<vector<string>> fieldValues_ {};
            // Operation to be performed.
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
            // Operation to be performed.
            shared_ptr<string> op_ {};
            // Tag key.
            shared_ptr<string> tagKey_ {};
            // Tag values
            shared_ptr<vector<string>> tagValues_ {};
          };

          virtual bool empty() const override { return this->annotations_ == nullptr
        && this->entityTypes_ == nullptr && this->fieldRules_ == nullptr && this->instanceIds_ == nullptr && this->ipMatchRule_ == nullptr && this->labels_ == nullptr
        && this->regionIds_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
          // annotations Field Functions 
          bool hasAnnotations() const { return this->annotations_ != nullptr;};
          void deleteAnnotations() { this->annotations_ = nullptr;};
          inline const vector<EntityRules::Annotations> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<EntityRules::Annotations>) };
          inline vector<EntityRules::Annotations> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<EntityRules::Annotations>) };
          inline EntityRules& setAnnotations(const vector<EntityRules::Annotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
          inline EntityRules& setAnnotations(vector<EntityRules::Annotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


          // entityTypes Field Functions 
          bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
          void deleteEntityTypes() { this->entityTypes_ = nullptr;};
          inline const vector<string> & getEntityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
          inline vector<string> getEntityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
          inline EntityRules& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
          inline EntityRules& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


          // fieldRules Field Functions 
          bool hasFieldRules() const { return this->fieldRules_ != nullptr;};
          void deleteFieldRules() { this->fieldRules_ = nullptr;};
          inline const vector<EntityRules::FieldRules> & getFieldRules() const { DARABONBA_PTR_GET_CONST(fieldRules_, vector<EntityRules::FieldRules>) };
          inline vector<EntityRules::FieldRules> getFieldRules() { DARABONBA_PTR_GET(fieldRules_, vector<EntityRules::FieldRules>) };
          inline EntityRules& setFieldRules(const vector<EntityRules::FieldRules> & fieldRules) { DARABONBA_PTR_SET_VALUE(fieldRules_, fieldRules) };
          inline EntityRules& setFieldRules(vector<EntityRules::FieldRules> && fieldRules) { DARABONBA_PTR_SET_RVALUE(fieldRules_, fieldRules) };


          // instanceIds Field Functions 
          bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
          void deleteInstanceIds() { this->instanceIds_ = nullptr;};
          inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
          inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
          inline EntityRules& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
          inline EntityRules& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


          // ipMatchRule Field Functions 
          bool hasIpMatchRule() const { return this->ipMatchRule_ != nullptr;};
          void deleteIpMatchRule() { this->ipMatchRule_ = nullptr;};
          inline const EntityRules::IpMatchRule & getIpMatchRule() const { DARABONBA_PTR_GET_CONST(ipMatchRule_, EntityRules::IpMatchRule) };
          inline EntityRules::IpMatchRule getIpMatchRule() { DARABONBA_PTR_GET(ipMatchRule_, EntityRules::IpMatchRule) };
          inline EntityRules& setIpMatchRule(const EntityRules::IpMatchRule & ipMatchRule) { DARABONBA_PTR_SET_VALUE(ipMatchRule_, ipMatchRule) };
          inline EntityRules& setIpMatchRule(EntityRules::IpMatchRule && ipMatchRule) { DARABONBA_PTR_SET_RVALUE(ipMatchRule_, ipMatchRule) };


          // labels Field Functions 
          bool hasLabels() const { return this->labels_ != nullptr;};
          void deleteLabels() { this->labels_ = nullptr;};
          inline const vector<EntityRules::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<EntityRules::Labels>) };
          inline vector<EntityRules::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<EntityRules::Labels>) };
          inline EntityRules& setLabels(const vector<EntityRules::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
          inline EntityRules& setLabels(vector<EntityRules::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


          // regionIds Field Functions 
          bool hasRegionIds() const { return this->regionIds_ != nullptr;};
          void deleteRegionIds() { this->regionIds_ = nullptr;};
          inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
          inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
          inline EntityRules& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
          inline EntityRules& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


          // resourceGroupId Field Functions 
          bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
          void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
          inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
          inline EntityRules& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const vector<EntityRules::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<EntityRules::Tags>) };
          inline vector<EntityRules::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<EntityRules::Tags>) };
          inline EntityRules& setTags(const vector<EntityRules::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline EntityRules& setTags(vector<EntityRules::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        protected:
          // Annotations
          shared_ptr<vector<EntityRules::Annotations>> annotations_ {};
          // List of entity types
          shared_ptr<vector<string>> entityTypes_ {};
          // Field rules
          shared_ptr<vector<EntityRules::FieldRules>> fieldRules_ {};
          // Instance IDs.
          shared_ptr<vector<string>> instanceIds_ {};
          // IP match rule
          shared_ptr<EntityRules::IpMatchRule> ipMatchRule_ {};
          // Labels
          shared_ptr<vector<EntityRules::Labels>> labels_ {};
          // List of region IDs.
          shared_ptr<vector<string>> regionIds_ {};
          // Resource group ID.
          shared_ptr<string> resourceGroupId_ {};
          // Instance tag information.
          shared_ptr<vector<EntityRules::Tags>> tags_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->entityGroupId_ == nullptr && this->entityGroupName_ == nullptr && this->entityRules_ == nullptr && this->query_ == nullptr && this->regionId_ == nullptr
        && this->userId_ == nullptr && this->workspace_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EntityGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // entityGroupId Field Functions 
        bool hasEntityGroupId() const { return this->entityGroupId_ != nullptr;};
        void deleteEntityGroupId() { this->entityGroupId_ = nullptr;};
        inline string getEntityGroupId() const { DARABONBA_PTR_GET_DEFAULT(entityGroupId_, "") };
        inline EntityGroup& setEntityGroupId(string entityGroupId) { DARABONBA_PTR_SET_VALUE(entityGroupId_, entityGroupId) };


        // entityGroupName Field Functions 
        bool hasEntityGroupName() const { return this->entityGroupName_ != nullptr;};
        void deleteEntityGroupName() { this->entityGroupName_ = nullptr;};
        inline string getEntityGroupName() const { DARABONBA_PTR_GET_DEFAULT(entityGroupName_, "") };
        inline EntityGroup& setEntityGroupName(string entityGroupName) { DARABONBA_PTR_SET_VALUE(entityGroupName_, entityGroupName) };


        // entityRules Field Functions 
        bool hasEntityRules() const { return this->entityRules_ != nullptr;};
        void deleteEntityRules() { this->entityRules_ = nullptr;};
        inline const EntityGroup::EntityRules & getEntityRules() const { DARABONBA_PTR_GET_CONST(entityRules_, EntityGroup::EntityRules) };
        inline EntityGroup::EntityRules getEntityRules() { DARABONBA_PTR_GET(entityRules_, EntityGroup::EntityRules) };
        inline EntityGroup& setEntityRules(const EntityGroup::EntityRules & entityRules) { DARABONBA_PTR_SET_VALUE(entityRules_, entityRules) };
        inline EntityGroup& setEntityRules(EntityGroup::EntityRules && entityRules) { DARABONBA_PTR_SET_RVALUE(entityRules_, entityRules) };


        // query Field Functions 
        bool hasQuery() const { return this->query_ != nullptr;};
        void deleteQuery() { this->query_ = nullptr;};
        inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
        inline EntityGroup& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EntityGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline EntityGroup& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // workspace Field Functions 
        bool hasWorkspace() const { return this->workspace_ != nullptr;};
        void deleteWorkspace() { this->workspace_ = nullptr;};
        inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
        inline EntityGroup& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


      protected:
        // Description.
        shared_ptr<string> description_ {};
        // Entity group ID
        shared_ptr<string> entityGroupId_ {};
        // Entity group name
        shared_ptr<string> entityGroupName_ {};
        // Entity group
        shared_ptr<EntityGroup::EntityRules> entityRules_ {};
        // Search keywords, supporting document library name and description
        shared_ptr<string> query_ {};
        // Region ID.
        shared_ptr<string> regionId_ {};
        // User ID
        shared_ptr<string> userId_ {};
        // Workspace.
        shared_ptr<string> workspace_ {};
      };

      class BindResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BindResource& obj) { 
          DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
          DARABONBA_PTR_TO_JSON(vpcCidr, vpcCidr_);
          DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, BindResource& obj) { 
          DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
          DARABONBA_PTR_FROM_JSON(vpcCidr, vpcCidr_);
          DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        };
        BindResource() = default ;
        BindResource(const BindResource &) = default ;
        BindResource(BindResource &&) = default ;
        BindResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BindResource() = default ;
        BindResource& operator=(const BindResource &) = default ;
        BindResource& operator=(BindResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterType_ == nullptr && this->vpcCidr_ == nullptr && this->vpcId_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline BindResource& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterType Field Functions 
        bool hasClusterType() const { return this->clusterType_ != nullptr;};
        void deleteClusterType() { this->clusterType_ = nullptr;};
        inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
        inline BindResource& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


        // vpcCidr Field Functions 
        bool hasVpcCidr() const { return this->vpcCidr_ != nullptr;};
        void deleteVpcCidr() { this->vpcCidr_ = nullptr;};
        inline string getVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(vpcCidr_, "") };
        inline BindResource& setVpcCidr(string vpcCidr) { DARABONBA_PTR_SET_VALUE(vpcCidr_, vpcCidr) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline BindResource& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // Cluster ID.
        shared_ptr<string> clusterId_ {};
        // Cluster type.
        shared_ptr<string> clusterType_ {};
        // VPC CIDR
        shared_ptr<string> vpcCidr_ {};
        // Virtual Private Cloud (VPC).
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->bindResource_ == nullptr
        && this->csUmodelStatus_ == nullptr && this->entityGroup_ == nullptr && this->feePackage_ == nullptr && this->managedInfo_ == nullptr && this->policyId_ == nullptr
        && this->policyName_ == nullptr && this->policyType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->subAddonRelease_ == nullptr
        && this->tags_ == nullptr && this->userId_ == nullptr && this->workspace_ == nullptr; };
      // bindResource Field Functions 
      bool hasBindResource() const { return this->bindResource_ != nullptr;};
      void deleteBindResource() { this->bindResource_ = nullptr;};
      inline const Policies::BindResource & getBindResource() const { DARABONBA_PTR_GET_CONST(bindResource_, Policies::BindResource) };
      inline Policies::BindResource getBindResource() { DARABONBA_PTR_GET(bindResource_, Policies::BindResource) };
      inline Policies& setBindResource(const Policies::BindResource & bindResource) { DARABONBA_PTR_SET_VALUE(bindResource_, bindResource) };
      inline Policies& setBindResource(Policies::BindResource && bindResource) { DARABONBA_PTR_SET_RVALUE(bindResource_, bindResource) };


      // csUmodelStatus Field Functions 
      bool hasCsUmodelStatus() const { return this->csUmodelStatus_ != nullptr;};
      void deleteCsUmodelStatus() { this->csUmodelStatus_ = nullptr;};
      inline bool getCsUmodelStatus() const { DARABONBA_PTR_GET_DEFAULT(csUmodelStatus_, false) };
      inline Policies& setCsUmodelStatus(bool csUmodelStatus) { DARABONBA_PTR_SET_VALUE(csUmodelStatus_, csUmodelStatus) };


      // entityGroup Field Functions 
      bool hasEntityGroup() const { return this->entityGroup_ != nullptr;};
      void deleteEntityGroup() { this->entityGroup_ = nullptr;};
      inline const Policies::EntityGroup & getEntityGroup() const { DARABONBA_PTR_GET_CONST(entityGroup_, Policies::EntityGroup) };
      inline Policies::EntityGroup getEntityGroup() { DARABONBA_PTR_GET(entityGroup_, Policies::EntityGroup) };
      inline Policies& setEntityGroup(const Policies::EntityGroup & entityGroup) { DARABONBA_PTR_SET_VALUE(entityGroup_, entityGroup) };
      inline Policies& setEntityGroup(Policies::EntityGroup && entityGroup) { DARABONBA_PTR_SET_RVALUE(entityGroup_, entityGroup) };


      // feePackage Field Functions 
      bool hasFeePackage() const { return this->feePackage_ != nullptr;};
      void deleteFeePackage() { this->feePackage_ = nullptr;};
      inline string getFeePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
      inline Policies& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


      // managedInfo Field Functions 
      bool hasManagedInfo() const { return this->managedInfo_ != nullptr;};
      void deleteManagedInfo() { this->managedInfo_ = nullptr;};
      inline const Policies::ManagedInfo & getManagedInfo() const { DARABONBA_PTR_GET_CONST(managedInfo_, Policies::ManagedInfo) };
      inline Policies::ManagedInfo getManagedInfo() { DARABONBA_PTR_GET(managedInfo_, Policies::ManagedInfo) };
      inline Policies& setManagedInfo(const Policies::ManagedInfo & managedInfo) { DARABONBA_PTR_SET_VALUE(managedInfo_, managedInfo) };
      inline Policies& setManagedInfo(Policies::ManagedInfo && managedInfo) { DARABONBA_PTR_SET_RVALUE(managedInfo_, managedInfo) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Policies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Policies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Policies& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Policies& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // subAddonRelease Field Functions 
      bool hasSubAddonRelease() const { return this->subAddonRelease_ != nullptr;};
      void deleteSubAddonRelease() { this->subAddonRelease_ = nullptr;};
      inline const Policies::SubAddonRelease & getSubAddonRelease() const { DARABONBA_PTR_GET_CONST(subAddonRelease_, Policies::SubAddonRelease) };
      inline Policies::SubAddonRelease getSubAddonRelease() { DARABONBA_PTR_GET(subAddonRelease_, Policies::SubAddonRelease) };
      inline Policies& setSubAddonRelease(const Policies::SubAddonRelease & subAddonRelease) { DARABONBA_PTR_SET_VALUE(subAddonRelease_, subAddonRelease) };
      inline Policies& setSubAddonRelease(Policies::SubAddonRelease && subAddonRelease) { DARABONBA_PTR_SET_RVALUE(subAddonRelease_, subAddonRelease) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Policies::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Policies::Tags>) };
      inline vector<Policies::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Policies::Tags>) };
      inline Policies& setTags(const vector<Policies::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Policies& setTags(vector<Policies::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Policies& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Policies& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Bound resource information
      shared_ptr<Policies::BindResource> bindResource_ {};
      // Container environment umodel installation status.
      shared_ptr<bool> csUmodelStatus_ {};
      // Entity group
      shared_ptr<Policies::EntityGroup> entityGroup_ {};
      // Billing type.
      shared_ptr<string> feePackage_ {};
      // Policy network management information.
      shared_ptr<Policies::ManagedInfo> managedInfo_ {};
      // Policy ID.
      shared_ptr<string> policyId_ {};
      // Rule name.
      shared_ptr<string> policyName_ {};
      // Access center policy type
      shared_ptr<string> policyType_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // Resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // Number of sub-releases
      shared_ptr<Policies::SubAddonRelease> subAddonRelease_ {};
      // Resource tag key values.
      shared_ptr<vector<Policies::Tags>> tags_ {};
      // User ID
      shared_ptr<string> userId_ {};
      // Workspace.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->policies_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIntegrationPoliciesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIntegrationPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<ListIntegrationPoliciesResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<ListIntegrationPoliciesResponseBody::Policies>) };
    inline vector<ListIntegrationPoliciesResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<ListIntegrationPoliciesResponseBody::Policies>) };
    inline ListIntegrationPoliciesResponseBody& setPolicies(const vector<ListIntegrationPoliciesResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListIntegrationPoliciesResponseBody& setPolicies(vector<ListIntegrationPoliciesResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListIntegrationPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Page size
    // Default value:
    // 	50
    // Maximum value:
    // 	50
    shared_ptr<int32_t> maxResults_ {};
    // Pagination token
    shared_ptr<string> nextToken_ {};
    // Access policy list
    shared_ptr<vector<ListIntegrationPoliciesResponseBody::Policies>> policies_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Total number of entries
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
