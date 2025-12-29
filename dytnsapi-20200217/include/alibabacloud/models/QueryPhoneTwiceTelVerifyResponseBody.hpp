// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPHONETWICETELVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPHONETWICETELVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryPhoneTwiceTelVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPhoneTwiceTelVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPhoneTwiceTelVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPhoneTwiceTelVerifyResponseBody() = default ;
    QueryPhoneTwiceTelVerifyResponseBody(const QueryPhoneTwiceTelVerifyResponseBody &) = default ;
    QueryPhoneTwiceTelVerifyResponseBody(QueryPhoneTwiceTelVerifyResponseBody &&) = default ;
    QueryPhoneTwiceTelVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPhoneTwiceTelVerifyResponseBody() = default ;
    QueryPhoneTwiceTelVerifyResponseBody& operator=(const QueryPhoneTwiceTelVerifyResponseBody &) = default ;
    QueryPhoneTwiceTelVerifyResponseBody& operator=(QueryPhoneTwiceTelVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CarrierCode, carrierCode_);
        DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CarrierCode, carrierCode_);
        DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
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
      virtual bool empty() const override { return this->carrierCode_ == nullptr
        && this->verifyResult_ == nullptr; };
      // carrierCode Field Functions 
      bool hasCarrierCode() const { return this->carrierCode_ != nullptr;};
      void deleteCarrierCode() { this->carrierCode_ = nullptr;};
      inline string getCarrierCode() const { DARABONBA_PTR_GET_DEFAULT(carrierCode_, "") };
      inline Data& setCarrierCode(string carrierCode) { DARABONBA_PTR_SET_VALUE(carrierCode_, carrierCode) };


      // verifyResult Field Functions 
      bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
      void deleteVerifyResult() { this->verifyResult_ = nullptr;};
      inline int64_t getVerifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, 0L) };
      inline Data& setVerifyResult(int64_t verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


    protected:
      shared_ptr<string> carrierCode_ {};
      shared_ptr<int64_t> verifyResult_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryPhoneTwiceTelVerifyResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPhoneTwiceTelVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPhoneTwiceTelVerifyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPhoneTwiceTelVerifyResponseBody::Data) };
    inline QueryPhoneTwiceTelVerifyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPhoneTwiceTelVerifyResponseBody::Data) };
    inline QueryPhoneTwiceTelVerifyResponseBody& setData(const QueryPhoneTwiceTelVerifyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPhoneTwiceTelVerifyResponseBody& setData(QueryPhoneTwiceTelVerifyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPhoneTwiceTelVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPhoneTwiceTelVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<QueryPhoneTwiceTelVerifyResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
