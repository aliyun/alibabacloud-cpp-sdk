// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Combination, combination_);
        DARABONBA_PTR_TO_JSON(CombinationInstanceId, combinationInstanceId_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DdosStatus, ddosStatus_);
        DARABONBA_PTR_TO_JSON(DisableReason, disableReason_);
        DARABONBA_PTR_TO_JSON(Disks, disks_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InnerIpAddress, innerIpAddress_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(NetworkAttributes, networkAttributes_);
        DARABONBA_PTR_TO_JSON(PlanId, planId_);
        DARABONBA_PTR_TO_JSON(PlanType, planType_);
        DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Combination, combination_);
        DARABONBA_PTR_FROM_JSON(CombinationInstanceId, combinationInstanceId_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DdosStatus, ddosStatus_);
        DARABONBA_PTR_FROM_JSON(DisableReason, disableReason_);
        DARABONBA_PTR_FROM_JSON(Disks, disks_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InnerIpAddress, innerIpAddress_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(NetworkAttributes, networkAttributes_);
        DARABONBA_PTR_FROM_JSON(PlanId, planId_);
        DARABONBA_PTR_FROM_JSON(PlanType, planType_);
        DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
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
        // The tag key of the instance.
        shared_ptr<string> key_ {};
        // The tag value of the instance.
        shared_ptr<string> value_ {};
      };

      class ResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
          DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
          DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
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
        virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->cpu_ == nullptr && this->diskCategory_ == nullptr && this->diskSize_ == nullptr && this->flow_ == nullptr && this->memory_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
        inline ResourceSpec& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline ResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // diskCategory Field Functions 
        bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
        void deleteDiskCategory() { this->diskCategory_ = nullptr;};
        inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
        inline ResourceSpec& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


        // diskSize Field Functions 
        bool hasDiskSize() const { return this->diskSize_ != nullptr;};
        void deleteDiskSize() { this->diskSize_ = nullptr;};
        inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
        inline ResourceSpec& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline double getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, 0.0) };
        inline ResourceSpec& setFlow(double flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline double getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
        inline ResourceSpec& setMemory(double memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      protected:
        // The bandwidth. Unit: Mbit/s.
        shared_ptr<int32_t> bandwidth_ {};
        // The number of vCPUs.
        shared_ptr<int32_t> cpu_ {};
        // The cloud disk category. Valid values:
        // 
        // - ESSD: ESSD at performance level (PL) 0.
        // - SSD: Standard SSD.
        // - CLOUD_EFFICIENCY: Ultra disk.
        shared_ptr<string> diskCategory_ {};
        // The cloud disk size. Unit: GiB.
        shared_ptr<int32_t> diskSize_ {};
        // The data transfer quota.
        // 
        // - A value of 0 indicates a bandwidth-based instance.
        // - A non-zero value indicates a data transfer plan-based instance.
        shared_ptr<double> flow_ {};
        // The memory size. Unit: GiB.
        shared_ptr<double> memory_ {};
      };

      class NetworkAttributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkAttributes& obj) { 
          DARABONBA_PTR_TO_JSON(PeakBandwidth, peakBandwidth_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
          DARABONBA_PTR_TO_JSON(PublicIpDdosStatus, publicIpDdosStatus_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkAttributes& obj) { 
          DARABONBA_PTR_FROM_JSON(PeakBandwidth, peakBandwidth_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
          DARABONBA_PTR_FROM_JSON(PublicIpDdosStatus, publicIpDdosStatus_);
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
        virtual bool empty() const override { return this->peakBandwidth_ == nullptr
        && this->privateIpAddress_ == nullptr && this->publicIpAddress_ == nullptr && this->publicIpDdosStatus_ == nullptr; };
        // peakBandwidth Field Functions 
        bool hasPeakBandwidth() const { return this->peakBandwidth_ != nullptr;};
        void deletePeakBandwidth() { this->peakBandwidth_ = nullptr;};
        inline int32_t getPeakBandwidth() const { DARABONBA_PTR_GET_DEFAULT(peakBandwidth_, 0) };
        inline NetworkAttributes& setPeakBandwidth(int32_t peakBandwidth) { DARABONBA_PTR_SET_VALUE(peakBandwidth_, peakBandwidth) };


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
        inline NetworkAttributes& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


        // publicIpAddress Field Functions 
        bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
        void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
        inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
        inline NetworkAttributes& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


        // publicIpDdosStatus Field Functions 
        bool hasPublicIpDdosStatus() const { return this->publicIpDdosStatus_ != nullptr;};
        void deletePublicIpDdosStatus() { this->publicIpDdosStatus_ = nullptr;};
        inline string getPublicIpDdosStatus() const { DARABONBA_PTR_GET_DEFAULT(publicIpDdosStatus_, "") };
        inline NetworkAttributes& setPublicIpDdosStatus(string publicIpDdosStatus) { DARABONBA_PTR_SET_VALUE(publicIpDdosStatus_, publicIpDdosStatus) };


      protected:
        // The peak public bandwidth. Unit: Mbit/s.
        shared_ptr<int32_t> peakBandwidth_ {};
        // The private IP address.
        shared_ptr<string> privateIpAddress_ {};
        // The public IP address.
        shared_ptr<string> publicIpAddress_ {};
        // The DDoS status of the public IP address.
        shared_ptr<string> publicIpDdosStatus_ {};
      };

      class Image : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Image& obj) { 
          DARABONBA_PTR_TO_JSON(ImageContact, imageContact_);
          DARABONBA_PTR_TO_JSON(ImageIconUrl, imageIconUrl_);
          DARABONBA_PTR_TO_JSON(ImageName, imageName_);
          DARABONBA_PTR_TO_JSON(ImageType, imageType_);
          DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
          DARABONBA_PTR_TO_JSON(OsType, osType_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageContact, imageContact_);
          DARABONBA_PTR_FROM_JSON(ImageIconUrl, imageIconUrl_);
          DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
          DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
          DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
          DARABONBA_PTR_FROM_JSON(OsType, osType_);
        };
        Image() = default ;
        Image(const Image &) = default ;
        Image(Image &&) = default ;
        Image(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Image() = default ;
        Image& operator=(const Image &) = default ;
        Image& operator=(Image &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageContact_ == nullptr
        && this->imageIconUrl_ == nullptr && this->imageName_ == nullptr && this->imageType_ == nullptr && this->imageVersion_ == nullptr && this->osType_ == nullptr; };
        // imageContact Field Functions 
        bool hasImageContact() const { return this->imageContact_ != nullptr;};
        void deleteImageContact() { this->imageContact_ = nullptr;};
        inline string getImageContact() const { DARABONBA_PTR_GET_DEFAULT(imageContact_, "") };
        inline Image& setImageContact(string imageContact) { DARABONBA_PTR_SET_VALUE(imageContact_, imageContact) };


        // imageIconUrl Field Functions 
        bool hasImageIconUrl() const { return this->imageIconUrl_ != nullptr;};
        void deleteImageIconUrl() { this->imageIconUrl_ = nullptr;};
        inline string getImageIconUrl() const { DARABONBA_PTR_GET_DEFAULT(imageIconUrl_, "") };
        inline Image& setImageIconUrl(string imageIconUrl) { DARABONBA_PTR_SET_VALUE(imageIconUrl_, imageIconUrl) };


        // imageName Field Functions 
        bool hasImageName() const { return this->imageName_ != nullptr;};
        void deleteImageName() { this->imageName_ = nullptr;};
        inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
        inline Image& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


        // imageType Field Functions 
        bool hasImageType() const { return this->imageType_ != nullptr;};
        void deleteImageType() { this->imageType_ = nullptr;};
        inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
        inline Image& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


        // imageVersion Field Functions 
        bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
        void deleteImageVersion() { this->imageVersion_ = nullptr;};
        inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
        inline Image& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


        // osType Field Functions 
        bool hasOsType() const { return this->osType_ != nullptr;};
        void deleteOsType() { this->osType_ = nullptr;};
        inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
        inline Image& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      protected:
        // The image provider.
        shared_ptr<string> imageContact_ {};
        // The URL of the image icon.
        shared_ptr<string> imageIconUrl_ {};
        // The image name.
        shared_ptr<string> imageName_ {};
        // The image type. Valid values:
        // 
        // - system: system image.
        // - app: application image.
        // - custom: custom image.
        shared_ptr<string> imageType_ {};
        // The image version.
        shared_ptr<string> imageVersion_ {};
        // The operating system type.
        shared_ptr<string> osType_ {};
      };

      class Disks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Disks& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Device, device_);
          DARABONBA_PTR_TO_JSON(DiskChargeType, diskChargeType_);
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
          DARABONBA_PTR_TO_JSON(DiskName, diskName_);
          DARABONBA_PTR_TO_JSON(DiskTags, diskTags_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Disks& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Device, device_);
          DARABONBA_PTR_FROM_JSON(DiskChargeType, diskChargeType_);
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
          DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
          DARABONBA_PTR_FROM_JSON(DiskTags, diskTags_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Disks() = default ;
        Disks(const Disks &) = default ;
        Disks(Disks &&) = default ;
        Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Disks() = default ;
        Disks& operator=(const Disks &) = default ;
        Disks& operator=(Disks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DiskTags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DiskTags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DiskTags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          DiskTags() = default ;
          DiskTags(const DiskTags &) = default ;
          DiskTags(DiskTags &&) = default ;
          DiskTags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DiskTags() = default ;
          DiskTags& operator=(const DiskTags &) = default ;
          DiskTags& operator=(DiskTags &&) = default ;
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
          inline DiskTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline DiskTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The tag key.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->category_ == nullptr
        && this->creationTime_ == nullptr && this->device_ == nullptr && this->diskChargeType_ == nullptr && this->diskId_ == nullptr && this->diskName_ == nullptr
        && this->diskTags_ == nullptr && this->diskType_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr && this->resourceGroupId_ == nullptr
        && this->size_ == nullptr && this->status_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Disks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Disks& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
        inline Disks& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


        // diskChargeType Field Functions 
        bool hasDiskChargeType() const { return this->diskChargeType_ != nullptr;};
        void deleteDiskChargeType() { this->diskChargeType_ = nullptr;};
        inline string getDiskChargeType() const { DARABONBA_PTR_GET_DEFAULT(diskChargeType_, "") };
        inline Disks& setDiskChargeType(string diskChargeType) { DARABONBA_PTR_SET_VALUE(diskChargeType_, diskChargeType) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline Disks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // diskName Field Functions 
        bool hasDiskName() const { return this->diskName_ != nullptr;};
        void deleteDiskName() { this->diskName_ = nullptr;};
        inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
        inline Disks& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


        // diskTags Field Functions 
        bool hasDiskTags() const { return this->diskTags_ != nullptr;};
        void deleteDiskTags() { this->diskTags_ = nullptr;};
        inline const vector<Disks::DiskTags> & getDiskTags() const { DARABONBA_PTR_GET_CONST(diskTags_, vector<Disks::DiskTags>) };
        inline vector<Disks::DiskTags> getDiskTags() { DARABONBA_PTR_GET(diskTags_, vector<Disks::DiskTags>) };
        inline Disks& setDiskTags(const vector<Disks::DiskTags> & diskTags) { DARABONBA_PTR_SET_VALUE(diskTags_, diskTags) };
        inline Disks& setDiskTags(vector<Disks::DiskTags> && diskTags) { DARABONBA_PTR_SET_RVALUE(diskTags_, diskTags) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline Disks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Disks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Disks& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Disks& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline Disks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Disks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The cloud disk category. Valid values:
        // 
        // - ESSD: ESSD at performance level (PL) 0.
        // - SSD: Standard SSD.
        // - CLOUD_EFFICIENCY: Ultra disk.
        shared_ptr<string> category_ {};
        // The creation time of the instance. The time is displayed in UTC in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format.
        shared_ptr<string> creationTime_ {};
        // The device name of the cloud disk on the server.
        shared_ptr<string> device_ {};
        // The billing method of the cloud disk.
        shared_ptr<string> diskChargeType_ {};
        // The cloud disk ID.
        shared_ptr<string> diskId_ {};
        // The cloud disk name.
        shared_ptr<string> diskName_ {};
        // The tag information of the cloud disk.
        shared_ptr<vector<Disks::DiskTags>> diskTags_ {};
        // The cloud disk type. Valid values:
        // 
        // - system: system cloud disk.
        // - data: data cloud disk.
        shared_ptr<string> diskType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The remarks of the cloud disk.
        shared_ptr<string> remark_ {};
        // The ID of the resource group to which the cloud disk belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The cloud disk size. Unit: GiB.
        shared_ptr<int32_t> size_ {};
        // The cloud disk status. Valid values:
        // 
        // - ReIniting: The cloud disk is being initialized.
        // - Creating: The cloud disk is being created.
        // - In_use: The cloud disk is in use.
        // - Available: The cloud disk is unattached.
        // - Attaching: The cloud disk is being mounted.
        // - Detaching: The cloud disk is being unmounted.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->businessStatus_ == nullptr
        && this->chargeType_ == nullptr && this->combination_ == nullptr && this->combinationInstanceId_ == nullptr && this->commodityCode_ == nullptr && this->creationTime_ == nullptr
        && this->ddosStatus_ == nullptr && this->disableReason_ == nullptr && this->disks_ == nullptr && this->expiredTime_ == nullptr && this->image_ == nullptr
        && this->imageId_ == nullptr && this->innerIpAddress_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->networkAttributes_ == nullptr
        && this->planId_ == nullptr && this->planType_ == nullptr && this->publicIpAddress_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceSpec_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->uuid_ == nullptr; };
      // businessStatus Field Functions 
      bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
      void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
      inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
      inline Instances& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Instances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // combination Field Functions 
      bool hasCombination() const { return this->combination_ != nullptr;};
      void deleteCombination() { this->combination_ = nullptr;};
      inline bool getCombination() const { DARABONBA_PTR_GET_DEFAULT(combination_, false) };
      inline Instances& setCombination(bool combination) { DARABONBA_PTR_SET_VALUE(combination_, combination) };


      // combinationInstanceId Field Functions 
      bool hasCombinationInstanceId() const { return this->combinationInstanceId_ != nullptr;};
      void deleteCombinationInstanceId() { this->combinationInstanceId_ = nullptr;};
      inline string getCombinationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(combinationInstanceId_, "") };
      inline Instances& setCombinationInstanceId(string combinationInstanceId) { DARABONBA_PTR_SET_VALUE(combinationInstanceId_, combinationInstanceId) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Instances& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Instances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ddosStatus Field Functions 
      bool hasDdosStatus() const { return this->ddosStatus_ != nullptr;};
      void deleteDdosStatus() { this->ddosStatus_ = nullptr;};
      inline string getDdosStatus() const { DARABONBA_PTR_GET_DEFAULT(ddosStatus_, "") };
      inline Instances& setDdosStatus(string ddosStatus) { DARABONBA_PTR_SET_VALUE(ddosStatus_, ddosStatus) };


      // disableReason Field Functions 
      bool hasDisableReason() const { return this->disableReason_ != nullptr;};
      void deleteDisableReason() { this->disableReason_ = nullptr;};
      inline string getDisableReason() const { DARABONBA_PTR_GET_DEFAULT(disableReason_, "") };
      inline Instances& setDisableReason(string disableReason) { DARABONBA_PTR_SET_VALUE(disableReason_, disableReason) };


      // disks Field Functions 
      bool hasDisks() const { return this->disks_ != nullptr;};
      void deleteDisks() { this->disks_ = nullptr;};
      inline const vector<Instances::Disks> & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Instances::Disks>) };
      inline vector<Instances::Disks> getDisks() { DARABONBA_PTR_GET(disks_, vector<Instances::Disks>) };
      inline Instances& setDisks(const vector<Instances::Disks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
      inline Instances& setDisks(vector<Instances::Disks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Instances& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const Instances::Image & getImage() const { DARABONBA_PTR_GET_CONST(image_, Instances::Image) };
      inline Instances::Image getImage() { DARABONBA_PTR_GET(image_, Instances::Image) };
      inline Instances& setImage(const Instances::Image & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline Instances& setImage(Instances::Image && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Instances& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // innerIpAddress Field Functions 
      bool hasInnerIpAddress() const { return this->innerIpAddress_ != nullptr;};
      void deleteInnerIpAddress() { this->innerIpAddress_ = nullptr;};
      inline string getInnerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(innerIpAddress_, "") };
      inline Instances& setInnerIpAddress(string innerIpAddress) { DARABONBA_PTR_SET_VALUE(innerIpAddress_, innerIpAddress) };


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


      // networkAttributes Field Functions 
      bool hasNetworkAttributes() const { return this->networkAttributes_ != nullptr;};
      void deleteNetworkAttributes() { this->networkAttributes_ = nullptr;};
      inline const vector<Instances::NetworkAttributes> & getNetworkAttributes() const { DARABONBA_PTR_GET_CONST(networkAttributes_, vector<Instances::NetworkAttributes>) };
      inline vector<Instances::NetworkAttributes> getNetworkAttributes() { DARABONBA_PTR_GET(networkAttributes_, vector<Instances::NetworkAttributes>) };
      inline Instances& setNetworkAttributes(const vector<Instances::NetworkAttributes> & networkAttributes) { DARABONBA_PTR_SET_VALUE(networkAttributes_, networkAttributes) };
      inline Instances& setNetworkAttributes(vector<Instances::NetworkAttributes> && networkAttributes) { DARABONBA_PTR_SET_RVALUE(networkAttributes_, networkAttributes) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline Instances& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // planType Field Functions 
      bool hasPlanType() const { return this->planType_ != nullptr;};
      void deletePlanType() { this->planType_ = nullptr;};
      inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
      inline Instances& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


      // publicIpAddress Field Functions 
      bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
      void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
      inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
      inline Instances& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Instances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceSpec Field Functions 
      bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
      void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
      inline const Instances::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Instances::ResourceSpec) };
      inline Instances::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Instances::ResourceSpec) };
      inline Instances& setResourceSpec(const Instances::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
      inline Instances& setResourceSpec(Instances::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Instances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Instances::Tags>) };
      inline vector<Instances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Instances::Tags>) };
      inline Instances& setTags(const vector<Instances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Instances& setTags(vector<Instances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Instances& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The server status. Valid values:
      // 
      // - Normal: Normal.
      // - Expired: Expired.
      // - Overdue: Overdue payment.
      shared_ptr<string> businessStatus_ {};
      // The billing method.
      shared_ptr<string> chargeType_ {};
      // Specifies whether the plan is a combination plan.
      shared_ptr<bool> combination_ {};
      // The combination plan instance ID.
      shared_ptr<string> combinationInstanceId_ {};
      // The commodity code of the instance.
      shared_ptr<string> commodityCode_ {};
      // The creation time. The time is displayed in UTC in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format.
      shared_ptr<string> creationTime_ {};
      // The DDoS status. Valid values:
      // 
      // - Normal: Normal.
      // - BlackHole: Blackhole filtering is activated.
      // - Defense: Traffic is being scrubbed.
      shared_ptr<string> ddosStatus_ {};
      // The reason why the resource is disabled. Valid values:
      // 
      // - FINANCIAL: The resource is locked due to an overdue payment.
      // - SECURITY: The resource is locked due to security reasons.
      // - EXPIRED: The instance has expired.
      shared_ptr<string> disableReason_ {};
      // The array of cloud disk information for the simple application server.
      shared_ptr<vector<Instances::Disks>> disks_ {};
      // The expiration time. The time is displayed in UTC in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format.
      shared_ptr<string> expiredTime_ {};
      // The image information.
      shared_ptr<Instances::Image> image_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The internal IP address.
      shared_ptr<string> innerIpAddress_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The server name.
      shared_ptr<string> instanceName_ {};
      // The network attributes.
      shared_ptr<vector<Instances::NetworkAttributes>> networkAttributes_ {};
      // The plan ID.
      shared_ptr<string> planId_ {};
      // The plan type. Valid values:
      // 
      // - NORMAL: general-purpose.
      // - CAPACITY: storage-optimized.
      // - PREVIOUS: previous generation.
      // - MULTI_IP: multi-public-IP.
      // - INTERNATIONAL: international.
      // 
      // > For more information, see [Instance families](https://help.aliyun.com/document_detail/2861773.html).
      shared_ptr<string> planType_ {};
      // The public IP address.
      shared_ptr<string> publicIpAddress_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The resource specifications.
      shared_ptr<Instances::ResourceSpec> resourceSpec_ {};
      // The instance status. Valid values:
      // 
      // - Pending: The instance is being prepared.
      // - Starting: The instance is starting.
      // - Running: The instance is running.
      // - Stopping: The instance is stopping.
      // - Stopped: The instance is stopped.
      // - Resetting: The instance is being reset.
      // - Upgrading: The instance is being upgraded.
      // - Disabled: The instance is unavailable.
      shared_ptr<string> status_ {};
      // The tags of the instance.
      shared_ptr<vector<Instances::Tags>> tags_ {};
      // The UUID of the instance.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline vector<ListInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListInstancesResponseBody::Instances>) };
    inline ListInstancesResponseBody& setInstances(const vector<ListInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstancesResponseBody& setInstances(vector<ListInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The array of simple application server information.
    shared_ptr<vector<ListInstancesResponseBody::Instances>> instances_ {};
    // The page number of the simple application server list.
    shared_ptr<int32_t> pageNumber_ {};
    // The settings for the number of entries per page for paging in a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of instances returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
