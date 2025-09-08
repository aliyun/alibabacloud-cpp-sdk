// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTCUSTOMIMAGE_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTCUSTOMIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtCustomImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtCustomImage& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtCustomImage& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
    };
    ImageModerationResponseBodyDataExtCustomImage() = default ;
    ImageModerationResponseBodyDataExtCustomImage(const ImageModerationResponseBodyDataExtCustomImage &) = default ;
    ImageModerationResponseBodyDataExtCustomImage(ImageModerationResponseBodyDataExtCustomImage &&) = default ;
    ImageModerationResponseBodyDataExtCustomImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtCustomImage() = default ;
    ImageModerationResponseBodyDataExtCustomImage& operator=(const ImageModerationResponseBodyDataExtCustomImage &) = default ;
    ImageModerationResponseBodyDataExtCustomImage& operator=(ImageModerationResponseBodyDataExtCustomImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->libId_ != nullptr && this->libName_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ImageModerationResponseBodyDataExtCustomImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ImageModerationResponseBodyDataExtCustomImage& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline ImageModerationResponseBodyDataExtCustomImage& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


  protected:
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image library ID.
    std::shared_ptr<string> libId_ = nullptr;
    // The image library name.
    std::shared_ptr<string> libName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
