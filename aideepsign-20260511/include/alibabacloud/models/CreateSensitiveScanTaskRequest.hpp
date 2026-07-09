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
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSensitiveScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
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
        && this->imageUrl_ == nullptr && this->objectKey_ == nullptr; };
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


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline CreateSensitiveScanTaskRequest& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The URL of the image to scan. Only HTTP and HTTPS protocols are supported. The image size cannot exceed 10 MB. You must specify at least one of ImageUrl and ObjectKey.
    shared_ptr<string> imageUrl_ {};
    // The ObjectKey of the image to scan in OSS. When you use ObjectKey, make sure that the key belongs to the namespace of the current caller. You must specify at least one of ImageUrl and ObjectKey.
    shared_ptr<string> objectKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
