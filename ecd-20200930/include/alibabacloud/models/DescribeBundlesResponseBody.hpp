// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeBundlesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBundlesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bundles, bundles_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBundlesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bundles, bundles_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBundlesResponseBody() = default ;
    DescribeBundlesResponseBody(const DescribeBundlesResponseBody &) = default ;
    DescribeBundlesResponseBody(DescribeBundlesResponseBody &&) = default ;
    DescribeBundlesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBundlesResponseBody() = default ;
    DescribeBundlesResponseBody& operator=(const DescribeBundlesResponseBody &) = default ;
    DescribeBundlesResponseBody& operator=(DescribeBundlesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bundles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bundles& obj) { 
        DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
        DARABONBA_PTR_TO_JSON(BundleName, bundleName_);
        DARABONBA_PTR_TO_JSON(BundleType, bundleType_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_TO_JSON(DesktopTypeAttribute, desktopTypeAttribute_);
        DARABONBA_PTR_TO_JSON(DesktopTypeFamily, desktopTypeFamily_);
        DARABONBA_PTR_TO_JSON(Disks, disks_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageStatus, imageStatus_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
        DARABONBA_PTR_TO_JSON(StockState, stockState_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      friend void from_json(const Darabonba::Json& j, Bundles& obj) { 
        DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
        DARABONBA_PTR_FROM_JSON(BundleName, bundleName_);
        DARABONBA_PTR_FROM_JSON(BundleType, bundleType_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_FROM_JSON(DesktopTypeAttribute, desktopTypeAttribute_);
        DARABONBA_PTR_FROM_JSON(DesktopTypeFamily, desktopTypeFamily_);
        DARABONBA_PTR_FROM_JSON(Disks, disks_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageStatus, imageStatus_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
        DARABONBA_PTR_FROM_JSON(StockState, stockState_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      Bundles() = default ;
      Bundles(const Bundles &) = default ;
      Bundles(Bundles &&) = default ;
      Bundles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bundles() = default ;
      Bundles& operator=(const Bundles &) = default ;
      Bundles& operator=(Bundles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Disks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Disks& obj) { 
          DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
          DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        };
        friend void from_json(const Darabonba::Json& j, Disks& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
          DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
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
        virtual bool empty() const override { return this->diskPerformanceLevel_ == nullptr
        && this->diskSize_ == nullptr && this->diskType_ == nullptr; };
        // diskPerformanceLevel Field Functions 
        bool hasDiskPerformanceLevel() const { return this->diskPerformanceLevel_ != nullptr;};
        void deleteDiskPerformanceLevel() { this->diskPerformanceLevel_ = nullptr;};
        inline string getDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(diskPerformanceLevel_, "") };
        inline Disks& setDiskPerformanceLevel(string diskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(diskPerformanceLevel_, diskPerformanceLevel) };


        // diskSize Field Functions 
        bool hasDiskSize() const { return this->diskSize_ != nullptr;};
        void deleteDiskSize() { this->diskSize_ = nullptr;};
        inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
        inline Disks& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline Disks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      protected:
        // The PL of the disk.
        // 
        // Valid values:
        // 
        // *   PL1
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   PL0
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   PL3
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   PL2
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<string> diskPerformanceLevel_ {};
        // The size of the disk. Unit: GiB.
        shared_ptr<int32_t> diskSize_ {};
        // The type of the disk.
        // 
        // Valid values:
        // 
        // *   SYSTEM: system disk
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   DATA: data disk
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<string> diskType_ {};
      };

      class DesktopTypeAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesktopTypeAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
          DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
          DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
          DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
        };
        friend void from_json(const Darabonba::Json& j, DesktopTypeAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
          DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
          DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
          DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
        };
        DesktopTypeAttribute() = default ;
        DesktopTypeAttribute(const DesktopTypeAttribute &) = default ;
        DesktopTypeAttribute(DesktopTypeAttribute &&) = default ;
        DesktopTypeAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesktopTypeAttribute() = default ;
        DesktopTypeAttribute& operator=(const DesktopTypeAttribute &) = default ;
        DesktopTypeAttribute& operator=(DesktopTypeAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuCount_ == nullptr
        && this->gpuCount_ == nullptr && this->gpuSpec_ == nullptr && this->memorySize_ == nullptr; };
        // cpuCount Field Functions 
        bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
        void deleteCpuCount() { this->cpuCount_ = nullptr;};
        inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
        inline DesktopTypeAttribute& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


        // gpuCount Field Functions 
        bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
        void deleteGpuCount() { this->gpuCount_ = nullptr;};
        inline float getGpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
        inline DesktopTypeAttribute& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


        // gpuSpec Field Functions 
        bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
        void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
        inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
        inline DesktopTypeAttribute& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


        // memorySize Field Functions 
        bool hasMemorySize() const { return this->memorySize_ != nullptr;};
        void deleteMemorySize() { this->memorySize_ = nullptr;};
        inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
        inline DesktopTypeAttribute& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


      protected:
        // The number of vCPUs.
        shared_ptr<int32_t> cpuCount_ {};
        // The number of GPUs.
        shared_ptr<float> gpuCount_ {};
        // The GPU type.
        shared_ptr<string> gpuSpec_ {};
        // The memory size. Unit: MiB.
        shared_ptr<int32_t> memorySize_ {};
      };

      virtual bool empty() const override { return this->bundleId_ == nullptr
        && this->bundleName_ == nullptr && this->bundleType_ == nullptr && this->creationTime_ == nullptr && this->dataDiskCategory_ == nullptr && this->description_ == nullptr
        && this->desktopType_ == nullptr && this->desktopTypeAttribute_ == nullptr && this->desktopTypeFamily_ == nullptr && this->disks_ == nullptr && this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->imageStatus_ == nullptr && this->language_ == nullptr && this->osType_ == nullptr && this->platform_ == nullptr
        && this->protocolType_ == nullptr && this->sessionType_ == nullptr && this->stockState_ == nullptr && this->systemDiskCategory_ == nullptr && this->volumeEncryptionEnabled_ == nullptr
        && this->volumeEncryptionKey_ == nullptr; };
      // bundleId Field Functions 
      bool hasBundleId() const { return this->bundleId_ != nullptr;};
      void deleteBundleId() { this->bundleId_ = nullptr;};
      inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
      inline Bundles& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


      // bundleName Field Functions 
      bool hasBundleName() const { return this->bundleName_ != nullptr;};
      void deleteBundleName() { this->bundleName_ = nullptr;};
      inline string getBundleName() const { DARABONBA_PTR_GET_DEFAULT(bundleName_, "") };
      inline Bundles& setBundleName(string bundleName) { DARABONBA_PTR_SET_VALUE(bundleName_, bundleName) };


      // bundleType Field Functions 
      bool hasBundleType() const { return this->bundleType_ != nullptr;};
      void deleteBundleType() { this->bundleType_ = nullptr;};
      inline string getBundleType() const { DARABONBA_PTR_GET_DEFAULT(bundleType_, "") };
      inline Bundles& setBundleType(string bundleType) { DARABONBA_PTR_SET_VALUE(bundleType_, bundleType) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Bundles& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataDiskCategory Field Functions 
      bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
      void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
      inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
      inline Bundles& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Bundles& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline Bundles& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // desktopTypeAttribute Field Functions 
      bool hasDesktopTypeAttribute() const { return this->desktopTypeAttribute_ != nullptr;};
      void deleteDesktopTypeAttribute() { this->desktopTypeAttribute_ = nullptr;};
      inline const Bundles::DesktopTypeAttribute & getDesktopTypeAttribute() const { DARABONBA_PTR_GET_CONST(desktopTypeAttribute_, Bundles::DesktopTypeAttribute) };
      inline Bundles::DesktopTypeAttribute getDesktopTypeAttribute() { DARABONBA_PTR_GET(desktopTypeAttribute_, Bundles::DesktopTypeAttribute) };
      inline Bundles& setDesktopTypeAttribute(const Bundles::DesktopTypeAttribute & desktopTypeAttribute) { DARABONBA_PTR_SET_VALUE(desktopTypeAttribute_, desktopTypeAttribute) };
      inline Bundles& setDesktopTypeAttribute(Bundles::DesktopTypeAttribute && desktopTypeAttribute) { DARABONBA_PTR_SET_RVALUE(desktopTypeAttribute_, desktopTypeAttribute) };


      // desktopTypeFamily Field Functions 
      bool hasDesktopTypeFamily() const { return this->desktopTypeFamily_ != nullptr;};
      void deleteDesktopTypeFamily() { this->desktopTypeFamily_ = nullptr;};
      inline string getDesktopTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(desktopTypeFamily_, "") };
      inline Bundles& setDesktopTypeFamily(string desktopTypeFamily) { DARABONBA_PTR_SET_VALUE(desktopTypeFamily_, desktopTypeFamily) };


      // disks Field Functions 
      bool hasDisks() const { return this->disks_ != nullptr;};
      void deleteDisks() { this->disks_ = nullptr;};
      inline const vector<Bundles::Disks> & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Bundles::Disks>) };
      inline vector<Bundles::Disks> getDisks() { DARABONBA_PTR_GET(disks_, vector<Bundles::Disks>) };
      inline Bundles& setDisks(const vector<Bundles::Disks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
      inline Bundles& setDisks(vector<Bundles::Disks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Bundles& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Bundles& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // imageStatus Field Functions 
      bool hasImageStatus() const { return this->imageStatus_ != nullptr;};
      void deleteImageStatus() { this->imageStatus_ = nullptr;};
      inline string getImageStatus() const { DARABONBA_PTR_GET_DEFAULT(imageStatus_, "") };
      inline Bundles& setImageStatus(string imageStatus) { DARABONBA_PTR_SET_VALUE(imageStatus_, imageStatus) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Bundles& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Bundles& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Bundles& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Bundles& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // sessionType Field Functions 
      bool hasSessionType() const { return this->sessionType_ != nullptr;};
      void deleteSessionType() { this->sessionType_ = nullptr;};
      inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
      inline Bundles& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


      // stockState Field Functions 
      bool hasStockState() const { return this->stockState_ != nullptr;};
      void deleteStockState() { this->stockState_ = nullptr;};
      inline string getStockState() const { DARABONBA_PTR_GET_DEFAULT(stockState_, "") };
      inline Bundles& setStockState(string stockState) { DARABONBA_PTR_SET_VALUE(stockState_, stockState) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline Bundles& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // volumeEncryptionEnabled Field Functions 
      bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
      void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
      inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
      inline Bundles& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


      // volumeEncryptionKey Field Functions 
      bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
      void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
      inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
      inline Bundles& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    protected:
      // The ID of the cloud computer template.
      shared_ptr<string> bundleId_ {};
      // The name of the cloud computer template.
      shared_ptr<string> bundleName_ {};
      // The type of the cloud computer template.
      // 
      // Valid values:
      // 
      // *   SYSTEM: system template
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   CUSTOM: custom template
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> bundleType_ {};
      // The time when the cloud computer template was created.
      shared_ptr<string> creationTime_ {};
      // The category of the data disk.
      // 
      // Valid values:
      // 
      // *   cloud_efficiency: the ultra disk
      // *   cloud_auto: the standard SSD.
      // *   cloud_essd: the ESSD. Take note that only specific cloud computer types support ESSDs.
      shared_ptr<string> dataDiskCategory_ {};
      // The description of the cloud computer template.
      shared_ptr<string> description_ {};
      // The instance type of the cloud computer.
      shared_ptr<string> desktopType_ {};
      // The details of the cloud computer instance type.
      shared_ptr<Bundles::DesktopTypeAttribute> desktopTypeAttribute_ {};
      // The instance family of the cloud computer.
      // 
      // Valid values:
      // 
      // *   eds.graphics: graphical instance family
      // *   eds.hf: instance family with a high clock speed
      // *   eds.general: general-purpose instance family
      shared_ptr<string> desktopTypeFamily_ {};
      // Details of the disks.
      shared_ptr<vector<Bundles::Disks>> disks_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The status of the image.
      shared_ptr<string> imageStatus_ {};
      // The OS language of the image.
      // 
      // Valid values:
      // 
      // *   en-US: English
      // *   zh-HK: Chinese, Traditional (Hong Kong, China)
      // *   zh-CN: Simplified Chinese
      // *   ja-JP: Japanese
      shared_ptr<string> language_ {};
      // The type of the OS.
      // 
      // Valid values:
      // 
      // *   Linux
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Windows
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> osType_ {};
      // The OS.
      // 
      // Valid values:
      // 
      // *   Ubuntu
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Windows Server 2022
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   UOS
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   CentOS
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Windows Server 2019
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Windows Server 2016
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> platform_ {};
      // The protocol type.
      // 
      // Valid values:
      // 
      // *   HDX: HDX protocol
      // *   ASP: in-house ASP
      shared_ptr<string> protocolType_ {};
      // The session type.
      // 
      // Valid values:
      // 
      // *   0: single-session
      // *   1: multi-session
      shared_ptr<string> sessionType_ {};
      // The inventory status of the cloud computer instance type. This parameter is returned only if you set the `CheckStock` parameter to `true`.
      shared_ptr<string> stockState_ {};
      // The category of the system disk.
      // 
      // Valid values:
      // 
      // *   cloud_efficiency: the ultra disk
      // *   cloud_auto: the standard SSD.
      // *   cloud_essd: the Enterprise SSD (ESSD). Take note that only specific cloud computer types support ESSDs.
      shared_ptr<string> systemDiskCategory_ {};
      // Indicates whether disk encryption is enabled.
      shared_ptr<bool> volumeEncryptionEnabled_ {};
      // The ID of the Key Management Service (KMS) key that is used when disk encryption is enabled.
      shared_ptr<string> volumeEncryptionKey_ {};
    };

    virtual bool empty() const override { return this->bundles_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // bundles Field Functions 
    bool hasBundles() const { return this->bundles_ != nullptr;};
    void deleteBundles() { this->bundles_ = nullptr;};
    inline const vector<DescribeBundlesResponseBody::Bundles> & getBundles() const { DARABONBA_PTR_GET_CONST(bundles_, vector<DescribeBundlesResponseBody::Bundles>) };
    inline vector<DescribeBundlesResponseBody::Bundles> getBundles() { DARABONBA_PTR_GET(bundles_, vector<DescribeBundlesResponseBody::Bundles>) };
    inline DescribeBundlesResponseBody& setBundles(const vector<DescribeBundlesResponseBody::Bundles> & bundles) { DARABONBA_PTR_SET_VALUE(bundles_, bundles) };
    inline DescribeBundlesResponseBody& setBundles(vector<DescribeBundlesResponseBody::Bundles> && bundles) { DARABONBA_PTR_SET_RVALUE(bundles_, bundles) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeBundlesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBundlesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cloud computer templates.
    shared_ptr<vector<DescribeBundlesResponseBody::Bundles>> bundles_ {};
    // The token that is used for the next query. If this parameter is empty, all results have been returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
