// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETZOOKEEPERDATAIMPORTURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETZOOKEEPERDATAIMPORTURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetZookeeperDataImportUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetZookeeperDataImportUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetZookeeperDataImportUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetZookeeperDataImportUrlResponseBody() = default ;
    GetZookeeperDataImportUrlResponseBody(const GetZookeeperDataImportUrlResponseBody &) = default ;
    GetZookeeperDataImportUrlResponseBody(GetZookeeperDataImportUrlResponseBody &&) = default ;
    GetZookeeperDataImportUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetZookeeperDataImportUrlResponseBody() = default ;
    GetZookeeperDataImportUrlResponseBody& operator=(const GetZookeeperDataImportUrlResponseBody &) = default ;
    GetZookeeperDataImportUrlResponseBody& operator=(GetZookeeperDataImportUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->maxSize_ == nullptr
        && this->url_ == nullptr; };
      // maxSize Field Functions 
      bool hasMaxSize() const { return this->maxSize_ != nullptr;};
      void deleteMaxSize() { this->maxSize_ = nullptr;};
      inline string getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, "") };
      inline Data& setMaxSize(string maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // code
      shared_ptr<string> maxSize_ {};
      // The maximum size of a file that can be uploaded each time. Unit: MB.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetZookeeperDataImportUrlResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetZookeeperDataImportUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetZookeeperDataImportUrlResponseBody::Data) };
    inline GetZookeeperDataImportUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetZookeeperDataImportUrlResponseBody::Data) };
    inline GetZookeeperDataImportUrlResponseBody& setData(const GetZookeeperDataImportUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetZookeeperDataImportUrlResponseBody& setData(GetZookeeperDataImportUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetZookeeperDataImportUrlResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetZookeeperDataImportUrlResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetZookeeperDataImportUrlResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetZookeeperDataImportUrlResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetZookeeperDataImportUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetZookeeperDataImportUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetZookeeperDataImportUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<int32_t> code_ {};
    // The URL that is used to upload the configuration file.
    shared_ptr<GetZookeeperDataImportUrlResponseBody::Data> data_ {};
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // >  If the return value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the return value of the **DynamicMessage** parameter is **DtsJobId**, the specified **DtsJobId** parameter is invalid.
    shared_ptr<string> dynamicCode_ {};
    // The returned data.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code returned.
    shared_ptr<string> errorCode_ {};
    // The message returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request was successfully processed.
    shared_ptr<string> message_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<string> requestId_ {};
    // The status code. A value of 200 is returned if the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
