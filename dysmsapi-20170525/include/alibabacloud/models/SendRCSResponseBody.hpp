// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDRCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDRCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendRCSResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendRCSResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SendRCSResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SendRCSResponseBody() = default ;
    SendRCSResponseBody(const SendRCSResponseBody &) = default ;
    SendRCSResponseBody(SendRCSResponseBody &&) = default ;
    SendRCSResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendRCSResponseBody() = default ;
    SendRCSResponseBody& operator=(const SendRCSResponseBody &) = default ;
    SendRCSResponseBody& operator=(SendRCSResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
        DARABONBA_PTR_TO_JSON(Bdcust, bdcust_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_ANY_TO_JSON(Debug, debug_);
        DARABONBA_PTR_TO_JSON(E, e_);
        DARABONBA_ANY_TO_JSON(ExtendMap, extendMap_);
        DARABONBA_PTR_TO_JSON(GateFailMsg, gateFailMsg_);
        DARABONBA_PTR_TO_JSON(KeyString, keyString_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_ANY_TO_JSON(Module, module_);
        DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
        DARABONBA_PTR_FROM_JSON(Bdcust, bdcust_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_ANY_FROM_JSON(Debug, debug_);
        DARABONBA_PTR_FROM_JSON(E, e_);
        DARABONBA_ANY_FROM_JSON(ExtendMap, extendMap_);
        DARABONBA_PTR_FROM_JSON(GateFailMsg, gateFailMsg_);
        DARABONBA_PTR_FROM_JSON(KeyString, keyString_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_ANY_FROM_JSON(Module, module_);
        DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->bdcust_ == nullptr && this->code_ == nullptr && this->debug_ == nullptr && this->e_ == nullptr && this->extendMap_ == nullptr
        && this->gateFailMsg_ == nullptr && this->keyString_ == nullptr && this->message_ == nullptr && this->module_ == nullptr && this->partnerId_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
      // accessDeniedDetail Field Functions 
      bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
      void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
      inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
      inline Data& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


      // bdcust Field Functions 
      bool hasBdcust() const { return this->bdcust_ != nullptr;};
      void deleteBdcust() { this->bdcust_ = nullptr;};
      inline string getBdcust() const { DARABONBA_PTR_GET_DEFAULT(bdcust_, "") };
      inline Data& setBdcust(string bdcust) { DARABONBA_PTR_SET_VALUE(bdcust_, bdcust) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // debug Field Functions 
      bool hasDebug() const { return this->debug_ != nullptr;};
      void deleteDebug() { this->debug_ = nullptr;};
      inline       const Darabonba::Json & getDebug() const { DARABONBA_GET(debug_) };
      Darabonba::Json & getDebug() { DARABONBA_GET(debug_) };
      inline Data& setDebug(const Darabonba::Json & debug) { DARABONBA_SET_VALUE(debug_, debug) };
      inline Data& setDebug(Darabonba::Json && debug) { DARABONBA_SET_RVALUE(debug_, debug) };


      // e Field Functions 
      bool hasE() const { return this->e_ != nullptr;};
      void deleteE() { this->e_ = nullptr;};
      inline string getE() const { DARABONBA_PTR_GET_DEFAULT(e_, "") };
      inline Data& setE(string e) { DARABONBA_PTR_SET_VALUE(e_, e) };


      // extendMap Field Functions 
      bool hasExtendMap() const { return this->extendMap_ != nullptr;};
      void deleteExtendMap() { this->extendMap_ = nullptr;};
      inline       const Darabonba::Json & getExtendMap() const { DARABONBA_GET(extendMap_) };
      Darabonba::Json & getExtendMap() { DARABONBA_GET(extendMap_) };
      inline Data& setExtendMap(const Darabonba::Json & extendMap) { DARABONBA_SET_VALUE(extendMap_, extendMap) };
      inline Data& setExtendMap(Darabonba::Json && extendMap) { DARABONBA_SET_RVALUE(extendMap_, extendMap) };


      // gateFailMsg Field Functions 
      bool hasGateFailMsg() const { return this->gateFailMsg_ != nullptr;};
      void deleteGateFailMsg() { this->gateFailMsg_ = nullptr;};
      inline string getGateFailMsg() const { DARABONBA_PTR_GET_DEFAULT(gateFailMsg_, "") };
      inline Data& setGateFailMsg(string gateFailMsg) { DARABONBA_PTR_SET_VALUE(gateFailMsg_, gateFailMsg) };


      // keyString Field Functions 
      bool hasKeyString() const { return this->keyString_ != nullptr;};
      void deleteKeyString() { this->keyString_ = nullptr;};
      inline string getKeyString() const { DARABONBA_PTR_GET_DEFAULT(keyString_, "") };
      inline Data& setKeyString(string keyString) { DARABONBA_PTR_SET_VALUE(keyString_, keyString) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // module Field Functions 
      bool hasModule() const { return this->module_ != nullptr;};
      void deleteModule() { this->module_ = nullptr;};
      inline       const Darabonba::Json & getModule() const { DARABONBA_GET(module_) };
      Darabonba::Json & getModule() { DARABONBA_GET(module_) };
      inline Data& setModule(const Darabonba::Json & module) { DARABONBA_SET_VALUE(module_, module) };
      inline Data& setModule(Darabonba::Json && module) { DARABONBA_SET_RVALUE(module_, module) };


      // partnerId Field Functions 
      bool hasPartnerId() const { return this->partnerId_ != nullptr;};
      void deletePartnerId() { this->partnerId_ = nullptr;};
      inline string getPartnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, "") };
      inline Data& setPartnerId(string partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> accessDeniedDetail_ {};
      shared_ptr<string> bdcust_ {};
      shared_ptr<string> code_ {};
      Darabonba::Json debug_ {};
      shared_ptr<string> e_ {};
      Darabonba::Json extendMap_ {};
      shared_ptr<string> gateFailMsg_ {};
      shared_ptr<string> keyString_ {};
      shared_ptr<string> message_ {};
      Darabonba::Json module_ {};
      shared_ptr<string> partnerId_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline SendRCSResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SendRCSResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SendRCSResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SendRCSResponseBody::Data) };
    inline SendRCSResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SendRCSResponseBody::Data) };
    inline SendRCSResponseBody& setData(const SendRCSResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SendRCSResponseBody& setData(SendRCSResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SendRCSResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendRCSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SendRCSResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<SendRCSResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
