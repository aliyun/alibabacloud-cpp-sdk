// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
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
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
          DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_TO_JSON(Disk, disk_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(HostName, hostName_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(InnerIpAddress, innerIpAddress_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceResourceType, instanceResourceType_);
          DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
          DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
          DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(NetworkAttributes, networkAttributes_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
          DARABONBA_PTR_TO_JSON(OSName, OSName_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddresses, privateIpAddresses_);
          DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
          DARABONBA_PTR_TO_JSON(PublicIpAddresses, publicIpAddresses_);
          DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
          DARABONBA_PTR_TO_JSON(SpecName, specName_);
          DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
          DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_FROM_JSON(Disk, disk_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(HostName, hostName_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(InnerIpAddress, innerIpAddress_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceResourceType, instanceResourceType_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
          DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
          DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(NetworkAttributes, networkAttributes_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
          DARABONBA_PTR_FROM_JSON(OSName, OSName_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddresses, privateIpAddresses_);
          DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
          DARABONBA_PTR_FROM_JSON(PublicIpAddresses, publicIpAddresses_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
          DARABONBA_PTR_FROM_JSON(SpecName, specName_);
          DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tags, tags_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
          class TagsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagsItem& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, TagsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            TagsItem() = default ;
            TagsItem(const TagsItem &) = default ;
            TagsItem(TagsItem &&) = default ;
            TagsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagsItem() = default ;
            TagsItem& operator=(const TagsItem &) = default ;
            TagsItem& operator=(TagsItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline TagsItem& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline TagsItem& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The tag key.
            shared_ptr<string> tagKey_ {};
            // The tag value.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tags_ == nullptr; };
          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const vector<Tags::TagsItem> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tags::TagsItem>) };
          inline vector<Tags::TagsItem> getTags() { DARABONBA_PTR_GET(tags_, vector<Tags::TagsItem>) };
          inline Tags& setTags(const vector<Tags::TagsItem> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline Tags& setTags(vector<Tags::TagsItem> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        protected:
          shared_ptr<vector<Tags::TagsItem>> tags_ {};
        };

        class SystemDisk : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(DiskId, diskId_);
            DARABONBA_PTR_TO_JSON(DiskName, diskName_);
            DARABONBA_PTR_TO_JSON(Size, size_);
            DARABONBA_PTR_TO_JSON(device_type, deviceType_);
            DARABONBA_PTR_TO_JSON(disk_type, diskType_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(storage, storage_);
            DARABONBA_PTR_TO_JSON(uuid, uuid_);
          };
          friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
            DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
            DARABONBA_PTR_FROM_JSON(device_type, deviceType_);
            DARABONBA_PTR_FROM_JSON(disk_type, diskType_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(storage, storage_);
            DARABONBA_PTR_FROM_JSON(uuid, uuid_);
          };
          SystemDisk() = default ;
          SystemDisk(const SystemDisk &) = default ;
          SystemDisk(SystemDisk &&) = default ;
          SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SystemDisk() = default ;
          SystemDisk& operator=(const SystemDisk &) = default ;
          SystemDisk& operator=(SystemDisk &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->category_ == nullptr
        && this->diskId_ == nullptr && this->diskName_ == nullptr && this->size_ == nullptr && this->deviceType_ == nullptr && this->diskType_ == nullptr
        && this->name_ == nullptr && this->storage_ == nullptr && this->uuid_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // diskId Field Functions 
          bool hasDiskId() const { return this->diskId_ != nullptr;};
          void deleteDiskId() { this->diskId_ = nullptr;};
          inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
          inline SystemDisk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


          // diskName Field Functions 
          bool hasDiskName() const { return this->diskName_ != nullptr;};
          void deleteDiskName() { this->diskName_ = nullptr;};
          inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
          inline SystemDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
          inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


          // deviceType Field Functions 
          bool hasDeviceType() const { return this->deviceType_ != nullptr;};
          void deleteDeviceType() { this->deviceType_ = nullptr;};
          inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
          inline SystemDisk& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


          // diskType Field Functions 
          bool hasDiskType() const { return this->diskType_ != nullptr;};
          void deleteDiskType() { this->diskType_ = nullptr;};
          inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
          inline SystemDisk& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SystemDisk& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // storage Field Functions 
          bool hasStorage() const { return this->storage_ != nullptr;};
          void deleteStorage() { this->storage_ = nullptr;};
          inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
          inline SystemDisk& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


          // uuid Field Functions 
          bool hasUuid() const { return this->uuid_ != nullptr;};
          void deleteUuid() { this->uuid_ = nullptr;};
          inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
          inline SystemDisk& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


        protected:
          // The category of the cloud disk or local disk. Valid values:
          // 
          // *   **file**: local disk.
          // *   **pangu**: ultra disk.
          // *   **local_hdd**: local HDD.
          shared_ptr<string> category_ {};
          // The ID of the disk.
          shared_ptr<string> diskId_ {};
          // The name of the disk.
          shared_ptr<string> diskName_ {};
          // The size of the disk. Unit: MiB.
          shared_ptr<int32_t> size_ {};
          // The extended field of the disk category. Valid values:
          // 
          // *   **file**: local disk.
          // *   **pangu**: ultra disk.
          // *   **local_hdd**: local HDD.
          shared_ptr<string> deviceType_ {};
          // The type of the cloud disk or local disk. Valid values:
          // 
          // *   **system**: system disk.
          // *   **data**: data disk.
          shared_ptr<string> diskType_ {};
          // The name of the disk.
          shared_ptr<string> name_ {};
          // The size of the disk. Unit: MiB.
          shared_ptr<int32_t> storage_ {};
          // The UUID of the disk.
          shared_ptr<string> uuid_ {};
        };

        class SecurityGroupIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityGroupIds& obj) { 
            DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityGroupIds& obj) { 
            DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          };
          SecurityGroupIds() = default ;
          SecurityGroupIds(const SecurityGroupIds &) = default ;
          SecurityGroupIds(SecurityGroupIds &&) = default ;
          SecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityGroupIds() = default ;
          SecurityGroupIds& operator=(const SecurityGroupIds &) = default ;
          SecurityGroupIds& operator=(SecurityGroupIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline const vector<string> & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
          inline vector<string> getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
          inline SecurityGroupIds& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
          inline SecurityGroupIds& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


        protected:
          shared_ptr<vector<string>> securityGroupId_ {};
        };

        class PublicIpAddresses : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PublicIpAddresses& obj) { 
            DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
          };
          friend void from_json(const Darabonba::Json& j, PublicIpAddresses& obj) { 
            DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
          };
          PublicIpAddresses() = default ;
          PublicIpAddresses(const PublicIpAddresses &) = default ;
          PublicIpAddresses(PublicIpAddresses &&) = default ;
          PublicIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PublicIpAddresses() = default ;
          PublicIpAddresses& operator=(const PublicIpAddresses &) = default ;
          PublicIpAddresses& operator=(PublicIpAddresses &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PublicIpAddress : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PublicIpAddress& obj) { 
              DARABONBA_PTR_TO_JSON(GateWay, gateWay_);
              DARABONBA_PTR_TO_JSON(Ip, ip_);
              DARABONBA_PTR_TO_JSON(Isp, isp_);
            };
            friend void from_json(const Darabonba::Json& j, PublicIpAddress& obj) { 
              DARABONBA_PTR_FROM_JSON(GateWay, gateWay_);
              DARABONBA_PTR_FROM_JSON(Ip, ip_);
              DARABONBA_PTR_FROM_JSON(Isp, isp_);
            };
            PublicIpAddress() = default ;
            PublicIpAddress(const PublicIpAddress &) = default ;
            PublicIpAddress(PublicIpAddress &&) = default ;
            PublicIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PublicIpAddress() = default ;
            PublicIpAddress& operator=(const PublicIpAddress &) = default ;
            PublicIpAddress& operator=(PublicIpAddress &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->gateWay_ == nullptr
        && this->ip_ == nullptr && this->isp_ == nullptr; };
            // gateWay Field Functions 
            bool hasGateWay() const { return this->gateWay_ != nullptr;};
            void deleteGateWay() { this->gateWay_ = nullptr;};
            inline string getGateWay() const { DARABONBA_PTR_GET_DEFAULT(gateWay_, "") };
            inline PublicIpAddress& setGateWay(string gateWay) { DARABONBA_PTR_SET_VALUE(gateWay_, gateWay) };


            // ip Field Functions 
            bool hasIp() const { return this->ip_ != nullptr;};
            void deleteIp() { this->ip_ = nullptr;};
            inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
            inline PublicIpAddress& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


            // isp Field Functions 
            bool hasIsp() const { return this->isp_ != nullptr;};
            void deleteIsp() { this->isp_ = nullptr;};
            inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
            inline PublicIpAddress& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


          protected:
            // The gateway.
            shared_ptr<string> gateWay_ {};
            // The IP address.
            shared_ptr<string> ip_ {};
            // The Internet service provider (ISP).
            shared_ptr<string> isp_ {};
          };

          virtual bool empty() const override { return this->publicIpAddress_ == nullptr; };
          // publicIpAddress Field Functions 
          bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
          void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
          inline const vector<PublicIpAddresses::PublicIpAddress> & getPublicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, vector<PublicIpAddresses::PublicIpAddress>) };
          inline vector<PublicIpAddresses::PublicIpAddress> getPublicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, vector<PublicIpAddresses::PublicIpAddress>) };
          inline PublicIpAddresses& setPublicIpAddress(const vector<PublicIpAddresses::PublicIpAddress> & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
          inline PublicIpAddresses& setPublicIpAddress(vector<PublicIpAddresses::PublicIpAddress> && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


        protected:
          shared_ptr<vector<PublicIpAddresses::PublicIpAddress>> publicIpAddress_ {};
        };

        class PublicIpAddress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PublicIpAddress& obj) { 
            DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          };
          friend void from_json(const Darabonba::Json& j, PublicIpAddress& obj) { 
            DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          };
          PublicIpAddress() = default ;
          PublicIpAddress(const PublicIpAddress &) = default ;
          PublicIpAddress(PublicIpAddress &&) = default ;
          PublicIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PublicIpAddress() = default ;
          PublicIpAddress& operator=(const PublicIpAddress &) = default ;
          PublicIpAddress& operator=(PublicIpAddress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipAddress_ == nullptr; };
          // ipAddress Field Functions 
          bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
          void deleteIpAddress() { this->ipAddress_ = nullptr;};
          inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
          inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
          inline PublicIpAddress& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
          inline PublicIpAddress& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


        protected:
          shared_ptr<vector<string>> ipAddress_ {};
        };

        class PrivateIpAddresses : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrivateIpAddresses& obj) { 
            DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
          };
          friend void from_json(const Darabonba::Json& j, PrivateIpAddresses& obj) { 
            DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
          };
          PrivateIpAddresses() = default ;
          PrivateIpAddresses(const PrivateIpAddresses &) = default ;
          PrivateIpAddresses(PrivateIpAddresses &&) = default ;
          PrivateIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrivateIpAddresses() = default ;
          PrivateIpAddresses& operator=(const PrivateIpAddresses &) = default ;
          PrivateIpAddresses& operator=(PrivateIpAddresses &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PrivateIpAddress : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PrivateIpAddress& obj) { 
              DARABONBA_PTR_TO_JSON(GateWay, gateWay_);
              DARABONBA_PTR_TO_JSON(Ip, ip_);
              DARABONBA_PTR_TO_JSON(Isp, isp_);
            };
            friend void from_json(const Darabonba::Json& j, PrivateIpAddress& obj) { 
              DARABONBA_PTR_FROM_JSON(GateWay, gateWay_);
              DARABONBA_PTR_FROM_JSON(Ip, ip_);
              DARABONBA_PTR_FROM_JSON(Isp, isp_);
            };
            PrivateIpAddress() = default ;
            PrivateIpAddress(const PrivateIpAddress &) = default ;
            PrivateIpAddress(PrivateIpAddress &&) = default ;
            PrivateIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PrivateIpAddress() = default ;
            PrivateIpAddress& operator=(const PrivateIpAddress &) = default ;
            PrivateIpAddress& operator=(PrivateIpAddress &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->gateWay_ == nullptr
        && this->ip_ == nullptr && this->isp_ == nullptr; };
            // gateWay Field Functions 
            bool hasGateWay() const { return this->gateWay_ != nullptr;};
            void deleteGateWay() { this->gateWay_ = nullptr;};
            inline string getGateWay() const { DARABONBA_PTR_GET_DEFAULT(gateWay_, "") };
            inline PrivateIpAddress& setGateWay(string gateWay) { DARABONBA_PTR_SET_VALUE(gateWay_, gateWay) };


            // ip Field Functions 
            bool hasIp() const { return this->ip_ != nullptr;};
            void deleteIp() { this->ip_ = nullptr;};
            inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
            inline PrivateIpAddress& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


            // isp Field Functions 
            bool hasIsp() const { return this->isp_ != nullptr;};
            void deleteIsp() { this->isp_ = nullptr;};
            inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
            inline PrivateIpAddress& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


          protected:
            // The gateway.
            shared_ptr<string> gateWay_ {};
            // The IP address.
            shared_ptr<string> ip_ {};
            // The ISP.
            shared_ptr<string> isp_ {};
          };

          virtual bool empty() const override { return this->privateIpAddress_ == nullptr; };
          // privateIpAddress Field Functions 
          bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
          void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
          inline const vector<PrivateIpAddresses::PrivateIpAddress> & getPrivateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, vector<PrivateIpAddresses::PrivateIpAddress>) };
          inline vector<PrivateIpAddresses::PrivateIpAddress> getPrivateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, vector<PrivateIpAddresses::PrivateIpAddress>) };
          inline PrivateIpAddresses& setPrivateIpAddress(const vector<PrivateIpAddresses::PrivateIpAddress> & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
          inline PrivateIpAddresses& setPrivateIpAddress(vector<PrivateIpAddresses::PrivateIpAddress> && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


        protected:
          shared_ptr<vector<PrivateIpAddresses::PrivateIpAddress>> privateIpAddress_ {};
        };

        class NetworkInterfaces : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkInterfaces& obj) { 
            DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkInterfaces& obj) { 
            DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
          };
          NetworkInterfaces() = default ;
          NetworkInterfaces(const NetworkInterfaces &) = default ;
          NetworkInterfaces(NetworkInterfaces &&) = default ;
          NetworkInterfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkInterfaces() = default ;
          NetworkInterfaces& operator=(const NetworkInterfaces &) = default ;
          NetworkInterfaces& operator=(NetworkInterfaces &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NetworkInterfacesItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NetworkInterfacesItem& obj) { 
              DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
              DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
              DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
              DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
              DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, NetworkInterfacesItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
              DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
              DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
              DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
              DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            NetworkInterfacesItem() = default ;
            NetworkInterfacesItem(const NetworkInterfacesItem &) = default ;
            NetworkInterfacesItem(NetworkInterfacesItem &&) = default ;
            NetworkInterfacesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NetworkInterfacesItem() = default ;
            NetworkInterfacesItem& operator=(const NetworkInterfacesItem &) = default ;
            NetworkInterfacesItem& operator=(NetworkInterfacesItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class PrivateIpSets : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const PrivateIpSets& obj) { 
                DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
              };
              friend void from_json(const Darabonba::Json& j, PrivateIpSets& obj) { 
                DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
              };
              PrivateIpSets() = default ;
              PrivateIpSets(const PrivateIpSets &) = default ;
              PrivateIpSets(PrivateIpSets &&) = default ;
              PrivateIpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~PrivateIpSets() = default ;
              PrivateIpSets& operator=(const PrivateIpSets &) = default ;
              PrivateIpSets& operator=(PrivateIpSets &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class PrivateIpSet : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const PrivateIpSet& obj) { 
                  DARABONBA_PTR_TO_JSON(Primary, primary_);
                  DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
                };
                friend void from_json(const Darabonba::Json& j, PrivateIpSet& obj) { 
                  DARABONBA_PTR_FROM_JSON(Primary, primary_);
                  DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
                };
                PrivateIpSet() = default ;
                PrivateIpSet(const PrivateIpSet &) = default ;
                PrivateIpSet(PrivateIpSet &&) = default ;
                PrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~PrivateIpSet() = default ;
                PrivateIpSet& operator=(const PrivateIpSet &) = default ;
                PrivateIpSet& operator=(PrivateIpSet &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->primary_ == nullptr
        && this->privateIpAddress_ == nullptr; };
                // primary Field Functions 
                bool hasPrimary() const { return this->primary_ != nullptr;};
                void deletePrimary() { this->primary_ = nullptr;};
                inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
                inline PrivateIpSet& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


                // privateIpAddress Field Functions 
                bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
                void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
                inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
                inline PrivateIpSet& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


              protected:
                // Indicates whether the IP address is the primary private IP address. Valid values:
                // 
                // *   true
                // *   false
                shared_ptr<bool> primary_ {};
                // The private IP address.
                // 
                // >  This parameter is available only if ScheduleAreaLevel is set to Region and cannot be configured if ScheduleAreaLevel is set to other values. Otherwise, an error occurs. If you specify a private IP address, the number of instances must be 1. The private IP address takes effect only when the private IP address and the vSwitch ID are not empty.
                shared_ptr<string> privateIpAddress_ {};
              };

              virtual bool empty() const override { return this->privateIpSet_ == nullptr; };
              // privateIpSet Field Functions 
              bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
              void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
              inline const vector<PrivateIpSets::PrivateIpSet> & getPrivateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
              inline vector<PrivateIpSets::PrivateIpSet> getPrivateIpSet() { DARABONBA_PTR_GET(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
              inline PrivateIpSets& setPrivateIpSet(const vector<PrivateIpSets::PrivateIpSet> & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
              inline PrivateIpSets& setPrivateIpSet(vector<PrivateIpSets::PrivateIpSet> && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


            protected:
              shared_ptr<vector<PrivateIpSets::PrivateIpSet>> privateIpSet_ {};
            };

            class Ipv6Sets : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Ipv6Sets& obj) { 
                DARABONBA_PTR_TO_JSON(Ipv6Set, ipv6Set_);
              };
              friend void from_json(const Darabonba::Json& j, Ipv6Sets& obj) { 
                DARABONBA_PTR_FROM_JSON(Ipv6Set, ipv6Set_);
              };
              Ipv6Sets() = default ;
              Ipv6Sets(const Ipv6Sets &) = default ;
              Ipv6Sets(Ipv6Sets &&) = default ;
              Ipv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Ipv6Sets() = default ;
              Ipv6Sets& operator=(const Ipv6Sets &) = default ;
              Ipv6Sets& operator=(Ipv6Sets &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Ipv6Set : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Ipv6Set& obj) { 
                  DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
                };
                friend void from_json(const Darabonba::Json& j, Ipv6Set& obj) { 
                  DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
                };
                Ipv6Set() = default ;
                Ipv6Set(const Ipv6Set &) = default ;
                Ipv6Set(Ipv6Set &&) = default ;
                Ipv6Set(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Ipv6Set() = default ;
                Ipv6Set& operator=(const Ipv6Set &) = default ;
                Ipv6Set& operator=(Ipv6Set &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->ipv6Address_ == nullptr; };
                // ipv6Address Field Functions 
                bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
                void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
                inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
                inline Ipv6Set& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


              protected:
                // IPv6 addresses N of the ENI. You can specify multiple IPv6 addresses. Valid values of N: 1 to 100.
                shared_ptr<string> ipv6Address_ {};
              };

              virtual bool empty() const override { return this->ipv6Set_ == nullptr; };
              // ipv6Set Field Functions 
              bool hasIpv6Set() const { return this->ipv6Set_ != nullptr;};
              void deleteIpv6Set() { this->ipv6Set_ = nullptr;};
              inline const vector<Ipv6Sets::Ipv6Set> & getIpv6Set() const { DARABONBA_PTR_GET_CONST(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
              inline vector<Ipv6Sets::Ipv6Set> getIpv6Set() { DARABONBA_PTR_GET(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
              inline Ipv6Sets& setIpv6Set(const vector<Ipv6Sets::Ipv6Set> & ipv6Set) { DARABONBA_PTR_SET_VALUE(ipv6Set_, ipv6Set) };
              inline Ipv6Sets& setIpv6Set(vector<Ipv6Sets::Ipv6Set> && ipv6Set) { DARABONBA_PTR_SET_RVALUE(ipv6Set_, ipv6Set) };


            protected:
              shared_ptr<vector<Ipv6Sets::Ipv6Set>> ipv6Set_ {};
            };

            virtual bool empty() const override { return this->ipv6Sets_ == nullptr
        && this->macAddress_ == nullptr && this->networkInterfaceId_ == nullptr && this->primaryIpAddress_ == nullptr && this->privateIpSets_ == nullptr && this->type_ == nullptr; };
            // ipv6Sets Field Functions 
            bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
            void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
            inline const NetworkInterfacesItem::Ipv6Sets & getIpv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, NetworkInterfacesItem::Ipv6Sets) };
            inline NetworkInterfacesItem::Ipv6Sets getIpv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, NetworkInterfacesItem::Ipv6Sets) };
            inline NetworkInterfacesItem& setIpv6Sets(const NetworkInterfacesItem::Ipv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
            inline NetworkInterfacesItem& setIpv6Sets(NetworkInterfacesItem::Ipv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


            // macAddress Field Functions 
            bool hasMacAddress() const { return this->macAddress_ != nullptr;};
            void deleteMacAddress() { this->macAddress_ = nullptr;};
            inline string getMacAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
            inline NetworkInterfacesItem& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


            // networkInterfaceId Field Functions 
            bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
            void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
            inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
            inline NetworkInterfacesItem& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


            // primaryIpAddress Field Functions 
            bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
            void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
            inline string getPrimaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
            inline NetworkInterfacesItem& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


            // privateIpSets Field Functions 
            bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
            void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
            inline const NetworkInterfacesItem::PrivateIpSets & getPrivateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, NetworkInterfacesItem::PrivateIpSets) };
            inline NetworkInterfacesItem::PrivateIpSets getPrivateIpSets() { DARABONBA_PTR_GET(privateIpSets_, NetworkInterfacesItem::PrivateIpSets) };
            inline NetworkInterfacesItem& setPrivateIpSets(const NetworkInterfacesItem::PrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
            inline NetworkInterfacesItem& setPrivateIpSets(NetworkInterfacesItem::PrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline NetworkInterfacesItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The IPv6 addresses of the ENI. This parameter has a value only when `AdditionalAttributes.N` is set to `NETWORK_PRIMARY_ENI_IP`.
            shared_ptr<NetworkInterfacesItem::Ipv6Sets> ipv6Sets_ {};
            // The MAC address of the ENI.
            shared_ptr<string> macAddress_ {};
            // The ID of the ENI.
            shared_ptr<string> networkInterfaceId_ {};
            // The primary IP address of the ENI.
            shared_ptr<string> primaryIpAddress_ {};
            // The private IP addresses of the ENI.
            shared_ptr<NetworkInterfacesItem::PrivateIpSets> privateIpSets_ {};
            // The type of the disk. Valid values:
            // 
            // *   system: system disk.
            // *   data: data disk.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->networkInterfaces_ == nullptr; };
          // networkInterfaces Field Functions 
          bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
          void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
          inline const vector<NetworkInterfaces::NetworkInterfacesItem> & getNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, vector<NetworkInterfaces::NetworkInterfacesItem>) };
          inline vector<NetworkInterfaces::NetworkInterfacesItem> getNetworkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, vector<NetworkInterfaces::NetworkInterfacesItem>) };
          inline NetworkInterfaces& setNetworkInterfaces(const vector<NetworkInterfaces::NetworkInterfacesItem> & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
          inline NetworkInterfaces& setNetworkInterfaces(vector<NetworkInterfaces::NetworkInterfacesItem> && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


        protected:
          shared_ptr<vector<NetworkInterfaces::NetworkInterfacesItem>> networkInterfaces_ {};
        };

        class NetworkAttributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkAttributes& obj) { 
            DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
            DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkAttributes& obj) { 
            DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
            DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          };
          NetworkAttributes() = default ;
          NetworkAttributes(const NetworkAttributes &) = default ;
          NetworkAttributes(NetworkAttributes &&) = default ;
          NetworkAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkAttributes() = default ;
          NetworkAttributes& operator=(const NetworkAttributes &) = default ;
          NetworkAttributes& operator=(NetworkAttributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PrivateIpAddress : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PrivateIpAddress& obj) { 
              DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
            };
            friend void from_json(const Darabonba::Json& j, PrivateIpAddress& obj) { 
              DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
            };
            PrivateIpAddress() = default ;
            PrivateIpAddress(const PrivateIpAddress &) = default ;
            PrivateIpAddress(PrivateIpAddress &&) = default ;
            PrivateIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PrivateIpAddress() = default ;
            PrivateIpAddress& operator=(const PrivateIpAddress &) = default ;
            PrivateIpAddress& operator=(PrivateIpAddress &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ipAddress_ == nullptr; };
            // ipAddress Field Functions 
            bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
            void deleteIpAddress() { this->ipAddress_ = nullptr;};
            inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
            inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
            inline PrivateIpAddress& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
            inline PrivateIpAddress& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


          protected:
            shared_ptr<vector<string>> ipAddress_ {};
          };

          virtual bool empty() const override { return this->networkId_ == nullptr
        && this->privateIpAddress_ == nullptr && this->vSwitchId_ == nullptr; };
          // networkId Field Functions 
          bool hasNetworkId() const { return this->networkId_ != nullptr;};
          void deleteNetworkId() { this->networkId_ = nullptr;};
          inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
          inline NetworkAttributes& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


          // privateIpAddress Field Functions 
          bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
          void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
          inline const NetworkAttributes::PrivateIpAddress & getPrivateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, NetworkAttributes::PrivateIpAddress) };
          inline NetworkAttributes::PrivateIpAddress getPrivateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, NetworkAttributes::PrivateIpAddress) };
          inline NetworkAttributes& setPrivateIpAddress(const NetworkAttributes::PrivateIpAddress & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
          inline NetworkAttributes& setPrivateIpAddress(NetworkAttributes::PrivateIpAddress && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline NetworkAttributes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        protected:
          // The ID of the network.
          shared_ptr<string> networkId_ {};
          // Details of the private IP addresses.
          shared_ptr<NetworkAttributes::PrivateIpAddress> privateIpAddress_ {};
          // The vSwitch ID.
          shared_ptr<string> vSwitchId_ {};
        };

        class InnerIpAddress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InnerIpAddress& obj) { 
            DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          };
          friend void from_json(const Darabonba::Json& j, InnerIpAddress& obj) { 
            DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          };
          InnerIpAddress() = default ;
          InnerIpAddress(const InnerIpAddress &) = default ;
          InnerIpAddress(InnerIpAddress &&) = default ;
          InnerIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InnerIpAddress() = default ;
          InnerIpAddress& operator=(const InnerIpAddress &) = default ;
          InnerIpAddress& operator=(InnerIpAddress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipAddress_ == nullptr; };
          // ipAddress Field Functions 
          bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
          void deleteIpAddress() { this->ipAddress_ = nullptr;};
          inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
          inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
          inline InnerIpAddress& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
          inline InnerIpAddress& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


        protected:
          shared_ptr<vector<string>> ipAddress_ {};
        };

        class DataDisk : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
            DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
          };
          friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
            DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
          };
          DataDisk() = default ;
          DataDisk(const DataDisk &) = default ;
          DataDisk(DataDisk &&) = default ;
          DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataDisk() = default ;
          DataDisk& operator=(const DataDisk &) = default ;
          DataDisk& operator=(DataDisk &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DataDiskItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DataDiskItem& obj) { 
              DARABONBA_PTR_TO_JSON(Category, category_);
              DARABONBA_PTR_TO_JSON(DiskId, diskId_);
              DARABONBA_PTR_TO_JSON(DiskName, diskName_);
              DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
              DARABONBA_PTR_TO_JSON(EncryptKeyId, encryptKeyId_);
              DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
              DARABONBA_PTR_TO_JSON(Size, size_);
              DARABONBA_PTR_TO_JSON(device_type, deviceType_);
              DARABONBA_PTR_TO_JSON(disk_type, diskType_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(storage, storage_);
              DARABONBA_PTR_TO_JSON(uuid, uuid_);
            };
            friend void from_json(const Darabonba::Json& j, DataDiskItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Category, category_);
              DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
              DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
              DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
              DARABONBA_PTR_FROM_JSON(EncryptKeyId, encryptKeyId_);
              DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
              DARABONBA_PTR_FROM_JSON(Size, size_);
              DARABONBA_PTR_FROM_JSON(device_type, deviceType_);
              DARABONBA_PTR_FROM_JSON(disk_type, diskType_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(storage, storage_);
              DARABONBA_PTR_FROM_JSON(uuid, uuid_);
            };
            DataDiskItem() = default ;
            DataDiskItem(const DataDiskItem &) = default ;
            DataDiskItem(DataDiskItem &&) = default ;
            DataDiskItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DataDiskItem() = default ;
            DataDiskItem& operator=(const DataDiskItem &) = default ;
            DataDiskItem& operator=(DataDiskItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->category_ == nullptr
        && this->diskId_ == nullptr && this->diskName_ == nullptr && this->diskSize_ == nullptr && this->encryptKeyId_ == nullptr && this->encrypted_ == nullptr
        && this->size_ == nullptr && this->deviceType_ == nullptr && this->diskType_ == nullptr && this->name_ == nullptr && this->storage_ == nullptr
        && this->uuid_ == nullptr; };
            // category Field Functions 
            bool hasCategory() const { return this->category_ != nullptr;};
            void deleteCategory() { this->category_ = nullptr;};
            inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
            inline DataDiskItem& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


            // diskId Field Functions 
            bool hasDiskId() const { return this->diskId_ != nullptr;};
            void deleteDiskId() { this->diskId_ = nullptr;};
            inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
            inline DataDiskItem& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


            // diskName Field Functions 
            bool hasDiskName() const { return this->diskName_ != nullptr;};
            void deleteDiskName() { this->diskName_ = nullptr;};
            inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
            inline DataDiskItem& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


            // diskSize Field Functions 
            bool hasDiskSize() const { return this->diskSize_ != nullptr;};
            void deleteDiskSize() { this->diskSize_ = nullptr;};
            inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
            inline DataDiskItem& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


            // encryptKeyId Field Functions 
            bool hasEncryptKeyId() const { return this->encryptKeyId_ != nullptr;};
            void deleteEncryptKeyId() { this->encryptKeyId_ = nullptr;};
            inline string getEncryptKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptKeyId_, "") };
            inline DataDiskItem& setEncryptKeyId(string encryptKeyId) { DARABONBA_PTR_SET_VALUE(encryptKeyId_, encryptKeyId) };


            // encrypted Field Functions 
            bool hasEncrypted() const { return this->encrypted_ != nullptr;};
            void deleteEncrypted() { this->encrypted_ = nullptr;};
            inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
            inline DataDiskItem& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


            // size Field Functions 
            bool hasSize() const { return this->size_ != nullptr;};
            void deleteSize() { this->size_ = nullptr;};
            inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
            inline DataDiskItem& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


            // deviceType Field Functions 
            bool hasDeviceType() const { return this->deviceType_ != nullptr;};
            void deleteDeviceType() { this->deviceType_ = nullptr;};
            inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
            inline DataDiskItem& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


            // diskType Field Functions 
            bool hasDiskType() const { return this->diskType_ != nullptr;};
            void deleteDiskType() { this->diskType_ = nullptr;};
            inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
            inline DataDiskItem& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline DataDiskItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // storage Field Functions 
            bool hasStorage() const { return this->storage_ != nullptr;};
            void deleteStorage() { this->storage_ = nullptr;};
            inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
            inline DataDiskItem& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


            // uuid Field Functions 
            bool hasUuid() const { return this->uuid_ != nullptr;};
            void deleteUuid() { this->uuid_ = nullptr;};
            inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
            inline DataDiskItem& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


          protected:
            // The category of the cloud disk or local disk. Valid values:
            // 
            // *   **file**: local disk.
            // *   **pangu**: ultra disk.
            // *   **local_hdd**: local HDD.
            shared_ptr<string> category_ {};
            // The ID of the disk.
            shared_ptr<string> diskId_ {};
            // The name of the disk.
            shared_ptr<string> diskName_ {};
            // The size of the disk. Unit: GiB.
            shared_ptr<int32_t> diskSize_ {};
            // The KMS key ID used by the cloud drive.
            shared_ptr<string> encryptKeyId_ {};
            // Specifies whether to encrypt the disk.
            shared_ptr<bool> encrypted_ {};
            // The size of the disk. Unit: MiB.
            shared_ptr<int32_t> size_ {};
            // The extended field of the disk category. Valid values:
            // 
            // *   **file**: local disk.
            // *   **pangu**: ultra disk.
            // *   **local_hdd**: local HDD.
            shared_ptr<string> deviceType_ {};
            // The type of the cloud disk or local disk. Valid values:
            // 
            // **system**: system disk. **data**: data disk.
            shared_ptr<string> diskType_ {};
            // The name of the disk.
            shared_ptr<string> name_ {};
            // The size of the disk. Unit: MiB.
            shared_ptr<int32_t> storage_ {};
            // The UUID of the disk.
            shared_ptr<string> uuid_ {};
          };

          virtual bool empty() const override { return this->dataDisk_ == nullptr; };
          // dataDisk Field Functions 
          bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
          void deleteDataDisk() { this->dataDisk_ = nullptr;};
          inline const vector<DataDisk::DataDiskItem> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<DataDisk::DataDiskItem>) };
          inline vector<DataDisk::DataDiskItem> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<DataDisk::DataDiskItem>) };
          inline DataDisk& setDataDisk(const vector<DataDisk::DataDiskItem> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
          inline DataDisk& setDataDisk(vector<DataDisk::DataDiskItem> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


        protected:
          shared_ptr<vector<DataDisk::DataDiskItem>> dataDisk_ {};
        };

        virtual bool empty() const override { return this->autoReleaseTime_ == nullptr
        && this->cpu_ == nullptr && this->creationTime_ == nullptr && this->dataDisk_ == nullptr && this->deletionProtection_ == nullptr && this->disk_ == nullptr
        && this->ensRegionId_ == nullptr && this->expiredTime_ == nullptr && this->hostName_ == nullptr && this->imageId_ == nullptr && this->innerIpAddress_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceResourceType_ == nullptr && this->instanceTypeFamily_ == nullptr && this->internetMaxBandwidthIn_ == nullptr
        && this->internetMaxBandwidthOut_ == nullptr && this->keyPairName_ == nullptr && this->memory_ == nullptr && this->networkAttributes_ == nullptr && this->networkInterfaces_ == nullptr
        && this->OSName_ == nullptr && this->privateIpAddresses_ == nullptr && this->publicIpAddress_ == nullptr && this->publicIpAddresses_ == nullptr && this->securityGroupIds_ == nullptr
        && this->serviceStatus_ == nullptr && this->specName_ == nullptr && this->spotStrategy_ == nullptr && this->status_ == nullptr && this->systemDisk_ == nullptr
        && this->tags_ == nullptr; };
        // autoReleaseTime Field Functions 
        bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
        void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
        inline string getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
        inline Instance& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
        inline Instance& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Instance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // dataDisk Field Functions 
        bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
        void deleteDataDisk() { this->dataDisk_ = nullptr;};
        inline const Instance::DataDisk & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, Instance::DataDisk) };
        inline Instance::DataDisk getDataDisk() { DARABONBA_PTR_GET(dataDisk_, Instance::DataDisk) };
        inline Instance& setDataDisk(const Instance::DataDisk & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
        inline Instance& setDataDisk(Instance::DataDisk && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


        // deletionProtection Field Functions 
        bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
        void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
        inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
        inline Instance& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline Instance& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline Instance& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline Instance& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // hostName Field Functions 
        bool hasHostName() const { return this->hostName_ != nullptr;};
        void deleteHostName() { this->hostName_ = nullptr;};
        inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
        inline Instance& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Instance& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // innerIpAddress Field Functions 
        bool hasInnerIpAddress() const { return this->innerIpAddress_ != nullptr;};
        void deleteInnerIpAddress() { this->innerIpAddress_ = nullptr;};
        inline const Instance::InnerIpAddress & getInnerIpAddress() const { DARABONBA_PTR_GET_CONST(innerIpAddress_, Instance::InnerIpAddress) };
        inline Instance::InnerIpAddress getInnerIpAddress() { DARABONBA_PTR_GET(innerIpAddress_, Instance::InnerIpAddress) };
        inline Instance& setInnerIpAddress(const Instance::InnerIpAddress & innerIpAddress) { DARABONBA_PTR_SET_VALUE(innerIpAddress_, innerIpAddress) };
        inline Instance& setInnerIpAddress(Instance::InnerIpAddress && innerIpAddress) { DARABONBA_PTR_SET_RVALUE(innerIpAddress_, innerIpAddress) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceResourceType Field Functions 
        bool hasInstanceResourceType() const { return this->instanceResourceType_ != nullptr;};
        void deleteInstanceResourceType() { this->instanceResourceType_ = nullptr;};
        inline string getInstanceResourceType() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceType_, "") };
        inline Instance& setInstanceResourceType(string instanceResourceType) { DARABONBA_PTR_SET_VALUE(instanceResourceType_, instanceResourceType) };


        // instanceTypeFamily Field Functions 
        bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
        void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
        inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
        inline Instance& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


        // internetMaxBandwidthIn Field Functions 
        bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
        void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
        inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
        inline Instance& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


        // internetMaxBandwidthOut Field Functions 
        bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
        void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
        inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
        inline Instance& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


        // keyPairName Field Functions 
        bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
        void deleteKeyPairName() { this->keyPairName_ = nullptr;};
        inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
        inline Instance& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline Instance& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // networkAttributes Field Functions 
        bool hasNetworkAttributes() const { return this->networkAttributes_ != nullptr;};
        void deleteNetworkAttributes() { this->networkAttributes_ = nullptr;};
        inline const Instance::NetworkAttributes & getNetworkAttributes() const { DARABONBA_PTR_GET_CONST(networkAttributes_, Instance::NetworkAttributes) };
        inline Instance::NetworkAttributes getNetworkAttributes() { DARABONBA_PTR_GET(networkAttributes_, Instance::NetworkAttributes) };
        inline Instance& setNetworkAttributes(const Instance::NetworkAttributes & networkAttributes) { DARABONBA_PTR_SET_VALUE(networkAttributes_, networkAttributes) };
        inline Instance& setNetworkAttributes(Instance::NetworkAttributes && networkAttributes) { DARABONBA_PTR_SET_RVALUE(networkAttributes_, networkAttributes) };


        // networkInterfaces Field Functions 
        bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
        void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
        inline const Instance::NetworkInterfaces & getNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, Instance::NetworkInterfaces) };
        inline Instance::NetworkInterfaces getNetworkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, Instance::NetworkInterfaces) };
        inline Instance& setNetworkInterfaces(const Instance::NetworkInterfaces & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
        inline Instance& setNetworkInterfaces(Instance::NetworkInterfaces && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


        // OSName Field Functions 
        bool hasOSName() const { return this->OSName_ != nullptr;};
        void deleteOSName() { this->OSName_ = nullptr;};
        inline string getOSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
        inline Instance& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


        // privateIpAddresses Field Functions 
        bool hasPrivateIpAddresses() const { return this->privateIpAddresses_ != nullptr;};
        void deletePrivateIpAddresses() { this->privateIpAddresses_ = nullptr;};
        inline const Instance::PrivateIpAddresses & getPrivateIpAddresses() const { DARABONBA_PTR_GET_CONST(privateIpAddresses_, Instance::PrivateIpAddresses) };
        inline Instance::PrivateIpAddresses getPrivateIpAddresses() { DARABONBA_PTR_GET(privateIpAddresses_, Instance::PrivateIpAddresses) };
        inline Instance& setPrivateIpAddresses(const Instance::PrivateIpAddresses & privateIpAddresses) { DARABONBA_PTR_SET_VALUE(privateIpAddresses_, privateIpAddresses) };
        inline Instance& setPrivateIpAddresses(Instance::PrivateIpAddresses && privateIpAddresses) { DARABONBA_PTR_SET_RVALUE(privateIpAddresses_, privateIpAddresses) };


        // publicIpAddress Field Functions 
        bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
        void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
        inline const Instance::PublicIpAddress & getPublicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, Instance::PublicIpAddress) };
        inline Instance::PublicIpAddress getPublicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, Instance::PublicIpAddress) };
        inline Instance& setPublicIpAddress(const Instance::PublicIpAddress & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
        inline Instance& setPublicIpAddress(Instance::PublicIpAddress && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


        // publicIpAddresses Field Functions 
        bool hasPublicIpAddresses() const { return this->publicIpAddresses_ != nullptr;};
        void deletePublicIpAddresses() { this->publicIpAddresses_ = nullptr;};
        inline const Instance::PublicIpAddresses & getPublicIpAddresses() const { DARABONBA_PTR_GET_CONST(publicIpAddresses_, Instance::PublicIpAddresses) };
        inline Instance::PublicIpAddresses getPublicIpAddresses() { DARABONBA_PTR_GET(publicIpAddresses_, Instance::PublicIpAddresses) };
        inline Instance& setPublicIpAddresses(const Instance::PublicIpAddresses & publicIpAddresses) { DARABONBA_PTR_SET_VALUE(publicIpAddresses_, publicIpAddresses) };
        inline Instance& setPublicIpAddresses(Instance::PublicIpAddresses && publicIpAddresses) { DARABONBA_PTR_SET_RVALUE(publicIpAddresses_, publicIpAddresses) };


        // securityGroupIds Field Functions 
        bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
        void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
        inline const Instance::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, Instance::SecurityGroupIds) };
        inline Instance::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, Instance::SecurityGroupIds) };
        inline Instance& setSecurityGroupIds(const Instance::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
        inline Instance& setSecurityGroupIds(Instance::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


        // serviceStatus Field Functions 
        bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
        void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
        inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
        inline Instance& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


        // specName Field Functions 
        bool hasSpecName() const { return this->specName_ != nullptr;};
        void deleteSpecName() { this->specName_ = nullptr;};
        inline string getSpecName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
        inline Instance& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


        // spotStrategy Field Functions 
        bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
        void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
        inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
        inline Instance& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // systemDisk Field Functions 
        bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
        void deleteSystemDisk() { this->systemDisk_ = nullptr;};
        inline const Instance::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, Instance::SystemDisk) };
        inline Instance::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, Instance::SystemDisk) };
        inline Instance& setSystemDisk(const Instance::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
        inline Instance& setSystemDisk(Instance::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Instance::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Instance::Tags) };
        inline Instance::Tags getTags() { DARABONBA_PTR_GET(tags_, Instance::Tags) };
        inline Instance& setTags(const Instance::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Instance& setTags(Instance::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The automatic release time of the instance.
        shared_ptr<string> autoReleaseTime_ {};
        // The number of vCPUs.
        shared_ptr<string> cpu_ {};
        // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // Details of the data disk.
        shared_ptr<Instance::DataDisk> dataDisk_ {};
        shared_ptr<bool> deletionProtection_ {};
        // The total size of the disk. Unit: MiB.
        shared_ptr<int32_t> disk_ {};
        // The region ID of the instance.
        shared_ptr<string> ensRegionId_ {};
        // The expiration time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> expiredTime_ {};
        // The hostname of the instance.
        // 
        // *   The hostname cannot start or end with a period (.) or hyphen (-). It cannot contain consecutive periods (.) or hyphens (-).
        // *   For a Windows instance, the hostname must be 2 to 15 characters in length and can contain letters, digits, and hyphens (-). The hostname cannot contain periods (.) or contain only digits.
        // *   For an instance that runs another operating system such as Linux, the hostname must be 2 to 64 characters in length. You can use periods (.) to separate the hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-).
        shared_ptr<string> hostName_ {};
        // The ID of the image.
        shared_ptr<string> imageId_ {};
        // The private IP addresses of the instances.
        shared_ptr<Instance::InnerIpAddress> innerIpAddress_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // The category of the instance. Valid values:
        // 
        // *   EnsInstance: ENS instances that you purchase.
        // *   EnsService: ENS instances that belong to edge services.
        // *   BuildMachine: ENS instances that are configured with image builders.
        // *   EnsPostPaidInstance: pay-as-you-go ENS instances that you purchase.
        shared_ptr<string> instanceResourceType_ {};
        // The instance family. Valid values:
        // 
        // *   x86_vm: x86-based computing instance.
        // *   x86_pm: x86-based physical machine.
        // *   x86_bmi: x86-based bare metal instance.
        // *   x86_bm: bare metal instance with the SmartNIC.
        // *   pc_bmi: heterogeneous bare metal instance.
        // *   pc_vm: heterogeneous virtual machine.
        // *   arm_bmi: Arm-based computing instance.
        shared_ptr<string> instanceTypeFamily_ {};
        // The maximum outbound bandwidth. Unit: Mbit/s.
        shared_ptr<int32_t> internetMaxBandwidthIn_ {};
        // The minimum inbound bandwidth. Unit: Mbit/s.
        shared_ptr<int32_t> internetMaxBandwidthOut_ {};
        // The name of the SSH key pair.
        shared_ptr<string> keyPairName_ {};
        // The memory size. Unit: MB.
        shared_ptr<int32_t> memory_ {};
        // Details of the network.
        shared_ptr<Instance::NetworkAttributes> networkAttributes_ {};
        // The ENI attached to the instance.
        shared_ptr<Instance::NetworkInterfaces> networkInterfaces_ {};
        // The name of the image.
        shared_ptr<string> OSName_ {};
        // Details of the private IP addresses.
        shared_ptr<Instance::PrivateIpAddresses> privateIpAddresses_ {};
        // The public IP addresses of the instances.
        shared_ptr<Instance::PublicIpAddress> publicIpAddress_ {};
        // Details of the public IP addresses.
        shared_ptr<Instance::PublicIpAddresses> publicIpAddresses_ {};
        // The IDs of the security groups.
        shared_ptr<Instance::SecurityGroupIds> securityGroupIds_ {};
        // The ID of your Alibaba Cloud account.
        shared_ptr<string> serviceStatus_ {};
        // The instance type.
        shared_ptr<string> specName_ {};
        // The bidding policy of the preemptible instance.
        shared_ptr<string> spotStrategy_ {};
        // The status of the instance. Valid values:
        // 
        // *   Running
        // *   Expired
        // *   Stopped
        shared_ptr<string> status_ {};
        // Details of the system disk.
        shared_ptr<Instance::SystemDisk> systemDisk_ {};
        // The tags of the instance.
        // 
        // >  This operation does not return tag information. You can call this operation in combination with the tag-related operations.
        shared_ptr<Instance::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<Instances::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Instances::Instance>) };
      inline vector<Instances::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Instances::Instance>) };
      inline Instances& setInstance(const vector<Instances::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Instances& setInstance(vector<Instances::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<Instances::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instances_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeInstancesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeInstancesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody& setInstances(const DescribeInstancesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstancesResponseBody& setInstances(DescribeInstancesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


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


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned service code. 0 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The information about the instance is returned in an array of InstanceAttributesType.
    shared_ptr<DescribeInstancesResponseBody::Instances> instances_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
