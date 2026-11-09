// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEUPSCALEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEUPSCALEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageUpscaleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageUpscaleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(UpscaleFactor, upscaleFactor_);
    };
    friend void from_json(const Darabonba::Json& j, ImageUpscaleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(UpscaleFactor, upscaleFactor_);
    };
    ImageUpscaleRequest() = default ;
    ImageUpscaleRequest(const ImageUpscaleRequest &) = default ;
    ImageUpscaleRequest(ImageUpscaleRequest &&) = default ;
    ImageUpscaleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageUpscaleRequest() = default ;
    ImageUpscaleRequest& operator=(const ImageUpscaleRequest &) = default ;
    ImageUpscaleRequest& operator=(ImageUpscaleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->upscaleFactor_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageUpscaleRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // upscaleFactor Field Functions 
    bool hasUpscaleFactor() const { return this->upscaleFactor_ != nullptr;};
    void deleteUpscaleFactor() { this->upscaleFactor_ = nullptr;};
    inline int32_t getUpscaleFactor() const { DARABONBA_PTR_GET_DEFAULT(upscaleFactor_, 0) };
    inline ImageUpscaleRequest& setUpscaleFactor(int32_t upscaleFactor) { DARABONBA_PTR_SET_VALUE(upscaleFactor_, upscaleFactor) };


  protected:
    // The URL of the original image. It must be a publicly accessible image URL. You cannot use private network addresses such as localhost. The width and height of the input image must be greater than 100 pixels and less than 3000 pixels. The width and height of the upscaled image must not exceed 3000 pixels.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The upscaling factor of the image. Valid values: 2 and 4. Default value: 2.
    shared_ptr<int32_t> upscaleFactor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
