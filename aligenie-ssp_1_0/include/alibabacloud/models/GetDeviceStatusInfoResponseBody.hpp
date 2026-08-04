// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESTATUSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESTATUSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceStatusInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceStatusInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceStatusInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetDeviceStatusInfoResponseBody() = default ;
    GetDeviceStatusInfoResponseBody(const GetDeviceStatusInfoResponseBody &) = default ;
    GetDeviceStatusInfoResponseBody(GetDeviceStatusInfoResponseBody &&) = default ;
    GetDeviceStatusInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceStatusInfoResponseBody() = default ;
    GetDeviceStatusInfoResponseBody& operator=(const GetDeviceStatusInfoResponseBody &) = default ;
    GetDeviceStatusInfoResponseBody& operator=(GetDeviceStatusInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Online, online_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Online, online_);
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
      virtual bool empty() const override { return this->online_ == nullptr; };
      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline int32_t getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, 0) };
      inline Result& setOnline(int32_t online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    protected:
      // Indicates whether the device is online. A value of 0 means offline, and 1 means online.
      shared_ptr<int32_t> online_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetDeviceStatusInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDeviceStatusInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceStatusInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetDeviceStatusInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetDeviceStatusInfoResponseBody::Result) };
    inline GetDeviceStatusInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetDeviceStatusInfoResponseBody::Result) };
    inline GetDeviceStatusInfoResponseBody& setResult(const GetDeviceStatusInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetDeviceStatusInfoResponseBody& setResult(GetDeviceStatusInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The error code returned. A value of 200 indicates that the call succeeded.
    shared_ptr<int32_t> code_ {};
    // The return result of invoking this API.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Detailed information returned.
    shared_ptr<GetDeviceStatusInfoResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
