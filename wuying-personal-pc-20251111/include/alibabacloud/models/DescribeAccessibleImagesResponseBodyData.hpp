// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSIBLEIMAGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSIBLEIMAGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessibleImagesResponseBodyDataCurrentImageCodeInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribeAccessibleImagesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessibleImagesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
      DARABONBA_PTR_TO_JSON(AuthTime, authTime_);
      DARABONBA_PTR_TO_JSON(CanUpdate, canUpdate_);
      DARABONBA_PTR_TO_JSON(CurrentImageCodeInfo, currentImageCodeInfo_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DockerImageSize, dockerImageSize_);
      DARABONBA_PTR_TO_JSON(EnableStartUpConfig, enableStartUpConfig_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageScope, imageScope_);
      DARABONBA_PTR_TO_JSON(ImageSource, imageSource_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(IsGpu, isGpu_);
      DARABONBA_PTR_TO_JSON(IsLinggou, isLinggou_);
      DARABONBA_PTR_TO_JSON(IsWorkstation, isWorkstation_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
      DARABONBA_PTR_TO_JSON(ShareCodes, shareCodes_);
      DARABONBA_PTR_TO_JSON(ShareCodesIncludeDisable, shareCodesIncludeDisable_);
      DARABONBA_PTR_TO_JSON(Shared, shared_);
      DARABONBA_PTR_TO_JSON(SharedBy, sharedBy_);
      DARABONBA_PTR_TO_JSON(SourceDesktopId, sourceDesktopId_);
      DARABONBA_PTR_TO_JSON(SourceDesktopType, sourceDesktopType_);
      DARABONBA_PTR_TO_JSON(SourceImageId, sourceImageId_);
      DARABONBA_PTR_TO_JSON(SourceImageName, sourceImageName_);
      DARABONBA_PTR_TO_JSON(StartUpFileList, startUpFileList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportPublish, supportPublish_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(ValidationCode, validationCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessibleImagesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
      DARABONBA_PTR_FROM_JSON(AuthTime, authTime_);
      DARABONBA_PTR_FROM_JSON(CanUpdate, canUpdate_);
      DARABONBA_PTR_FROM_JSON(CurrentImageCodeInfo, currentImageCodeInfo_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DockerImageSize, dockerImageSize_);
      DARABONBA_PTR_FROM_JSON(EnableStartUpConfig, enableStartUpConfig_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageScope, imageScope_);
      DARABONBA_PTR_FROM_JSON(ImageSource, imageSource_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(IsGpu, isGpu_);
      DARABONBA_PTR_FROM_JSON(IsLinggou, isLinggou_);
      DARABONBA_PTR_FROM_JSON(IsWorkstation, isWorkstation_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
      DARABONBA_PTR_FROM_JSON(ShareCodes, shareCodes_);
      DARABONBA_PTR_FROM_JSON(ShareCodesIncludeDisable, shareCodesIncludeDisable_);
      DARABONBA_PTR_FROM_JSON(Shared, shared_);
      DARABONBA_PTR_FROM_JSON(SharedBy, sharedBy_);
      DARABONBA_PTR_FROM_JSON(SourceDesktopId, sourceDesktopId_);
      DARABONBA_PTR_FROM_JSON(SourceDesktopType, sourceDesktopType_);
      DARABONBA_PTR_FROM_JSON(SourceImageId, sourceImageId_);
      DARABONBA_PTR_FROM_JSON(SourceImageName, sourceImageName_);
      DARABONBA_PTR_FROM_JSON(StartUpFileList, startUpFileList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportPublish, supportPublish_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(ValidationCode, validationCode_);
    };
    DescribeAccessibleImagesResponseBodyData() = default ;
    DescribeAccessibleImagesResponseBodyData(const DescribeAccessibleImagesResponseBodyData &) = default ;
    DescribeAccessibleImagesResponseBodyData(DescribeAccessibleImagesResponseBodyData &&) = default ;
    DescribeAccessibleImagesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessibleImagesResponseBodyData() = default ;
    DescribeAccessibleImagesResponseBodyData& operator=(const DescribeAccessibleImagesResponseBodyData &) = default ;
    DescribeAccessibleImagesResponseBodyData& operator=(DescribeAccessibleImagesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityType_ == nullptr
        && return this->authTime_ == nullptr && return this->canUpdate_ == nullptr && return this->currentImageCodeInfo_ == nullptr && return this->dataDiskSize_ == nullptr && return this->deployMode_ == nullptr
        && return this->description_ == nullptr && return this->dockerImageSize_ == nullptr && return this->enableStartUpConfig_ == nullptr && return this->gmtCreated_ == nullptr && return this->imageId_ == nullptr
        && return this->imageScope_ == nullptr && return this->imageSource_ == nullptr && return this->imageType_ == nullptr && return this->isGpu_ == nullptr && return this->isLinggou_ == nullptr
        && return this->isWorkstation_ == nullptr && return this->name_ == nullptr && return this->operationSystem_ == nullptr && return this->osType_ == nullptr && return this->permission_ == nullptr
        && return this->platform_ == nullptr && return this->progress_ == nullptr && return this->receiverType_ == nullptr && return this->shareCodes_ == nullptr && return this->shareCodesIncludeDisable_ == nullptr
        && return this->shared_ == nullptr && return this->sharedBy_ == nullptr && return this->sourceDesktopId_ == nullptr && return this->sourceDesktopType_ == nullptr && return this->sourceImageId_ == nullptr
        && return this->sourceImageName_ == nullptr && return this->startUpFileList_ == nullptr && return this->status_ == nullptr && return this->supportPublish_ == nullptr && return this->systemDiskSize_ == nullptr
        && return this->validationCode_ == nullptr; };
    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string activityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // authTime Field Functions 
    bool hasAuthTime() const { return this->authTime_ != nullptr;};
    void deleteAuthTime() { this->authTime_ = nullptr;};
    inline string authTime() const { DARABONBA_PTR_GET_DEFAULT(authTime_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setAuthTime(string authTime) { DARABONBA_PTR_SET_VALUE(authTime_, authTime) };


    // canUpdate Field Functions 
    bool hasCanUpdate() const { return this->canUpdate_ != nullptr;};
    void deleteCanUpdate() { this->canUpdate_ = nullptr;};
    inline bool canUpdate() const { DARABONBA_PTR_GET_DEFAULT(canUpdate_, false) };
    inline DescribeAccessibleImagesResponseBodyData& setCanUpdate(bool canUpdate) { DARABONBA_PTR_SET_VALUE(canUpdate_, canUpdate) };


    // currentImageCodeInfo Field Functions 
    bool hasCurrentImageCodeInfo() const { return this->currentImageCodeInfo_ != nullptr;};
    void deleteCurrentImageCodeInfo() { this->currentImageCodeInfo_ = nullptr;};
    inline const Models::DescribeAccessibleImagesResponseBodyDataCurrentImageCodeInfo & currentImageCodeInfo() const { DARABONBA_PTR_GET_CONST(currentImageCodeInfo_, Models::DescribeAccessibleImagesResponseBodyDataCurrentImageCodeInfo) };
    inline Models::DescribeAccessibleImagesResponseBodyDataCurrentImageCodeInfo currentImageCodeInfo() { DARABONBA_PTR_GET(currentImageCodeInfo_, Models::DescribeAccessibleImagesResponseBodyDataCurrentImageCodeInfo) };
    inline DescribeAccessibleImagesResponseBodyData& setCurrentImageCodeInfo(const Models::DescribeAccessibleImagesResponseBodyDataCurrentImageCodeInfo & currentImageCodeInfo) { DARABONBA_PTR_SET_VALUE(currentImageCodeInfo_, currentImageCodeInfo) };
    inline DescribeAccessibleImagesResponseBodyData& setCurrentImageCodeInfo(Models::DescribeAccessibleImagesResponseBodyDataCurrentImageCodeInfo && currentImageCodeInfo) { DARABONBA_PTR_SET_RVALUE(currentImageCodeInfo_, currentImageCodeInfo) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline DescribeAccessibleImagesResponseBodyData& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string deployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dockerImageSize Field Functions 
    bool hasDockerImageSize() const { return this->dockerImageSize_ != nullptr;};
    void deleteDockerImageSize() { this->dockerImageSize_ = nullptr;};
    inline int32_t dockerImageSize() const { DARABONBA_PTR_GET_DEFAULT(dockerImageSize_, 0) };
    inline DescribeAccessibleImagesResponseBodyData& setDockerImageSize(int32_t dockerImageSize) { DARABONBA_PTR_SET_VALUE(dockerImageSize_, dockerImageSize) };


    // enableStartUpConfig Field Functions 
    bool hasEnableStartUpConfig() const { return this->enableStartUpConfig_ != nullptr;};
    void deleteEnableStartUpConfig() { this->enableStartUpConfig_ = nullptr;};
    inline bool enableStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(enableStartUpConfig_, false) };
    inline DescribeAccessibleImagesResponseBodyData& setEnableStartUpConfig(bool enableStartUpConfig) { DARABONBA_PTR_SET_VALUE(enableStartUpConfig_, enableStartUpConfig) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageScope Field Functions 
    bool hasImageScope() const { return this->imageScope_ != nullptr;};
    void deleteImageScope() { this->imageScope_ = nullptr;};
    inline string imageScope() const { DARABONBA_PTR_GET_DEFAULT(imageScope_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setImageScope(string imageScope) { DARABONBA_PTR_SET_VALUE(imageScope_, imageScope) };


    // imageSource Field Functions 
    bool hasImageSource() const { return this->imageSource_ != nullptr;};
    void deleteImageSource() { this->imageSource_ = nullptr;};
    inline string imageSource() const { DARABONBA_PTR_GET_DEFAULT(imageSource_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setImageSource(string imageSource) { DARABONBA_PTR_SET_VALUE(imageSource_, imageSource) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // isGpu Field Functions 
    bool hasIsGpu() const { return this->isGpu_ != nullptr;};
    void deleteIsGpu() { this->isGpu_ = nullptr;};
    inline bool isGpu() const { DARABONBA_PTR_GET_DEFAULT(isGpu_, false) };
    inline DescribeAccessibleImagesResponseBodyData& setIsGpu(bool isGpu) { DARABONBA_PTR_SET_VALUE(isGpu_, isGpu) };


    // isLinggou Field Functions 
    bool hasIsLinggou() const { return this->isLinggou_ != nullptr;};
    void deleteIsLinggou() { this->isLinggou_ = nullptr;};
    inline string isLinggou() const { DARABONBA_PTR_GET_DEFAULT(isLinggou_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setIsLinggou(string isLinggou) { DARABONBA_PTR_SET_VALUE(isLinggou_, isLinggou) };


    // isWorkstation Field Functions 
    bool hasIsWorkstation() const { return this->isWorkstation_ != nullptr;};
    void deleteIsWorkstation() { this->isWorkstation_ = nullptr;};
    inline bool isWorkstation() const { DARABONBA_PTR_GET_DEFAULT(isWorkstation_, false) };
    inline DescribeAccessibleImagesResponseBodyData& setIsWorkstation(bool isWorkstation) { DARABONBA_PTR_SET_VALUE(isWorkstation_, isWorkstation) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationSystem Field Functions 
    bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
    void deleteOperationSystem() { this->operationSystem_ = nullptr;};
    inline string operationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // receiverType Field Functions 
    bool hasReceiverType() const { return this->receiverType_ != nullptr;};
    void deleteReceiverType() { this->receiverType_ = nullptr;};
    inline string receiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


    // shareCodes Field Functions 
    bool hasShareCodes() const { return this->shareCodes_ != nullptr;};
    void deleteShareCodes() { this->shareCodes_ = nullptr;};
    inline const vector<string> & shareCodes() const { DARABONBA_PTR_GET_CONST(shareCodes_, vector<string>) };
    inline vector<string> shareCodes() { DARABONBA_PTR_GET(shareCodes_, vector<string>) };
    inline DescribeAccessibleImagesResponseBodyData& setShareCodes(const vector<string> & shareCodes) { DARABONBA_PTR_SET_VALUE(shareCodes_, shareCodes) };
    inline DescribeAccessibleImagesResponseBodyData& setShareCodes(vector<string> && shareCodes) { DARABONBA_PTR_SET_RVALUE(shareCodes_, shareCodes) };


    // shareCodesIncludeDisable Field Functions 
    bool hasShareCodesIncludeDisable() const { return this->shareCodesIncludeDisable_ != nullptr;};
    void deleteShareCodesIncludeDisable() { this->shareCodesIncludeDisable_ = nullptr;};
    inline const vector<string> & shareCodesIncludeDisable() const { DARABONBA_PTR_GET_CONST(shareCodesIncludeDisable_, vector<string>) };
    inline vector<string> shareCodesIncludeDisable() { DARABONBA_PTR_GET(shareCodesIncludeDisable_, vector<string>) };
    inline DescribeAccessibleImagesResponseBodyData& setShareCodesIncludeDisable(const vector<string> & shareCodesIncludeDisable) { DARABONBA_PTR_SET_VALUE(shareCodesIncludeDisable_, shareCodesIncludeDisable) };
    inline DescribeAccessibleImagesResponseBodyData& setShareCodesIncludeDisable(vector<string> && shareCodesIncludeDisable) { DARABONBA_PTR_SET_RVALUE(shareCodesIncludeDisable_, shareCodesIncludeDisable) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline bool shared() const { DARABONBA_PTR_GET_DEFAULT(shared_, false) };
    inline DescribeAccessibleImagesResponseBodyData& setShared(bool shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };


    // sharedBy Field Functions 
    bool hasSharedBy() const { return this->sharedBy_ != nullptr;};
    void deleteSharedBy() { this->sharedBy_ = nullptr;};
    inline string sharedBy() const { DARABONBA_PTR_GET_DEFAULT(sharedBy_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setSharedBy(string sharedBy) { DARABONBA_PTR_SET_VALUE(sharedBy_, sharedBy) };


    // sourceDesktopId Field Functions 
    bool hasSourceDesktopId() const { return this->sourceDesktopId_ != nullptr;};
    void deleteSourceDesktopId() { this->sourceDesktopId_ = nullptr;};
    inline string sourceDesktopId() const { DARABONBA_PTR_GET_DEFAULT(sourceDesktopId_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setSourceDesktopId(string sourceDesktopId) { DARABONBA_PTR_SET_VALUE(sourceDesktopId_, sourceDesktopId) };


    // sourceDesktopType Field Functions 
    bool hasSourceDesktopType() const { return this->sourceDesktopType_ != nullptr;};
    void deleteSourceDesktopType() { this->sourceDesktopType_ = nullptr;};
    inline string sourceDesktopType() const { DARABONBA_PTR_GET_DEFAULT(sourceDesktopType_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setSourceDesktopType(string sourceDesktopType) { DARABONBA_PTR_SET_VALUE(sourceDesktopType_, sourceDesktopType) };


    // sourceImageId Field Functions 
    bool hasSourceImageId() const { return this->sourceImageId_ != nullptr;};
    void deleteSourceImageId() { this->sourceImageId_ = nullptr;};
    inline string sourceImageId() const { DARABONBA_PTR_GET_DEFAULT(sourceImageId_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setSourceImageId(string sourceImageId) { DARABONBA_PTR_SET_VALUE(sourceImageId_, sourceImageId) };


    // sourceImageName Field Functions 
    bool hasSourceImageName() const { return this->sourceImageName_ != nullptr;};
    void deleteSourceImageName() { this->sourceImageName_ = nullptr;};
    inline string sourceImageName() const { DARABONBA_PTR_GET_DEFAULT(sourceImageName_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setSourceImageName(string sourceImageName) { DARABONBA_PTR_SET_VALUE(sourceImageName_, sourceImageName) };


    // startUpFileList Field Functions 
    bool hasStartUpFileList() const { return this->startUpFileList_ != nullptr;};
    void deleteStartUpFileList() { this->startUpFileList_ = nullptr;};
    inline const vector<string> & startUpFileList() const { DARABONBA_PTR_GET_CONST(startUpFileList_, vector<string>) };
    inline vector<string> startUpFileList() { DARABONBA_PTR_GET(startUpFileList_, vector<string>) };
    inline DescribeAccessibleImagesResponseBodyData& setStartUpFileList(const vector<string> & startUpFileList) { DARABONBA_PTR_SET_VALUE(startUpFileList_, startUpFileList) };
    inline DescribeAccessibleImagesResponseBodyData& setStartUpFileList(vector<string> && startUpFileList) { DARABONBA_PTR_SET_RVALUE(startUpFileList_, startUpFileList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportPublish Field Functions 
    bool hasSupportPublish() const { return this->supportPublish_ != nullptr;};
    void deleteSupportPublish() { this->supportPublish_ = nullptr;};
    inline bool supportPublish() const { DARABONBA_PTR_GET_DEFAULT(supportPublish_, false) };
    inline DescribeAccessibleImagesResponseBodyData& setSupportPublish(bool supportPublish) { DARABONBA_PTR_SET_VALUE(supportPublish_, supportPublish) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeAccessibleImagesResponseBodyData& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // validationCode Field Functions 
    bool hasValidationCode() const { return this->validationCode_ != nullptr;};
    void deleteValidationCode() { this->validationCode_ = nullptr;};
    inline string validationCode() const { DARABONBA_PTR_GET_DEFAULT(validationCode_, "") };
    inline DescribeAccessibleImagesResponseBodyData& setValidationCode(string validationCode) { DARABONBA_PTR_SET_VALUE(validationCode_, validationCode) };


  protected:
    std::shared_ptr<string> activityType_ = nullptr;
    std::shared_ptr<string> authTime_ = nullptr;
    std::shared_ptr<bool> canUpdate_ = nullptr;
    std::shared_ptr<Models::DescribeAccessibleImagesResponseBodyDataCurrentImageCodeInfo> currentImageCodeInfo_ = nullptr;
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
    std::shared_ptr<string> deployMode_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> dockerImageSize_ = nullptr;
    std::shared_ptr<bool> enableStartUpConfig_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> imageScope_ = nullptr;
    std::shared_ptr<string> imageSource_ = nullptr;
    std::shared_ptr<string> imageType_ = nullptr;
    std::shared_ptr<bool> isGpu_ = nullptr;
    std::shared_ptr<string> isLinggou_ = nullptr;
    std::shared_ptr<bool> isWorkstation_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operationSystem_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<string> permission_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
    std::shared_ptr<string> receiverType_ = nullptr;
    std::shared_ptr<vector<string>> shareCodes_ = nullptr;
    std::shared_ptr<vector<string>> shareCodesIncludeDisable_ = nullptr;
    std::shared_ptr<bool> shared_ = nullptr;
    std::shared_ptr<string> sharedBy_ = nullptr;
    std::shared_ptr<string> sourceDesktopId_ = nullptr;
    std::shared_ptr<string> sourceDesktopType_ = nullptr;
    std::shared_ptr<string> sourceImageId_ = nullptr;
    std::shared_ptr<string> sourceImageName_ = nullptr;
    std::shared_ptr<vector<string>> startUpFileList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<bool> supportPublish_ = nullptr;
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    std::shared_ptr<string> validationCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
