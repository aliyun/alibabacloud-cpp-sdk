// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class GetImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
    };
    GetImageRequest() = default ;
    GetImageRequest(const GetImageRequest &) = default ;
    GetImageRequest(GetImageRequest &&) = default ;
    GetImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageRequest() = default ;
    GetImageRequest& operator=(const GetImageRequest &) = default ;
    GetImageRequest& operator=(GetImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


  protected:
    // The ID of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
