// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
    };
    DeleteImageRequest() = default ;
    DeleteImageRequest(const DeleteImageRequest &) = default ;
    DeleteImageRequest(DeleteImageRequest &&) = default ;
    DeleteImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImageRequest() = default ;
    DeleteImageRequest& operator=(const DeleteImageRequest &) = default ;
    DeleteImageRequest& operator=(DeleteImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DeleteImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


  protected:
    // The ID of the image. You can specify only one image ID.
    // 
    // You can delete only custom images that you created.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
