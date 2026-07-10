// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTPRODUCTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTPRODUCTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
namespace Models
{
  class ImportProductsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportProductsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(ExtraImages, extraImagesShrink_);
      DARABONBA_PTR_TO_JSON(ImageTitle, imageTitle_);
      DARABONBA_PTR_TO_JSON(ItemUniqueId, itemUniqueId_);
      DARABONBA_PTR_TO_JSON(MainImage, mainImageShrink_);
      DARABONBA_PTR_TO_JSON(MultiViewImages, multiViewImagesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ImportProductsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(ExtraImages, extraImagesShrink_);
      DARABONBA_PTR_FROM_JSON(ImageTitle, imageTitle_);
      DARABONBA_PTR_FROM_JSON(ItemUniqueId, itemUniqueId_);
      DARABONBA_PTR_FROM_JSON(MainImage, mainImageShrink_);
      DARABONBA_PTR_FROM_JSON(MultiViewImages, multiViewImagesShrink_);
    };
    ImportProductsShrinkRequest() = default ;
    ImportProductsShrinkRequest(const ImportProductsShrinkRequest &) = default ;
    ImportProductsShrinkRequest(ImportProductsShrinkRequest &&) = default ;
    ImportProductsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportProductsShrinkRequest() = default ;
    ImportProductsShrinkRequest& operator=(const ImportProductsShrinkRequest &) = default ;
    ImportProductsShrinkRequest& operator=(ImportProductsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->extraImagesShrink_ == nullptr && this->imageTitle_ == nullptr && this->itemUniqueId_ == nullptr && this->mainImageShrink_ == nullptr && this->multiViewImagesShrink_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ImportProductsShrinkRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // extraImagesShrink Field Functions 
    bool hasExtraImagesShrink() const { return this->extraImagesShrink_ != nullptr;};
    void deleteExtraImagesShrink() { this->extraImagesShrink_ = nullptr;};
    inline string getExtraImagesShrink() const { DARABONBA_PTR_GET_DEFAULT(extraImagesShrink_, "") };
    inline ImportProductsShrinkRequest& setExtraImagesShrink(string extraImagesShrink) { DARABONBA_PTR_SET_VALUE(extraImagesShrink_, extraImagesShrink) };


    // imageTitle Field Functions 
    bool hasImageTitle() const { return this->imageTitle_ != nullptr;};
    void deleteImageTitle() { this->imageTitle_ = nullptr;};
    inline string getImageTitle() const { DARABONBA_PTR_GET_DEFAULT(imageTitle_, "") };
    inline ImportProductsShrinkRequest& setImageTitle(string imageTitle) { DARABONBA_PTR_SET_VALUE(imageTitle_, imageTitle) };


    // itemUniqueId Field Functions 
    bool hasItemUniqueId() const { return this->itemUniqueId_ != nullptr;};
    void deleteItemUniqueId() { this->itemUniqueId_ = nullptr;};
    inline string getItemUniqueId() const { DARABONBA_PTR_GET_DEFAULT(itemUniqueId_, "") };
    inline ImportProductsShrinkRequest& setItemUniqueId(string itemUniqueId) { DARABONBA_PTR_SET_VALUE(itemUniqueId_, itemUniqueId) };


    // mainImageShrink Field Functions 
    bool hasMainImageShrink() const { return this->mainImageShrink_ != nullptr;};
    void deleteMainImageShrink() { this->mainImageShrink_ = nullptr;};
    inline string getMainImageShrink() const { DARABONBA_PTR_GET_DEFAULT(mainImageShrink_, "") };
    inline ImportProductsShrinkRequest& setMainImageShrink(string mainImageShrink) { DARABONBA_PTR_SET_VALUE(mainImageShrink_, mainImageShrink) };


    // multiViewImagesShrink Field Functions 
    bool hasMultiViewImagesShrink() const { return this->multiViewImagesShrink_ != nullptr;};
    void deleteMultiViewImagesShrink() { this->multiViewImagesShrink_ = nullptr;};
    inline string getMultiViewImagesShrink() const { DARABONBA_PTR_GET_DEFAULT(multiViewImagesShrink_, "") };
    inline ImportProductsShrinkRequest& setMultiViewImagesShrink(string multiViewImagesShrink) { DARABONBA_PTR_SET_VALUE(multiViewImagesShrink_, multiViewImagesShrink) };


  protected:
    // The device ID. This ID is used to establish an association between the device and product vectors.
    shared_ptr<string> deviceId_ {};
    // The list of additional image URLs that can be provided.
    shared_ptr<string> extraImagesShrink_ {};
    // The product title.
    shared_ptr<string> imageTitle_ {};
    // The product ID assigned by the business party. This ID must be unique within the same business party.
    shared_ptr<string> itemUniqueId_ {};
    // The list of main product image URLs. At least one URL is required.
    shared_ptr<string> mainImageShrink_ {};
    // The list of multi-angle product images.
    shared_ptr<string> multiViewImagesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
