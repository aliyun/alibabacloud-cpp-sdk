// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBUNDLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBUNDLEREQUEST_HPP_
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
  class CreateBundleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBundleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleName, bundleName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RootDiskPerformanceLevel, rootDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_TO_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBundleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleName, bundleName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RootDiskPerformanceLevel, rootDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_FROM_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    CreateBundleRequest() = default ;
    CreateBundleRequest(const CreateBundleRequest &) = default ;
    CreateBundleRequest(CreateBundleRequest &&) = default ;
    CreateBundleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBundleRequest() = default ;
    CreateBundleRequest& operator=(const CreateBundleRequest &) = default ;
    CreateBundleRequest& operator=(CreateBundleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bundleName_ == nullptr
        && this->description_ == nullptr && this->desktopType_ == nullptr && this->imageId_ == nullptr && this->language_ == nullptr && this->regionId_ == nullptr
        && this->rootDiskPerformanceLevel_ == nullptr && this->rootDiskSizeGib_ == nullptr && this->userDiskPerformanceLevel_ == nullptr && this->userDiskSizeGib_ == nullptr; };
    // bundleName Field Functions 
    bool hasBundleName() const { return this->bundleName_ != nullptr;};
    void deleteBundleName() { this->bundleName_ = nullptr;};
    inline string getBundleName() const { DARABONBA_PTR_GET_DEFAULT(bundleName_, "") };
    inline CreateBundleRequest& setBundleName(string bundleName) { DARABONBA_PTR_SET_VALUE(bundleName_, bundleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBundleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline CreateBundleRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateBundleRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateBundleRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBundleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rootDiskPerformanceLevel Field Functions 
    bool hasRootDiskPerformanceLevel() const { return this->rootDiskPerformanceLevel_ != nullptr;};
    void deleteRootDiskPerformanceLevel() { this->rootDiskPerformanceLevel_ = nullptr;};
    inline string getRootDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(rootDiskPerformanceLevel_, "") };
    inline CreateBundleRequest& setRootDiskPerformanceLevel(string rootDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(rootDiskPerformanceLevel_, rootDiskPerformanceLevel) };


    // rootDiskSizeGib Field Functions 
    bool hasRootDiskSizeGib() const { return this->rootDiskSizeGib_ != nullptr;};
    void deleteRootDiskSizeGib() { this->rootDiskSizeGib_ = nullptr;};
    inline int32_t getRootDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSizeGib_, 0) };
    inline CreateBundleRequest& setRootDiskSizeGib(int32_t rootDiskSizeGib) { DARABONBA_PTR_SET_VALUE(rootDiskSizeGib_, rootDiskSizeGib) };


    // userDiskPerformanceLevel Field Functions 
    bool hasUserDiskPerformanceLevel() const { return this->userDiskPerformanceLevel_ != nullptr;};
    void deleteUserDiskPerformanceLevel() { this->userDiskPerformanceLevel_ = nullptr;};
    inline string getUserDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(userDiskPerformanceLevel_, "") };
    inline CreateBundleRequest& setUserDiskPerformanceLevel(string userDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(userDiskPerformanceLevel_, userDiskPerformanceLevel) };


    // userDiskSizeGib Field Functions 
    bool hasUserDiskSizeGib() const { return this->userDiskSizeGib_ != nullptr;};
    void deleteUserDiskSizeGib() { this->userDiskSizeGib_ = nullptr;};
    inline const vector<int32_t> & getUserDiskSizeGib() const { DARABONBA_PTR_GET_CONST(userDiskSizeGib_, vector<int32_t>) };
    inline vector<int32_t> getUserDiskSizeGib() { DARABONBA_PTR_GET(userDiskSizeGib_, vector<int32_t>) };
    inline CreateBundleRequest& setUserDiskSizeGib(const vector<int32_t> & userDiskSizeGib) { DARABONBA_PTR_SET_VALUE(userDiskSizeGib_, userDiskSizeGib) };
    inline CreateBundleRequest& setUserDiskSizeGib(vector<int32_t> && userDiskSizeGib) { DARABONBA_PTR_SET_RVALUE(userDiskSizeGib_, userDiskSizeGib) };


  protected:
    // The name of the cloud computer template.
    shared_ptr<string> bundleName_ {};
    // The description of the cloud computer template.
    shared_ptr<string> description_ {};
    // The cloud computer specifications. You can call [DescribeBundles](https://help.aliyun.com/document_detail/436974.html) to query cloud computer templates and obtain the supported cloud computer specifications from the `DesktopType` parameter in the response.
    // 
    // > Non-GPU images can only use non-GPU specifications, and GPU images can only use GPU specifications.
    // 
    // This parameter is required.
    shared_ptr<string> desktopType_ {};
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The operating system language. Currently, only system images are supported. Valid values:
    // 
    // - zh-CN: Simplified Chinese.
    // - zh-HK: Traditional Chinese (Hong Kong (China)).
    // - en-US: English.
    // - ja-JP: Japanese.
    shared_ptr<string> language_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The performance level of the system cloud disk. When the cloud computer specifications are set to graphics or high frequency, you can configure the cloud disk performance level. For more information about the differences between performance levels, see [ESSD cloud disks](https://help.aliyun.com/document_detail/122389.html). Settings: standard SSD and ESSD cloud disks are supported.
    shared_ptr<string> rootDiskPerformanceLevel_ {};
    // The system disk size. Unit: GiB. The supported system disk sizes correspond to the specifications. For more information, see [Overview of cloud computer specifications](https://help.aliyun.com/document_detail/188609.html).
    // 
    // This parameter is required.
    shared_ptr<int32_t> rootDiskSizeGib_ {};
    // The performance level of the data cloud disk. When the cloud computer specifications are set to graphics or high frequency, you can configure the cloud disk performance level. For more information about the differences between performance levels, see [ESSD cloud disks](https://help.aliyun.com/document_detail/122389.html). Settings: standard SSD and ESSD cloud disks are supported.
    shared_ptr<string> userDiskPerformanceLevel_ {};
    // The list of data disk sizes. Currently, only one data disk can be configured.
    // 
    // This parameter is required.
    shared_ptr<vector<int32_t>> userDiskSizeGib_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
