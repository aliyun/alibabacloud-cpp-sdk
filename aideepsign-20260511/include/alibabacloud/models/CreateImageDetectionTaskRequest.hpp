// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateImageDetectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageDetectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CredType, credType_);
      DARABONBA_PTR_TO_JSON(DetectType, detectType_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageDetectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CredType, credType_);
      DARABONBA_PTR_FROM_JSON(DetectType, detectType_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
    };
    CreateImageDetectionTaskRequest() = default ;
    CreateImageDetectionTaskRequest(const CreateImageDetectionTaskRequest &) = default ;
    CreateImageDetectionTaskRequest(CreateImageDetectionTaskRequest &&) = default ;
    CreateImageDetectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageDetectionTaskRequest() = default ;
    CreateImageDetectionTaskRequest& operator=(const CreateImageDetectionTaskRequest &) = default ;
    CreateImageDetectionTaskRequest& operator=(CreateImageDetectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->credType_ == nullptr && this->detectType_ == nullptr && this->imageUrl_ == nullptr && this->objectKey_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageDetectionTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // credType Field Functions 
    bool hasCredType() const { return this->credType_ != nullptr;};
    void deleteCredType() { this->credType_ = nullptr;};
    inline string getCredType() const { DARABONBA_PTR_GET_DEFAULT(credType_, "") };
    inline CreateImageDetectionTaskRequest& setCredType(string credType) { DARABONBA_PTR_SET_VALUE(credType_, credType) };


    // detectType Field Functions 
    bool hasDetectType() const { return this->detectType_ != nullptr;};
    void deleteDetectType() { this->detectType_ = nullptr;};
    inline string getDetectType() const { DARABONBA_PTR_GET_DEFAULT(detectType_, "") };
    inline CreateImageDetectionTaskRequest& setDetectType(string detectType) { DARABONBA_PTR_SET_VALUE(detectType_, detectType) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateImageDetectionTaskRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline CreateImageDetectionTaskRequest& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The credential type code. This parameter is required when `DetectType` is set to `credential`. Valid values: `0101` (ID card), `0102` (bank card), `0104` (teacher qualification certificate), `0107` (student ID), `0108` (driver license), `0201` (storefront photo), `0202` (counter photo), `0203` (scene photo), `0301` (business license).
    shared_ptr<string> credType_ {};
    // The detection type. Valid values: `auto` (automatic, default), `aigc` (AIGC detection only), `credential` (credential detection only).
    shared_ptr<string> detectType_ {};
    // The URL of the image to be detected. Only HTTP and HTTPS protocols are supported. You must specify at least one of `ImageUrl` and `ObjectKey`.
    shared_ptr<string> imageUrl_ {};
    // The `ObjectKey` of the image to be detected in OSS. When you use `ObjectKey`, make sure that the key belongs to the namespace of the current caller. You must specify at least one of `ImageUrl` and `ObjectKey`.
    shared_ptr<string> objectKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
