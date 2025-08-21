// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYIMAGESIMAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYIMAGESIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceInfoResponseBodyImagesImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
    };
    DescribeAvailableResourceInfoResponseBodyImagesImage() = default ;
    DescribeAvailableResourceInfoResponseBodyImagesImage(const DescribeAvailableResourceInfoResponseBodyImagesImage &) = default ;
    DescribeAvailableResourceInfoResponseBodyImagesImage(DescribeAvailableResourceInfoResponseBodyImagesImage &&) = default ;
    DescribeAvailableResourceInfoResponseBodyImagesImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBodyImagesImage() = default ;
    DescribeAvailableResourceInfoResponseBodyImagesImage& operator=(const DescribeAvailableResourceInfoResponseBodyImagesImage &) = default ;
    DescribeAvailableResourceInfoResponseBodyImagesImage& operator=(DescribeAvailableResourceInfoResponseBodyImagesImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->imageName_ != nullptr && this->imageSize_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeAvailableResourceInfoResponseBodyImagesImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeAvailableResourceInfoResponseBodyImagesImage& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline int32_t imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0) };
    inline DescribeAvailableResourceInfoResponseBodyImagesImage& setImageSize(int32_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


  protected:
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The size of the image. Unit: GB.
    std::shared_ptr<int32_t> imageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
