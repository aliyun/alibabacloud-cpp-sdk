// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DeleteCustomImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteCustomImagesRequest() = default ;
    DeleteCustomImagesRequest(const DeleteCustomImagesRequest &) = default ;
    DeleteCustomImagesRequest(DeleteCustomImagesRequest &&) = default ;
    DeleteCustomImagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomImagesRequest() = default ;
    DeleteCustomImagesRequest& operator=(const DeleteCustomImagesRequest &) = default ;
    DeleteCustomImagesRequest& operator=(DeleteCustomImagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->imageIds_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteCustomImagesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageIds Field Functions 
    bool hasImageIds() const { return this->imageIds_ != nullptr;};
    void deleteImageIds() { this->imageIds_ = nullptr;};
    inline string getImageIds() const { DARABONBA_PTR_GET_DEFAULT(imageIds_, "") };
    inline DeleteCustomImagesRequest& setImageIds(string imageIds) { DARABONBA_PTR_SET_VALUE(imageIds_, imageIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCustomImagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Ensures the idempotence of the request. Generate the value from your client and ensure that it is unique across different requests. **ClientToken** supports only ASCII characters and can be up to 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The instance IDs of the simple application servers. The value can be a JSON array that consists of multiple instance IDs. You can specify up to 15 IDs. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> imageIds_ {};
    // The region ID. You can call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to query available regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
