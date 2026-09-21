// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ImportImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseImageId, baseImageId_);
      DARABONBA_PTR_TO_JSON(ImageDescription, imageDescription_);
      DARABONBA_PTR_TO_JSON(ImageFileURL, imageFileURL_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
    };
    friend void from_json(const Darabonba::Json& j, ImportImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseImageId, baseImageId_);
      DARABONBA_PTR_FROM_JSON(ImageDescription, imageDescription_);
      DARABONBA_PTR_FROM_JSON(ImageFileURL, imageFileURL_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
    };
    ImportImageRequest() = default ;
    ImportImageRequest(const ImportImageRequest &) = default ;
    ImportImageRequest(ImportImageRequest &&) = default ;
    ImportImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportImageRequest() = default ;
    ImportImageRequest& operator=(const ImportImageRequest &) = default ;
    ImportImageRequest& operator=(ImportImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseImageId_ == nullptr
        && this->imageDescription_ == nullptr && this->imageFileURL_ == nullptr && this->imageName_ == nullptr; };
    // baseImageId Field Functions 
    bool hasBaseImageId() const { return this->baseImageId_ != nullptr;};
    void deleteBaseImageId() { this->baseImageId_ = nullptr;};
    inline string getBaseImageId() const { DARABONBA_PTR_GET_DEFAULT(baseImageId_, "") };
    inline ImportImageRequest& setBaseImageId(string baseImageId) { DARABONBA_PTR_SET_VALUE(baseImageId_, baseImageId) };


    // imageDescription Field Functions 
    bool hasImageDescription() const { return this->imageDescription_ != nullptr;};
    void deleteImageDescription() { this->imageDescription_ = nullptr;};
    inline string getImageDescription() const { DARABONBA_PTR_GET_DEFAULT(imageDescription_, "") };
    inline ImportImageRequest& setImageDescription(string imageDescription) { DARABONBA_PTR_SET_VALUE(imageDescription_, imageDescription) };


    // imageFileURL Field Functions 
    bool hasImageFileURL() const { return this->imageFileURL_ != nullptr;};
    void deleteImageFileURL() { this->imageFileURL_ = nullptr;};
    inline string getImageFileURL() const { DARABONBA_PTR_GET_DEFAULT(imageFileURL_, "") };
    inline ImportImageRequest& setImageFileURL(string imageFileURL) { DARABONBA_PTR_SET_VALUE(imageFileURL_, imageFileURL) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ImportImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


  protected:
    // The ID of the base image.
    shared_ptr<string> baseImageId_ {};
    // The description of the image.
    shared_ptr<string> imageDescription_ {};
    // The URL of the image. The URL must be an Alibaba Cloud Object Storage Service (OSS) address.
    shared_ptr<string> imageFileURL_ {};
    // The name of the image.
    shared_ptr<string> imageName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
