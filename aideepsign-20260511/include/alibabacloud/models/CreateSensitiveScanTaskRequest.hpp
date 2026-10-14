// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESENSITIVESCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESENSITIVESCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateSensitiveScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSensitiveScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSensitiveScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    CreateSensitiveScanTaskRequest() = default ;
    CreateSensitiveScanTaskRequest(const CreateSensitiveScanTaskRequest &) = default ;
    CreateSensitiveScanTaskRequest(CreateSensitiveScanTaskRequest &&) = default ;
    CreateSensitiveScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSensitiveScanTaskRequest() = default ;
    CreateSensitiveScanTaskRequest& operator=(const CreateSensitiveScanTaskRequest &) = default ;
    CreateSensitiveScanTaskRequest& operator=(CreateSensitiveScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->imageUrl_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSensitiveScanTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateSensitiveScanTaskRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // Ensures the idempotence of the request. The client generates this parameter value, which must be unique across different requests. `ClientToken` supports only ASCII characters and cannot exceed 64 characters.
    shared_ptr<string> clientToken_ {};
    // The URL of the image to be scanned. Only HTTP/HTTPS protocols are supported. The image size cannot exceed 10 MB. You must specify either `ImageUrl` or `ObjectKey`.
    shared_ptr<string> imageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
