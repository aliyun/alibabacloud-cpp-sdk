// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
namespace Models
{
  class UpdateProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(ExtraImages, extraImages_);
      DARABONBA_PTR_TO_JSON(ImageTitle, imageTitle_);
      DARABONBA_PTR_TO_JSON(ItemUniqueId, itemUniqueId_);
      DARABONBA_PTR_TO_JSON(MainImage, mainImage_);
      DARABONBA_PTR_TO_JSON(MultiViewImages, multiViewImages_);
      DARABONBA_PTR_TO_JSON(PlatformItemId, platformItemId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(ExtraImages, extraImages_);
      DARABONBA_PTR_FROM_JSON(ImageTitle, imageTitle_);
      DARABONBA_PTR_FROM_JSON(ItemUniqueId, itemUniqueId_);
      DARABONBA_PTR_FROM_JSON(MainImage, mainImage_);
      DARABONBA_PTR_FROM_JSON(MultiViewImages, multiViewImages_);
      DARABONBA_PTR_FROM_JSON(PlatformItemId, platformItemId_);
    };
    UpdateProductRequest() = default ;
    UpdateProductRequest(const UpdateProductRequest &) = default ;
    UpdateProductRequest(UpdateProductRequest &&) = default ;
    UpdateProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProductRequest() = default ;
    UpdateProductRequest& operator=(const UpdateProductRequest &) = default ;
    UpdateProductRequest& operator=(UpdateProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MultiViewImages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultiViewImages& obj) { 
        DARABONBA_PTR_TO_JSON(Angle, angle_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, MultiViewImages& obj) { 
        DARABONBA_PTR_FROM_JSON(Angle, angle_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      MultiViewImages() = default ;
      MultiViewImages(const MultiViewImages &) = default ;
      MultiViewImages(MultiViewImages &&) = default ;
      MultiViewImages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultiViewImages() = default ;
      MultiViewImages& operator=(const MultiViewImages &) = default ;
      MultiViewImages& operator=(MultiViewImages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->angle_ == nullptr
        && this->url_ == nullptr; };
      // angle Field Functions 
      bool hasAngle() const { return this->angle_ != nullptr;};
      void deleteAngle() { this->angle_ = nullptr;};
      inline string getAngle() const { DARABONBA_PTR_GET_DEFAULT(angle_, "") };
      inline MultiViewImages& setAngle(string angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline MultiViewImages& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The angle of the digital human.
      // 
      // - 0: front view, the default angle
      // - 1: 30 degrees from the left
      // - 2: 30 degrees from the right
      // 
      // For a preview of each angle, refer to [3D Digital Human Video Synthesis User Guide](https://help.aliyun.com/document_detail/447834.html#a989eb5075t9y).
      shared_ptr<string> angle_ {};
      // The URL of the image.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->extraImages_ == nullptr && this->imageTitle_ == nullptr && this->itemUniqueId_ == nullptr && this->mainImage_ == nullptr && this->multiViewImages_ == nullptr
        && this->platformItemId_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline UpdateProductRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // extraImages Field Functions 
    bool hasExtraImages() const { return this->extraImages_ != nullptr;};
    void deleteExtraImages() { this->extraImages_ = nullptr;};
    inline const vector<string> & getExtraImages() const { DARABONBA_PTR_GET_CONST(extraImages_, vector<string>) };
    inline vector<string> getExtraImages() { DARABONBA_PTR_GET(extraImages_, vector<string>) };
    inline UpdateProductRequest& setExtraImages(const vector<string> & extraImages) { DARABONBA_PTR_SET_VALUE(extraImages_, extraImages) };
    inline UpdateProductRequest& setExtraImages(vector<string> && extraImages) { DARABONBA_PTR_SET_RVALUE(extraImages_, extraImages) };


    // imageTitle Field Functions 
    bool hasImageTitle() const { return this->imageTitle_ != nullptr;};
    void deleteImageTitle() { this->imageTitle_ = nullptr;};
    inline string getImageTitle() const { DARABONBA_PTR_GET_DEFAULT(imageTitle_, "") };
    inline UpdateProductRequest& setImageTitle(string imageTitle) { DARABONBA_PTR_SET_VALUE(imageTitle_, imageTitle) };


    // itemUniqueId Field Functions 
    bool hasItemUniqueId() const { return this->itemUniqueId_ != nullptr;};
    void deleteItemUniqueId() { this->itemUniqueId_ = nullptr;};
    inline string getItemUniqueId() const { DARABONBA_PTR_GET_DEFAULT(itemUniqueId_, "") };
    inline UpdateProductRequest& setItemUniqueId(string itemUniqueId) { DARABONBA_PTR_SET_VALUE(itemUniqueId_, itemUniqueId) };


    // mainImage Field Functions 
    bool hasMainImage() const { return this->mainImage_ != nullptr;};
    void deleteMainImage() { this->mainImage_ = nullptr;};
    inline const vector<string> & getMainImage() const { DARABONBA_PTR_GET_CONST(mainImage_, vector<string>) };
    inline vector<string> getMainImage() { DARABONBA_PTR_GET(mainImage_, vector<string>) };
    inline UpdateProductRequest& setMainImage(const vector<string> & mainImage) { DARABONBA_PTR_SET_VALUE(mainImage_, mainImage) };
    inline UpdateProductRequest& setMainImage(vector<string> && mainImage) { DARABONBA_PTR_SET_RVALUE(mainImage_, mainImage) };


    // multiViewImages Field Functions 
    bool hasMultiViewImages() const { return this->multiViewImages_ != nullptr;};
    void deleteMultiViewImages() { this->multiViewImages_ = nullptr;};
    inline const vector<UpdateProductRequest::MultiViewImages> & getMultiViewImages() const { DARABONBA_PTR_GET_CONST(multiViewImages_, vector<UpdateProductRequest::MultiViewImages>) };
    inline vector<UpdateProductRequest::MultiViewImages> getMultiViewImages() { DARABONBA_PTR_GET(multiViewImages_, vector<UpdateProductRequest::MultiViewImages>) };
    inline UpdateProductRequest& setMultiViewImages(const vector<UpdateProductRequest::MultiViewImages> & multiViewImages) { DARABONBA_PTR_SET_VALUE(multiViewImages_, multiViewImages) };
    inline UpdateProductRequest& setMultiViewImages(vector<UpdateProductRequest::MultiViewImages> && multiViewImages) { DARABONBA_PTR_SET_RVALUE(multiViewImages_, multiViewImages) };


    // platformItemId Field Functions 
    bool hasPlatformItemId() const { return this->platformItemId_ != nullptr;};
    void deletePlatformItemId() { this->platformItemId_ = nullptr;};
    inline string getPlatformItemId() const { DARABONBA_PTR_GET_DEFAULT(platformItemId_, "") };
    inline UpdateProductRequest& setPlatformItemId(string platformItemId) { DARABONBA_PTR_SET_VALUE(platformItemId_, platformItemId) };


  protected:
    // The device ID, which is used to establish the vector association between the device and the item.
    shared_ptr<string> deviceId_ {};
    // The list of additional image URLs that can be provided.
    shared_ptr<vector<string>> extraImages_ {};
    // The title of the item.
    shared_ptr<string> imageTitle_ {};
    // The business-side item ID, which is unique within the same business party.
    shared_ptr<string> itemUniqueId_ {};
    // The list of main image URLs for the item. At least one image is required.
    shared_ptr<vector<string>> mainImage_ {};
    // The list of multi-angle images for the item.
    shared_ptr<vector<UpdateProductRequest::MultiViewImages>> multiViewImages_ {};
    // The platform item ID, which is globally unique.
    shared_ptr<string> platformItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
