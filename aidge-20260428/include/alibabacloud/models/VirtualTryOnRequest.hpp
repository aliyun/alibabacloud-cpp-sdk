// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIRTUALTRYONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIRTUALTRYONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class VirtualTryOnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VirtualTryOnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClothImageUrl, clothImageUrl_);
      DARABONBA_PTR_TO_JSON(ClothType, clothType_);
      DARABONBA_PTR_TO_JSON(ModelImageUrl, modelImageUrl_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
    };
    friend void from_json(const Darabonba::Json& j, VirtualTryOnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClothImageUrl, clothImageUrl_);
      DARABONBA_PTR_FROM_JSON(ClothType, clothType_);
      DARABONBA_PTR_FROM_JSON(ModelImageUrl, modelImageUrl_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
    };
    VirtualTryOnRequest() = default ;
    VirtualTryOnRequest(const VirtualTryOnRequest &) = default ;
    VirtualTryOnRequest(VirtualTryOnRequest &&) = default ;
    VirtualTryOnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VirtualTryOnRequest() = default ;
    VirtualTryOnRequest& operator=(const VirtualTryOnRequest &) = default ;
    VirtualTryOnRequest& operator=(VirtualTryOnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clothImageUrl_ == nullptr
        && this->clothType_ == nullptr && this->modelImageUrl_ == nullptr && this->resolution_ == nullptr; };
    // clothImageUrl Field Functions 
    bool hasClothImageUrl() const { return this->clothImageUrl_ != nullptr;};
    void deleteClothImageUrl() { this->clothImageUrl_ = nullptr;};
    inline string getClothImageUrl() const { DARABONBA_PTR_GET_DEFAULT(clothImageUrl_, "") };
    inline VirtualTryOnRequest& setClothImageUrl(string clothImageUrl) { DARABONBA_PTR_SET_VALUE(clothImageUrl_, clothImageUrl) };


    // clothType Field Functions 
    bool hasClothType() const { return this->clothType_ != nullptr;};
    void deleteClothType() { this->clothType_ = nullptr;};
    inline string getClothType() const { DARABONBA_PTR_GET_DEFAULT(clothType_, "") };
    inline VirtualTryOnRequest& setClothType(string clothType) { DARABONBA_PTR_SET_VALUE(clothType_, clothType) };


    // modelImageUrl Field Functions 
    bool hasModelImageUrl() const { return this->modelImageUrl_ != nullptr;};
    void deleteModelImageUrl() { this->modelImageUrl_ = nullptr;};
    inline string getModelImageUrl() const { DARABONBA_PTR_GET_DEFAULT(modelImageUrl_, "") };
    inline VirtualTryOnRequest& setModelImageUrl(string modelImageUrl) { DARABONBA_PTR_SET_VALUE(modelImageUrl_, modelImageUrl) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline VirtualTryOnRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


  protected:
    // The URL of the garment image. Only one image is supported. The URL must be a publicly accessible `http`/`https` address. The image must be in JPG, JPEG, PNG, BMP, or WEBP format, with a resolution between 256 × 256 and 2049 × 2049 pixels, and a file size of no more than 10 MB.<br>
    // 
    // This parameter is required.
    shared_ptr<string> clothImageUrl_ {};
    // The garment type. Valid values: tops, bottoms, dresses, tops_and_bottoms, shoes, and hats. If this parameter is not specified, the system automatically identifies the garment type.
    shared_ptr<string> clothType_ {};
    // The URL of the model image. Only one image is supported. The URL must be a publicly accessible `http`/`https` address. The image must be in JPG, JPEG, PNG, BMP, or WEBP format, with a resolution between 256 × 256 and 2049 × 2049 pixels, and a file size of no more than 10 MB.<br>
    // 
    // This parameter is required.
    shared_ptr<string> modelImageUrl_ {};
    // Required. The image resolution. Valid values: 1K and 2K.
    // 
    // This parameter is required.
    shared_ptr<string> resolution_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
