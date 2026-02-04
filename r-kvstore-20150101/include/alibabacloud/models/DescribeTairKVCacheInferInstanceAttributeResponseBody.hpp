// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRKVCACHEINFERINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRKVCACHEINFERINSTANCEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeTairKVCacheInferInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairKVCacheInferInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairKVCacheInferInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTairKVCacheInferInstanceAttributeResponseBody() = default ;
    DescribeTairKVCacheInferInstanceAttributeResponseBody(const DescribeTairKVCacheInferInstanceAttributeResponseBody &) = default ;
    DescribeTairKVCacheInferInstanceAttributeResponseBody(DescribeTairKVCacheInferInstanceAttributeResponseBody &&) = default ;
    DescribeTairKVCacheInferInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairKVCacheInferInstanceAttributeResponseBody() = default ;
    DescribeTairKVCacheInferInstanceAttributeResponseBody& operator=(const DescribeTairKVCacheInferInstanceAttributeResponseBody &) = default ;
    DescribeTairKVCacheInferInstanceAttributeResponseBody& operator=(DescribeTairKVCacheInferInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceAttribute, DBInstanceAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceAttribute, DBInstanceAttribute_);
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
      class DBInstanceAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(ComputeUnitNum, computeUnitNum_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
          DARABONBA_PTR_TO_JSON(IsOrderCompleted, isOrderCompleted_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(ModelServiceNum, modelServiceNum_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReplicaNum, replicaNum_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Storage, storage_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(ComputeUnitNum, computeUnitNum_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
          DARABONBA_PTR_FROM_JSON(IsOrderCompleted, isOrderCompleted_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(ModelServiceNum, modelServiceNum_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReplicaNum, replicaNum_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Storage, storage_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
        };
        DBInstanceAttribute() = default ;
        DBInstanceAttribute(const DBInstanceAttribute &) = default ;
        DBInstanceAttribute(DBInstanceAttribute &&) = default ;
        DBInstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceAttribute() = default ;
        DBInstanceAttribute& operator=(const DBInstanceAttribute &) = default ;
        DBInstanceAttribute& operator=(DBInstanceAttribute &&) = default ;
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
            shared_ptr<string> key_ {};
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

        virtual bool empty() const override { return this->architectureType_ == nullptr
        && this->chargeType_ == nullptr && this->computeUnitNum_ == nullptr && this->connectionString_ == nullptr && this->createTime_ == nullptr && this->endTime_ == nullptr
        && this->instanceClass_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr
        && this->isDelete_ == nullptr && this->isOrderCompleted_ == nullptr && this->model_ == nullptr && this->modelServiceNum_ == nullptr && this->networkType_ == nullptr
        && this->privateIp_ == nullptr && this->regionId_ == nullptr && this->replicaNum_ == nullptr && this->resourceGroupId_ == nullptr && this->storage_ == nullptr
        && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr && this->zoneType_ == nullptr; };
        // architectureType Field Functions 
        bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
        void deleteArchitectureType() { this->architectureType_ = nullptr;};
        inline string getArchitectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
        inline DBInstanceAttribute& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline DBInstanceAttribute& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // computeUnitNum Field Functions 
        bool hasComputeUnitNum() const { return this->computeUnitNum_ != nullptr;};
        void deleteComputeUnitNum() { this->computeUnitNum_ = nullptr;};
        inline int32_t getComputeUnitNum() const { DARABONBA_PTR_GET_DEFAULT(computeUnitNum_, 0) };
        inline DBInstanceAttribute& setComputeUnitNum(int32_t computeUnitNum) { DARABONBA_PTR_SET_VALUE(computeUnitNum_, computeUnitNum) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline DBInstanceAttribute& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DBInstanceAttribute& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline DBInstanceAttribute& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // instanceClass Field Functions 
        bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
        void deleteInstanceClass() { this->instanceClass_ = nullptr;};
        inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
        inline DBInstanceAttribute& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline DBInstanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline DBInstanceAttribute& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
        inline DBInstanceAttribute& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline DBInstanceAttribute& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // isDelete Field Functions 
        bool hasIsDelete() const { return this->isDelete_ != nullptr;};
        void deleteIsDelete() { this->isDelete_ = nullptr;};
        inline int32_t getIsDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, 0) };
        inline DBInstanceAttribute& setIsDelete(int32_t isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


        // isOrderCompleted Field Functions 
        bool hasIsOrderCompleted() const { return this->isOrderCompleted_ != nullptr;};
        void deleteIsOrderCompleted() { this->isOrderCompleted_ = nullptr;};
        inline string getIsOrderCompleted() const { DARABONBA_PTR_GET_DEFAULT(isOrderCompleted_, "") };
        inline DBInstanceAttribute& setIsOrderCompleted(string isOrderCompleted) { DARABONBA_PTR_SET_VALUE(isOrderCompleted_, isOrderCompleted) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline DBInstanceAttribute& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // modelServiceNum Field Functions 
        bool hasModelServiceNum() const { return this->modelServiceNum_ != nullptr;};
        void deleteModelServiceNum() { this->modelServiceNum_ = nullptr;};
        inline int32_t getModelServiceNum() const { DARABONBA_PTR_GET_DEFAULT(modelServiceNum_, 0) };
        inline DBInstanceAttribute& setModelServiceNum(int32_t modelServiceNum) { DARABONBA_PTR_SET_VALUE(modelServiceNum_, modelServiceNum) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline DBInstanceAttribute& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // privateIp Field Functions 
        bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
        void deletePrivateIp() { this->privateIp_ = nullptr;};
        inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
        inline DBInstanceAttribute& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // replicaNum Field Functions 
        bool hasReplicaNum() const { return this->replicaNum_ != nullptr;};
        void deleteReplicaNum() { this->replicaNum_ = nullptr;};
        inline string getReplicaNum() const { DARABONBA_PTR_GET_DEFAULT(replicaNum_, "") };
        inline DBInstanceAttribute& setReplicaNum(string replicaNum) { DARABONBA_PTR_SET_VALUE(replicaNum_, replicaNum) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBInstanceAttribute& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // storage Field Functions 
        bool hasStorage() const { return this->storage_ != nullptr;};
        void deleteStorage() { this->storage_ = nullptr;};
        inline int64_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
        inline DBInstanceAttribute& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DBInstanceAttribute::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBInstanceAttribute::Tags) };
        inline DBInstanceAttribute::Tags getTags() { DARABONBA_PTR_GET(tags_, DBInstanceAttribute::Tags) };
        inline DBInstanceAttribute& setTags(const DBInstanceAttribute::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBInstanceAttribute& setTags(DBInstanceAttribute::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstanceAttribute& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DBInstanceAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBInstanceAttribute& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        // zoneType Field Functions 
        bool hasZoneType() const { return this->zoneType_ != nullptr;};
        void deleteZoneType() { this->zoneType_ = nullptr;};
        inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
        inline DBInstanceAttribute& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


      protected:
        shared_ptr<string> architectureType_ {};
        shared_ptr<string> chargeType_ {};
        shared_ptr<int32_t> computeUnitNum_ {};
        shared_ptr<string> connectionString_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> instanceClass_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> instanceStatus_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<int32_t> isDelete_ {};
        shared_ptr<string> isOrderCompleted_ {};
        shared_ptr<string> model_ {};
        shared_ptr<int32_t> modelServiceNum_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> privateIp_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> replicaNum_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<int64_t> storage_ {};
        shared_ptr<DBInstanceAttribute::Tags> tags_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> zoneId_ {};
        shared_ptr<string> zoneType_ {};
      };

      virtual bool empty() const override { return this->DBInstanceAttribute_ == nullptr; };
      // DBInstanceAttribute Field Functions 
      bool hasDBInstanceAttribute() const { return this->DBInstanceAttribute_ != nullptr;};
      void deleteDBInstanceAttribute() { this->DBInstanceAttribute_ = nullptr;};
      inline const vector<Instances::DBInstanceAttribute> & getDBInstanceAttribute() const { DARABONBA_PTR_GET_CONST(DBInstanceAttribute_, vector<Instances::DBInstanceAttribute>) };
      inline vector<Instances::DBInstanceAttribute> getDBInstanceAttribute() { DARABONBA_PTR_GET(DBInstanceAttribute_, vector<Instances::DBInstanceAttribute>) };
      inline Instances& setDBInstanceAttribute(const vector<Instances::DBInstanceAttribute> & dBInstanceAttribute) { DARABONBA_PTR_SET_VALUE(DBInstanceAttribute_, dBInstanceAttribute) };
      inline Instances& setDBInstanceAttribute(vector<Instances::DBInstanceAttribute> && dBInstanceAttribute) { DARABONBA_PTR_SET_RVALUE(DBInstanceAttribute_, dBInstanceAttribute) };


    protected:
      shared_ptr<vector<Instances::DBInstanceAttribute>> DBInstanceAttribute_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeTairKVCacheInferInstanceAttributeResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeTairKVCacheInferInstanceAttributeResponseBody::Instances) };
    inline DescribeTairKVCacheInferInstanceAttributeResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeTairKVCacheInferInstanceAttributeResponseBody::Instances) };
    inline DescribeTairKVCacheInferInstanceAttributeResponseBody& setInstances(const DescribeTairKVCacheInferInstanceAttributeResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeTairKVCacheInferInstanceAttributeResponseBody& setInstances(DescribeTairKVCacheInferInstanceAttributeResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTairKVCacheInferInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeTairKVCacheInferInstanceAttributeResponseBody::Instances> instances_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
