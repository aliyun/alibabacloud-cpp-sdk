// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANCODEBINDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SCANCODEBINDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScanCodeBindResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanCodeBindResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ScanCodeBindResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ScanCodeBindResponseBody() = default ;
    ScanCodeBindResponseBody(const ScanCodeBindResponseBody &) = default ;
    ScanCodeBindResponseBody(ScanCodeBindResponseBody &&) = default ;
    ScanCodeBindResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanCodeBindResponseBody() = default ;
    ScanCodeBindResponseBody& operator=(const ScanCodeBindResponseBody &) = default ;
    ScanCodeBindResponseBody& operator=(ScanCodeBindResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(BizGroup, bizGroup_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_TO_JSON(UserOpenId, userOpenId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(BizGroup, bizGroup_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_FROM_JSON(UserOpenId, userOpenId_);
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
      virtual bool empty() const override { return this->bizGroup_ == nullptr
        && this->bizType_ == nullptr && this->deviceOpenId_ == nullptr && this->userOpenId_ == nullptr; };
      // bizGroup Field Functions 
      bool hasBizGroup() const { return this->bizGroup_ != nullptr;};
      void deleteBizGroup() { this->bizGroup_ = nullptr;};
      inline string getBizGroup() const { DARABONBA_PTR_GET_DEFAULT(bizGroup_, "") };
      inline Result& setBizGroup(string bizGroup) { DARABONBA_PTR_SET_VALUE(bizGroup_, bizGroup) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline Result& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // deviceOpenId Field Functions 
      bool hasDeviceOpenId() const { return this->deviceOpenId_ != nullptr;};
      void deleteDeviceOpenId() { this->deviceOpenId_ = nullptr;};
      inline string getDeviceOpenId() const { DARABONBA_PTR_GET_DEFAULT(deviceOpenId_, "") };
      inline Result& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


      // userOpenId Field Functions 
      bool hasUserOpenId() const { return this->userOpenId_ != nullptr;};
      void deleteUserOpenId() { this->userOpenId_ = nullptr;};
      inline string getUserOpenId() const { DARABONBA_PTR_GET_DEFAULT(userOpenId_, "") };
      inline Result& setUserOpenId(string userOpenId) { DARABONBA_PTR_SET_VALUE(userOpenId_, userOpenId) };


    protected:
      // Product group
      shared_ptr<string> bizGroup_ {};
      // Product categorization
      shared_ptr<string> bizType_ {};
      // A963*0158
      shared_ptr<string> deviceOpenId_ {};
      // DAFE****ce3ej=
      shared_ptr<string> userOpenId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ScanCodeBindResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ScanCodeBindResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ScanCodeBindResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ScanCodeBindResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ScanCodeBindResponseBody::Result) };
    inline ScanCodeBindResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ScanCodeBindResponseBody::Result) };
    inline ScanCodeBindResponseBody& setResult(const ScanCodeBindResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ScanCodeBindResponseBody& setResult(ScanCodeBindResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The returned error code. A value of 200 indicates that the invocation succeeded.
    shared_ptr<int32_t> code_ {};
    // Result message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Detailed information returned.
    shared_ptr<ScanCodeBindResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
