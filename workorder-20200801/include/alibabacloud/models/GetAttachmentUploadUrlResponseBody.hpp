// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACHMENTUPLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACHMENTUPLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200801
{
namespace Models
{
  class GetAttachmentUploadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttachmentUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessFileUrl, accessFileUrl_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(PutObjectUrl, putObjectUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttachmentUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessFileUrl, accessFileUrl_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(PutObjectUrl, putObjectUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAttachmentUploadUrlResponseBody() = default ;
    GetAttachmentUploadUrlResponseBody(const GetAttachmentUploadUrlResponseBody &) = default ;
    GetAttachmentUploadUrlResponseBody(GetAttachmentUploadUrlResponseBody &&) = default ;
    GetAttachmentUploadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttachmentUploadUrlResponseBody() = default ;
    GetAttachmentUploadUrlResponseBody& operator=(const GetAttachmentUploadUrlResponseBody &) = default ;
    GetAttachmentUploadUrlResponseBody& operator=(GetAttachmentUploadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessFileUrl_ == nullptr
        && this->objectKey_ == nullptr && this->putObjectUrl_ == nullptr && this->requestId_ == nullptr; };
    // accessFileUrl Field Functions 
    bool hasAccessFileUrl() const { return this->accessFileUrl_ != nullptr;};
    void deleteAccessFileUrl() { this->accessFileUrl_ = nullptr;};
    inline string getAccessFileUrl() const { DARABONBA_PTR_GET_DEFAULT(accessFileUrl_, "") };
    inline GetAttachmentUploadUrlResponseBody& setAccessFileUrl(string accessFileUrl) { DARABONBA_PTR_SET_VALUE(accessFileUrl_, accessFileUrl) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline GetAttachmentUploadUrlResponseBody& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // putObjectUrl Field Functions 
    bool hasPutObjectUrl() const { return this->putObjectUrl_ != nullptr;};
    void deletePutObjectUrl() { this->putObjectUrl_ = nullptr;};
    inline string getPutObjectUrl() const { DARABONBA_PTR_GET_DEFAULT(putObjectUrl_, "") };
    inline GetAttachmentUploadUrlResponseBody& setPutObjectUrl(string putObjectUrl) { DARABONBA_PTR_SET_VALUE(putObjectUrl_, putObjectUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttachmentUploadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessFileUrl_ {};
    shared_ptr<string> objectKey_ {};
    shared_ptr<string> putObjectUrl_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20200801
#endif
