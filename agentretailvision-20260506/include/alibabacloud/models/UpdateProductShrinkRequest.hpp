// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRODUCTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRODUCTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
namespace Models
{
  class UpdateProductShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProductShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(ExtraImages, extraImagesShrink_);
      DARABONBA_PTR_TO_JSON(ImageTitle, imageTitle_);
      DARABONBA_PTR_TO_JSON(ItemUniqueId, itemUniqueId_);
      DARABONBA_PTR_TO_JSON(MainImage, mainImageShrink_);
      DARABONBA_PTR_TO_JSON(MultiViewImages, multiViewImagesShrink_);
      DARABONBA_PTR_TO_JSON(PlatformItemId, platformItemId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProductShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(ExtraImages, extraImagesShrink_);
      DARABONBA_PTR_FROM_JSON(ImageTitle, imageTitle_);
      DARABONBA_PTR_FROM_JSON(ItemUniqueId, itemUniqueId_);
      DARABONBA_PTR_FROM_JSON(MainImage, mainImageShrink_);
      DARABONBA_PTR_FROM_JSON(MultiViewImages, multiViewImagesShrink_);
      DARABONBA_PTR_FROM_JSON(PlatformItemId, platformItemId_);
    };
    UpdateProductShrinkRequest() = default ;
    UpdateProductShrinkRequest(const UpdateProductShrinkRequest &) = default ;
    UpdateProductShrinkRequest(UpdateProductShrinkRequest &&) = default ;
    UpdateProductShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProductShrinkRequest() = default ;
    UpdateProductShrinkRequest& operator=(const UpdateProductShrinkRequest &) = default ;
    UpdateProductShrinkRequest& operator=(UpdateProductShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->extraImagesShrink_ == nullptr && this->imageTitle_ == nullptr && this->itemUniqueId_ == nullptr && this->mainImageShrink_ == nullptr && this->multiViewImagesShrink_ == nullptr
        && this->platformItemId_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline UpdateProductShrinkRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // extraImagesShrink Field Functions 
    bool hasExtraImagesShrink() const { return this->extraImagesShrink_ != nullptr;};
    void deleteExtraImagesShrink() { this->extraImagesShrink_ = nullptr;};
    inline string getExtraImagesShrink() const { DARABONBA_PTR_GET_DEFAULT(extraImagesShrink_, "") };
    inline UpdateProductShrinkRequest& setExtraImagesShrink(string extraImagesShrink) { DARABONBA_PTR_SET_VALUE(extraImagesShrink_, extraImagesShrink) };


    // imageTitle Field Functions 
    bool hasImageTitle() const { return this->imageTitle_ != nullptr;};
    void deleteImageTitle() { this->imageTitle_ = nullptr;};
    inline string getImageTitle() const { DARABONBA_PTR_GET_DEFAULT(imageTitle_, "") };
    inline UpdateProductShrinkRequest& setImageTitle(string imageTitle) { DARABONBA_PTR_SET_VALUE(imageTitle_, imageTitle) };


    // itemUniqueId Field Functions 
    bool hasItemUniqueId() const { return this->itemUniqueId_ != nullptr;};
    void deleteItemUniqueId() { this->itemUniqueId_ = nullptr;};
    inline string getItemUniqueId() const { DARABONBA_PTR_GET_DEFAULT(itemUniqueId_, "") };
    inline UpdateProductShrinkRequest& setItemUniqueId(string itemUniqueId) { DARABONBA_PTR_SET_VALUE(itemUniqueId_, itemUniqueId) };


    // mainImageShrink Field Functions 
    bool hasMainImageShrink() const { return this->mainImageShrink_ != nullptr;};
    void deleteMainImageShrink() { this->mainImageShrink_ = nullptr;};
    inline string getMainImageShrink() const { DARABONBA_PTR_GET_DEFAULT(mainImageShrink_, "") };
    inline UpdateProductShrinkRequest& setMainImageShrink(string mainImageShrink) { DARABONBA_PTR_SET_VALUE(mainImageShrink_, mainImageShrink) };


    // multiViewImagesShrink Field Functions 
    bool hasMultiViewImagesShrink() const { return this->multiViewImagesShrink_ != nullptr;};
    void deleteMultiViewImagesShrink() { this->multiViewImagesShrink_ = nullptr;};
    inline string getMultiViewImagesShrink() const { DARABONBA_PTR_GET_DEFAULT(multiViewImagesShrink_, "") };
    inline UpdateProductShrinkRequest& setMultiViewImagesShrink(string multiViewImagesShrink) { DARABONBA_PTR_SET_VALUE(multiViewImagesShrink_, multiViewImagesShrink) };


    // platformItemId Field Functions 
    bool hasPlatformItemId() const { return this->platformItemId_ != nullptr;};
    void deletePlatformItemId() { this->platformItemId_ = nullptr;};
    inline string getPlatformItemId() const { DARABONBA_PTR_GET_DEFAULT(platformItemId_, "") };
    inline UpdateProductShrinkRequest& setPlatformItemId(string platformItemId) { DARABONBA_PTR_SET_VALUE(platformItemId_, platformItemId) };


  protected:
    shared_ptr<string> deviceId_ {};
    shared_ptr<string> extraImagesShrink_ {};
    shared_ptr<string> imageTitle_ {};
    shared_ptr<string> itemUniqueId_ {};
    shared_ptr<string> mainImageShrink_ {};
    shared_ptr<string> multiViewImagesShrink_ {};
    shared_ptr<string> platformItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
