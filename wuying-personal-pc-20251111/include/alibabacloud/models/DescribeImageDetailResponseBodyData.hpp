// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageDetailResponseBodyDataCurrentImageCodeInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribeImageDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentImageCodeInfo, currentImageCodeInfo_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableStartUpConfig, enableStartUpConfig_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageScope, imageScope_);
      DARABONBA_PTR_TO_JSON(IsGpu, isGpu_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ShareCodes, shareCodes_);
      DARABONBA_PTR_TO_JSON(ShareCodesIncludeDisable, shareCodesIncludeDisable_);
      DARABONBA_PTR_TO_JSON(Shared, shared_);
      DARABONBA_PTR_TO_JSON(SourceDesktopType, sourceDesktopType_);
      DARABONBA_PTR_TO_JSON(StartUpFileList, startUpFileList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentImageCodeInfo, currentImageCodeInfo_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableStartUpConfig, enableStartUpConfig_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageScope, imageScope_);
      DARABONBA_PTR_FROM_JSON(IsGpu, isGpu_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ShareCodes, shareCodes_);
      DARABONBA_PTR_FROM_JSON(ShareCodesIncludeDisable, shareCodesIncludeDisable_);
      DARABONBA_PTR_FROM_JSON(Shared, shared_);
      DARABONBA_PTR_FROM_JSON(SourceDesktopType, sourceDesktopType_);
      DARABONBA_PTR_FROM_JSON(StartUpFileList, startUpFileList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    DescribeImageDetailResponseBodyData() = default ;
    DescribeImageDetailResponseBodyData(const DescribeImageDetailResponseBodyData &) = default ;
    DescribeImageDetailResponseBodyData(DescribeImageDetailResponseBodyData &&) = default ;
    DescribeImageDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageDetailResponseBodyData() = default ;
    DescribeImageDetailResponseBodyData& operator=(const DescribeImageDetailResponseBodyData &) = default ;
    DescribeImageDetailResponseBodyData& operator=(DescribeImageDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentImageCodeInfo_ == nullptr
        && return this->dataDiskSize_ == nullptr && return this->description_ == nullptr && return this->enableStartUpConfig_ == nullptr && return this->gmtCreated_ == nullptr && return this->imageId_ == nullptr
        && return this->imageScope_ == nullptr && return this->isGpu_ == nullptr && return this->name_ == nullptr && return this->osType_ == nullptr && return this->permission_ == nullptr
        && return this->platform_ == nullptr && return this->progress_ == nullptr && return this->shareCodes_ == nullptr && return this->shareCodesIncludeDisable_ == nullptr && return this->shared_ == nullptr
        && return this->sourceDesktopType_ == nullptr && return this->startUpFileList_ == nullptr && return this->status_ == nullptr && return this->systemDiskSize_ == nullptr; };
    // currentImageCodeInfo Field Functions 
    bool hasCurrentImageCodeInfo() const { return this->currentImageCodeInfo_ != nullptr;};
    void deleteCurrentImageCodeInfo() { this->currentImageCodeInfo_ = nullptr;};
    inline const Models::DescribeImageDetailResponseBodyDataCurrentImageCodeInfo & currentImageCodeInfo() const { DARABONBA_PTR_GET_CONST(currentImageCodeInfo_, Models::DescribeImageDetailResponseBodyDataCurrentImageCodeInfo) };
    inline Models::DescribeImageDetailResponseBodyDataCurrentImageCodeInfo currentImageCodeInfo() { DARABONBA_PTR_GET(currentImageCodeInfo_, Models::DescribeImageDetailResponseBodyDataCurrentImageCodeInfo) };
    inline DescribeImageDetailResponseBodyData& setCurrentImageCodeInfo(const Models::DescribeImageDetailResponseBodyDataCurrentImageCodeInfo & currentImageCodeInfo) { DARABONBA_PTR_SET_VALUE(currentImageCodeInfo_, currentImageCodeInfo) };
    inline DescribeImageDetailResponseBodyData& setCurrentImageCodeInfo(Models::DescribeImageDetailResponseBodyDataCurrentImageCodeInfo && currentImageCodeInfo) { DARABONBA_PTR_SET_RVALUE(currentImageCodeInfo_, currentImageCodeInfo) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline DescribeImageDetailResponseBodyData& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImageDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableStartUpConfig Field Functions 
    bool hasEnableStartUpConfig() const { return this->enableStartUpConfig_ != nullptr;};
    void deleteEnableStartUpConfig() { this->enableStartUpConfig_ = nullptr;};
    inline bool enableStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(enableStartUpConfig_, false) };
    inline DescribeImageDetailResponseBodyData& setEnableStartUpConfig(bool enableStartUpConfig) { DARABONBA_PTR_SET_VALUE(enableStartUpConfig_, enableStartUpConfig) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeImageDetailResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageDetailResponseBodyData& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageScope Field Functions 
    bool hasImageScope() const { return this->imageScope_ != nullptr;};
    void deleteImageScope() { this->imageScope_ = nullptr;};
    inline string imageScope() const { DARABONBA_PTR_GET_DEFAULT(imageScope_, "") };
    inline DescribeImageDetailResponseBodyData& setImageScope(string imageScope) { DARABONBA_PTR_SET_VALUE(imageScope_, imageScope) };


    // isGpu Field Functions 
    bool hasIsGpu() const { return this->isGpu_ != nullptr;};
    void deleteIsGpu() { this->isGpu_ = nullptr;};
    inline bool isGpu() const { DARABONBA_PTR_GET_DEFAULT(isGpu_, false) };
    inline DescribeImageDetailResponseBodyData& setIsGpu(bool isGpu) { DARABONBA_PTR_SET_VALUE(isGpu_, isGpu) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeImageDetailResponseBodyData& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline DescribeImageDetailResponseBodyData& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeImageDetailResponseBodyData& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeImageDetailResponseBodyData& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // shareCodes Field Functions 
    bool hasShareCodes() const { return this->shareCodes_ != nullptr;};
    void deleteShareCodes() { this->shareCodes_ = nullptr;};
    inline const vector<string> & shareCodes() const { DARABONBA_PTR_GET_CONST(shareCodes_, vector<string>) };
    inline vector<string> shareCodes() { DARABONBA_PTR_GET(shareCodes_, vector<string>) };
    inline DescribeImageDetailResponseBodyData& setShareCodes(const vector<string> & shareCodes) { DARABONBA_PTR_SET_VALUE(shareCodes_, shareCodes) };
    inline DescribeImageDetailResponseBodyData& setShareCodes(vector<string> && shareCodes) { DARABONBA_PTR_SET_RVALUE(shareCodes_, shareCodes) };


    // shareCodesIncludeDisable Field Functions 
    bool hasShareCodesIncludeDisable() const { return this->shareCodesIncludeDisable_ != nullptr;};
    void deleteShareCodesIncludeDisable() { this->shareCodesIncludeDisable_ = nullptr;};
    inline const vector<string> & shareCodesIncludeDisable() const { DARABONBA_PTR_GET_CONST(shareCodesIncludeDisable_, vector<string>) };
    inline vector<string> shareCodesIncludeDisable() { DARABONBA_PTR_GET(shareCodesIncludeDisable_, vector<string>) };
    inline DescribeImageDetailResponseBodyData& setShareCodesIncludeDisable(const vector<string> & shareCodesIncludeDisable) { DARABONBA_PTR_SET_VALUE(shareCodesIncludeDisable_, shareCodesIncludeDisable) };
    inline DescribeImageDetailResponseBodyData& setShareCodesIncludeDisable(vector<string> && shareCodesIncludeDisable) { DARABONBA_PTR_SET_RVALUE(shareCodesIncludeDisable_, shareCodesIncludeDisable) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline bool shared() const { DARABONBA_PTR_GET_DEFAULT(shared_, false) };
    inline DescribeImageDetailResponseBodyData& setShared(bool shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };


    // sourceDesktopType Field Functions 
    bool hasSourceDesktopType() const { return this->sourceDesktopType_ != nullptr;};
    void deleteSourceDesktopType() { this->sourceDesktopType_ = nullptr;};
    inline string sourceDesktopType() const { DARABONBA_PTR_GET_DEFAULT(sourceDesktopType_, "") };
    inline DescribeImageDetailResponseBodyData& setSourceDesktopType(string sourceDesktopType) { DARABONBA_PTR_SET_VALUE(sourceDesktopType_, sourceDesktopType) };


    // startUpFileList Field Functions 
    bool hasStartUpFileList() const { return this->startUpFileList_ != nullptr;};
    void deleteStartUpFileList() { this->startUpFileList_ = nullptr;};
    inline const vector<string> & startUpFileList() const { DARABONBA_PTR_GET_CONST(startUpFileList_, vector<string>) };
    inline vector<string> startUpFileList() { DARABONBA_PTR_GET(startUpFileList_, vector<string>) };
    inline DescribeImageDetailResponseBodyData& setStartUpFileList(const vector<string> & startUpFileList) { DARABONBA_PTR_SET_VALUE(startUpFileList_, startUpFileList) };
    inline DescribeImageDetailResponseBodyData& setStartUpFileList(vector<string> && startUpFileList) { DARABONBA_PTR_SET_RVALUE(startUpFileList_, startUpFileList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageDetailResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeImageDetailResponseBodyData& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    std::shared_ptr<Models::DescribeImageDetailResponseBodyDataCurrentImageCodeInfo> currentImageCodeInfo_ = nullptr;
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableStartUpConfig_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> imageScope_ = nullptr;
    std::shared_ptr<bool> isGpu_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<string> permission_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
    std::shared_ptr<vector<string>> shareCodes_ = nullptr;
    std::shared_ptr<vector<string>> shareCodesIncludeDisable_ = nullptr;
    std::shared_ptr<bool> shared_ = nullptr;
    std::shared_ptr<string> sourceDesktopType_ = nullptr;
    std::shared_ptr<vector<string>> startUpFileList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
