// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODY_HPP_
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
  class GetIntegrationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetIntegrationPolicyResponseBody() = default ;
    GetIntegrationPolicyResponseBody(const GetIntegrationPolicyResponseBody &) = default ;
    GetIntegrationPolicyResponseBody(GetIntegrationPolicyResponseBody &&) = default ;
    GetIntegrationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationPolicyResponseBody() = default ;
    GetIntegrationPolicyResponseBody& operator=(const GetIntegrationPolicyResponseBody &) = default ;
    GetIntegrationPolicyResponseBody& operator=(GetIntegrationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(bindResource, bindResource_);
        DARABONBA_PTR_TO_JSON(csUmodelStatus, csUmodelStatus_);
        DARABONBA_PTR_TO_JSON(entityGroup, entityGroup_);
        DARABONBA_PTR_TO_JSON(managedInfo, managedInfo_);
        DARABONBA_PTR_TO_JSON(policyId, policyId_);
        DARABONBA_PTR_TO_JSON(policyName, policyName_);
        DARABONBA_PTR_TO_JSON(policyType, policyType_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(bindResource, bindResource_);
        DARABONBA_PTR_FROM_JSON(csUmodelStatus, csUmodelStatus_);
        DARABONBA_PTR_FROM_JSON(entityGroup, entityGroup_);
        DARABONBA_PTR_FROM_JSON(managedInfo, managedInfo_);
        DARABONBA_PTR_FROM_JSON(policyId, policyId_);
        DARABONBA_PTR_FROM_JSON(policyName, policyName_);
        DARABONBA_PTR_FROM_JSON(policyType, policyType_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Policy() = default ;
      Policy(const Policy &) = default ;
      Policy(Policy &&) = default ;
      Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policy() = default ;
      Policy& operator=(const Policy &) = default ;
      Policy& operator=(Policy &&) = default ;
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
        // Tag key.
        shared_ptr<string> key_ {};
        // Tag value.
        shared_ptr<string> value_ {};
      };

      class ManagedInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagedInfo& obj) { 
          DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
        };
        friend void from_json(const Darabonba::Json& j, ManagedInfo& obj) { 
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
        virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->vswitchId_ == nullptr; };
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
        // Security group ID.
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
            // The operation to be performed.
            shared_ptr<string> op_ {};
            // The tag key of the instance.
            shared_ptr<string> tagKey_ {};
            // List of tag values.
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
            // The operation to be performed.
            shared_ptr<string> op_ {};
            // The tag key of the instance.
            shared_ptr<string> tagKey_ {};
            // List of tag values.
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
            // IP segment.
            shared_ptr<string> ipCidr_ {};
            // Key for the IP field.
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
            // Field content.
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
            // Tag values.
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
          // Annotations.
          shared_ptr<vector<EntityRules::Annotations>> annotations_ {};
          // List of entity types.
          shared_ptr<vector<string>> entityTypes_ {};
          // List of field rules.
          shared_ptr<vector<EntityRules::FieldRules>> fieldRules_ {};
          // Instance ID.
          shared_ptr<vector<string>> instanceIds_ {};
          // IP matching rule.
          shared_ptr<EntityRules::IpMatchRule> ipMatchRule_ {};
          // Labels.
          shared_ptr<vector<EntityRules::Labels>> labels_ {};
          // List of region IDs.
          shared_ptr<vector<string>> regionIds_ {};
          // Resource group ID.
          shared_ptr<string> resourceGroupId_ {};
          // Tag values.
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
        // Entity group ID.
        shared_ptr<string> entityGroupId_ {};
        // Entity group name.
        shared_ptr<string> entityGroupName_ {};
        // Entity rules.
        shared_ptr<EntityGroup::EntityRules> entityRules_ {};
        // For querying
        shared_ptr<string> query_ {};
        // Region ID.
        shared_ptr<string> regionId_ {};
        // User ID.
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
        // VPC CIDR.
        shared_ptr<string> vpcCidr_ {};
        // VPC ID.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->bindResource_ == nullptr
        && this->csUmodelStatus_ == nullptr && this->entityGroup_ == nullptr && this->managedInfo_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr
        && this->policyType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr
        && this->workspace_ == nullptr; };
      // bindResource Field Functions 
      bool hasBindResource() const { return this->bindResource_ != nullptr;};
      void deleteBindResource() { this->bindResource_ = nullptr;};
      inline const Policy::BindResource & getBindResource() const { DARABONBA_PTR_GET_CONST(bindResource_, Policy::BindResource) };
      inline Policy::BindResource getBindResource() { DARABONBA_PTR_GET(bindResource_, Policy::BindResource) };
      inline Policy& setBindResource(const Policy::BindResource & bindResource) { DARABONBA_PTR_SET_VALUE(bindResource_, bindResource) };
      inline Policy& setBindResource(Policy::BindResource && bindResource) { DARABONBA_PTR_SET_RVALUE(bindResource_, bindResource) };


      // csUmodelStatus Field Functions 
      bool hasCsUmodelStatus() const { return this->csUmodelStatus_ != nullptr;};
      void deleteCsUmodelStatus() { this->csUmodelStatus_ = nullptr;};
      inline bool getCsUmodelStatus() const { DARABONBA_PTR_GET_DEFAULT(csUmodelStatus_, false) };
      inline Policy& setCsUmodelStatus(bool csUmodelStatus) { DARABONBA_PTR_SET_VALUE(csUmodelStatus_, csUmodelStatus) };


      // entityGroup Field Functions 
      bool hasEntityGroup() const { return this->entityGroup_ != nullptr;};
      void deleteEntityGroup() { this->entityGroup_ = nullptr;};
      inline const Policy::EntityGroup & getEntityGroup() const { DARABONBA_PTR_GET_CONST(entityGroup_, Policy::EntityGroup) };
      inline Policy::EntityGroup getEntityGroup() { DARABONBA_PTR_GET(entityGroup_, Policy::EntityGroup) };
      inline Policy& setEntityGroup(const Policy::EntityGroup & entityGroup) { DARABONBA_PTR_SET_VALUE(entityGroup_, entityGroup) };
      inline Policy& setEntityGroup(Policy::EntityGroup && entityGroup) { DARABONBA_PTR_SET_RVALUE(entityGroup_, entityGroup) };


      // managedInfo Field Functions 
      bool hasManagedInfo() const { return this->managedInfo_ != nullptr;};
      void deleteManagedInfo() { this->managedInfo_ = nullptr;};
      inline const Policy::ManagedInfo & getManagedInfo() const { DARABONBA_PTR_GET_CONST(managedInfo_, Policy::ManagedInfo) };
      inline Policy::ManagedInfo getManagedInfo() { DARABONBA_PTR_GET(managedInfo_, Policy::ManagedInfo) };
      inline Policy& setManagedInfo(const Policy::ManagedInfo & managedInfo) { DARABONBA_PTR_SET_VALUE(managedInfo_, managedInfo) };
      inline Policy& setManagedInfo(Policy::ManagedInfo && managedInfo) { DARABONBA_PTR_SET_RVALUE(managedInfo_, managedInfo) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Policy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Policy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Policy& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Policy& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Policy::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Policy::Tags>) };
      inline vector<Policy::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Policy::Tags>) };
      inline Policy& setTags(const vector<Policy::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Policy& setTags(vector<Policy::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Policy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Policy& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Bound resource information.
      shared_ptr<Policy::BindResource> bindResource_ {};
      // Cs umodel status
      shared_ptr<bool> csUmodelStatus_ {};
      // Entity group.
      shared_ptr<Policy::EntityGroup> entityGroup_ {};
      // Policy management information.
      shared_ptr<Policy::ManagedInfo> managedInfo_ {};
      // Policy ID.
      shared_ptr<string> policyId_ {};
      // Rule name.
      shared_ptr<string> policyName_ {};
      // Access policy type.
      shared_ptr<string> policyType_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // Resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // Tag keys.
      shared_ptr<vector<Policy::Tags>> tags_ {};
      // User ID.
      shared_ptr<string> userId_ {};
      // Workspace.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->policy_ == nullptr
        && this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetIntegrationPolicyResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, GetIntegrationPolicyResponseBody::Policy) };
    inline GetIntegrationPolicyResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, GetIntegrationPolicyResponseBody::Policy) };
    inline GetIntegrationPolicyResponseBody& setPolicy(const GetIntegrationPolicyResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetIntegrationPolicyResponseBody& setPolicy(GetIntegrationPolicyResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIntegrationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Access policy.
    shared_ptr<GetIntegrationPolicyResponseBody::Policy> policy_ {};
    // ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
