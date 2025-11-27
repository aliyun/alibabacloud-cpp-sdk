// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListImageResponseBodyDataAppList.hpp>
#include <alibabacloud/models/ListImageResponseBodyDataImageRegionDistributeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(BaseImageId, baseImageId_);
      DARABONBA_PTR_TO_JSON(BaseImageVersion, baseImageVersion_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CompatibleMode, compatibleMode_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Distro, distro_);
      DARABONBA_PTR_TO_JSON(DriverList, driverList_);
      DARABONBA_PTR_TO_JSON(FeatureList, featureList_);
      DARABONBA_PTR_TO_JSON(FotaChannel, fotaChannel_);
      DARABONBA_PTR_TO_JSON(FotaVersion, fotaVersion_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ImageCreateMode, imageCreateMode_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageRegionDistributeList, imageRegionDistributeList_);
      DARABONBA_PTR_TO_JSON(ImageRegionList, imageRegionList_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LatestVersionId, latestVersionId_);
      DARABONBA_PTR_TO_JSON(OnlineVersion, onlineVersion_);
      DARABONBA_PTR_TO_JSON(OnlineVersionId, onlineVersionId_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(ParentImageId, parentImageId_);
      DARABONBA_PTR_TO_JSON(ParentImageVersion, parentImageVersion_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceCategory, resourceInstanceCategory_);
      DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportedLanguageList, supportedLanguageList_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(BaseImageId, baseImageId_);
      DARABONBA_PTR_FROM_JSON(BaseImageVersion, baseImageVersion_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CompatibleMode, compatibleMode_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Distro, distro_);
      DARABONBA_PTR_FROM_JSON(DriverList, driverList_);
      DARABONBA_PTR_FROM_JSON(FeatureList, featureList_);
      DARABONBA_PTR_FROM_JSON(FotaChannel, fotaChannel_);
      DARABONBA_PTR_FROM_JSON(FotaVersion, fotaVersion_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ImageCreateMode, imageCreateMode_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageRegionDistributeList, imageRegionDistributeList_);
      DARABONBA_PTR_FROM_JSON(ImageRegionList, imageRegionList_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LatestVersionId, latestVersionId_);
      DARABONBA_PTR_FROM_JSON(OnlineVersion, onlineVersion_);
      DARABONBA_PTR_FROM_JSON(OnlineVersionId, onlineVersionId_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(ParentImageId, parentImageId_);
      DARABONBA_PTR_FROM_JSON(ParentImageVersion, parentImageVersion_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceCategory, resourceInstanceCategory_);
      DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportedLanguageList, supportedLanguageList_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    ListImageResponseBodyData() = default ;
    ListImageResponseBodyData(const ListImageResponseBodyData &) = default ;
    ListImageResponseBodyData(ListImageResponseBodyData &&) = default ;
    ListImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageResponseBodyData() = default ;
    ListImageResponseBodyData& operator=(const ListImageResponseBodyData &) = default ;
    ListImageResponseBodyData& operator=(ListImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->appList_ == nullptr && return this->baseImageId_ == nullptr && return this->baseImageVersion_ == nullptr && return this->bizType_ == nullptr && return this->compatibleMode_ == nullptr
        && return this->dataDiskSize_ == nullptr && return this->description_ == nullptr && return this->distro_ == nullptr && return this->driverList_ == nullptr && return this->featureList_ == nullptr
        && return this->fotaChannel_ == nullptr && return this->fotaVersion_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->imageCreateMode_ == nullptr
        && return this->imageId_ == nullptr && return this->imageName_ == nullptr && return this->imageRegionDistributeList_ == nullptr && return this->imageRegionList_ == nullptr && return this->imageType_ == nullptr
        && return this->language_ == nullptr && return this->latestVersionId_ == nullptr && return this->onlineVersion_ == nullptr && return this->onlineVersionId_ == nullptr && return this->osType_ == nullptr
        && return this->packageType_ == nullptr && return this->parentImageId_ == nullptr && return this->parentImageVersion_ == nullptr && return this->platform_ == nullptr && return this->platformName_ == nullptr
        && return this->productType_ == nullptr && return this->protocolType_ == nullptr && return this->resourceInstanceCategory_ == nullptr && return this->sessionType_ == nullptr && return this->status_ == nullptr
        && return this->supportedLanguageList_ == nullptr && return this->systemDiskSize_ == nullptr && return this->versionId_ == nullptr && return this->versionName_ == nullptr && return this->volumeEncryptionEnabled_ == nullptr
        && return this->volumeEncryptionKey_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListImageResponseBodyData& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const vector<Models::ListImageResponseBodyDataAppList> & appList() const { DARABONBA_PTR_GET_CONST(appList_, vector<Models::ListImageResponseBodyDataAppList>) };
    inline vector<Models::ListImageResponseBodyDataAppList> appList() { DARABONBA_PTR_GET(appList_, vector<Models::ListImageResponseBodyDataAppList>) };
    inline ListImageResponseBodyData& setAppList(const vector<Models::ListImageResponseBodyDataAppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline ListImageResponseBodyData& setAppList(vector<Models::ListImageResponseBodyDataAppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // baseImageId Field Functions 
    bool hasBaseImageId() const { return this->baseImageId_ != nullptr;};
    void deleteBaseImageId() { this->baseImageId_ = nullptr;};
    inline string baseImageId() const { DARABONBA_PTR_GET_DEFAULT(baseImageId_, "") };
    inline ListImageResponseBodyData& setBaseImageId(string baseImageId) { DARABONBA_PTR_SET_VALUE(baseImageId_, baseImageId) };


    // baseImageVersion Field Functions 
    bool hasBaseImageVersion() const { return this->baseImageVersion_ != nullptr;};
    void deleteBaseImageVersion() { this->baseImageVersion_ = nullptr;};
    inline string baseImageVersion() const { DARABONBA_PTR_GET_DEFAULT(baseImageVersion_, "") };
    inline ListImageResponseBodyData& setBaseImageVersion(string baseImageVersion) { DARABONBA_PTR_SET_VALUE(baseImageVersion_, baseImageVersion) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListImageResponseBodyData& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // compatibleMode Field Functions 
    bool hasCompatibleMode() const { return this->compatibleMode_ != nullptr;};
    void deleteCompatibleMode() { this->compatibleMode_ = nullptr;};
    inline bool compatibleMode() const { DARABONBA_PTR_GET_DEFAULT(compatibleMode_, false) };
    inline ListImageResponseBodyData& setCompatibleMode(bool compatibleMode) { DARABONBA_PTR_SET_VALUE(compatibleMode_, compatibleMode) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline ListImageResponseBodyData& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListImageResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // distro Field Functions 
    bool hasDistro() const { return this->distro_ != nullptr;};
    void deleteDistro() { this->distro_ = nullptr;};
    inline string distro() const { DARABONBA_PTR_GET_DEFAULT(distro_, "") };
    inline ListImageResponseBodyData& setDistro(string distro) { DARABONBA_PTR_SET_VALUE(distro_, distro) };


    // driverList Field Functions 
    bool hasDriverList() const { return this->driverList_ != nullptr;};
    void deleteDriverList() { this->driverList_ = nullptr;};
    inline const vector<string> & driverList() const { DARABONBA_PTR_GET_CONST(driverList_, vector<string>) };
    inline vector<string> driverList() { DARABONBA_PTR_GET(driverList_, vector<string>) };
    inline ListImageResponseBodyData& setDriverList(const vector<string> & driverList) { DARABONBA_PTR_SET_VALUE(driverList_, driverList) };
    inline ListImageResponseBodyData& setDriverList(vector<string> && driverList) { DARABONBA_PTR_SET_RVALUE(driverList_, driverList) };


    // featureList Field Functions 
    bool hasFeatureList() const { return this->featureList_ != nullptr;};
    void deleteFeatureList() { this->featureList_ = nullptr;};
    inline const vector<string> & featureList() const { DARABONBA_PTR_GET_CONST(featureList_, vector<string>) };
    inline vector<string> featureList() { DARABONBA_PTR_GET(featureList_, vector<string>) };
    inline ListImageResponseBodyData& setFeatureList(const vector<string> & featureList) { DARABONBA_PTR_SET_VALUE(featureList_, featureList) };
    inline ListImageResponseBodyData& setFeatureList(vector<string> && featureList) { DARABONBA_PTR_SET_RVALUE(featureList_, featureList) };


    // fotaChannel Field Functions 
    bool hasFotaChannel() const { return this->fotaChannel_ != nullptr;};
    void deleteFotaChannel() { this->fotaChannel_ = nullptr;};
    inline string fotaChannel() const { DARABONBA_PTR_GET_DEFAULT(fotaChannel_, "") };
    inline ListImageResponseBodyData& setFotaChannel(string fotaChannel) { DARABONBA_PTR_SET_VALUE(fotaChannel_, fotaChannel) };


    // fotaVersion Field Functions 
    bool hasFotaVersion() const { return this->fotaVersion_ != nullptr;};
    void deleteFotaVersion() { this->fotaVersion_ = nullptr;};
    inline string fotaVersion() const { DARABONBA_PTR_GET_DEFAULT(fotaVersion_, "") };
    inline ListImageResponseBodyData& setFotaVersion(string fotaVersion) { DARABONBA_PTR_SET_VALUE(fotaVersion_, fotaVersion) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListImageResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListImageResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // imageCreateMode Field Functions 
    bool hasImageCreateMode() const { return this->imageCreateMode_ != nullptr;};
    void deleteImageCreateMode() { this->imageCreateMode_ = nullptr;};
    inline string imageCreateMode() const { DARABONBA_PTR_GET_DEFAULT(imageCreateMode_, "") };
    inline ListImageResponseBodyData& setImageCreateMode(string imageCreateMode) { DARABONBA_PTR_SET_VALUE(imageCreateMode_, imageCreateMode) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImageResponseBodyData& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ListImageResponseBodyData& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageRegionDistributeList Field Functions 
    bool hasImageRegionDistributeList() const { return this->imageRegionDistributeList_ != nullptr;};
    void deleteImageRegionDistributeList() { this->imageRegionDistributeList_ = nullptr;};
    inline const vector<Models::ListImageResponseBodyDataImageRegionDistributeList> & imageRegionDistributeList() const { DARABONBA_PTR_GET_CONST(imageRegionDistributeList_, vector<Models::ListImageResponseBodyDataImageRegionDistributeList>) };
    inline vector<Models::ListImageResponseBodyDataImageRegionDistributeList> imageRegionDistributeList() { DARABONBA_PTR_GET(imageRegionDistributeList_, vector<Models::ListImageResponseBodyDataImageRegionDistributeList>) };
    inline ListImageResponseBodyData& setImageRegionDistributeList(const vector<Models::ListImageResponseBodyDataImageRegionDistributeList> & imageRegionDistributeList) { DARABONBA_PTR_SET_VALUE(imageRegionDistributeList_, imageRegionDistributeList) };
    inline ListImageResponseBodyData& setImageRegionDistributeList(vector<Models::ListImageResponseBodyDataImageRegionDistributeList> && imageRegionDistributeList) { DARABONBA_PTR_SET_RVALUE(imageRegionDistributeList_, imageRegionDistributeList) };


    // imageRegionList Field Functions 
    bool hasImageRegionList() const { return this->imageRegionList_ != nullptr;};
    void deleteImageRegionList() { this->imageRegionList_ = nullptr;};
    inline const vector<string> & imageRegionList() const { DARABONBA_PTR_GET_CONST(imageRegionList_, vector<string>) };
    inline vector<string> imageRegionList() { DARABONBA_PTR_GET(imageRegionList_, vector<string>) };
    inline ListImageResponseBodyData& setImageRegionList(const vector<string> & imageRegionList) { DARABONBA_PTR_SET_VALUE(imageRegionList_, imageRegionList) };
    inline ListImageResponseBodyData& setImageRegionList(vector<string> && imageRegionList) { DARABONBA_PTR_SET_RVALUE(imageRegionList_, imageRegionList) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline ListImageResponseBodyData& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListImageResponseBodyData& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // latestVersionId Field Functions 
    bool hasLatestVersionId() const { return this->latestVersionId_ != nullptr;};
    void deleteLatestVersionId() { this->latestVersionId_ = nullptr;};
    inline string latestVersionId() const { DARABONBA_PTR_GET_DEFAULT(latestVersionId_, "") };
    inline ListImageResponseBodyData& setLatestVersionId(string latestVersionId) { DARABONBA_PTR_SET_VALUE(latestVersionId_, latestVersionId) };


    // onlineVersion Field Functions 
    bool hasOnlineVersion() const { return this->onlineVersion_ != nullptr;};
    void deleteOnlineVersion() { this->onlineVersion_ = nullptr;};
    inline bool onlineVersion() const { DARABONBA_PTR_GET_DEFAULT(onlineVersion_, false) };
    inline ListImageResponseBodyData& setOnlineVersion(bool onlineVersion) { DARABONBA_PTR_SET_VALUE(onlineVersion_, onlineVersion) };


    // onlineVersionId Field Functions 
    bool hasOnlineVersionId() const { return this->onlineVersionId_ != nullptr;};
    void deleteOnlineVersionId() { this->onlineVersionId_ = nullptr;};
    inline string onlineVersionId() const { DARABONBA_PTR_GET_DEFAULT(onlineVersionId_, "") };
    inline ListImageResponseBodyData& setOnlineVersionId(string onlineVersionId) { DARABONBA_PTR_SET_VALUE(onlineVersionId_, onlineVersionId) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListImageResponseBodyData& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline ListImageResponseBodyData& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // parentImageId Field Functions 
    bool hasParentImageId() const { return this->parentImageId_ != nullptr;};
    void deleteParentImageId() { this->parentImageId_ = nullptr;};
    inline string parentImageId() const { DARABONBA_PTR_GET_DEFAULT(parentImageId_, "") };
    inline ListImageResponseBodyData& setParentImageId(string parentImageId) { DARABONBA_PTR_SET_VALUE(parentImageId_, parentImageId) };


    // parentImageVersion Field Functions 
    bool hasParentImageVersion() const { return this->parentImageVersion_ != nullptr;};
    void deleteParentImageVersion() { this->parentImageVersion_ = nullptr;};
    inline string parentImageVersion() const { DARABONBA_PTR_GET_DEFAULT(parentImageVersion_, "") };
    inline ListImageResponseBodyData& setParentImageVersion(string parentImageVersion) { DARABONBA_PTR_SET_VALUE(parentImageVersion_, parentImageVersion) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline int32_t platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, 0) };
    inline ListImageResponseBodyData& setPlatform(int32_t platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // platformName Field Functions 
    bool hasPlatformName() const { return this->platformName_ != nullptr;};
    void deletePlatformName() { this->platformName_ = nullptr;};
    inline string platformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
    inline ListImageResponseBodyData& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListImageResponseBodyData& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline ListImageResponseBodyData& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // resourceInstanceCategory Field Functions 
    bool hasResourceInstanceCategory() const { return this->resourceInstanceCategory_ != nullptr;};
    void deleteResourceInstanceCategory() { this->resourceInstanceCategory_ = nullptr;};
    inline string resourceInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceCategory_, "") };
    inline ListImageResponseBodyData& setResourceInstanceCategory(string resourceInstanceCategory) { DARABONBA_PTR_SET_VALUE(resourceInstanceCategory_, resourceInstanceCategory) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline ListImageResponseBodyData& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListImageResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportedLanguageList Field Functions 
    bool hasSupportedLanguageList() const { return this->supportedLanguageList_ != nullptr;};
    void deleteSupportedLanguageList() { this->supportedLanguageList_ = nullptr;};
    inline const vector<string> & supportedLanguageList() const { DARABONBA_PTR_GET_CONST(supportedLanguageList_, vector<string>) };
    inline vector<string> supportedLanguageList() { DARABONBA_PTR_GET(supportedLanguageList_, vector<string>) };
    inline ListImageResponseBodyData& setSupportedLanguageList(const vector<string> & supportedLanguageList) { DARABONBA_PTR_SET_VALUE(supportedLanguageList_, supportedLanguageList) };
    inline ListImageResponseBodyData& setSupportedLanguageList(vector<string> && supportedLanguageList) { DARABONBA_PTR_SET_RVALUE(supportedLanguageList_, supportedLanguageList) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline ListImageResponseBodyData& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline ListImageResponseBodyData& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListImageResponseBodyData& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool volumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline ListImageResponseBodyData& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline ListImageResponseBodyData& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


  protected:
    // The tenant ID.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The application configuration.
    std::shared_ptr<vector<Models::ListImageResponseBodyDataAppList>> appList_ = nullptr;
    // The base image ID.
    std::shared_ptr<string> baseImageId_ = nullptr;
    // The version of the base image.
    std::shared_ptr<string> baseImageVersion_ = nullptr;
    // The service type.
    std::shared_ptr<int32_t> bizType_ = nullptr;
    // Specifies whether to use the compatibility mode.
    std::shared_ptr<bool> compatibleMode_ = nullptr;
    // The size of the data disk. Unit: GiB.
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the release.
    std::shared_ptr<string> distro_ = nullptr;
    // The information about each driver.
    std::shared_ptr<vector<string>> driverList_ = nullptr;
    // The image feature tags.
    std::shared_ptr<vector<string>> featureList_ = nullptr;
    // >  This parameter is not available for public use.
    std::shared_ptr<string> fotaChannel_ = nullptr;
    // The FOTA version.
    std::shared_ptr<string> fotaVersion_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The update time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The image creation type.
    // 
    // Valid values:
    // 
    // *   BY_SNAPSHOT_ID: The image is created from the snapshot or contains only a system disk.
    // *   BUILDER_MANUAL: The image is manually generated.
    // *   INSTANCE_AUTO: The image is automatically generated based on an instance.
    // *   BY_INSTANCE_ID: The image is created from an instance or contains both a system disk and data disks.
    std::shared_ptr<string> imageCreateMode_ = nullptr;
    // System image IDs follow a descriptive, human-readable format, while custom image IDs are automatically generated by the system.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // Layered supported regions information.
    std::shared_ptr<vector<Models::ListImageResponseBodyDataImageRegionDistributeList>> imageRegionDistributeList_ = nullptr;
    // The region ID.
    std::shared_ptr<vector<string>> imageRegionList_ = nullptr;
    // The type of the image.
    std::shared_ptr<string> imageType_ = nullptr;
    // The image language. When the packaging type is VHD or Container, the image inherits its properties from the ECS-type image within the same image bundle.
    std::shared_ptr<string> language_ = nullptr;
    // The latest sub-version of the image. (An image consists of multiple sub-versions.)
    std::shared_ptr<string> latestVersionId_ = nullptr;
    // Indicates whether the current version is the active version.
    std::shared_ptr<bool> onlineVersion_ = nullptr;
    // This image tag currently points to the specified sub-version of the parent image. (An image consists of multiple sub-versions.)
    std::shared_ptr<string> onlineVersionId_ = nullptr;
    // The type of the image.
    std::shared_ptr<string> osType_ = nullptr;
    // The image encapsulation type.
    std::shared_ptr<string> packageType_ = nullptr;
    // The ID of the parent image from which this image is derived. Note: This field is only applicable to custom images, as system images do not have a parent.
    std::shared_ptr<string> parentImageId_ = nullptr;
    // The version of the parent image.
    std::shared_ptr<string> parentImageVersion_ = nullptr;
    // The operating system platform of the image.
    // 
    // >  When the packaging type is VHD or Container, the image inherits its properties from the ECS-type image within the same image bundle.
    std::shared_ptr<int32_t> platform_ = nullptr;
    // The name of the operating system platform.
    std::shared_ptr<string> platformName_ = nullptr;
    // The product type.
    std::shared_ptr<string> productType_ = nullptr;
    // The protocol type.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The types of resources that are supported by the images.
    std::shared_ptr<string> resourceInstanceCategory_ = nullptr;
    // The type of the session.
    // 
    // Valid values:
    // 
    // *   SINGLE_SESSION
    // *   MULTIPLE_SESSION
    std::shared_ptr<string> sessionType_ = nullptr;
    // The state of the image.
    std::shared_ptr<string> status_ = nullptr;
    // The supported languages.
    std::shared_ptr<vector<string>> supportedLanguageList_ = nullptr;
    // The size of the system disk. Unit: GiB.
    // 
    // >  The system disk must be at least as large as the image.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> versionId_ = nullptr;
    // The version number.
    std::shared_ptr<string> versionName_ = nullptr;
    // Specifies whether to enable disk encryption.
    std::shared_ptr<bool> volumeEncryptionEnabled_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used to encrypt the disk.
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
