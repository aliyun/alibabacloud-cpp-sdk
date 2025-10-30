// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAMPLEFILEDOWNLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAMPLEFILEDOWNLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class SampleFileDownloadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SampleFileDownloadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, SampleFileDownloadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    SampleFileDownloadResponseBody() = default ;
    SampleFileDownloadResponseBody(const SampleFileDownloadResponseBody &) = default ;
    SampleFileDownloadResponseBody(SampleFileDownloadResponseBody &&) = default ;
    SampleFileDownloadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SampleFileDownloadResponseBody() = default ;
    SampleFileDownloadResponseBody& operator=(const SampleFileDownloadResponseBody &) = default ;
    SampleFileDownloadResponseBody& operator=(SampleFileDownloadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SampleFileDownloadResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline SampleFileDownloadResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SampleFileDownloadResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SampleFileDownloadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline string resultObject() const { DARABONBA_PTR_GET_DEFAULT(resultObject_, "") };
    inline SampleFileDownloadResponseBody& setResultObject(string resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };


  protected:
    // Status code.
    std::shared_ptr<string> code_ = nullptr;
    // HTTP status code.
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // Return message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Request result.
    std::shared_ptr<string> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
