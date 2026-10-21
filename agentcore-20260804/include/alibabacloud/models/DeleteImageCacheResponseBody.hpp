// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGECACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGECACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteImageCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImageCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImageCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DeleteImageCacheResponseBody() = default ;
    DeleteImageCacheResponseBody(const DeleteImageCacheResponseBody &) = default ;
    DeleteImageCacheResponseBody(DeleteImageCacheResponseBody &&) = default ;
    DeleteImageCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImageCacheResponseBody() = default ;
    DeleteImageCacheResponseBody& operator=(const DeleteImageCacheResponseBody &) = default ;
    DeleteImageCacheResponseBody& operator=(DeleteImageCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(deletionPending, deletionPending_);
        DARABONBA_PTR_TO_JSON(imageId, imageId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(deletionPending, deletionPending_);
        DARABONBA_PTR_FROM_JSON(imageId, imageId_);
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
      virtual bool empty() const override { return this->deletionPending_ == nullptr
        && this->imageId_ == nullptr; };
      // deletionPending Field Functions 
      bool hasDeletionPending() const { return this->deletionPending_ != nullptr;};
      void deleteDeletionPending() { this->deletionPending_ = nullptr;};
      inline bool getDeletionPending() const { DARABONBA_PTR_GET_DEFAULT(deletionPending_, false) };
      inline Data& setDeletionPending(bool deletionPending) { DARABONBA_PTR_SET_VALUE(deletionPending_, deletionPending) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    protected:
      // Indicates whether the deletion is still in progress. A value of true indicates that the deletion is accepted but not yet complete, and a Get request returns DELETING until ImageCacheNotFound is explicitly returned. A value of false indicates that the current workspace is deleted or no longer exists.
      // 
      // This parameter is required.
      shared_ptr<bool> deletionPending_ {};
      // The image cache ID, which matches the request. The requested ID is still returned even if the current workspace no longer exists.
      // 
      // This parameter is required.
      shared_ptr<string> imageId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteImageCacheResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteImageCacheResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteImageCacheResponseBody::Data) };
    inline DeleteImageCacheResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteImageCacheResponseBody::Data) };
    inline DeleteImageCacheResponseBody& setData(const DeleteImageCacheResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteImageCacheResponseBody& setData(DeleteImageCacheResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteImageCacheResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteImageCacheResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteImageCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteImageCacheResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business response code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The result of deleting the image cache.
    // 
    // This parameter is required.
    shared_ptr<DeleteImageCacheResponseBody::Data> data_ {};
    // The HTTP status code.
    // 
    // This parameter is required.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The request ID, which is used for troubleshooting.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. This does not mean that the cache creation is complete.
    // 
    // This parameter is required.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
