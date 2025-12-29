// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUAIDAPPLYTOKENSIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUAIDAPPLYTOKENSIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class GetUAIDApplyTokenSignResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUAIDApplyTokenSignResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUAIDApplyTokenSignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUAIDApplyTokenSignResponseBody() = default ;
    GetUAIDApplyTokenSignResponseBody(const GetUAIDApplyTokenSignResponseBody &) = default ;
    GetUAIDApplyTokenSignResponseBody(GetUAIDApplyTokenSignResponseBody &&) = default ;
    GetUAIDApplyTokenSignResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUAIDApplyTokenSignResponseBody() = default ;
    GetUAIDApplyTokenSignResponseBody& operator=(const GetUAIDApplyTokenSignResponseBody &) = default ;
    GetUAIDApplyTokenSignResponseBody& operator=(GetUAIDApplyTokenSignResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Carrier, carrier_);
        DARABONBA_PTR_TO_JSON(OutId, outId_);
        DARABONBA_PTR_TO_JSON(Sign, sign_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
        DARABONBA_PTR_FROM_JSON(OutId, outId_);
        DARABONBA_PTR_FROM_JSON(Sign, sign_);
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
      virtual bool empty() const override { return this->carrier_ == nullptr
        && this->outId_ == nullptr && this->sign_ == nullptr; };
      // carrier Field Functions 
      bool hasCarrier() const { return this->carrier_ != nullptr;};
      void deleteCarrier() { this->carrier_ = nullptr;};
      inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
      inline Data& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


      // outId Field Functions 
      bool hasOutId() const { return this->outId_ != nullptr;};
      void deleteOutId() { this->outId_ = nullptr;};
      inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
      inline Data& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


      // sign Field Functions 
      bool hasSign() const { return this->sign_ != nullptr;};
      void deleteSign() { this->sign_ = nullptr;};
      inline string getSign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
      inline Data& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    protected:
      shared_ptr<string> carrier_ {};
      shared_ptr<string> outId_ {};
      shared_ptr<string> sign_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetUAIDApplyTokenSignResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUAIDApplyTokenSignResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetUAIDApplyTokenSignResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetUAIDApplyTokenSignResponseBody::Data) };
    inline GetUAIDApplyTokenSignResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetUAIDApplyTokenSignResponseBody::Data) };
    inline GetUAIDApplyTokenSignResponseBody& setData(const GetUAIDApplyTokenSignResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUAIDApplyTokenSignResponseBody& setData(GetUAIDApplyTokenSignResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUAIDApplyTokenSignResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUAIDApplyTokenSignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<GetUAIDApplyTokenSignResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
