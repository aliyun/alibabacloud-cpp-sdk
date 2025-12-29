// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELSCREENSAVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELSCREENSAVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelScreenSaverResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelScreenSaverResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelScreenSaverResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetHotelScreenSaverResponseBody() = default ;
    GetHotelScreenSaverResponseBody(const GetHotelScreenSaverResponseBody &) = default ;
    GetHotelScreenSaverResponseBody(GetHotelScreenSaverResponseBody &&) = default ;
    GetHotelScreenSaverResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelScreenSaverResponseBody() = default ;
    GetHotelScreenSaverResponseBody& operator=(const GetHotelScreenSaverResponseBody &) = default ;
    GetHotelScreenSaverResponseBody& operator=(GetHotelScreenSaverResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
        DARABONBA_PTR_TO_JSON(StyleCode, styleCode_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
        DARABONBA_PTR_FROM_JSON(StyleCode, styleCode_);
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
      virtual bool empty() const override { return this->picUrl_ == nullptr
        && this->styleCode_ == nullptr; };
      // picUrl Field Functions 
      bool hasPicUrl() const { return this->picUrl_ != nullptr;};
      void deletePicUrl() { this->picUrl_ = nullptr;};
      inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
      inline Result& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


      // styleCode Field Functions 
      bool hasStyleCode() const { return this->styleCode_ != nullptr;};
      void deleteStyleCode() { this->styleCode_ = nullptr;};
      inline string getStyleCode() const { DARABONBA_PTR_GET_DEFAULT(styleCode_, "") };
      inline Result& setStyleCode(string styleCode) { DARABONBA_PTR_SET_VALUE(styleCode_, styleCode) };


    protected:
      shared_ptr<string> picUrl_ {};
      shared_ptr<string> styleCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetHotelScreenSaverResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotelScreenSaverResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotelScreenSaverResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetHotelScreenSaverResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetHotelScreenSaverResponseBody::Result) };
    inline GetHotelScreenSaverResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetHotelScreenSaverResponseBody::Result) };
    inline GetHotelScreenSaverResponseBody& setResult(const GetHotelScreenSaverResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetHotelScreenSaverResponseBody& setResult(GetHotelScreenSaverResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetHotelScreenSaverResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
