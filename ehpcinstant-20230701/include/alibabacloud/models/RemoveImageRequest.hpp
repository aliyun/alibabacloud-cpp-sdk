// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class RemoveImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
    };
    RemoveImageRequest() = default ;
    RemoveImageRequest(const RemoveImageRequest &) = default ;
    RemoveImageRequest(RemoveImageRequest &&) = default ;
    RemoveImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveImageRequest() = default ;
    RemoveImageRequest& operator=(const RemoveImageRequest &) = default ;
    RemoveImageRequest& operator=(RemoveImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->imageType_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline RemoveImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline RemoveImageRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


  protected:
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The type of the images. Valid values:
    // 
    // *   VM: Virtual Machine Image
    // *   Container: container image
    shared_ptr<string> imageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
