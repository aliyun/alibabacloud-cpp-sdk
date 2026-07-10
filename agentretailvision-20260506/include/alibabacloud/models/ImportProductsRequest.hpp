// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTPRODUCTSREQUEST_HPP_
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
  class ImportProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(ExtraImages, extraImages_);
      DARABONBA_PTR_TO_JSON(ImageTitle, imageTitle_);
      DARABONBA_PTR_TO_JSON(ItemUniqueId, itemUniqueId_);
      DARABONBA_PTR_TO_JSON(MainImage, mainImage_);
      DARABONBA_PTR_TO_JSON(MultiViewImages, multiViewImages_);
    };
    friend void from_json(const Darabonba::Json& j, ImportProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(ExtraImages, extraImages_);
      DARABONBA_PTR_FROM_JSON(ImageTitle, imageTitle_);
      DARABONBA_PTR_FROM_JSON(ItemUniqueId, itemUniqueId_);
      DARABONBA_PTR_FROM_JSON(MainImage, mainImage_);
      DARABONBA_PTR_FROM_JSON(MultiViewImages, multiViewImages_);
    };
    ImportProductsRequest() = default ;
    ImportProductsRequest(const ImportProductsRequest &) = default ;
    ImportProductsRequest(ImportProductsRequest &&) = default ;
    ImportProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportProductsRequest() = default ;
    ImportProductsRequest& operator=(const ImportProductsRequest &) = default ;
    ImportProductsRequest& operator=(ImportProductsRequest &&) = default ;
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
      // The digital human angle. Valid values:
      // 
      // - 0: front view, which is the default angle
      // - 1: left side at 30 degrees
      // - 2: right side at 30 degrees
      // 
      // For a preview of each angle, refer to [3D Digital Human Video Synthesis User Guide](https://help.aliyun.com/document_detail/447834.html#a989eb5075t9y).
      shared_ptr<string> angle_ {};
      // The task URL.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->extraImages_ == nullptr && this->imageTitle_ == nullptr && this->itemUniqueId_ == nullptr && this->mainImage_ == nullptr && this->multiViewImages_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ImportProductsRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // extraImages Field Functions 
    bool hasExtraImages() const { return this->extraImages_ != nullptr;};
    void deleteExtraImages() { this->extraImages_ = nullptr;};
    inline const vector<string> & getExtraImages() const { DARABONBA_PTR_GET_CONST(extraImages_, vector<string>) };
    inline vector<string> getExtraImages() { DARABONBA_PTR_GET(extraImages_, vector<string>) };
    inline ImportProductsRequest& setExtraImages(const vector<string> & extraImages) { DARABONBA_PTR_SET_VALUE(extraImages_, extraImages) };
    inline ImportProductsRequest& setExtraImages(vector<string> && extraImages) { DARABONBA_PTR_SET_RVALUE(extraImages_, extraImages) };


    // imageTitle Field Functions 
    bool hasImageTitle() const { return this->imageTitle_ != nullptr;};
    void deleteImageTitle() { this->imageTitle_ = nullptr;};
    inline string getImageTitle() const { DARABONBA_PTR_GET_DEFAULT(imageTitle_, "") };
    inline ImportProductsRequest& setImageTitle(string imageTitle) { DARABONBA_PTR_SET_VALUE(imageTitle_, imageTitle) };


    // itemUniqueId Field Functions 
    bool hasItemUniqueId() const { return this->itemUniqueId_ != nullptr;};
    void deleteItemUniqueId() { this->itemUniqueId_ = nullptr;};
    inline string getItemUniqueId() const { DARABONBA_PTR_GET_DEFAULT(itemUniqueId_, "") };
    inline ImportProductsRequest& setItemUniqueId(string itemUniqueId) { DARABONBA_PTR_SET_VALUE(itemUniqueId_, itemUniqueId) };


    // mainImage Field Functions 
    bool hasMainImage() const { return this->mainImage_ != nullptr;};
    void deleteMainImage() { this->mainImage_ = nullptr;};
    inline const vector<string> & getMainImage() const { DARABONBA_PTR_GET_CONST(mainImage_, vector<string>) };
    inline vector<string> getMainImage() { DARABONBA_PTR_GET(mainImage_, vector<string>) };
    inline ImportProductsRequest& setMainImage(const vector<string> & mainImage) { DARABONBA_PTR_SET_VALUE(mainImage_, mainImage) };
    inline ImportProductsRequest& setMainImage(vector<string> && mainImage) { DARABONBA_PTR_SET_RVALUE(mainImage_, mainImage) };


    // multiViewImages Field Functions 
    bool hasMultiViewImages() const { return this->multiViewImages_ != nullptr;};
    void deleteMultiViewImages() { this->multiViewImages_ = nullptr;};
    inline const vector<ImportProductsRequest::MultiViewImages> & getMultiViewImages() const { DARABONBA_PTR_GET_CONST(multiViewImages_, vector<ImportProductsRequest::MultiViewImages>) };
    inline vector<ImportProductsRequest::MultiViewImages> getMultiViewImages() { DARABONBA_PTR_GET(multiViewImages_, vector<ImportProductsRequest::MultiViewImages>) };
    inline ImportProductsRequest& setMultiViewImages(const vector<ImportProductsRequest::MultiViewImages> & multiViewImages) { DARABONBA_PTR_SET_VALUE(multiViewImages_, multiViewImages) };
    inline ImportProductsRequest& setMultiViewImages(vector<ImportProductsRequest::MultiViewImages> && multiViewImages) { DARABONBA_PTR_SET_RVALUE(multiViewImages_, multiViewImages) };


  protected:
    // The device ID. This ID is used to establish an association between the device and product vectors.
    shared_ptr<string> deviceId_ {};
    // The list of additional image URLs that can be provided.
    shared_ptr<vector<string>> extraImages_ {};
    // The product title.
    shared_ptr<string> imageTitle_ {};
    // The product ID assigned by the business party. This ID must be unique within the same business party.
    shared_ptr<string> itemUniqueId_ {};
    // The list of main product image URLs. At least one URL is required.
    shared_ptr<vector<string>> mainImage_ {};
    // The list of multi-angle product images.
    shared_ptr<vector<ImportProductsRequest::MultiViewImages>> multiViewImages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
