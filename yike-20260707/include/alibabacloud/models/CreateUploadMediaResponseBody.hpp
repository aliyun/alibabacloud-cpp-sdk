// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class CreateUploadMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(TicketExpiration, ticketExpiration_);
      DARABONBA_PTR_TO_JSON(UploadCredentials, uploadCredentials_);
      DARABONBA_PTR_TO_JSON(UploadTicket, uploadTicket_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(TicketExpiration, ticketExpiration_);
      DARABONBA_PTR_FROM_JSON(UploadCredentials, uploadCredentials_);
      DARABONBA_PTR_FROM_JSON(UploadTicket, uploadTicket_);
    };
    CreateUploadMediaResponseBody() = default ;
    CreateUploadMediaResponseBody(const CreateUploadMediaResponseBody &) = default ;
    CreateUploadMediaResponseBody(CreateUploadMediaResponseBody &&) = default ;
    CreateUploadMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadMediaResponseBody() = default ;
    CreateUploadMediaResponseBody& operator=(const CreateUploadMediaResponseBody &) = default ;
    CreateUploadMediaResponseBody& operator=(CreateUploadMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PostAccessKeyId, postAccessKeyId_);
        DARABONBA_PTR_TO_JSON(PostEndpoint, postEndpoint_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
        DARABONBA_PTR_TO_JSON(SignedUrl, signedUrl_);
      };
      friend void from_json(const Darabonba::Json& j, UploadCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PostAccessKeyId, postAccessKeyId_);
        DARABONBA_PTR_FROM_JSON(PostEndpoint, postEndpoint_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
        DARABONBA_PTR_FROM_JSON(SignedUrl, signedUrl_);
      };
      UploadCredentials() = default ;
      UploadCredentials(const UploadCredentials &) = default ;
      UploadCredentials(UploadCredentials &&) = default ;
      UploadCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadCredentials() = default ;
      UploadCredentials& operator=(const UploadCredentials &) = default ;
      UploadCredentials& operator=(UploadCredentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->bucket_ == nullptr && this->expiration_ == nullptr && this->policy_ == nullptr && this->postAccessKeyId_ == nullptr
        && this->postEndpoint_ == nullptr && this->region_ == nullptr && this->securityToken_ == nullptr && this->signature_ == nullptr && this->signedUrl_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline UploadCredentials& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline UploadCredentials& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline UploadCredentials& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
      inline UploadCredentials& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline UploadCredentials& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // postAccessKeyId Field Functions 
      bool hasPostAccessKeyId() const { return this->postAccessKeyId_ != nullptr;};
      void deletePostAccessKeyId() { this->postAccessKeyId_ = nullptr;};
      inline string getPostAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(postAccessKeyId_, "") };
      inline UploadCredentials& setPostAccessKeyId(string postAccessKeyId) { DARABONBA_PTR_SET_VALUE(postAccessKeyId_, postAccessKeyId) };


      // postEndpoint Field Functions 
      bool hasPostEndpoint() const { return this->postEndpoint_ != nullptr;};
      void deletePostEndpoint() { this->postEndpoint_ = nullptr;};
      inline string getPostEndpoint() const { DARABONBA_PTR_GET_DEFAULT(postEndpoint_, "") };
      inline UploadCredentials& setPostEndpoint(string postEndpoint) { DARABONBA_PTR_SET_VALUE(postEndpoint_, postEndpoint) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline UploadCredentials& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline UploadCredentials& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline UploadCredentials& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      // signedUrl Field Functions 
      bool hasSignedUrl() const { return this->signedUrl_ != nullptr;};
      void deleteSignedUrl() { this->signedUrl_ = nullptr;};
      inline string getSignedUrl() const { DARABONBA_PTR_GET_DEFAULT(signedUrl_, "") };
      inline UploadCredentials& setSignedUrl(string signedUrl) { DARABONBA_PTR_SET_VALUE(signedUrl_, signedUrl) };


    protected:
      // The temporary STS AccessKey ID. This field is returned when `STS_TOKEN` is used.
      shared_ptr<string> accessKeyId_ {};
      // The temporary STS AccessKey secret. This field is returned when `STS_TOKEN` is used.
      shared_ptr<string> accessKeySecret_ {};
      // The OSS bucket. This field is returned when `STS_TOKEN`, `POST_POLICY`, or `PRESIGNED_URL` is used.
      shared_ptr<string> bucket_ {};
      // The expiration time of the credential in UTC and ISO 8601 format.
      shared_ptr<string> expiration_ {};
      // The Base64-encoded PostObject policy. This field is returned when `POST_POLICY` is used.
      shared_ptr<string> policy_ {};
      // The AccessKey ID used for the signature. This field is returned when `POST_POLICY` is used.
      shared_ptr<string> postAccessKeyId_ {};
      // The destination endpoint for the POST request. This field is returned when `POST_POLICY` is used.
      shared_ptr<string> postEndpoint_ {};
      // The OSS region. This field is returned in all three credential modes.
      shared_ptr<string> region_ {};
      // The STS security token. This field is returned when `STS_TOKEN` is used.
      shared_ptr<string> securityToken_ {};
      // The PostObject signature. This field is returned when `POST_POLICY` is used.
      shared_ptr<string> signature_ {};
      // The pre-signed PUT URL. This field is returned when `PRESIGNED_URL` is used.
      shared_ptr<string> signedUrl_ {};
    };

    virtual bool empty() const override { return this->fileURL_ == nullptr
        && this->mediaId_ == nullptr && this->objectKey_ == nullptr && this->requestId_ == nullptr && this->storageLocation_ == nullptr && this->ticketExpiration_ == nullptr
        && this->uploadCredentials_ == nullptr && this->uploadTicket_ == nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline CreateUploadMediaResponseBody& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline CreateUploadMediaResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline CreateUploadMediaResponseBody& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUploadMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline CreateUploadMediaResponseBody& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // ticketExpiration Field Functions 
    bool hasTicketExpiration() const { return this->ticketExpiration_ != nullptr;};
    void deleteTicketExpiration() { this->ticketExpiration_ = nullptr;};
    inline string getTicketExpiration() const { DARABONBA_PTR_GET_DEFAULT(ticketExpiration_, "") };
    inline CreateUploadMediaResponseBody& setTicketExpiration(string ticketExpiration) { DARABONBA_PTR_SET_VALUE(ticketExpiration_, ticketExpiration) };


    // uploadCredentials Field Functions 
    bool hasUploadCredentials() const { return this->uploadCredentials_ != nullptr;};
    void deleteUploadCredentials() { this->uploadCredentials_ = nullptr;};
    inline const CreateUploadMediaResponseBody::UploadCredentials & getUploadCredentials() const { DARABONBA_PTR_GET_CONST(uploadCredentials_, CreateUploadMediaResponseBody::UploadCredentials) };
    inline CreateUploadMediaResponseBody::UploadCredentials getUploadCredentials() { DARABONBA_PTR_GET(uploadCredentials_, CreateUploadMediaResponseBody::UploadCredentials) };
    inline CreateUploadMediaResponseBody& setUploadCredentials(const CreateUploadMediaResponseBody::UploadCredentials & uploadCredentials) { DARABONBA_PTR_SET_VALUE(uploadCredentials_, uploadCredentials) };
    inline CreateUploadMediaResponseBody& setUploadCredentials(CreateUploadMediaResponseBody::UploadCredentials && uploadCredentials) { DARABONBA_PTR_SET_RVALUE(uploadCredentials_, uploadCredentials) };


    // uploadTicket Field Functions 
    bool hasUploadTicket() const { return this->uploadTicket_ != nullptr;};
    void deleteUploadTicket() { this->uploadTicket_ = nullptr;};
    inline string getUploadTicket() const { DARABONBA_PTR_GET_DEFAULT(uploadTicket_, "") };
    inline CreateUploadMediaResponseBody& setUploadTicket(string uploadTicket) { DARABONBA_PTR_SET_VALUE(uploadTicket_, uploadTicket) };


  protected:
    // The unsigned OSS URL of the file in the `oss://bucket/objectKey` format.
    shared_ptr<string> fileURL_ {};
    // The media asset ID.
    shared_ptr<string> mediaId_ {};
    // The OSS object key in the `yike-v1/uid segment-ws segment/date/hour/type/mediaId+random string+source suffix.file name extension` format.
    shared_ptr<string> objectKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The storage location identifier in the `bucket.endpoint` format.
    shared_ptr<string> storageLocation_ {};
    // The expiration time of the ticket in UTC and ISO 8601 format. This field is returned when `UPLOAD_TICKET` is used.
    shared_ptr<string> ticketExpiration_ {};
    // The upload credentials. Some fields may be empty depending on the `CredentialType`.
    shared_ptr<CreateUploadMediaResponseBody::UploadCredentials> uploadCredentials_ {};
    // The upload ticket. This field is returned when `UPLOAD_TICKET` is used. It is a 27-character string in the UT1+region code+random string+check digit format. A real credential is issued based on this ticket during a ticket exchange.
    shared_ptr<string> uploadTicket_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
