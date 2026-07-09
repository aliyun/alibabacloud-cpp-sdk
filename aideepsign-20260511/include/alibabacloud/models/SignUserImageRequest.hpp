// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIGNUSERIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIGNUSERIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class SignUserImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SignUserImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
    };
    friend void from_json(const Darabonba::Json& j, SignUserImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
    };
    SignUserImageRequest() = default ;
    SignUserImageRequest(const SignUserImageRequest &) = default ;
    SignUserImageRequest(SignUserImageRequest &&) = default ;
    SignUserImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SignUserImageRequest() = default ;
    SignUserImageRequest& operator=(const SignUserImageRequest &) = default ;
    SignUserImageRequest& operator=(SignUserImageRequest &&) = default ;
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
    inline SignUserImageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SignUserImageRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline SignUserImageRequest& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


  protected:
    // The client token that is used to ensure the idempotence of the request. The client generates this value. Make sure the value is unique across different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The URL of the image to be signed. HTTP and HTTPS URLs are supported. Specify at least one of `ImageUrl` and `ObjectKey`.
    shared_ptr<string> imageUrl_ {};
    // The ObjectKey of the image to be signed in OSS. When you use `ObjectKey`, make sure the key belongs to the namespace of the current caller. Specify at least one of `ImageUrl` and `ObjectKey`.
    shared_ptr<string> objectKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
