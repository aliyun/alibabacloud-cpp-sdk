// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGVIEWDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGVIEWDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetLogviewDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogviewDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogviewDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetLogviewDownloadUrlResponseBody() = default ;
    GetLogviewDownloadUrlResponseBody(const GetLogviewDownloadUrlResponseBody &) = default ;
    GetLogviewDownloadUrlResponseBody(GetLogviewDownloadUrlResponseBody &&) = default ;
    GetLogviewDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogviewDownloadUrlResponseBody() = default ;
    GetLogviewDownloadUrlResponseBody& operator=(const GetLogviewDownloadUrlResponseBody &) = default ;
    GetLogviewDownloadUrlResponseBody& operator=(GetLogviewDownloadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GetLogviewDownloadUrlResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetLogviewDownloadUrlResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetLogviewDownloadUrlResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetLogviewDownloadUrlResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogviewDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The presigned OSS download URL for the offline Logview file. The URL is valid for 10 minutes from the time it is generated. The file name extension is .txt and the content is JSON data in UTF-8 encoding. The download URL is determined by useVpcEndpoint. If the link expires, invoke this operation again. The sample URL is desensitized and cannot be used for actual downloads.
    shared_ptr<string> data_ {};
    // The error code. This field is not assigned a value when this operation is successfully processed. The sample value NO_PERMISSION is used to illustrate a common permission error and must not be combined with the success response example.
    shared_ptr<string> errorCode_ {};
    // The error message. This field is not assigned a value when this operation is successfully processed. The sample value Forbidden is used to illustrate a common permission error and must not be combined with the success response example.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code field. This field is not assigned a value when this operation is successfully processed. Do not rely solely on whether this field equals 200 to determine success. Process the result based on the actual HTTP response status and returned content. The sample value 200 is used only to illustrate the field format.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID. This ID is used to locate and troubleshoot the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
