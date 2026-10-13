// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACHMENTUPLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACHMENTUPLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class GetAttachmentUploadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttachmentUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttachmentUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GetSignedUrl, getSignedUrl_);
        DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
        DARABONBA_PTR_TO_JSON(PutSignedUrl, putSignedUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GetSignedUrl, getSignedUrl_);
        DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
        DARABONBA_PTR_FROM_JSON(PutSignedUrl, putSignedUrl_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->getSignedUrl_ == nullptr
        && this->objectKey_ == nullptr && this->putSignedUrl_ == nullptr; };
      // getSignedUrl Field Functions 
      bool hasGetSignedUrl() const { return this->getSignedUrl_ != nullptr;};
      void deleteGetSignedUrl() { this->getSignedUrl_ = nullptr;};
      inline string getGetSignedUrl() const { DARABONBA_PTR_GET_DEFAULT(getSignedUrl_, "") };
      inline Data& setGetSignedUrl(string getSignedUrl) { DARABONBA_PTR_SET_VALUE(getSignedUrl_, getSignedUrl) };


      // objectKey Field Functions 
      bool hasObjectKey() const { return this->objectKey_ != nullptr;};
      void deleteObjectKey() { this->objectKey_ = nullptr;};
      inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
      inline Data& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


      // putSignedUrl Field Functions 
      bool hasPutSignedUrl() const { return this->putSignedUrl_ != nullptr;};
      void deletePutSignedUrl() { this->putSignedUrl_ = nullptr;};
      inline string getPutSignedUrl() const { DARABONBA_PTR_GET_DEFAULT(putSignedUrl_, "") };
      inline Data& setPutSignedUrl(string putSignedUrl) { DARABONBA_PTR_SET_VALUE(putSignedUrl_, putSignedUrl) };


    protected:
      // Query the signed URL of an OSS object
      shared_ptr<string> getSignedUrl_ {};
      // Uploaded file identifier
      shared_ptr<string> objectKey_ {};
      // The signed URL used to upload the object to OSS.
      shared_ptr<string> putSignedUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAttachmentUploadUrlResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAttachmentUploadUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAttachmentUploadUrlResponseBody::Data) };
    inline GetAttachmentUploadUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAttachmentUploadUrlResponseBody::Data) };
    inline GetAttachmentUploadUrlResponseBody& setData(const GetAttachmentUploadUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAttachmentUploadUrlResponseBody& setData(GetAttachmentUploadUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAttachmentUploadUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttachmentUploadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAttachmentUploadUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int32_t> code_ {};
    // The data returned after the call succeeds.
    shared_ptr<GetAttachmentUploadUrlResponseBody::Data> data_ {};
    // The error message. If success is set to false, the message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates that the call is normal.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
