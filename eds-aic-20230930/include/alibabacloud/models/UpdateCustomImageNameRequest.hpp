// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMIMAGENAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMIMAGENAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class UpdateCustomImageNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomImageNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomImageNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
    };
    UpdateCustomImageNameRequest() = default ;
    UpdateCustomImageNameRequest(const UpdateCustomImageNameRequest &) = default ;
    UpdateCustomImageNameRequest(UpdateCustomImageNameRequest &&) = default ;
    UpdateCustomImageNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomImageNameRequest() = default ;
    UpdateCustomImageNameRequest& operator=(const UpdateCustomImageNameRequest &) = default ;
    UpdateCustomImageNameRequest& operator=(UpdateCustomImageNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->imageName_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateCustomImageNameRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline UpdateCustomImageNameRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


  protected:
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
