// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTCUSTOMIMAGE_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTCUSTOMIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBodyDataResultsExtCustomImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBodyDataResultsExtCustomImage& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBodyDataResultsExtCustomImage& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
    };
    ImageBatchModerationResponseBodyDataResultsExtCustomImage() = default ;
    ImageBatchModerationResponseBodyDataResultsExtCustomImage(const ImageBatchModerationResponseBodyDataResultsExtCustomImage &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtCustomImage(ImageBatchModerationResponseBodyDataResultsExtCustomImage &&) = default ;
    ImageBatchModerationResponseBodyDataResultsExtCustomImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBodyDataResultsExtCustomImage() = default ;
    ImageBatchModerationResponseBodyDataResultsExtCustomImage& operator=(const ImageBatchModerationResponseBodyDataResultsExtCustomImage &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtCustomImage& operator=(ImageBatchModerationResponseBodyDataResultsExtCustomImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->libId_ == nullptr && return this->libName_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ImageBatchModerationResponseBodyDataResultsExtCustomImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ImageBatchModerationResponseBodyDataResultsExtCustomImage& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline ImageBatchModerationResponseBodyDataResultsExtCustomImage& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


  protected:
    // The ID of the hit custom image.
    std::shared_ptr<string> imageId_ = nullptr;
    // Custom library ID
    std::shared_ptr<string> libId_ = nullptr;
    // The name of the hit custom gallery.
    std::shared_ptr<string> libName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
