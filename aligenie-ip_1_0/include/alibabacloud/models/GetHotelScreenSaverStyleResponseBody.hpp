// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELSCREENSAVERSTYLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELSCREENSAVERSTYLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelScreenSaverStyleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelScreenSaverStyleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelScreenSaverStyleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    GetHotelScreenSaverStyleResponseBody() = default ;
    GetHotelScreenSaverStyleResponseBody(const GetHotelScreenSaverStyleResponseBody &) = default ;
    GetHotelScreenSaverStyleResponseBody(GetHotelScreenSaverStyleResponseBody &&) = default ;
    GetHotelScreenSaverStyleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelScreenSaverStyleResponseBody() = default ;
    GetHotelScreenSaverStyleResponseBody& operator=(const GetHotelScreenSaverStyleResponseBody &) = default ;
    GetHotelScreenSaverStyleResponseBody& operator=(GetHotelScreenSaverStyleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CnName, cnName_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(EnName, enName_);
        DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CnName, cnName_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(EnName, enName_);
        DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
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
      virtual bool empty() const override { return this->cnName_ == nullptr
        && this->code_ == nullptr && this->enName_ == nullptr && this->picUrl_ == nullptr; };
      // cnName Field Functions 
      bool hasCnName() const { return this->cnName_ != nullptr;};
      void deleteCnName() { this->cnName_ = nullptr;};
      inline string getCnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
      inline Result& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Result& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // enName Field Functions 
      bool hasEnName() const { return this->enName_ != nullptr;};
      void deleteEnName() { this->enName_ = nullptr;};
      inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
      inline Result& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


      // picUrl Field Functions 
      bool hasPicUrl() const { return this->picUrl_ != nullptr;};
      void deletePicUrl() { this->picUrl_ = nullptr;};
      inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
      inline Result& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


    protected:
      shared_ptr<string> cnName_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> enName_ {};
      shared_ptr<string> picUrl_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotelScreenSaverStyleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotelScreenSaverStyleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetHotelScreenSaverStyleResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetHotelScreenSaverStyleResponseBody::Result>) };
    inline vector<GetHotelScreenSaverStyleResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetHotelScreenSaverStyleResponseBody::Result>) };
    inline GetHotelScreenSaverStyleResponseBody& setResult(const vector<GetHotelScreenSaverStyleResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetHotelScreenSaverStyleResponseBody& setResult(vector<GetHotelScreenSaverStyleResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetHotelScreenSaverStyleResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetHotelScreenSaverStyleResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
