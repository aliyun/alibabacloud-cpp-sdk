// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
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
        DARABONBA_PTR_TO_JSON(Ansm, ansm_);
        DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_TO_JSON(AskClusterId, askClusterId_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(ClusterState, clusterState_);
        DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
        DARABONBA_PTR_TO_JSON(ClusterUsedResources, clusterUsedResources_);
        DARABONBA_PTR_TO_JSON(ClusterUsedStorage, clusterUsedStorage_);
        DARABONBA_PTR_TO_JSON(Elastic, elastic_);
        DARABONBA_PTR_TO_JSON(ElasticInstanceId, elasticInstanceId_);
        DARABONBA_PTR_TO_JSON(ElasticOrderState, elasticOrderState_);
        DARABONBA_PTR_TO_JSON(ElasticResourceSpec, elasticResourceSpec_);
        DARABONBA_PTR_TO_JSON(Ha, ha_);
        DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpec_);
        DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIds_);
        DARABONBA_PTR_TO_JSON(HaVSwitchInfo, haVSwitchInfo_);
        DARABONBA_PTR_TO_JSON(HaZoneId, haZoneId_);
        DARABONBA_PTR_TO_JSON(HostAliases, hostAliases_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_TO_JSON(OrderState, orderState_);
        DARABONBA_PTR_TO_JSON(OssInfo, ossInfo_);
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
        DARABONBA_PTR_TO_JSON(VSwitchInfo, vSwitchInfo_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcInfo, vpcInfo_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Ansm, ansm_);
        DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_FROM_JSON(AskClusterId, askClusterId_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(ClusterState, clusterState_);
        DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
        DARABONBA_PTR_FROM_JSON(ClusterUsedResources, clusterUsedResources_);
        DARABONBA_PTR_FROM_JSON(ClusterUsedStorage, clusterUsedStorage_);
        DARABONBA_PTR_FROM_JSON(Elastic, elastic_);
        DARABONBA_PTR_FROM_JSON(ElasticInstanceId, elasticInstanceId_);
        DARABONBA_PTR_FROM_JSON(ElasticOrderState, elasticOrderState_);
        DARABONBA_PTR_FROM_JSON(ElasticResourceSpec, elasticResourceSpec_);
        DARABONBA_PTR_FROM_JSON(Ha, ha_);
        DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpec_);
        DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIds_);
        DARABONBA_PTR_FROM_JSON(HaVSwitchInfo, haVSwitchInfo_);
        DARABONBA_PTR_FROM_JSON(HaZoneId, haZoneId_);
        DARABONBA_PTR_FROM_JSON(HostAliases, hostAliases_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_FROM_JSON(OrderState, orderState_);
        DARABONBA_PTR_FROM_JSON(OssInfo, ossInfo_);
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
        DARABONBA_PTR_FROM_JSON(VSwitchInfo, vSwitchInfo_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcInfo, vpcInfo_);
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
      class VpcInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        };
        friend void from_json(const Darabonba::Json& j, VpcInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        };
        VpcInfo() = default ;
        VpcInfo(const VpcInfo &) = default ;
        VpcInfo(VpcInfo &&) = default ;
        VpcInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcInfo() = default ;
        VpcInfo& operator=(const VpcInfo &) = default ;
        VpcInfo& operator=(VpcInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->description_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline VpcInfo& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VpcInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline VpcInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VpcInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VpcInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline VpcInfo& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vpcName_ {};
      };

      class VSwitchInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitchInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(VSwitchCidr, vSwitchCidr_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitchInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(VSwitchCidr, vSwitchCidr_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        VSwitchInfo() = default ;
        VSwitchInfo(const VSwitchInfo &) = default ;
        VSwitchInfo(VSwitchInfo &&) = default ;
        VSwitchInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitchInfo() = default ;
        VSwitchInfo& operator=(const VSwitchInfo &) = default ;
        VSwitchInfo& operator=(VSwitchInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && this->description_ == nullptr && this->regionId_ == nullptr && this->vSwitchCidr_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // availableIpAddressCount Field Functions 
        bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
        void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
        inline string getAvailableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, "") };
        inline VSwitchInfo& setAvailableIpAddressCount(string availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VSwitchInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline VSwitchInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // vSwitchCidr Field Functions 
        bool hasVSwitchCidr() const { return this->vSwitchCidr_ != nullptr;};
        void deleteVSwitchCidr() { this->vSwitchCidr_ = nullptr;};
        inline string getVSwitchCidr() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidr_, "") };
        inline VSwitchInfo& setVSwitchCidr(string vSwitchCidr) { DARABONBA_PTR_SET_VALUE(vSwitchCidr_, vSwitchCidr) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline VSwitchInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vSwitchName Field Functions 
        bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
        void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
        inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
        inline VSwitchInfo& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VSwitchInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline VSwitchInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> availableIpAddressCount_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> vSwitchCidr_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vSwitchName_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> zoneId_ {};
      };

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
          DARABONBA_PTR_TO_JSON(FullyManaged, fullyManaged_);
          DARABONBA_PTR_TO_JSON(OrderState, orderState_);
          DARABONBA_PTR_TO_JSON(Oss, oss_);
          DARABONBA_PTR_TO_JSON(SupportCreateFullyManagedStorage, supportCreateFullyManagedStorage_);
          DARABONBA_PTR_TO_JSON(SupportMigrationProgressDetection, supportMigrationProgressDetection_);
        };
        friend void from_json(const Darabonba::Json& j, Storage& obj) { 
          DARABONBA_PTR_FROM_JSON(FullyManaged, fullyManaged_);
          DARABONBA_PTR_FROM_JSON(OrderState, orderState_);
          DARABONBA_PTR_FROM_JSON(Oss, oss_);
          DARABONBA_PTR_FROM_JSON(SupportCreateFullyManagedStorage, supportCreateFullyManagedStorage_);
          DARABONBA_PTR_FROM_JSON(SupportMigrationProgressDetection, supportMigrationProgressDetection_);
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

        virtual bool empty() const override { return this->fullyManaged_ == nullptr
        && this->orderState_ == nullptr && this->oss_ == nullptr && this->supportCreateFullyManagedStorage_ == nullptr && this->supportMigrationProgressDetection_ == nullptr; };
        // fullyManaged Field Functions 
        bool hasFullyManaged() const { return this->fullyManaged_ != nullptr;};
        void deleteFullyManaged() { this->fullyManaged_ = nullptr;};
        inline bool getFullyManaged() const { DARABONBA_PTR_GET_DEFAULT(fullyManaged_, false) };
        inline Storage& setFullyManaged(bool fullyManaged) { DARABONBA_PTR_SET_VALUE(fullyManaged_, fullyManaged) };


        // orderState Field Functions 
        bool hasOrderState() const { return this->orderState_ != nullptr;};
        void deleteOrderState() { this->orderState_ = nullptr;};
        inline string getOrderState() const { DARABONBA_PTR_GET_DEFAULT(orderState_, "") };
        inline Storage& setOrderState(string orderState) { DARABONBA_PTR_SET_VALUE(orderState_, orderState) };


        // oss Field Functions 
        bool hasOss() const { return this->oss_ != nullptr;};
        void deleteOss() { this->oss_ = nullptr;};
        inline const Storage::Oss & getOss() const { DARABONBA_PTR_GET_CONST(oss_, Storage::Oss) };
        inline Storage::Oss getOss() { DARABONBA_PTR_GET(oss_, Storage::Oss) };
        inline Storage& setOss(const Storage::Oss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
        inline Storage& setOss(Storage::Oss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


        // supportCreateFullyManagedStorage Field Functions 
        bool hasSupportCreateFullyManagedStorage() const { return this->supportCreateFullyManagedStorage_ != nullptr;};
        void deleteSupportCreateFullyManagedStorage() { this->supportCreateFullyManagedStorage_ = nullptr;};
        inline bool getSupportCreateFullyManagedStorage() const { DARABONBA_PTR_GET_DEFAULT(supportCreateFullyManagedStorage_, false) };
        inline Storage& setSupportCreateFullyManagedStorage(bool supportCreateFullyManagedStorage) { DARABONBA_PTR_SET_VALUE(supportCreateFullyManagedStorage_, supportCreateFullyManagedStorage) };


        // supportMigrationProgressDetection Field Functions 
        bool hasSupportMigrationProgressDetection() const { return this->supportMigrationProgressDetection_ != nullptr;};
        void deleteSupportMigrationProgressDetection() { this->supportMigrationProgressDetection_ = nullptr;};
        inline bool getSupportMigrationProgressDetection() const { DARABONBA_PTR_GET_DEFAULT(supportMigrationProgressDetection_, false) };
        inline Storage& setSupportMigrationProgressDetection(bool supportMigrationProgressDetection) { DARABONBA_PTR_SET_VALUE(supportMigrationProgressDetection_, supportMigrationProgressDetection) };


      protected:
        shared_ptr<bool> fullyManaged_ {};
        shared_ptr<string> orderState_ {};
        shared_ptr<Storage::Oss> oss_ {};
        shared_ptr<bool> supportCreateFullyManagedStorage_ {};
        shared_ptr<bool> supportMigrationProgressDetection_ {};
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

      class OssInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AccessId, accessId_);
          DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(BucketVersioningStatus, bucketVersioningStatus_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        };
        friend void from_json(const Darabonba::Json& j, OssInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
          DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(BucketVersioningStatus, bucketVersioningStatus_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        };
        OssInfo() = default ;
        OssInfo(const OssInfo &) = default ;
        OssInfo(OssInfo &&) = default ;
        OssInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssInfo() = default ;
        OssInfo& operator=(const OssInfo &) = default ;
        OssInfo& operator=(OssInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessId_ == nullptr
        && this->accessKey_ == nullptr && this->bucket_ == nullptr && this->bucketVersioningStatus_ == nullptr && this->endpoint_ == nullptr; };
        // accessId Field Functions 
        bool hasAccessId() const { return this->accessId_ != nullptr;};
        void deleteAccessId() { this->accessId_ = nullptr;};
        inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
        inline OssInfo& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


        // accessKey Field Functions 
        bool hasAccessKey() const { return this->accessKey_ != nullptr;};
        void deleteAccessKey() { this->accessKey_ = nullptr;};
        inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
        inline OssInfo& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline OssInfo& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // bucketVersioningStatus Field Functions 
        bool hasBucketVersioningStatus() const { return this->bucketVersioningStatus_ != nullptr;};
        void deleteBucketVersioningStatus() { this->bucketVersioningStatus_ = nullptr;};
        inline string getBucketVersioningStatus() const { DARABONBA_PTR_GET_DEFAULT(bucketVersioningStatus_, "") };
        inline OssInfo& setBucketVersioningStatus(string bucketVersioningStatus) { DARABONBA_PTR_SET_VALUE(bucketVersioningStatus_, bucketVersioningStatus) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline OssInfo& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      protected:
        shared_ptr<string> accessId_ {};
        shared_ptr<string> accessKey_ {};
        shared_ptr<string> bucket_ {};
        shared_ptr<string> bucketVersioningStatus_ {};
        shared_ptr<string> endpoint_ {};
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

      class HaVSwitchInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HaVSwitchInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(VSwitchCidr, vSwitchCidr_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, HaVSwitchInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(VSwitchCidr, vSwitchCidr_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        HaVSwitchInfo() = default ;
        HaVSwitchInfo(const HaVSwitchInfo &) = default ;
        HaVSwitchInfo(HaVSwitchInfo &&) = default ;
        HaVSwitchInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HaVSwitchInfo() = default ;
        HaVSwitchInfo& operator=(const HaVSwitchInfo &) = default ;
        HaVSwitchInfo& operator=(HaVSwitchInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && this->description_ == nullptr && this->regionId_ == nullptr && this->vSwitchCidr_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // availableIpAddressCount Field Functions 
        bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
        void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
        inline int64_t getAvailableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
        inline HaVSwitchInfo& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline HaVSwitchInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline HaVSwitchInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // vSwitchCidr Field Functions 
        bool hasVSwitchCidr() const { return this->vSwitchCidr_ != nullptr;};
        void deleteVSwitchCidr() { this->vSwitchCidr_ = nullptr;};
        inline string getVSwitchCidr() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidr_, "") };
        inline HaVSwitchInfo& setVSwitchCidr(string vSwitchCidr) { DARABONBA_PTR_SET_VALUE(vSwitchCidr_, vSwitchCidr) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline HaVSwitchInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vSwitchName Field Functions 
        bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
        void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
        inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
        inline HaVSwitchInfo& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline HaVSwitchInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline HaVSwitchInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<int64_t> availableIpAddressCount_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> vSwitchCidr_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vSwitchName_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> zoneId_ {};
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

      class ElasticResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        ElasticResourceSpec() = default ;
        ElasticResourceSpec(const ElasticResourceSpec &) = default ;
        ElasticResourceSpec(ElasticResourceSpec &&) = default ;
        ElasticResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticResourceSpec() = default ;
        ElasticResourceSpec& operator=(const ElasticResourceSpec &) = default ;
        ElasticResourceSpec& operator=(ElasticResourceSpec &&) = default ;
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
        inline ElasticResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline ElasticResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int32_t> memoryGB_ {};
      };

      class ClusterUsedStorage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterUsedStorage& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(UsedStorage, usedStorage_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterUsedStorage& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(UsedStorage, usedStorage_);
        };
        ClusterUsedStorage() = default ;
        ClusterUsedStorage(const ClusterUsedStorage &) = default ;
        ClusterUsedStorage(ClusterUsedStorage &&) = default ;
        ClusterUsedStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterUsedStorage() = default ;
        ClusterUsedStorage& operator=(const ClusterUsedStorage &) = default ;
        ClusterUsedStorage& operator=(ClusterUsedStorage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->usedStorage_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline ClusterUsedStorage& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // usedStorage Field Functions 
        bool hasUsedStorage() const { return this->usedStorage_ != nullptr;};
        void deleteUsedStorage() { this->usedStorage_ = nullptr;};
        inline float getUsedStorage() const { DARABONBA_PTR_GET_DEFAULT(usedStorage_, 0.0) };
        inline ClusterUsedStorage& setUsedStorage(float usedStorage) { DARABONBA_PTR_SET_VALUE(usedStorage_, usedStorage) };


      protected:
        shared_ptr<string> clusterId_ {};
        shared_ptr<float> usedStorage_ {};
      };

      class ClusterUsedResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterUsedResources& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ElasticUsedCpu, elasticUsedCpu_);
          DARABONBA_PTR_TO_JSON(ElasticUsedMemory, elasticUsedMemory_);
          DARABONBA_PTR_TO_JSON(ElasticUsedResource, elasticUsedResource_);
          DARABONBA_PTR_TO_JSON(GuaranteedUsedCpu, guaranteedUsedCpu_);
          DARABONBA_PTR_TO_JSON(GuaranteedUsedMemory, guaranteedUsedMemory_);
          DARABONBA_PTR_TO_JSON(GuaranteedUsedResource, guaranteedUsedResource_);
          DARABONBA_PTR_TO_JSON(Ha, ha_);
          DARABONBA_PTR_TO_JSON(HaUsedCpu, haUsedCpu_);
          DARABONBA_PTR_TO_JSON(HaUsedMemory, haUsedMemory_);
          DARABONBA_PTR_TO_JSON(HaUsedResource, haUsedResource_);
          DARABONBA_PTR_TO_JSON(UsedCpu, usedCpu_);
          DARABONBA_PTR_TO_JSON(UsedMemory, usedMemory_);
          DARABONBA_PTR_TO_JSON(UsedResource, usedResource_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterUsedResources& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ElasticUsedCpu, elasticUsedCpu_);
          DARABONBA_PTR_FROM_JSON(ElasticUsedMemory, elasticUsedMemory_);
          DARABONBA_PTR_FROM_JSON(ElasticUsedResource, elasticUsedResource_);
          DARABONBA_PTR_FROM_JSON(GuaranteedUsedCpu, guaranteedUsedCpu_);
          DARABONBA_PTR_FROM_JSON(GuaranteedUsedMemory, guaranteedUsedMemory_);
          DARABONBA_PTR_FROM_JSON(GuaranteedUsedResource, guaranteedUsedResource_);
          DARABONBA_PTR_FROM_JSON(Ha, ha_);
          DARABONBA_PTR_FROM_JSON(HaUsedCpu, haUsedCpu_);
          DARABONBA_PTR_FROM_JSON(HaUsedMemory, haUsedMemory_);
          DARABONBA_PTR_FROM_JSON(HaUsedResource, haUsedResource_);
          DARABONBA_PTR_FROM_JSON(UsedCpu, usedCpu_);
          DARABONBA_PTR_FROM_JSON(UsedMemory, usedMemory_);
          DARABONBA_PTR_FROM_JSON(UsedResource, usedResource_);
        };
        ClusterUsedResources() = default ;
        ClusterUsedResources(const ClusterUsedResources &) = default ;
        ClusterUsedResources(ClusterUsedResources &&) = default ;
        ClusterUsedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterUsedResources() = default ;
        ClusterUsedResources& operator=(const ClusterUsedResources &) = default ;
        ClusterUsedResources& operator=(ClusterUsedResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->elasticUsedCpu_ == nullptr && this->elasticUsedMemory_ == nullptr && this->elasticUsedResource_ == nullptr && this->guaranteedUsedCpu_ == nullptr && this->guaranteedUsedMemory_ == nullptr
        && this->guaranteedUsedResource_ == nullptr && this->ha_ == nullptr && this->haUsedCpu_ == nullptr && this->haUsedMemory_ == nullptr && this->haUsedResource_ == nullptr
        && this->usedCpu_ == nullptr && this->usedMemory_ == nullptr && this->usedResource_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline ClusterUsedResources& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // elasticUsedCpu Field Functions 
        bool hasElasticUsedCpu() const { return this->elasticUsedCpu_ != nullptr;};
        void deleteElasticUsedCpu() { this->elasticUsedCpu_ = nullptr;};
        inline float getElasticUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(elasticUsedCpu_, 0.0) };
        inline ClusterUsedResources& setElasticUsedCpu(float elasticUsedCpu) { DARABONBA_PTR_SET_VALUE(elasticUsedCpu_, elasticUsedCpu) };


        // elasticUsedMemory Field Functions 
        bool hasElasticUsedMemory() const { return this->elasticUsedMemory_ != nullptr;};
        void deleteElasticUsedMemory() { this->elasticUsedMemory_ = nullptr;};
        inline float getElasticUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(elasticUsedMemory_, 0.0) };
        inline ClusterUsedResources& setElasticUsedMemory(float elasticUsedMemory) { DARABONBA_PTR_SET_VALUE(elasticUsedMemory_, elasticUsedMemory) };


        // elasticUsedResource Field Functions 
        bool hasElasticUsedResource() const { return this->elasticUsedResource_ != nullptr;};
        void deleteElasticUsedResource() { this->elasticUsedResource_ = nullptr;};
        inline float getElasticUsedResource() const { DARABONBA_PTR_GET_DEFAULT(elasticUsedResource_, 0.0) };
        inline ClusterUsedResources& setElasticUsedResource(float elasticUsedResource) { DARABONBA_PTR_SET_VALUE(elasticUsedResource_, elasticUsedResource) };


        // guaranteedUsedCpu Field Functions 
        bool hasGuaranteedUsedCpu() const { return this->guaranteedUsedCpu_ != nullptr;};
        void deleteGuaranteedUsedCpu() { this->guaranteedUsedCpu_ = nullptr;};
        inline float getGuaranteedUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(guaranteedUsedCpu_, 0.0) };
        inline ClusterUsedResources& setGuaranteedUsedCpu(float guaranteedUsedCpu) { DARABONBA_PTR_SET_VALUE(guaranteedUsedCpu_, guaranteedUsedCpu) };


        // guaranteedUsedMemory Field Functions 
        bool hasGuaranteedUsedMemory() const { return this->guaranteedUsedMemory_ != nullptr;};
        void deleteGuaranteedUsedMemory() { this->guaranteedUsedMemory_ = nullptr;};
        inline float getGuaranteedUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(guaranteedUsedMemory_, 0.0) };
        inline ClusterUsedResources& setGuaranteedUsedMemory(float guaranteedUsedMemory) { DARABONBA_PTR_SET_VALUE(guaranteedUsedMemory_, guaranteedUsedMemory) };


        // guaranteedUsedResource Field Functions 
        bool hasGuaranteedUsedResource() const { return this->guaranteedUsedResource_ != nullptr;};
        void deleteGuaranteedUsedResource() { this->guaranteedUsedResource_ = nullptr;};
        inline float getGuaranteedUsedResource() const { DARABONBA_PTR_GET_DEFAULT(guaranteedUsedResource_, 0.0) };
        inline ClusterUsedResources& setGuaranteedUsedResource(float guaranteedUsedResource) { DARABONBA_PTR_SET_VALUE(guaranteedUsedResource_, guaranteedUsedResource) };


        // ha Field Functions 
        bool hasHa() const { return this->ha_ != nullptr;};
        void deleteHa() { this->ha_ = nullptr;};
        inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
        inline ClusterUsedResources& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


        // haUsedCpu Field Functions 
        bool hasHaUsedCpu() const { return this->haUsedCpu_ != nullptr;};
        void deleteHaUsedCpu() { this->haUsedCpu_ = nullptr;};
        inline float getHaUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(haUsedCpu_, 0.0) };
        inline ClusterUsedResources& setHaUsedCpu(float haUsedCpu) { DARABONBA_PTR_SET_VALUE(haUsedCpu_, haUsedCpu) };


        // haUsedMemory Field Functions 
        bool hasHaUsedMemory() const { return this->haUsedMemory_ != nullptr;};
        void deleteHaUsedMemory() { this->haUsedMemory_ = nullptr;};
        inline float getHaUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(haUsedMemory_, 0.0) };
        inline ClusterUsedResources& setHaUsedMemory(float haUsedMemory) { DARABONBA_PTR_SET_VALUE(haUsedMemory_, haUsedMemory) };


        // haUsedResource Field Functions 
        bool hasHaUsedResource() const { return this->haUsedResource_ != nullptr;};
        void deleteHaUsedResource() { this->haUsedResource_ = nullptr;};
        inline float getHaUsedResource() const { DARABONBA_PTR_GET_DEFAULT(haUsedResource_, 0.0) };
        inline ClusterUsedResources& setHaUsedResource(float haUsedResource) { DARABONBA_PTR_SET_VALUE(haUsedResource_, haUsedResource) };


        // usedCpu Field Functions 
        bool hasUsedCpu() const { return this->usedCpu_ != nullptr;};
        void deleteUsedCpu() { this->usedCpu_ = nullptr;};
        inline float getUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(usedCpu_, 0.0) };
        inline ClusterUsedResources& setUsedCpu(float usedCpu) { DARABONBA_PTR_SET_VALUE(usedCpu_, usedCpu) };


        // usedMemory Field Functions 
        bool hasUsedMemory() const { return this->usedMemory_ != nullptr;};
        void deleteUsedMemory() { this->usedMemory_ = nullptr;};
        inline float getUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(usedMemory_, 0.0) };
        inline ClusterUsedResources& setUsedMemory(float usedMemory) { DARABONBA_PTR_SET_VALUE(usedMemory_, usedMemory) };


        // usedResource Field Functions 
        bool hasUsedResource() const { return this->usedResource_ != nullptr;};
        void deleteUsedResource() { this->usedResource_ = nullptr;};
        inline float getUsedResource() const { DARABONBA_PTR_GET_DEFAULT(usedResource_, 0.0) };
        inline ClusterUsedResources& setUsedResource(float usedResource) { DARABONBA_PTR_SET_VALUE(usedResource_, usedResource) };


      protected:
        shared_ptr<string> clusterId_ {};
        shared_ptr<float> elasticUsedCpu_ {};
        shared_ptr<float> elasticUsedMemory_ {};
        shared_ptr<float> elasticUsedResource_ {};
        shared_ptr<float> guaranteedUsedCpu_ {};
        shared_ptr<float> guaranteedUsedMemory_ {};
        shared_ptr<float> guaranteedUsedResource_ {};
        shared_ptr<bool> ha_ {};
        shared_ptr<float> haUsedCpu_ {};
        shared_ptr<float> haUsedMemory_ {};
        shared_ptr<float> haUsedResource_ {};
        shared_ptr<float> usedCpu_ {};
        shared_ptr<float> usedMemory_ {};
        shared_ptr<float> usedResource_ {};
      };

      class ClusterState : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterState& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterStage, clusterStage_);
          DARABONBA_PTR_TO_JSON(CreateTimeout, createTimeout_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(UserSlbDto, userSlbDto_);
          DARABONBA_PTR_TO_JSON(VpcCidr, vpcCidr_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterState& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterStage, clusterStage_);
          DARABONBA_PTR_FROM_JSON(CreateTimeout, createTimeout_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(UserSlbDto, userSlbDto_);
          DARABONBA_PTR_FROM_JSON(VpcCidr, vpcCidr_);
        };
        ClusterState() = default ;
        ClusterState(const ClusterState &) = default ;
        ClusterState(ClusterState &&) = default ;
        ClusterState(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterState() = default ;
        ClusterState& operator=(const ClusterState &) = default ;
        ClusterState& operator=(ClusterState &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserSlbDto : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserSlbDto& obj) { 
            DARABONBA_PTR_TO_JSON(ExistSlb, existSlb_);
            DARABONBA_PTR_TO_JSON(SlbId, slbId_);
            DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
            DARABONBA_PTR_TO_JSON(SlbStatus, slbStatus_);
            DARABONBA_PTR_TO_JSON(UserSlbListeners, userSlbListeners_);
          };
          friend void from_json(const Darabonba::Json& j, UserSlbDto& obj) { 
            DARABONBA_PTR_FROM_JSON(ExistSlb, existSlb_);
            DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
            DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
            DARABONBA_PTR_FROM_JSON(SlbStatus, slbStatus_);
            DARABONBA_PTR_FROM_JSON(UserSlbListeners, userSlbListeners_);
          };
          UserSlbDto() = default ;
          UserSlbDto(const UserSlbDto &) = default ;
          UserSlbDto(UserSlbDto &&) = default ;
          UserSlbDto(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserSlbDto() = default ;
          UserSlbDto& operator=(const UserSlbDto &) = default ;
          UserSlbDto& operator=(UserSlbDto &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class UserSlbListeners : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const UserSlbListeners& obj) { 
              DARABONBA_PTR_TO_JSON(ListenersStatus, listenersStatus_);
              DARABONBA_PTR_TO_JSON(Port, port_);
            };
            friend void from_json(const Darabonba::Json& j, UserSlbListeners& obj) { 
              DARABONBA_PTR_FROM_JSON(ListenersStatus, listenersStatus_);
              DARABONBA_PTR_FROM_JSON(Port, port_);
            };
            UserSlbListeners() = default ;
            UserSlbListeners(const UserSlbListeners &) = default ;
            UserSlbListeners(UserSlbListeners &&) = default ;
            UserSlbListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~UserSlbListeners() = default ;
            UserSlbListeners& operator=(const UserSlbListeners &) = default ;
            UserSlbListeners& operator=(UserSlbListeners &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->listenersStatus_ == nullptr
        && this->port_ == nullptr; };
            // listenersStatus Field Functions 
            bool hasListenersStatus() const { return this->listenersStatus_ != nullptr;};
            void deleteListenersStatus() { this->listenersStatus_ = nullptr;};
            inline string getListenersStatus() const { DARABONBA_PTR_GET_DEFAULT(listenersStatus_, "") };
            inline UserSlbListeners& setListenersStatus(string listenersStatus) { DARABONBA_PTR_SET_VALUE(listenersStatus_, listenersStatus) };


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
            inline UserSlbListeners& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          protected:
            shared_ptr<string> listenersStatus_ {};
            shared_ptr<string> port_ {};
          };

          virtual bool empty() const override { return this->existSlb_ == nullptr
        && this->slbId_ == nullptr && this->slbIp_ == nullptr && this->slbStatus_ == nullptr && this->userSlbListeners_ == nullptr; };
          // existSlb Field Functions 
          bool hasExistSlb() const { return this->existSlb_ != nullptr;};
          void deleteExistSlb() { this->existSlb_ = nullptr;};
          inline bool getExistSlb() const { DARABONBA_PTR_GET_DEFAULT(existSlb_, false) };
          inline UserSlbDto& setExistSlb(bool existSlb) { DARABONBA_PTR_SET_VALUE(existSlb_, existSlb) };


          // slbId Field Functions 
          bool hasSlbId() const { return this->slbId_ != nullptr;};
          void deleteSlbId() { this->slbId_ = nullptr;};
          inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
          inline UserSlbDto& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


          // slbIp Field Functions 
          bool hasSlbIp() const { return this->slbIp_ != nullptr;};
          void deleteSlbIp() { this->slbIp_ = nullptr;};
          inline string getSlbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
          inline UserSlbDto& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


          // slbStatus Field Functions 
          bool hasSlbStatus() const { return this->slbStatus_ != nullptr;};
          void deleteSlbStatus() { this->slbStatus_ = nullptr;};
          inline string getSlbStatus() const { DARABONBA_PTR_GET_DEFAULT(slbStatus_, "") };
          inline UserSlbDto& setSlbStatus(string slbStatus) { DARABONBA_PTR_SET_VALUE(slbStatus_, slbStatus) };


          // userSlbListeners Field Functions 
          bool hasUserSlbListeners() const { return this->userSlbListeners_ != nullptr;};
          void deleteUserSlbListeners() { this->userSlbListeners_ = nullptr;};
          inline const vector<UserSlbDto::UserSlbListeners> & getUserSlbListeners() const { DARABONBA_PTR_GET_CONST(userSlbListeners_, vector<UserSlbDto::UserSlbListeners>) };
          inline vector<UserSlbDto::UserSlbListeners> getUserSlbListeners() { DARABONBA_PTR_GET(userSlbListeners_, vector<UserSlbDto::UserSlbListeners>) };
          inline UserSlbDto& setUserSlbListeners(const vector<UserSlbDto::UserSlbListeners> & userSlbListeners) { DARABONBA_PTR_SET_VALUE(userSlbListeners_, userSlbListeners) };
          inline UserSlbDto& setUserSlbListeners(vector<UserSlbDto::UserSlbListeners> && userSlbListeners) { DARABONBA_PTR_SET_RVALUE(userSlbListeners_, userSlbListeners) };


        protected:
          shared_ptr<bool> existSlb_ {};
          shared_ptr<string> slbId_ {};
          shared_ptr<string> slbIp_ {};
          shared_ptr<string> slbStatus_ {};
          shared_ptr<vector<UserSlbDto::UserSlbListeners>> userSlbListeners_ {};
        };

        class ClusterStage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ClusterStage& obj) { 
            DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_TO_JSON(CurrentStage, currentStage_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TotalStageWithWeight, totalStageWithWeight_);
          };
          friend void from_json(const Darabonba::Json& j, ClusterStage& obj) { 
            DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_FROM_JSON(CurrentStage, currentStage_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TotalStageWithWeight, totalStageWithWeight_);
          };
          ClusterStage() = default ;
          ClusterStage(const ClusterStage &) = default ;
          ClusterStage(ClusterStage &&) = default ;
          ClusterStage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ClusterStage() = default ;
          ClusterStage& operator=(const ClusterStage &) = default ;
          ClusterStage& operator=(ClusterStage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TotalStageWithWeight : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TotalStageWithWeight& obj) { 
              DARABONBA_PTR_TO_JSON(StepIndex, stepIndex_);
              DARABONBA_PTR_TO_JSON(StepName, stepName_);
              DARABONBA_PTR_TO_JSON(Weight, weight_);
            };
            friend void from_json(const Darabonba::Json& j, TotalStageWithWeight& obj) { 
              DARABONBA_PTR_FROM_JSON(StepIndex, stepIndex_);
              DARABONBA_PTR_FROM_JSON(StepName, stepName_);
              DARABONBA_PTR_FROM_JSON(Weight, weight_);
            };
            TotalStageWithWeight() = default ;
            TotalStageWithWeight(const TotalStageWithWeight &) = default ;
            TotalStageWithWeight(TotalStageWithWeight &&) = default ;
            TotalStageWithWeight(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TotalStageWithWeight() = default ;
            TotalStageWithWeight& operator=(const TotalStageWithWeight &) = default ;
            TotalStageWithWeight& operator=(TotalStageWithWeight &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->stepIndex_ == nullptr
        && this->stepName_ == nullptr && this->weight_ == nullptr; };
            // stepIndex Field Functions 
            bool hasStepIndex() const { return this->stepIndex_ != nullptr;};
            void deleteStepIndex() { this->stepIndex_ = nullptr;};
            inline int32_t getStepIndex() const { DARABONBA_PTR_GET_DEFAULT(stepIndex_, 0) };
            inline TotalStageWithWeight& setStepIndex(int32_t stepIndex) { DARABONBA_PTR_SET_VALUE(stepIndex_, stepIndex) };


            // stepName Field Functions 
            bool hasStepName() const { return this->stepName_ != nullptr;};
            void deleteStepName() { this->stepName_ = nullptr;};
            inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
            inline TotalStageWithWeight& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


            // weight Field Functions 
            bool hasWeight() const { return this->weight_ != nullptr;};
            void deleteWeight() { this->weight_ = nullptr;};
            inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
            inline TotalStageWithWeight& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


          protected:
            shared_ptr<int32_t> stepIndex_ {};
            shared_ptr<string> stepName_ {};
            shared_ptr<int32_t> weight_ {};
          };

          virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->currentStage_ == nullptr && this->message_ == nullptr && this->status_ == nullptr && this->totalStageWithWeight_ == nullptr; };
          // clusterId Field Functions 
          bool hasClusterId() const { return this->clusterId_ != nullptr;};
          void deleteClusterId() { this->clusterId_ = nullptr;};
          inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
          inline ClusterStage& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


          // currentStage Field Functions 
          bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
          void deleteCurrentStage() { this->currentStage_ = nullptr;};
          inline int32_t getCurrentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, 0) };
          inline ClusterStage& setCurrentStage(int32_t currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline ClusterStage& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline ClusterStage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // totalStageWithWeight Field Functions 
          bool hasTotalStageWithWeight() const { return this->totalStageWithWeight_ != nullptr;};
          void deleteTotalStageWithWeight() { this->totalStageWithWeight_ = nullptr;};
          inline const vector<ClusterStage::TotalStageWithWeight> & getTotalStageWithWeight() const { DARABONBA_PTR_GET_CONST(totalStageWithWeight_, vector<ClusterStage::TotalStageWithWeight>) };
          inline vector<ClusterStage::TotalStageWithWeight> getTotalStageWithWeight() { DARABONBA_PTR_GET(totalStageWithWeight_, vector<ClusterStage::TotalStageWithWeight>) };
          inline ClusterStage& setTotalStageWithWeight(const vector<ClusterStage::TotalStageWithWeight> & totalStageWithWeight) { DARABONBA_PTR_SET_VALUE(totalStageWithWeight_, totalStageWithWeight) };
          inline ClusterStage& setTotalStageWithWeight(vector<ClusterStage::TotalStageWithWeight> && totalStageWithWeight) { DARABONBA_PTR_SET_RVALUE(totalStageWithWeight_, totalStageWithWeight) };


        protected:
          shared_ptr<string> clusterId_ {};
          shared_ptr<int32_t> currentStage_ {};
          shared_ptr<string> message_ {};
          shared_ptr<string> status_ {};
          shared_ptr<vector<ClusterStage::TotalStageWithWeight>> totalStageWithWeight_ {};
        };

        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterStage_ == nullptr && this->createTimeout_ == nullptr && this->status_ == nullptr && this->subStatus_ == nullptr && this->url_ == nullptr
        && this->userSlbDto_ == nullptr && this->vpcCidr_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline ClusterState& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterStage Field Functions 
        bool hasClusterStage() const { return this->clusterStage_ != nullptr;};
        void deleteClusterStage() { this->clusterStage_ = nullptr;};
        inline const ClusterState::ClusterStage & getClusterStage() const { DARABONBA_PTR_GET_CONST(clusterStage_, ClusterState::ClusterStage) };
        inline ClusterState::ClusterStage getClusterStage() { DARABONBA_PTR_GET(clusterStage_, ClusterState::ClusterStage) };
        inline ClusterState& setClusterStage(const ClusterState::ClusterStage & clusterStage) { DARABONBA_PTR_SET_VALUE(clusterStage_, clusterStage) };
        inline ClusterState& setClusterStage(ClusterState::ClusterStage && clusterStage) { DARABONBA_PTR_SET_RVALUE(clusterStage_, clusterStage) };


        // createTimeout Field Functions 
        bool hasCreateTimeout() const { return this->createTimeout_ != nullptr;};
        void deleteCreateTimeout() { this->createTimeout_ = nullptr;};
        inline bool getCreateTimeout() const { DARABONBA_PTR_GET_DEFAULT(createTimeout_, false) };
        inline ClusterState& setCreateTimeout(bool createTimeout) { DARABONBA_PTR_SET_VALUE(createTimeout_, createTimeout) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ClusterState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subStatus Field Functions 
        bool hasSubStatus() const { return this->subStatus_ != nullptr;};
        void deleteSubStatus() { this->subStatus_ = nullptr;};
        inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
        inline ClusterState& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline ClusterState& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // userSlbDto Field Functions 
        bool hasUserSlbDto() const { return this->userSlbDto_ != nullptr;};
        void deleteUserSlbDto() { this->userSlbDto_ = nullptr;};
        inline const ClusterState::UserSlbDto & getUserSlbDto() const { DARABONBA_PTR_GET_CONST(userSlbDto_, ClusterState::UserSlbDto) };
        inline ClusterState::UserSlbDto getUserSlbDto() { DARABONBA_PTR_GET(userSlbDto_, ClusterState::UserSlbDto) };
        inline ClusterState& setUserSlbDto(const ClusterState::UserSlbDto & userSlbDto) { DARABONBA_PTR_SET_VALUE(userSlbDto_, userSlbDto) };
        inline ClusterState& setUserSlbDto(ClusterState::UserSlbDto && userSlbDto) { DARABONBA_PTR_SET_RVALUE(userSlbDto_, userSlbDto) };


        // vpcCidr Field Functions 
        bool hasVpcCidr() const { return this->vpcCidr_ != nullptr;};
        void deleteVpcCidr() { this->vpcCidr_ = nullptr;};
        inline string getVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(vpcCidr_, "") };
        inline ClusterState& setVpcCidr(string vpcCidr) { DARABONBA_PTR_SET_VALUE(vpcCidr_, vpcCidr) };


      protected:
        shared_ptr<string> clusterId_ {};
        shared_ptr<ClusterState::ClusterStage> clusterStage_ {};
        shared_ptr<bool> createTimeout_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> subStatus_ {};
        shared_ptr<string> url_ {};
        shared_ptr<ClusterState::UserSlbDto> userSlbDto_ {};
        shared_ptr<string> vpcCidr_ {};
      };

      virtual bool empty() const override { return this->ansm_ == nullptr
        && this->architectureType_ == nullptr && this->askClusterId_ == nullptr && this->chargeType_ == nullptr && this->clusterState_ == nullptr && this->clusterStatus_ == nullptr
        && this->clusterUsedResources_ == nullptr && this->clusterUsedStorage_ == nullptr && this->elastic_ == nullptr && this->elasticInstanceId_ == nullptr && this->elasticOrderState_ == nullptr
        && this->elasticResourceSpec_ == nullptr && this->ha_ == nullptr && this->haResourceSpec_ == nullptr && this->haVSwitchIds_ == nullptr && this->haVSwitchInfo_ == nullptr
        && this->haZoneId_ == nullptr && this->hostAliases_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->monitorType_ == nullptr
        && this->orderState_ == nullptr && this->ossInfo_ == nullptr && this->region_ == nullptr && this->resourceCreateTime_ == nullptr && this->resourceExpiredTime_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceSpec_ == nullptr && this->storage_ == nullptr && this->tags_ == nullptr
        && this->uid_ == nullptr && this->vSwitchIds_ == nullptr && this->vSwitchInfo_ == nullptr && this->vpcId_ == nullptr && this->vpcInfo_ == nullptr
        && this->zoneId_ == nullptr; };
      // ansm Field Functions 
      bool hasAnsm() const { return this->ansm_ != nullptr;};
      void deleteAnsm() { this->ansm_ = nullptr;};
      inline bool getAnsm() const { DARABONBA_PTR_GET_DEFAULT(ansm_, false) };
      inline Instances& setAnsm(bool ansm) { DARABONBA_PTR_SET_VALUE(ansm_, ansm) };


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


      // clusterState Field Functions 
      bool hasClusterState() const { return this->clusterState_ != nullptr;};
      void deleteClusterState() { this->clusterState_ = nullptr;};
      inline const Instances::ClusterState & getClusterState() const { DARABONBA_PTR_GET_CONST(clusterState_, Instances::ClusterState) };
      inline Instances::ClusterState getClusterState() { DARABONBA_PTR_GET(clusterState_, Instances::ClusterState) };
      inline Instances& setClusterState(const Instances::ClusterState & clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };
      inline Instances& setClusterState(Instances::ClusterState && clusterState) { DARABONBA_PTR_SET_RVALUE(clusterState_, clusterState) };


      // clusterStatus Field Functions 
      bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
      void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
      inline string getClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
      inline Instances& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


      // clusterUsedResources Field Functions 
      bool hasClusterUsedResources() const { return this->clusterUsedResources_ != nullptr;};
      void deleteClusterUsedResources() { this->clusterUsedResources_ = nullptr;};
      inline const Instances::ClusterUsedResources & getClusterUsedResources() const { DARABONBA_PTR_GET_CONST(clusterUsedResources_, Instances::ClusterUsedResources) };
      inline Instances::ClusterUsedResources getClusterUsedResources() { DARABONBA_PTR_GET(clusterUsedResources_, Instances::ClusterUsedResources) };
      inline Instances& setClusterUsedResources(const Instances::ClusterUsedResources & clusterUsedResources) { DARABONBA_PTR_SET_VALUE(clusterUsedResources_, clusterUsedResources) };
      inline Instances& setClusterUsedResources(Instances::ClusterUsedResources && clusterUsedResources) { DARABONBA_PTR_SET_RVALUE(clusterUsedResources_, clusterUsedResources) };


      // clusterUsedStorage Field Functions 
      bool hasClusterUsedStorage() const { return this->clusterUsedStorage_ != nullptr;};
      void deleteClusterUsedStorage() { this->clusterUsedStorage_ = nullptr;};
      inline const Instances::ClusterUsedStorage & getClusterUsedStorage() const { DARABONBA_PTR_GET_CONST(clusterUsedStorage_, Instances::ClusterUsedStorage) };
      inline Instances::ClusterUsedStorage getClusterUsedStorage() { DARABONBA_PTR_GET(clusterUsedStorage_, Instances::ClusterUsedStorage) };
      inline Instances& setClusterUsedStorage(const Instances::ClusterUsedStorage & clusterUsedStorage) { DARABONBA_PTR_SET_VALUE(clusterUsedStorage_, clusterUsedStorage) };
      inline Instances& setClusterUsedStorage(Instances::ClusterUsedStorage && clusterUsedStorage) { DARABONBA_PTR_SET_RVALUE(clusterUsedStorage_, clusterUsedStorage) };


      // elastic Field Functions 
      bool hasElastic() const { return this->elastic_ != nullptr;};
      void deleteElastic() { this->elastic_ = nullptr;};
      inline bool getElastic() const { DARABONBA_PTR_GET_DEFAULT(elastic_, false) };
      inline Instances& setElastic(bool elastic) { DARABONBA_PTR_SET_VALUE(elastic_, elastic) };


      // elasticInstanceId Field Functions 
      bool hasElasticInstanceId() const { return this->elasticInstanceId_ != nullptr;};
      void deleteElasticInstanceId() { this->elasticInstanceId_ = nullptr;};
      inline string getElasticInstanceId() const { DARABONBA_PTR_GET_DEFAULT(elasticInstanceId_, "") };
      inline Instances& setElasticInstanceId(string elasticInstanceId) { DARABONBA_PTR_SET_VALUE(elasticInstanceId_, elasticInstanceId) };


      // elasticOrderState Field Functions 
      bool hasElasticOrderState() const { return this->elasticOrderState_ != nullptr;};
      void deleteElasticOrderState() { this->elasticOrderState_ = nullptr;};
      inline string getElasticOrderState() const { DARABONBA_PTR_GET_DEFAULT(elasticOrderState_, "") };
      inline Instances& setElasticOrderState(string elasticOrderState) { DARABONBA_PTR_SET_VALUE(elasticOrderState_, elasticOrderState) };


      // elasticResourceSpec Field Functions 
      bool hasElasticResourceSpec() const { return this->elasticResourceSpec_ != nullptr;};
      void deleteElasticResourceSpec() { this->elasticResourceSpec_ = nullptr;};
      inline const Instances::ElasticResourceSpec & getElasticResourceSpec() const { DARABONBA_PTR_GET_CONST(elasticResourceSpec_, Instances::ElasticResourceSpec) };
      inline Instances::ElasticResourceSpec getElasticResourceSpec() { DARABONBA_PTR_GET(elasticResourceSpec_, Instances::ElasticResourceSpec) };
      inline Instances& setElasticResourceSpec(const Instances::ElasticResourceSpec & elasticResourceSpec) { DARABONBA_PTR_SET_VALUE(elasticResourceSpec_, elasticResourceSpec) };
      inline Instances& setElasticResourceSpec(Instances::ElasticResourceSpec && elasticResourceSpec) { DARABONBA_PTR_SET_RVALUE(elasticResourceSpec_, elasticResourceSpec) };


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


      // haVSwitchInfo Field Functions 
      bool hasHaVSwitchInfo() const { return this->haVSwitchInfo_ != nullptr;};
      void deleteHaVSwitchInfo() { this->haVSwitchInfo_ = nullptr;};
      inline const vector<Instances::HaVSwitchInfo> & getHaVSwitchInfo() const { DARABONBA_PTR_GET_CONST(haVSwitchInfo_, vector<Instances::HaVSwitchInfo>) };
      inline vector<Instances::HaVSwitchInfo> getHaVSwitchInfo() { DARABONBA_PTR_GET(haVSwitchInfo_, vector<Instances::HaVSwitchInfo>) };
      inline Instances& setHaVSwitchInfo(const vector<Instances::HaVSwitchInfo> & haVSwitchInfo) { DARABONBA_PTR_SET_VALUE(haVSwitchInfo_, haVSwitchInfo) };
      inline Instances& setHaVSwitchInfo(vector<Instances::HaVSwitchInfo> && haVSwitchInfo) { DARABONBA_PTR_SET_RVALUE(haVSwitchInfo_, haVSwitchInfo) };


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


      // ossInfo Field Functions 
      bool hasOssInfo() const { return this->ossInfo_ != nullptr;};
      void deleteOssInfo() { this->ossInfo_ = nullptr;};
      inline const Instances::OssInfo & getOssInfo() const { DARABONBA_PTR_GET_CONST(ossInfo_, Instances::OssInfo) };
      inline Instances::OssInfo getOssInfo() { DARABONBA_PTR_GET(ossInfo_, Instances::OssInfo) };
      inline Instances& setOssInfo(const Instances::OssInfo & ossInfo) { DARABONBA_PTR_SET_VALUE(ossInfo_, ossInfo) };
      inline Instances& setOssInfo(Instances::OssInfo && ossInfo) { DARABONBA_PTR_SET_RVALUE(ossInfo_, ossInfo) };


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


      // vSwitchInfo Field Functions 
      bool hasVSwitchInfo() const { return this->vSwitchInfo_ != nullptr;};
      void deleteVSwitchInfo() { this->vSwitchInfo_ = nullptr;};
      inline const vector<Instances::VSwitchInfo> & getVSwitchInfo() const { DARABONBA_PTR_GET_CONST(vSwitchInfo_, vector<Instances::VSwitchInfo>) };
      inline vector<Instances::VSwitchInfo> getVSwitchInfo() { DARABONBA_PTR_GET(vSwitchInfo_, vector<Instances::VSwitchInfo>) };
      inline Instances& setVSwitchInfo(const vector<Instances::VSwitchInfo> & vSwitchInfo) { DARABONBA_PTR_SET_VALUE(vSwitchInfo_, vSwitchInfo) };
      inline Instances& setVSwitchInfo(vector<Instances::VSwitchInfo> && vSwitchInfo) { DARABONBA_PTR_SET_RVALUE(vSwitchInfo_, vSwitchInfo) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Instances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcInfo Field Functions 
      bool hasVpcInfo() const { return this->vpcInfo_ != nullptr;};
      void deleteVpcInfo() { this->vpcInfo_ = nullptr;};
      inline const Instances::VpcInfo & getVpcInfo() const { DARABONBA_PTR_GET_CONST(vpcInfo_, Instances::VpcInfo) };
      inline Instances::VpcInfo getVpcInfo() { DARABONBA_PTR_GET(vpcInfo_, Instances::VpcInfo) };
      inline Instances& setVpcInfo(const Instances::VpcInfo & vpcInfo) { DARABONBA_PTR_SET_VALUE(vpcInfo_, vpcInfo) };
      inline Instances& setVpcInfo(Instances::VpcInfo && vpcInfo) { DARABONBA_PTR_SET_RVALUE(vpcInfo_, vpcInfo) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Instances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<bool> ansm_ {};
      shared_ptr<string> architectureType_ {};
      shared_ptr<string> askClusterId_ {};
      shared_ptr<string> chargeType_ {};
      shared_ptr<Instances::ClusterState> clusterState_ {};
      shared_ptr<string> clusterStatus_ {};
      shared_ptr<Instances::ClusterUsedResources> clusterUsedResources_ {};
      shared_ptr<Instances::ClusterUsedStorage> clusterUsedStorage_ {};
      shared_ptr<bool> elastic_ {};
      shared_ptr<string> elasticInstanceId_ {};
      shared_ptr<string> elasticOrderState_ {};
      shared_ptr<Instances::ElasticResourceSpec> elasticResourceSpec_ {};
      shared_ptr<bool> ha_ {};
      shared_ptr<Instances::HaResourceSpec> haResourceSpec_ {};
      shared_ptr<vector<string>> haVSwitchIds_ {};
      shared_ptr<vector<Instances::HaVSwitchInfo>> haVSwitchInfo_ {};
      shared_ptr<string> haZoneId_ {};
      // This parameter is required.
      shared_ptr<vector<Instances::HostAliases>> hostAliases_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> monitorType_ {};
      shared_ptr<string> orderState_ {};
      shared_ptr<Instances::OssInfo> ossInfo_ {};
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
      shared_ptr<vector<Instances::VSwitchInfo>> vSwitchInfo_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<Instances::VpcInfo> vpcInfo_ {};
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
} // namespace Foasconsole20211028
#endif
