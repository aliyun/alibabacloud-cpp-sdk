// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJIANGSUTELECOMDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJIANGSUTELECOMDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetJiangSuTelecomDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJiangSuTelecomDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetJiangSuTelecomDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetJiangSuTelecomDataResponseBody() = default ;
    GetJiangSuTelecomDataResponseBody(const GetJiangSuTelecomDataResponseBody &) = default ;
    GetJiangSuTelecomDataResponseBody(GetJiangSuTelecomDataResponseBody &&) = default ;
    GetJiangSuTelecomDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJiangSuTelecomDataResponseBody() = default ;
    GetJiangSuTelecomDataResponseBody& operator=(const GetJiangSuTelecomDataResponseBody &) = default ;
    GetJiangSuTelecomDataResponseBody& operator=(GetJiangSuTelecomDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ossUrl_ == nullptr; };
      // ossUrl Field Functions 
      bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
      void deleteOssUrl() { this->ossUrl_ = nullptr;};
      inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
      inline Result& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    protected:
      // OSS object URL, valid for 10 minutes
      shared_ptr<string> ossUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetJiangSuTelecomDataResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJiangSuTelecomDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJiangSuTelecomDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetJiangSuTelecomDataResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetJiangSuTelecomDataResponseBody::Result) };
    inline GetJiangSuTelecomDataResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetJiangSuTelecomDataResponseBody::Result) };
    inline GetJiangSuTelecomDataResponseBody& setResult(const GetJiangSuTelecomDataResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetJiangSuTelecomDataResponseBody& setResult(GetJiangSuTelecomDataResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code. Returns 200 for normal responses.
    shared_ptr<int32_t> code_ {};
    // Id of the request
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Actual return result of the service
    shared_ptr<GetJiangSuTelecomDataResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
