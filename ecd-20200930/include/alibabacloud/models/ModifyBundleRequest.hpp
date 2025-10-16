// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBUNDLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBUNDLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyBundleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBundleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(BundleName, bundleName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBundleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(BundleName, bundleName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyBundleRequest() = default ;
    ModifyBundleRequest(const ModifyBundleRequest &) = default ;
    ModifyBundleRequest(ModifyBundleRequest &&) = default ;
    ModifyBundleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBundleRequest() = default ;
    ModifyBundleRequest& operator=(const ModifyBundleRequest &) = default ;
    ModifyBundleRequest& operator=(ModifyBundleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bundleId_ == nullptr
        && return this->bundleName_ == nullptr && return this->description_ == nullptr && return this->imageId_ == nullptr && return this->language_ == nullptr && return this->regionId_ == nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline ModifyBundleRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // bundleName Field Functions 
    bool hasBundleName() const { return this->bundleName_ != nullptr;};
    void deleteBundleName() { this->bundleName_ = nullptr;};
    inline string bundleName() const { DARABONBA_PTR_GET_DEFAULT(bundleName_, "") };
    inline ModifyBundleRequest& setBundleName(string bundleName) { DARABONBA_PTR_SET_VALUE(bundleName_, bundleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyBundleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyBundleRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ModifyBundleRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyBundleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud computer template that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> bundleId_ = nullptr;
    // The name of the new cloud computer template.
    std::shared_ptr<string> bundleName_ = nullptr;
    // The description of the new cloud computer template.
    std::shared_ptr<string> description_ = nullptr;
    // The new image ID. The new image must meet the following conditions:
    // 
    // *   The new image must be in the Available state.
    // *   The operating system of the new image must be the same as that of the original image.
    // *   The required disk size for the new image cannot be greater than that for the original image.
    // *   The GPU type of the new image must be the same as that of the original image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The OS language. This parameter is available only for system images.
    // 
    // Valid values:
    // 
    // *   en-US: American English
    // *   zh-HK: Traditional Chinese (Hong Kong)
    // *   zh-CN: Simplified Chinese.
    // 
    // *   ja-JP: Japanese
    std::shared_ptr<string> language_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
