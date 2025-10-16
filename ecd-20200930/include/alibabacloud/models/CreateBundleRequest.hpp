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
        && return this->description_ == nullptr && return this->desktopType_ == nullptr && return this->imageId_ == nullptr && return this->language_ == nullptr && return this->regionId_ == nullptr
        && return this->rootDiskPerformanceLevel_ == nullptr && return this->rootDiskSizeGib_ == nullptr && return this->userDiskPerformanceLevel_ == nullptr && return this->userDiskSizeGib_ == nullptr; };
    // bundleName Field Functions 
    bool hasBundleName() const { return this->bundleName_ != nullptr;};
    void deleteBundleName() { this->bundleName_ = nullptr;};
    inline string bundleName() const { DARABONBA_PTR_GET_DEFAULT(bundleName_, "") };
    inline CreateBundleRequest& setBundleName(string bundleName) { DARABONBA_PTR_SET_VALUE(bundleName_, bundleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBundleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline CreateBundleRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateBundleRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateBundleRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBundleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rootDiskPerformanceLevel Field Functions 
    bool hasRootDiskPerformanceLevel() const { return this->rootDiskPerformanceLevel_ != nullptr;};
    void deleteRootDiskPerformanceLevel() { this->rootDiskPerformanceLevel_ = nullptr;};
    inline string rootDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(rootDiskPerformanceLevel_, "") };
    inline CreateBundleRequest& setRootDiskPerformanceLevel(string rootDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(rootDiskPerformanceLevel_, rootDiskPerformanceLevel) };


    // rootDiskSizeGib Field Functions 
    bool hasRootDiskSizeGib() const { return this->rootDiskSizeGib_ != nullptr;};
    void deleteRootDiskSizeGib() { this->rootDiskSizeGib_ = nullptr;};
    inline int32_t rootDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSizeGib_, 0) };
    inline CreateBundleRequest& setRootDiskSizeGib(int32_t rootDiskSizeGib) { DARABONBA_PTR_SET_VALUE(rootDiskSizeGib_, rootDiskSizeGib) };


    // userDiskPerformanceLevel Field Functions 
    bool hasUserDiskPerformanceLevel() const { return this->userDiskPerformanceLevel_ != nullptr;};
    void deleteUserDiskPerformanceLevel() { this->userDiskPerformanceLevel_ = nullptr;};
    inline string userDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(userDiskPerformanceLevel_, "") };
    inline CreateBundleRequest& setUserDiskPerformanceLevel(string userDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(userDiskPerformanceLevel_, userDiskPerformanceLevel) };


    // userDiskSizeGib Field Functions 
    bool hasUserDiskSizeGib() const { return this->userDiskSizeGib_ != nullptr;};
    void deleteUserDiskSizeGib() { this->userDiskSizeGib_ = nullptr;};
    inline const vector<int32_t> & userDiskSizeGib() const { DARABONBA_PTR_GET_CONST(userDiskSizeGib_, vector<int32_t>) };
    inline vector<int32_t> userDiskSizeGib() { DARABONBA_PTR_GET(userDiskSizeGib_, vector<int32_t>) };
    inline CreateBundleRequest& setUserDiskSizeGib(const vector<int32_t> & userDiskSizeGib) { DARABONBA_PTR_SET_VALUE(userDiskSizeGib_, userDiskSizeGib) };
    inline CreateBundleRequest& setUserDiskSizeGib(vector<int32_t> && userDiskSizeGib) { DARABONBA_PTR_SET_RVALUE(userDiskSizeGib_, userDiskSizeGib) };


  protected:
    // The name of the cloud computer template.
    std::shared_ptr<string> bundleName_ = nullptr;
    // The description of the cloud computer template.
    std::shared_ptr<string> description_ = nullptr;
    // The instance type of the cloud computers. You can call the [DescribeBundles](https://help.aliyun.com/document_detail/436974.html) operation to query cloud computer templates and obtain the instance types supported by the cloud computers from the `DesktopType` response parameter.
    // 
    // >  If you want the template to use a non-GPU-accelerated image, you can only select a non-GPU-accelerated instance type. If you want the template to use a GPU-accelerated image, you can only select a GPU-accelerated instance type.
    // 
    // This parameter is required.
    std::shared_ptr<string> desktopType_ = nullptr;
    // The ID of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The OS language. This parameter is available only for system images. Valid values:
    // 
    // *   zh-CN: Simplified Chinese
    // *   zh-HK: Traditional Chinese (Hong Kong)
    // *   en-US: American English
    // *   ja-JP: Japanese
    std::shared_ptr<string> language_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The performance level (PL) of the system disk. When the cloud computer instance type that is specified by the DesktopType parameter is set to a graphical instance type or instance type with a high clock speed, you can set the performance level of the disks. For more information about the differences among disks at different PLs, see [Enhanced SSDs](https://help.aliyun.com/document_detail/122389.html).
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
    std::shared_ptr<string> rootDiskPerformanceLevel_ = nullptr;
    // The size of the system disk. Unit: GiB. The value of this parameter must be consistent with the system disk size supported by the cloud computer instance type. For more information, see [Overview](https://help.aliyun.com/document_detail/188609.html).
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> rootDiskSizeGib_ = nullptr;
    // The PL of the data disk. When the cloud computer instance type that is specified by the DesktopType parameter is set to a graphical instance type or instance type with a high clock speed, you can set the performance level of the disks. For more information about the differences among disks at different PLs, see [Enhanced SSDs](https://help.aliyun.com/document_detail/122389.html).
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
    std::shared_ptr<string> userDiskPerformanceLevel_ = nullptr;
    // The data disk sizes. You can configure only one data disk.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> userDiskSizeGib_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
