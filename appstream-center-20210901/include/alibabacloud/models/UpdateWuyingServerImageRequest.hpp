// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWUYINGSERVERIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWUYINGSERVERIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UpdateWuyingServerImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWuyingServerImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWuyingServerImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    UpdateWuyingServerImageRequest() = default ;
    UpdateWuyingServerImageRequest(const UpdateWuyingServerImageRequest &) = default ;
    UpdateWuyingServerImageRequest(UpdateWuyingServerImageRequest &&) = default ;
    UpdateWuyingServerImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWuyingServerImageRequest() = default ;
    UpdateWuyingServerImageRequest& operator=(const UpdateWuyingServerImageRequest &) = default ;
    UpdateWuyingServerImageRequest& operator=(UpdateWuyingServerImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->productType_ == nullptr && this->wuyingServerId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateWuyingServerImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline UpdateWuyingServerImageRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline UpdateWuyingServerImageRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    // The image ID.
    shared_ptr<string> imageId_ {};
    // The product type. Set this parameter to WuyingServer.
    shared_ptr<string> productType_ {};
    // The ID of the workstation.
    shared_ptr<string> wuyingServerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
