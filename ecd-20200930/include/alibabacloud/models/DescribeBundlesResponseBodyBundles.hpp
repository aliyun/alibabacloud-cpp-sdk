// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODYBUNDLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODYBUNDLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBundlesResponseBodyBundlesDesktopTypeAttribute.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBundlesResponseBodyBundlesDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeBundlesResponseBodyBundles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBundlesResponseBodyBundles& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeBundlesResponseBodyBundles& obj) { 
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
    DescribeBundlesResponseBodyBundles() = default ;
    DescribeBundlesResponseBodyBundles(const DescribeBundlesResponseBodyBundles &) = default ;
    DescribeBundlesResponseBodyBundles(DescribeBundlesResponseBodyBundles &&) = default ;
    DescribeBundlesResponseBodyBundles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBundlesResponseBodyBundles() = default ;
    DescribeBundlesResponseBodyBundles& operator=(const DescribeBundlesResponseBodyBundles &) = default ;
    DescribeBundlesResponseBodyBundles& operator=(DescribeBundlesResponseBodyBundles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bundleId_ == nullptr
        && return this->bundleName_ == nullptr && return this->bundleType_ == nullptr && return this->creationTime_ == nullptr && return this->dataDiskCategory_ == nullptr && return this->description_ == nullptr
        && return this->desktopType_ == nullptr && return this->desktopTypeAttribute_ == nullptr && return this->desktopTypeFamily_ == nullptr && return this->disks_ == nullptr && return this->imageId_ == nullptr
        && return this->imageName_ == nullptr && return this->imageStatus_ == nullptr && return this->language_ == nullptr && return this->osType_ == nullptr && return this->platform_ == nullptr
        && return this->protocolType_ == nullptr && return this->sessionType_ == nullptr && return this->stockState_ == nullptr && return this->systemDiskCategory_ == nullptr && return this->volumeEncryptionEnabled_ == nullptr
        && return this->volumeEncryptionKey_ == nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline DescribeBundlesResponseBodyBundles& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // bundleName Field Functions 
    bool hasBundleName() const { return this->bundleName_ != nullptr;};
    void deleteBundleName() { this->bundleName_ = nullptr;};
    inline string bundleName() const { DARABONBA_PTR_GET_DEFAULT(bundleName_, "") };
    inline DescribeBundlesResponseBodyBundles& setBundleName(string bundleName) { DARABONBA_PTR_SET_VALUE(bundleName_, bundleName) };


    // bundleType Field Functions 
    bool hasBundleType() const { return this->bundleType_ != nullptr;};
    void deleteBundleType() { this->bundleType_ = nullptr;};
    inline string bundleType() const { DARABONBA_PTR_GET_DEFAULT(bundleType_, "") };
    inline DescribeBundlesResponseBodyBundles& setBundleType(string bundleType) { DARABONBA_PTR_SET_VALUE(bundleType_, bundleType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeBundlesResponseBodyBundles& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string dataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline DescribeBundlesResponseBodyBundles& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBundlesResponseBodyBundles& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribeBundlesResponseBodyBundles& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // desktopTypeAttribute Field Functions 
    bool hasDesktopTypeAttribute() const { return this->desktopTypeAttribute_ != nullptr;};
    void deleteDesktopTypeAttribute() { this->desktopTypeAttribute_ = nullptr;};
    inline const Models::DescribeBundlesResponseBodyBundlesDesktopTypeAttribute & desktopTypeAttribute() const { DARABONBA_PTR_GET_CONST(desktopTypeAttribute_, Models::DescribeBundlesResponseBodyBundlesDesktopTypeAttribute) };
    inline Models::DescribeBundlesResponseBodyBundlesDesktopTypeAttribute desktopTypeAttribute() { DARABONBA_PTR_GET(desktopTypeAttribute_, Models::DescribeBundlesResponseBodyBundlesDesktopTypeAttribute) };
    inline DescribeBundlesResponseBodyBundles& setDesktopTypeAttribute(const Models::DescribeBundlesResponseBodyBundlesDesktopTypeAttribute & desktopTypeAttribute) { DARABONBA_PTR_SET_VALUE(desktopTypeAttribute_, desktopTypeAttribute) };
    inline DescribeBundlesResponseBodyBundles& setDesktopTypeAttribute(Models::DescribeBundlesResponseBodyBundlesDesktopTypeAttribute && desktopTypeAttribute) { DARABONBA_PTR_SET_RVALUE(desktopTypeAttribute_, desktopTypeAttribute) };


    // desktopTypeFamily Field Functions 
    bool hasDesktopTypeFamily() const { return this->desktopTypeFamily_ != nullptr;};
    void deleteDesktopTypeFamily() { this->desktopTypeFamily_ = nullptr;};
    inline string desktopTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(desktopTypeFamily_, "") };
    inline DescribeBundlesResponseBodyBundles& setDesktopTypeFamily(string desktopTypeFamily) { DARABONBA_PTR_SET_VALUE(desktopTypeFamily_, desktopTypeFamily) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::DescribeBundlesResponseBodyBundlesDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::DescribeBundlesResponseBodyBundlesDisks>) };
    inline vector<Models::DescribeBundlesResponseBodyBundlesDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::DescribeBundlesResponseBodyBundlesDisks>) };
    inline DescribeBundlesResponseBodyBundles& setDisks(const vector<Models::DescribeBundlesResponseBodyBundlesDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeBundlesResponseBodyBundles& setDisks(vector<Models::DescribeBundlesResponseBodyBundlesDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeBundlesResponseBodyBundles& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeBundlesResponseBodyBundles& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageStatus Field Functions 
    bool hasImageStatus() const { return this->imageStatus_ != nullptr;};
    void deleteImageStatus() { this->imageStatus_ = nullptr;};
    inline string imageStatus() const { DARABONBA_PTR_GET_DEFAULT(imageStatus_, "") };
    inline DescribeBundlesResponseBodyBundles& setImageStatus(string imageStatus) { DARABONBA_PTR_SET_VALUE(imageStatus_, imageStatus) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeBundlesResponseBodyBundles& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeBundlesResponseBodyBundles& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeBundlesResponseBodyBundles& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeBundlesResponseBodyBundles& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline DescribeBundlesResponseBodyBundles& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // stockState Field Functions 
    bool hasStockState() const { return this->stockState_ != nullptr;};
    void deleteStockState() { this->stockState_ = nullptr;};
    inline string stockState() const { DARABONBA_PTR_GET_DEFAULT(stockState_, "") };
    inline DescribeBundlesResponseBodyBundles& setStockState(string stockState) { DARABONBA_PTR_SET_VALUE(stockState_, stockState) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline DescribeBundlesResponseBodyBundles& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool volumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline DescribeBundlesResponseBodyBundles& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline DescribeBundlesResponseBodyBundles& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


  protected:
    // The ID of the cloud computer template.
    std::shared_ptr<string> bundleId_ = nullptr;
    // The name of the cloud computer template.
    std::shared_ptr<string> bundleName_ = nullptr;
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
    std::shared_ptr<string> bundleType_ = nullptr;
    // The time when the cloud computer template was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The category of the data disk.
    // 
    // Valid values:
    // 
    // *   cloud_efficiency: the ultra disk
    // *   cloud_auto: the standard SSD.
    // *   cloud_essd: the ESSD. Take note that only specific cloud computer types support ESSDs.
    std::shared_ptr<string> dataDiskCategory_ = nullptr;
    // The description of the cloud computer template.
    std::shared_ptr<string> description_ = nullptr;
    // The instance type of the cloud computer.
    std::shared_ptr<string> desktopType_ = nullptr;
    // The details of the cloud computer instance type.
    std::shared_ptr<Models::DescribeBundlesResponseBodyBundlesDesktopTypeAttribute> desktopTypeAttribute_ = nullptr;
    // The instance family of the cloud computer.
    // 
    // Valid values:
    // 
    // *   eds.graphics: graphical instance family
    // *   eds.hf: instance family with a high clock speed
    // *   eds.general: general-purpose instance family
    std::shared_ptr<string> desktopTypeFamily_ = nullptr;
    // Details of the disks.
    std::shared_ptr<vector<Models::DescribeBundlesResponseBodyBundlesDisks>> disks_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The status of the image.
    std::shared_ptr<string> imageStatus_ = nullptr;
    // The OS language of the image.
    // 
    // Valid values:
    // 
    // *   en-US: English
    // *   zh-HK: Chinese, Traditional (Hong Kong, China)
    // *   zh-CN: Simplified Chinese
    // *   ja-JP: Japanese
    std::shared_ptr<string> language_ = nullptr;
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
    std::shared_ptr<string> osType_ = nullptr;
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
    std::shared_ptr<string> platform_ = nullptr;
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   HDX: HDX protocol
    // *   ASP: in-house ASP
    std::shared_ptr<string> protocolType_ = nullptr;
    // The session type.
    // 
    // Valid values:
    // 
    // *   0: single-session
    // *   1: multi-session
    std::shared_ptr<string> sessionType_ = nullptr;
    // The inventory status of the cloud computer instance type. This parameter is returned only if you set the `CheckStock` parameter to `true`.
    std::shared_ptr<string> stockState_ = nullptr;
    // The category of the system disk.
    // 
    // Valid values:
    // 
    // *   cloud_efficiency: the ultra disk
    // *   cloud_auto: the standard SSD.
    // *   cloud_essd: the Enterprise SSD (ESSD). Take note that only specific cloud computer types support ESSDs.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // Indicates whether disk encryption is enabled.
    std::shared_ptr<bool> volumeEncryptionEnabled_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used when disk encryption is enabled.
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
