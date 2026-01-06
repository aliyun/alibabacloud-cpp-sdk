// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCDeploymentSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCDeploymentSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCDeploymentSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRCDeploymentSetsResponseBody() = default ;
    DescribeRCDeploymentSetsResponseBody(const DescribeRCDeploymentSetsResponseBody &) = default ;
    DescribeRCDeploymentSetsResponseBody(DescribeRCDeploymentSetsResponseBody &&) = default ;
    DescribeRCDeploymentSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCDeploymentSetsResponseBody() = default ;
    DescribeRCDeploymentSetsResponseBody& operator=(const DescribeRCDeploymentSetsResponseBody &) = default ;
    DescribeRCDeploymentSetsResponseBody& operator=(DescribeRCDeploymentSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeploymentSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeploymentSets& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentSet, deploymentSet_);
      };
      friend void from_json(const Darabonba::Json& j, DeploymentSets& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentSet, deploymentSet_);
      };
      DeploymentSets() = default ;
      DeploymentSets(const DeploymentSets &) = default ;
      DeploymentSets(DeploymentSets &&) = default ;
      DeploymentSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeploymentSets() = default ;
      DeploymentSets& operator=(const DeploymentSets &) = default ;
      DeploymentSets& operator=(DeploymentSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeploymentSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentSet& obj) { 
          DARABONBA_PTR_TO_JSON(Capacities, capacities_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DeploymentSetDescription, deploymentSetDescription_);
          DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
          DARABONBA_PTR_TO_JSON(DeploymentSetName, deploymentSetName_);
          DARABONBA_PTR_TO_JSON(DeploymentStrategy, deploymentStrategy_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Granularity, granularity_);
          DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
          DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, DeploymentSet& obj) { 
          DARABONBA_PTR_FROM_JSON(Capacities, capacities_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DeploymentSetDescription, deploymentSetDescription_);
          DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
          DARABONBA_PTR_FROM_JSON(DeploymentSetName, deploymentSetName_);
          DARABONBA_PTR_FROM_JSON(DeploymentStrategy, deploymentStrategy_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
          DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
          DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        DeploymentSet() = default ;
        DeploymentSet(const DeploymentSet &) = default ;
        DeploymentSet(DeploymentSet &&) = default ;
        DeploymentSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeploymentSet() = default ;
        DeploymentSet& operator=(const DeploymentSet &) = default ;
        DeploymentSet& operator=(DeploymentSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
            virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
            // resourceId Field Functions 
            bool hasResourceId() const { return this->resourceId_ != nullptr;};
            void deleteResourceId() { this->resourceId_ = nullptr;};
            inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
            inline Tag& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


            // resourceType Field Functions 
            bool hasResourceType() const { return this->resourceType_ != nullptr;};
            void deleteResourceType() { this->resourceType_ = nullptr;};
            inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
            inline Tag& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            shared_ptr<string> resourceId_ {};
            shared_ptr<string> resourceType_ {};
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class InstanceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceIds& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          };
          InstanceIds() = default ;
          InstanceIds(const InstanceIds &) = default ;
          InstanceIds(InstanceIds &&) = default ;
          InstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceIds() = default ;
          InstanceIds& operator=(const InstanceIds &) = default ;
          InstanceIds& operator=(InstanceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceId_ == nullptr; };
          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
          inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
          inline InstanceIds& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
          inline InstanceIds& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


        protected:
          shared_ptr<vector<string>> instanceId_ {};
        };

        class Capacities : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Capacities& obj) { 
            DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          };
          friend void from_json(const Darabonba::Json& j, Capacities& obj) { 
            DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          };
          Capacities() = default ;
          Capacities(const Capacities &) = default ;
          Capacities(Capacities &&) = default ;
          Capacities(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Capacities() = default ;
          Capacities& operator=(const Capacities &) = default ;
          Capacities& operator=(Capacities &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Capacity : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Capacity& obj) { 
              DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
              DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
              DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, Capacity& obj) { 
              DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
              DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
              DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
            };
            Capacity() = default ;
            Capacity(const Capacity &) = default ;
            Capacity(Capacity &&) = default ;
            Capacity(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Capacity() = default ;
            Capacity& operator=(const Capacity &) = default ;
            Capacity& operator=(Capacity &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->availableAmount_ == nullptr
        && this->usedAmount_ == nullptr && this->zoneId_ == nullptr; };
            // availableAmount Field Functions 
            bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
            void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
            inline int32_t getAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, 0) };
            inline Capacity& setAvailableAmount(int32_t availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


            // usedAmount Field Functions 
            bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
            void deleteUsedAmount() { this->usedAmount_ = nullptr;};
            inline int32_t getUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
            inline Capacity& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline Capacity& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // The number of RDS Custom instances that reside in the zone and can be added to the deployment set.
            shared_ptr<int32_t> availableAmount_ {};
            // The number of RDS Custom instances that reside in the zone in the deployment set.
            shared_ptr<int32_t> usedAmount_ {};
            // The zone ID. Only the IDs of the zones to which the existing RDS Custom instances in the deployment set belong are returned.
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->capacity_ == nullptr; };
          // capacity Field Functions 
          bool hasCapacity() const { return this->capacity_ != nullptr;};
          void deleteCapacity() { this->capacity_ = nullptr;};
          inline const vector<Capacities::Capacity> & getCapacity() const { DARABONBA_PTR_GET_CONST(capacity_, vector<Capacities::Capacity>) };
          inline vector<Capacities::Capacity> getCapacity() { DARABONBA_PTR_GET(capacity_, vector<Capacities::Capacity>) };
          inline Capacities& setCapacity(const vector<Capacities::Capacity> & capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };
          inline Capacities& setCapacity(vector<Capacities::Capacity> && capacity) { DARABONBA_PTR_SET_RVALUE(capacity_, capacity) };


        protected:
          shared_ptr<vector<Capacities::Capacity>> capacity_ {};
        };

        virtual bool empty() const override { return this->capacities_ == nullptr
        && this->createTime_ == nullptr && this->deploymentSetDescription_ == nullptr && this->deploymentSetId_ == nullptr && this->deploymentSetName_ == nullptr && this->deploymentStrategy_ == nullptr
        && this->domain_ == nullptr && this->granularity_ == nullptr && this->groupCount_ == nullptr && this->instanceAmount_ == nullptr && this->instanceIds_ == nullptr
        && this->strategy_ == nullptr && this->tags_ == nullptr; };
        // capacities Field Functions 
        bool hasCapacities() const { return this->capacities_ != nullptr;};
        void deleteCapacities() { this->capacities_ = nullptr;};
        inline const DeploymentSet::Capacities & getCapacities() const { DARABONBA_PTR_GET_CONST(capacities_, DeploymentSet::Capacities) };
        inline DeploymentSet::Capacities getCapacities() { DARABONBA_PTR_GET(capacities_, DeploymentSet::Capacities) };
        inline DeploymentSet& setCapacities(const DeploymentSet::Capacities & capacities) { DARABONBA_PTR_SET_VALUE(capacities_, capacities) };
        inline DeploymentSet& setCapacities(DeploymentSet::Capacities && capacities) { DARABONBA_PTR_SET_RVALUE(capacities_, capacities) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DeploymentSet& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // deploymentSetDescription Field Functions 
        bool hasDeploymentSetDescription() const { return this->deploymentSetDescription_ != nullptr;};
        void deleteDeploymentSetDescription() { this->deploymentSetDescription_ = nullptr;};
        inline string getDeploymentSetDescription() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetDescription_, "") };
        inline DeploymentSet& setDeploymentSetDescription(string deploymentSetDescription) { DARABONBA_PTR_SET_VALUE(deploymentSetDescription_, deploymentSetDescription) };


        // deploymentSetId Field Functions 
        bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
        void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
        inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
        inline DeploymentSet& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


        // deploymentSetName Field Functions 
        bool hasDeploymentSetName() const { return this->deploymentSetName_ != nullptr;};
        void deleteDeploymentSetName() { this->deploymentSetName_ = nullptr;};
        inline string getDeploymentSetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetName_, "") };
        inline DeploymentSet& setDeploymentSetName(string deploymentSetName) { DARABONBA_PTR_SET_VALUE(deploymentSetName_, deploymentSetName) };


        // deploymentStrategy Field Functions 
        bool hasDeploymentStrategy() const { return this->deploymentStrategy_ != nullptr;};
        void deleteDeploymentStrategy() { this->deploymentStrategy_ = nullptr;};
        inline string getDeploymentStrategy() const { DARABONBA_PTR_GET_DEFAULT(deploymentStrategy_, "") };
        inline DeploymentSet& setDeploymentStrategy(string deploymentStrategy) { DARABONBA_PTR_SET_VALUE(deploymentStrategy_, deploymentStrategy) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DeploymentSet& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // granularity Field Functions 
        bool hasGranularity() const { return this->granularity_ != nullptr;};
        void deleteGranularity() { this->granularity_ = nullptr;};
        inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
        inline DeploymentSet& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


        // groupCount Field Functions 
        bool hasGroupCount() const { return this->groupCount_ != nullptr;};
        void deleteGroupCount() { this->groupCount_ = nullptr;};
        inline int32_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
        inline DeploymentSet& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


        // instanceAmount Field Functions 
        bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
        void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
        inline int32_t getInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
        inline DeploymentSet& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


        // instanceIds Field Functions 
        bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
        void deleteInstanceIds() { this->instanceIds_ = nullptr;};
        inline const DeploymentSet::InstanceIds & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, DeploymentSet::InstanceIds) };
        inline DeploymentSet::InstanceIds getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, DeploymentSet::InstanceIds) };
        inline DeploymentSet& setInstanceIds(const DeploymentSet::InstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
        inline DeploymentSet& setInstanceIds(DeploymentSet::InstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
        inline DeploymentSet& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DeploymentSet::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DeploymentSet::Tags) };
        inline DeploymentSet::Tags getTags() { DARABONBA_PTR_GET(tags_, DeploymentSet::Tags) };
        inline DeploymentSet& setTags(const DeploymentSet::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DeploymentSet& setTags(DeploymentSet::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The details of the capacities of the deployment set. This parameter is valid only when the deployment set contains existing RDS Custom instances. The value contains the details of the capacities of the deployment set in different zones.
        shared_ptr<DeploymentSet::Capacities> capacities_ {};
        // The time when the deployment set was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The deployment set description.
        shared_ptr<string> deploymentSetDescription_ {};
        // The deployment set ID.
        shared_ptr<string> deploymentSetId_ {};
        // The deployment set name.
        shared_ptr<string> deploymentSetName_ {};
        // The deployment strategy. The return value of this parameter is the value of the `Strategy` request parameter.
        shared_ptr<string> deploymentStrategy_ {};
        // The deployment domain.
        shared_ptr<string> domain_ {};
        // The deployment granularity.
        shared_ptr<string> granularity_ {};
        // The number of groups in the deployment set.
        // 
        // >  This parameter is valid only when the Strategy request parameter is set to AvailabilityGroup.
        shared_ptr<int32_t> groupCount_ {};
        // The number of RDS Custom instances in the deployment set.
        shared_ptr<int32_t> instanceAmount_ {};
        // The ID of the RDS Custom instance in the deployment set.
        shared_ptr<DeploymentSet::InstanceIds> instanceIds_ {};
        // The deployment strategy.
        shared_ptr<string> strategy_ {};
        shared_ptr<DeploymentSet::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->deploymentSet_ == nullptr; };
      // deploymentSet Field Functions 
      bool hasDeploymentSet() const { return this->deploymentSet_ != nullptr;};
      void deleteDeploymentSet() { this->deploymentSet_ = nullptr;};
      inline const vector<DeploymentSets::DeploymentSet> & getDeploymentSet() const { DARABONBA_PTR_GET_CONST(deploymentSet_, vector<DeploymentSets::DeploymentSet>) };
      inline vector<DeploymentSets::DeploymentSet> getDeploymentSet() { DARABONBA_PTR_GET(deploymentSet_, vector<DeploymentSets::DeploymentSet>) };
      inline DeploymentSets& setDeploymentSet(const vector<DeploymentSets::DeploymentSet> & deploymentSet) { DARABONBA_PTR_SET_VALUE(deploymentSet_, deploymentSet) };
      inline DeploymentSets& setDeploymentSet(vector<DeploymentSets::DeploymentSet> && deploymentSet) { DARABONBA_PTR_SET_RVALUE(deploymentSet_, deploymentSet) };


    protected:
      shared_ptr<vector<DeploymentSets::DeploymentSet>> deploymentSet_ {};
    };

    virtual bool empty() const override { return this->deploymentSets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deploymentSets Field Functions 
    bool hasDeploymentSets() const { return this->deploymentSets_ != nullptr;};
    void deleteDeploymentSets() { this->deploymentSets_ = nullptr;};
    inline const DescribeRCDeploymentSetsResponseBody::DeploymentSets & getDeploymentSets() const { DARABONBA_PTR_GET_CONST(deploymentSets_, DescribeRCDeploymentSetsResponseBody::DeploymentSets) };
    inline DescribeRCDeploymentSetsResponseBody::DeploymentSets getDeploymentSets() { DARABONBA_PTR_GET(deploymentSets_, DescribeRCDeploymentSetsResponseBody::DeploymentSets) };
    inline DescribeRCDeploymentSetsResponseBody& setDeploymentSets(const DescribeRCDeploymentSetsResponseBody::DeploymentSets & deploymentSets) { DARABONBA_PTR_SET_VALUE(deploymentSets_, deploymentSets) };
    inline DescribeRCDeploymentSetsResponseBody& setDeploymentSets(DescribeRCDeploymentSetsResponseBody::DeploymentSets && deploymentSets) { DARABONBA_PTR_SET_RVALUE(deploymentSets_, deploymentSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRCDeploymentSetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRCDeploymentSetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCDeploymentSetsResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCDeploymentSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRCDeploymentSetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the deployment set.
    shared_ptr<DescribeRCDeploymentSetsResponseBody::DeploymentSets> deploymentSets_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
