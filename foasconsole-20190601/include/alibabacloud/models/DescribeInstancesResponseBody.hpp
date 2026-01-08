// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody(DescribeInstancesResponseBody &&) = default ;
    DescribeInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody& operator=(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody& operator=(DescribeInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_TO_JSON(AskClusterId, askClusterId_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
        DARABONBA_PTR_TO_JSON(Ha, ha_);
        DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpec_);
        DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIds_);
        DARABONBA_PTR_TO_JSON(HaZoneId, haZoneId_);
        DARABONBA_PTR_TO_JSON(HostAliases, hostAliases_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_TO_JSON(OrderState, orderState_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceCreateTime, resourceCreateTime_);
        DARABONBA_PTR_TO_JSON(ResourceExpiredTime, resourceExpiredTime_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_FROM_JSON(AskClusterId, askClusterId_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
        DARABONBA_PTR_FROM_JSON(Ha, ha_);
        DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpec_);
        DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIds_);
        DARABONBA_PTR_FROM_JSON(HaZoneId, haZoneId_);
        DARABONBA_PTR_FROM_JSON(HostAliases, hostAliases_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_FROM_JSON(OrderState, orderState_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceCreateTime, resourceCreateTime_);
        DARABONBA_PTR_FROM_JSON(ResourceExpiredTime, resourceExpiredTime_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class Storage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Storage& obj) { 
          DARABONBA_PTR_TO_JSON(Oss, oss_);
        };
        friend void from_json(const Darabonba::Json& j, Storage& obj) { 
          DARABONBA_PTR_FROM_JSON(Oss, oss_);
        };
        Storage() = default ;
        Storage(const Storage &) = default ;
        Storage(Storage &&) = default ;
        Storage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Storage() = default ;
        Storage& operator=(const Storage &) = default ;
        Storage& operator=(Storage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Oss : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Oss& obj) { 
            DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          };
          friend void from_json(const Darabonba::Json& j, Oss& obj) { 
            DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          };
          Oss() = default ;
          Oss(const Oss &) = default ;
          Oss(Oss &&) = default ;
          Oss(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Oss() = default ;
          Oss& operator=(const Oss &) = default ;
          Oss& operator=(Oss &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucket_ == nullptr; };
          // bucket Field Functions 
          bool hasBucket() const { return this->bucket_ != nullptr;};
          void deleteBucket() { this->bucket_ = nullptr;};
          inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
          inline Oss& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        protected:
          shared_ptr<string> bucket_ {};
        };

        virtual bool empty() const override { return this->oss_ == nullptr; };
        // oss Field Functions 
        bool hasOss() const { return this->oss_ != nullptr;};
        void deleteOss() { this->oss_ = nullptr;};
        inline const Storage::Oss & getOss() const { DARABONBA_PTR_GET_CONST(oss_, Storage::Oss) };
        inline Storage::Oss getOss() { DARABONBA_PTR_GET(oss_, Storage::Oss) };
        inline Storage& setOss(const Storage::Oss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
        inline Storage& setOss(Storage::Oss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


      protected:
        shared_ptr<Storage::Oss> oss_ {};
      };

      class ResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        ResourceSpec() = default ;
        ResourceSpec(const ResourceSpec &) = default ;
        ResourceSpec(ResourceSpec &&) = default ;
        ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceSpec() = default ;
        ResourceSpec& operator=(const ResourceSpec &) = default ;
        ResourceSpec& operator=(ResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memoryGB_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline ResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline ResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int32_t> memoryGB_ {};
      };

      class HostAliases : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HostAliases& obj) { 
          DARABONBA_PTR_TO_JSON(HostNames, hostNames_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
        };
        friend void from_json(const Darabonba::Json& j, HostAliases& obj) { 
          DARABONBA_PTR_FROM_JSON(HostNames, hostNames_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
        };
        HostAliases() = default ;
        HostAliases(const HostAliases &) = default ;
        HostAliases(HostAliases &&) = default ;
        HostAliases(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HostAliases() = default ;
        HostAliases& operator=(const HostAliases &) = default ;
        HostAliases& operator=(HostAliases &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hostNames_ == nullptr
        && this->ip_ == nullptr; };
        // hostNames Field Functions 
        bool hasHostNames() const { return this->hostNames_ != nullptr;};
        void deleteHostNames() { this->hostNames_ = nullptr;};
        inline const vector<string> & getHostNames() const { DARABONBA_PTR_GET_CONST(hostNames_, vector<string>) };
        inline vector<string> getHostNames() { DARABONBA_PTR_GET(hostNames_, vector<string>) };
        inline HostAliases& setHostNames(const vector<string> & hostNames) { DARABONBA_PTR_SET_VALUE(hostNames_, hostNames) };
        inline HostAliases& setHostNames(vector<string> && hostNames) { DARABONBA_PTR_SET_RVALUE(hostNames_, hostNames) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline HostAliases& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      protected:
        // This parameter is required.
        shared_ptr<vector<string>> hostNames_ {};
        // This parameter is required.
        shared_ptr<string> ip_ {};
      };

      class HaResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HaResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, HaResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        HaResourceSpec() = default ;
        HaResourceSpec(const HaResourceSpec &) = default ;
        HaResourceSpec(HaResourceSpec &&) = default ;
        HaResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HaResourceSpec() = default ;
        HaResourceSpec& operator=(const HaResourceSpec &) = default ;
        HaResourceSpec& operator=(HaResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memoryGB_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline HaResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline HaResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int32_t> memoryGB_ {};
      };

      virtual bool empty() const override { return this->architectureType_ == nullptr
        && this->askClusterId_ == nullptr && this->chargeType_ == nullptr && this->clusterStatus_ == nullptr && this->ha_ == nullptr && this->haResourceSpec_ == nullptr
        && this->haVSwitchIds_ == nullptr && this->haZoneId_ == nullptr && this->hostAliases_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->monitorType_ == nullptr && this->orderState_ == nullptr && this->region_ == nullptr && this->resourceCreateTime_ == nullptr && this->resourceExpiredTime_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceSpec_ == nullptr && this->storage_ == nullptr && this->tags_ == nullptr
        && this->uid_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // architectureType Field Functions 
      bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
      void deleteArchitectureType() { this->architectureType_ = nullptr;};
      inline string getArchitectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
      inline Instances& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


      // askClusterId Field Functions 
      bool hasAskClusterId() const { return this->askClusterId_ != nullptr;};
      void deleteAskClusterId() { this->askClusterId_ = nullptr;};
      inline string getAskClusterId() const { DARABONBA_PTR_GET_DEFAULT(askClusterId_, "") };
      inline Instances& setAskClusterId(string askClusterId) { DARABONBA_PTR_SET_VALUE(askClusterId_, askClusterId) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Instances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // clusterStatus Field Functions 
      bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
      void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
      inline string getClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
      inline Instances& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


      // ha Field Functions 
      bool hasHa() const { return this->ha_ != nullptr;};
      void deleteHa() { this->ha_ = nullptr;};
      inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
      inline Instances& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


      // haResourceSpec Field Functions 
      bool hasHaResourceSpec() const { return this->haResourceSpec_ != nullptr;};
      void deleteHaResourceSpec() { this->haResourceSpec_ = nullptr;};
      inline const Instances::HaResourceSpec & getHaResourceSpec() const { DARABONBA_PTR_GET_CONST(haResourceSpec_, Instances::HaResourceSpec) };
      inline Instances::HaResourceSpec getHaResourceSpec() { DARABONBA_PTR_GET(haResourceSpec_, Instances::HaResourceSpec) };
      inline Instances& setHaResourceSpec(const Instances::HaResourceSpec & haResourceSpec) { DARABONBA_PTR_SET_VALUE(haResourceSpec_, haResourceSpec) };
      inline Instances& setHaResourceSpec(Instances::HaResourceSpec && haResourceSpec) { DARABONBA_PTR_SET_RVALUE(haResourceSpec_, haResourceSpec) };


      // haVSwitchIds Field Functions 
      bool hasHaVSwitchIds() const { return this->haVSwitchIds_ != nullptr;};
      void deleteHaVSwitchIds() { this->haVSwitchIds_ = nullptr;};
      inline const vector<string> & getHaVSwitchIds() const { DARABONBA_PTR_GET_CONST(haVSwitchIds_, vector<string>) };
      inline vector<string> getHaVSwitchIds() { DARABONBA_PTR_GET(haVSwitchIds_, vector<string>) };
      inline Instances& setHaVSwitchIds(const vector<string> & haVSwitchIds) { DARABONBA_PTR_SET_VALUE(haVSwitchIds_, haVSwitchIds) };
      inline Instances& setHaVSwitchIds(vector<string> && haVSwitchIds) { DARABONBA_PTR_SET_RVALUE(haVSwitchIds_, haVSwitchIds) };


      // haZoneId Field Functions 
      bool hasHaZoneId() const { return this->haZoneId_ != nullptr;};
      void deleteHaZoneId() { this->haZoneId_ = nullptr;};
      inline string getHaZoneId() const { DARABONBA_PTR_GET_DEFAULT(haZoneId_, "") };
      inline Instances& setHaZoneId(string haZoneId) { DARABONBA_PTR_SET_VALUE(haZoneId_, haZoneId) };


      // hostAliases Field Functions 
      bool hasHostAliases() const { return this->hostAliases_ != nullptr;};
      void deleteHostAliases() { this->hostAliases_ = nullptr;};
      inline const vector<Instances::HostAliases> & getHostAliases() const { DARABONBA_PTR_GET_CONST(hostAliases_, vector<Instances::HostAliases>) };
      inline vector<Instances::HostAliases> getHostAliases() { DARABONBA_PTR_GET(hostAliases_, vector<Instances::HostAliases>) };
      inline Instances& setHostAliases(const vector<Instances::HostAliases> & hostAliases) { DARABONBA_PTR_SET_VALUE(hostAliases_, hostAliases) };
      inline Instances& setHostAliases(vector<Instances::HostAliases> && hostAliases) { DARABONBA_PTR_SET_RVALUE(hostAliases_, hostAliases) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // monitorType Field Functions 
      bool hasMonitorType() const { return this->monitorType_ != nullptr;};
      void deleteMonitorType() { this->monitorType_ = nullptr;};
      inline string getMonitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, "") };
      inline Instances& setMonitorType(string monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


      // orderState Field Functions 
      bool hasOrderState() const { return this->orderState_ != nullptr;};
      void deleteOrderState() { this->orderState_ = nullptr;};
      inline string getOrderState() const { DARABONBA_PTR_GET_DEFAULT(orderState_, "") };
      inline Instances& setOrderState(string orderState) { DARABONBA_PTR_SET_VALUE(orderState_, orderState) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Instances& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceCreateTime Field Functions 
      bool hasResourceCreateTime() const { return this->resourceCreateTime_ != nullptr;};
      void deleteResourceCreateTime() { this->resourceCreateTime_ = nullptr;};
      inline int64_t getResourceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreateTime_, 0L) };
      inline Instances& setResourceCreateTime(int64_t resourceCreateTime) { DARABONBA_PTR_SET_VALUE(resourceCreateTime_, resourceCreateTime) };


      // resourceExpiredTime Field Functions 
      bool hasResourceExpiredTime() const { return this->resourceExpiredTime_ != nullptr;};
      void deleteResourceExpiredTime() { this->resourceExpiredTime_ = nullptr;};
      inline int64_t getResourceExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(resourceExpiredTime_, 0L) };
      inline Instances& setResourceExpiredTime(int64_t resourceExpiredTime) { DARABONBA_PTR_SET_VALUE(resourceExpiredTime_, resourceExpiredTime) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Instances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Instances& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceSpec Field Functions 
      bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
      void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
      inline const Instances::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Instances::ResourceSpec) };
      inline Instances::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Instances::ResourceSpec) };
      inline Instances& setResourceSpec(const Instances::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
      inline Instances& setResourceSpec(Instances::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline const Instances::Storage & getStorage() const { DARABONBA_PTR_GET_CONST(storage_, Instances::Storage) };
      inline Instances::Storage getStorage() { DARABONBA_PTR_GET(storage_, Instances::Storage) };
      inline Instances& setStorage(const Instances::Storage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
      inline Instances& setStorage(Instances::Storage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Instances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Instances::Tags>) };
      inline vector<Instances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Instances::Tags>) };
      inline Instances& setTags(const vector<Instances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Instances& setTags(vector<Instances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Instances& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline Instances& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline Instances& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Instances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Instances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> architectureType_ {};
      shared_ptr<string> askClusterId_ {};
      shared_ptr<string> chargeType_ {};
      shared_ptr<string> clusterStatus_ {};
      shared_ptr<bool> ha_ {};
      shared_ptr<Instances::HaResourceSpec> haResourceSpec_ {};
      shared_ptr<vector<string>> haVSwitchIds_ {};
      shared_ptr<string> haZoneId_ {};
      // This parameter is required.
      shared_ptr<vector<Instances::HostAliases>> hostAliases_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> monitorType_ {};
      shared_ptr<string> orderState_ {};
      shared_ptr<string> region_ {};
      shared_ptr<int64_t> resourceCreateTime_ {};
      shared_ptr<int64_t> resourceExpiredTime_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<Instances::ResourceSpec> resourceSpec_ {};
      shared_ptr<Instances::Storage> storage_ {};
      shared_ptr<vector<Instances::Tags>> tags_ {};
      shared_ptr<string> uid_ {};
      shared_ptr<vector<string>> vSwitchIds_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr
        && this->totalPage_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeInstancesResponseBody::Instances>) };
    inline vector<DescribeInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeInstancesResponseBody::Instances>) };
    inline DescribeInstancesResponseBody& setInstances(const vector<DescribeInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstancesResponseBody& setInstances(vector<DescribeInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline DescribeInstancesResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeInstancesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<DescribeInstancesResponseBody::Instances>> instances_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
