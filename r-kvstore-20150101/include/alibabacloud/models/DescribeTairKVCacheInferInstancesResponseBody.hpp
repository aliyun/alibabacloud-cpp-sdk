// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRKVCACHEINFERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRKVCACHEINFERINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeTairKVCacheInferInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairKVCacheInferInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairKVCacheInferInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTairKVCacheInferInstancesResponseBody() = default ;
    DescribeTairKVCacheInferInstancesResponseBody(const DescribeTairKVCacheInferInstancesResponseBody &) = default ;
    DescribeTairKVCacheInferInstancesResponseBody(DescribeTairKVCacheInferInstancesResponseBody &&) = default ;
    DescribeTairKVCacheInferInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairKVCacheInferInstancesResponseBody() = default ;
    DescribeTairKVCacheInferInstancesResponseBody& operator=(const DescribeTairKVCacheInferInstancesResponseBody &) = default ;
    DescribeTairKVCacheInferInstancesResponseBody& operator=(DescribeTairKVCacheInferInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(TairInferInstanceDTO, tairInferInstanceDTO_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(TairInferInstanceDTO, tairInferInstanceDTO_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TairInferInstanceDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TairInferInstanceDTO& obj) { 
          DARABONBA_PTR_TO_JSON(AckId, ackId_);
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(ComputeUnitNum, computeUnitNum_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_TO_JSON(ElasticVNodeCount, elasticVNodeCount_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(FixedVNodeCount, fixedVNodeCount_);
          DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(ModelServiceNum, modelServiceNum_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VNodeCount, VNodeCount_);
          DARABONBA_PTR_TO_JSON(VNodeName, VNodeName_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, TairInferInstanceDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(AckId, ackId_);
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(ComputeUnitNum, computeUnitNum_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_FROM_JSON(ElasticVNodeCount, elasticVNodeCount_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(FixedVNodeCount, fixedVNodeCount_);
          DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(ModelServiceNum, modelServiceNum_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VNodeCount, VNodeCount_);
          DARABONBA_PTR_FROM_JSON(VNodeName, VNodeName_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        TairInferInstanceDTO() = default ;
        TairInferInstanceDTO(const TairInferInstanceDTO &) = default ;
        TairInferInstanceDTO(TairInferInstanceDTO &&) = default ;
        TairInferInstanceDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TairInferInstanceDTO() = default ;
        TairInferInstanceDTO& operator=(const TairInferInstanceDTO &) = default ;
        TairInferInstanceDTO& operator=(TairInferInstanceDTO &&) = default ;
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
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
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

        virtual bool empty() const override { return this->ackId_ == nullptr
        && this->capacity_ == nullptr && this->chargeType_ == nullptr && this->computeUnitNum_ == nullptr && this->createTime_ == nullptr && this->destroyTime_ == nullptr
        && this->elasticVNodeCount_ == nullptr && this->endTime_ == nullptr && this->fixedVNodeCount_ == nullptr && this->instanceClass_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr && this->model_ == nullptr && this->modelServiceNum_ == nullptr
        && this->networkType_ == nullptr && this->privateIp_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr
        && this->VNodeCount_ == nullptr && this->VNodeName_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // ackId Field Functions 
        bool hasAckId() const { return this->ackId_ != nullptr;};
        void deleteAckId() { this->ackId_ = nullptr;};
        inline string getAckId() const { DARABONBA_PTR_GET_DEFAULT(ackId_, "") };
        inline TairInferInstanceDTO& setAckId(string ackId) { DARABONBA_PTR_SET_VALUE(ackId_, ackId) };


        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
        inline TairInferInstanceDTO& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline TairInferInstanceDTO& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // computeUnitNum Field Functions 
        bool hasComputeUnitNum() const { return this->computeUnitNum_ != nullptr;};
        void deleteComputeUnitNum() { this->computeUnitNum_ = nullptr;};
        inline int32_t getComputeUnitNum() const { DARABONBA_PTR_GET_DEFAULT(computeUnitNum_, 0) };
        inline TairInferInstanceDTO& setComputeUnitNum(int32_t computeUnitNum) { DARABONBA_PTR_SET_VALUE(computeUnitNum_, computeUnitNum) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline TairInferInstanceDTO& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // destroyTime Field Functions 
        bool hasDestroyTime() const { return this->destroyTime_ != nullptr;};
        void deleteDestroyTime() { this->destroyTime_ = nullptr;};
        inline string getDestroyTime() const { DARABONBA_PTR_GET_DEFAULT(destroyTime_, "") };
        inline TairInferInstanceDTO& setDestroyTime(string destroyTime) { DARABONBA_PTR_SET_VALUE(destroyTime_, destroyTime) };


        // elasticVNodeCount Field Functions 
        bool hasElasticVNodeCount() const { return this->elasticVNodeCount_ != nullptr;};
        void deleteElasticVNodeCount() { this->elasticVNodeCount_ = nullptr;};
        inline int32_t getElasticVNodeCount() const { DARABONBA_PTR_GET_DEFAULT(elasticVNodeCount_, 0) };
        inline TairInferInstanceDTO& setElasticVNodeCount(int32_t elasticVNodeCount) { DARABONBA_PTR_SET_VALUE(elasticVNodeCount_, elasticVNodeCount) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline TairInferInstanceDTO& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // fixedVNodeCount Field Functions 
        bool hasFixedVNodeCount() const { return this->fixedVNodeCount_ != nullptr;};
        void deleteFixedVNodeCount() { this->fixedVNodeCount_ = nullptr;};
        inline int32_t getFixedVNodeCount() const { DARABONBA_PTR_GET_DEFAULT(fixedVNodeCount_, 0) };
        inline TairInferInstanceDTO& setFixedVNodeCount(int32_t fixedVNodeCount) { DARABONBA_PTR_SET_VALUE(fixedVNodeCount_, fixedVNodeCount) };


        // instanceClass Field Functions 
        bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
        void deleteInstanceClass() { this->instanceClass_ = nullptr;};
        inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
        inline TairInferInstanceDTO& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline TairInferInstanceDTO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline TairInferInstanceDTO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
        inline TairInferInstanceDTO& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline TairInferInstanceDTO& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline TairInferInstanceDTO& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // modelServiceNum Field Functions 
        bool hasModelServiceNum() const { return this->modelServiceNum_ != nullptr;};
        void deleteModelServiceNum() { this->modelServiceNum_ = nullptr;};
        inline int32_t getModelServiceNum() const { DARABONBA_PTR_GET_DEFAULT(modelServiceNum_, 0) };
        inline TairInferInstanceDTO& setModelServiceNum(int32_t modelServiceNum) { DARABONBA_PTR_SET_VALUE(modelServiceNum_, modelServiceNum) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline TairInferInstanceDTO& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // privateIp Field Functions 
        bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
        void deletePrivateIp() { this->privateIp_ = nullptr;};
        inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
        inline TairInferInstanceDTO& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline TairInferInstanceDTO& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline TairInferInstanceDTO& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const TairInferInstanceDTO::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, TairInferInstanceDTO::Tags) };
        inline TairInferInstanceDTO::Tags getTags() { DARABONBA_PTR_GET(tags_, TairInferInstanceDTO::Tags) };
        inline TairInferInstanceDTO& setTags(const TairInferInstanceDTO::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline TairInferInstanceDTO& setTags(TairInferInstanceDTO::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // VNodeCount Field Functions 
        bool hasVNodeCount() const { return this->VNodeCount_ != nullptr;};
        void deleteVNodeCount() { this->VNodeCount_ = nullptr;};
        inline int32_t getVNodeCount() const { DARABONBA_PTR_GET_DEFAULT(VNodeCount_, 0) };
        inline TairInferInstanceDTO& setVNodeCount(int32_t VNodeCount) { DARABONBA_PTR_SET_VALUE(VNodeCount_, VNodeCount) };


        // VNodeName Field Functions 
        bool hasVNodeName() const { return this->VNodeName_ != nullptr;};
        void deleteVNodeName() { this->VNodeName_ = nullptr;};
        inline string getVNodeName() const { DARABONBA_PTR_GET_DEFAULT(VNodeName_, "") };
        inline TairInferInstanceDTO& setVNodeName(string VNodeName) { DARABONBA_PTR_SET_VALUE(VNodeName_, VNodeName) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline TairInferInstanceDTO& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline TairInferInstanceDTO& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline TairInferInstanceDTO& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The ACK cluster ID corresponding to the virtual cluster instance.
        shared_ptr<string> ackId_ {};
        // The capacity of the KVCache. Unit: GB.
        shared_ptr<int64_t> capacity_ {};
        // The billing method of the instance.
        shared_ptr<string> chargeType_ {};
        // The number of compute units.
        shared_ptr<int32_t> computeUnitNum_ {};
        // The creation time of the instance.
        shared_ptr<string> createTime_ {};
        // The time when the instance was deleted.
        shared_ptr<string> destroyTime_ {};
        shared_ptr<int32_t> elasticVNodeCount_ {};
        // The time when the subscription instance expires.
        shared_ptr<string> endTime_ {};
        shared_ptr<int32_t> fixedVNodeCount_ {};
        // The instance type.
        shared_ptr<string> instanceClass_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
        // The instance state. Valid values:
        // 
        // *   **Normal**: The instance is normal.
        // *   **Creating**: The instance is being created.
        shared_ptr<string> instanceStatus_ {};
        // The type of the instance. Valid values:
        // 
        // *   **TairInfer**: the inference operator instance
        // *   **TairKVCacheVnode**: the virtual cluster instance.
        // *   **TairKVCacheService**: the cache service instance.
        shared_ptr<string> instanceType_ {};
        // The built-in model of the inference operator instance.
        shared_ptr<string> model_ {};
        // The number of model services of the inference operator instance.
        shared_ptr<int32_t> modelServiceNum_ {};
        // The network type of the instance.
        shared_ptr<string> networkType_ {};
        // The private IP address of the instance. This parameter is deprecated.
        shared_ptr<string> privateIp_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // Details of the tags.
        shared_ptr<TairInferInstanceDTO::Tags> tags_ {};
        // The number of vNodes in the virtual cluster.
        shared_ptr<int32_t> VNodeCount_ {};
        // The list of vNode instance names under the virtual cluster instance. This parameter is deprecated.
        shared_ptr<string> VNodeName_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The VPC ID of the instance.
        shared_ptr<string> vpcId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->tairInferInstanceDTO_ == nullptr; };
      // tairInferInstanceDTO Field Functions 
      bool hasTairInferInstanceDTO() const { return this->tairInferInstanceDTO_ != nullptr;};
      void deleteTairInferInstanceDTO() { this->tairInferInstanceDTO_ = nullptr;};
      inline const vector<Instances::TairInferInstanceDTO> & getTairInferInstanceDTO() const { DARABONBA_PTR_GET_CONST(tairInferInstanceDTO_, vector<Instances::TairInferInstanceDTO>) };
      inline vector<Instances::TairInferInstanceDTO> getTairInferInstanceDTO() { DARABONBA_PTR_GET(tairInferInstanceDTO_, vector<Instances::TairInferInstanceDTO>) };
      inline Instances& setTairInferInstanceDTO(const vector<Instances::TairInferInstanceDTO> & tairInferInstanceDTO) { DARABONBA_PTR_SET_VALUE(tairInferInstanceDTO_, tairInferInstanceDTO) };
      inline Instances& setTairInferInstanceDTO(vector<Instances::TairInferInstanceDTO> && tairInferInstanceDTO) { DARABONBA_PTR_SET_RVALUE(tairInferInstanceDTO_, tairInferInstanceDTO) };


    protected:
      shared_ptr<vector<Instances::TairInferInstanceDTO>> tairInferInstanceDTO_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeTairKVCacheInferInstancesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeTairKVCacheInferInstancesResponseBody::Instances) };
    inline DescribeTairKVCacheInferInstancesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeTairKVCacheInferInstancesResponseBody::Instances) };
    inline DescribeTairKVCacheInferInstancesResponseBody& setInstances(const DescribeTairKVCacheInferInstancesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeTairKVCacheInferInstancesResponseBody& setInstances(DescribeTairKVCacheInferInstancesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTairKVCacheInferInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTairKVCacheInferInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTairKVCacheInferInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTairKVCacheInferInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the returned Tair (Redis OSS-compatible) KVCache instance.
    shared_ptr<DescribeTairKVCacheInferInstancesResponseBody::Instances> instances_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
