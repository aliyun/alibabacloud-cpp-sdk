// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJMETERSCENERUNNINGDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJMETERSCENERUNNINGDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJMeterSceneRunningDataResponseBodyRunningData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetJMeterSceneRunningDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJMeterSceneRunningDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningData, runningData_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetJMeterSceneRunningDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningData, runningData_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetJMeterSceneRunningDataResponseBody() = default ;
    GetJMeterSceneRunningDataResponseBody(const GetJMeterSceneRunningDataResponseBody &) = default ;
    GetJMeterSceneRunningDataResponseBody(GetJMeterSceneRunningDataResponseBody &&) = default ;
    GetJMeterSceneRunningDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJMeterSceneRunningDataResponseBody() = default ;
    GetJMeterSceneRunningDataResponseBody& operator=(const GetJMeterSceneRunningDataResponseBody &) = default ;
    GetJMeterSceneRunningDataResponseBody& operator=(GetJMeterSceneRunningDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->documentUrl_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->runningData_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetJMeterSceneRunningDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // documentUrl Field Functions 
    bool hasDocumentUrl() const { return this->documentUrl_ != nullptr;};
    void deleteDocumentUrl() { this->documentUrl_ = nullptr;};
    inline string documentUrl() const { DARABONBA_PTR_GET_DEFAULT(documentUrl_, "") };
    inline GetJMeterSceneRunningDataResponseBody& setDocumentUrl(string documentUrl) { DARABONBA_PTR_SET_VALUE(documentUrl_, documentUrl) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetJMeterSceneRunningDataResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJMeterSceneRunningDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJMeterSceneRunningDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningData Field Functions 
    bool hasRunningData() const { return this->runningData_ != nullptr;};
    void deleteRunningData() { this->runningData_ = nullptr;};
    inline const GetJMeterSceneRunningDataResponseBodyRunningData & runningData() const { DARABONBA_PTR_GET_CONST(runningData_, GetJMeterSceneRunningDataResponseBodyRunningData) };
    inline GetJMeterSceneRunningDataResponseBodyRunningData runningData() { DARABONBA_PTR_GET(runningData_, GetJMeterSceneRunningDataResponseBodyRunningData) };
    inline GetJMeterSceneRunningDataResponseBody& setRunningData(const GetJMeterSceneRunningDataResponseBodyRunningData & runningData) { DARABONBA_PTR_SET_VALUE(runningData_, runningData) };
    inline GetJMeterSceneRunningDataResponseBody& setRunningData(GetJMeterSceneRunningDataResponseBodyRunningData && runningData) { DARABONBA_PTR_SET_RVALUE(runningData_, runningData) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetJMeterSceneRunningDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The system status code. If the request was successful, this parameter is not returned.
    std::shared_ptr<string> code_ = nullptr;
    // The URL that is used to access the document.
    std::shared_ptr<string> documentUrl_ = nullptr;
    // The HTTP status code. If the request was successful, this parameter is not returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The returned message. If the request was successful, this parameter is not returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The running data.
    std::shared_ptr<GetJMeterSceneRunningDataResponseBodyRunningData> runningData_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
