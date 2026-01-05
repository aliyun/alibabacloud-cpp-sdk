// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYLOGISTICSSMSMAILNORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYLOGISTICSSMSMAILNORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class VerifyLogisticsSmsMailNoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyLogisticsSmsMailNoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyLogisticsSmsMailNoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    VerifyLogisticsSmsMailNoResponseBody() = default ;
    VerifyLogisticsSmsMailNoResponseBody(const VerifyLogisticsSmsMailNoResponseBody &) = default ;
    VerifyLogisticsSmsMailNoResponseBody(VerifyLogisticsSmsMailNoResponseBody &&) = default ;
    VerifyLogisticsSmsMailNoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyLogisticsSmsMailNoResponseBody() = default ;
    VerifyLogisticsSmsMailNoResponseBody& operator=(const VerifyLogisticsSmsMailNoResponseBody &) = default ;
    VerifyLogisticsSmsMailNoResponseBody& operator=(VerifyLogisticsSmsMailNoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExpressCompanyCode, expressCompanyCode_);
        DARABONBA_PTR_TO_JSON(MobileSuffix, mobileSuffix_);
        DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpressCompanyCode, expressCompanyCode_);
        DARABONBA_PTR_FROM_JSON(MobileSuffix, mobileSuffix_);
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
      virtual bool empty() const override { return this->expressCompanyCode_ == nullptr
        && this->mobileSuffix_ == nullptr && this->verifyResult_ == nullptr; };
      // expressCompanyCode Field Functions 
      bool hasExpressCompanyCode() const { return this->expressCompanyCode_ != nullptr;};
      void deleteExpressCompanyCode() { this->expressCompanyCode_ = nullptr;};
      inline string getExpressCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(expressCompanyCode_, "") };
      inline Data& setExpressCompanyCode(string expressCompanyCode) { DARABONBA_PTR_SET_VALUE(expressCompanyCode_, expressCompanyCode) };


      // mobileSuffix Field Functions 
      bool hasMobileSuffix() const { return this->mobileSuffix_ != nullptr;};
      void deleteMobileSuffix() { this->mobileSuffix_ = nullptr;};
      inline string getMobileSuffix() const { DARABONBA_PTR_GET_DEFAULT(mobileSuffix_, "") };
      inline Data& setMobileSuffix(string mobileSuffix) { DARABONBA_PTR_SET_VALUE(mobileSuffix_, mobileSuffix) };


      // verifyResult Field Functions 
      bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
      void deleteVerifyResult() { this->verifyResult_ = nullptr;};
      inline bool getVerifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, false) };
      inline Data& setVerifyResult(bool verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


    protected:
      shared_ptr<string> expressCompanyCode_ {};
      shared_ptr<string> mobileSuffix_ {};
      shared_ptr<bool> verifyResult_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline VerifyLogisticsSmsMailNoResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifyLogisticsSmsMailNoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VerifyLogisticsSmsMailNoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VerifyLogisticsSmsMailNoResponseBody::Data) };
    inline VerifyLogisticsSmsMailNoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, VerifyLogisticsSmsMailNoResponseBody::Data) };
    inline VerifyLogisticsSmsMailNoResponseBody& setData(const VerifyLogisticsSmsMailNoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VerifyLogisticsSmsMailNoResponseBody& setData(VerifyLogisticsSmsMailNoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyLogisticsSmsMailNoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyLogisticsSmsMailNoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VerifyLogisticsSmsMailNoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<VerifyLogisticsSmsMailNoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
