// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddressVerifyV2IntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressVerifyV2IntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, AddressVerifyV2IntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    AddressVerifyV2IntlResponseBody() = default ;
    AddressVerifyV2IntlResponseBody(const AddressVerifyV2IntlResponseBody &) = default ;
    AddressVerifyV2IntlResponseBody(AddressVerifyV2IntlResponseBody &&) = default ;
    AddressVerifyV2IntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressVerifyV2IntlResponseBody() = default ;
    AddressVerifyV2IntlResponseBody& operator=(const AddressVerifyV2IntlResponseBody &) = default ;
    AddressVerifyV2IntlResponseBody& operator=(AddressVerifyV2IntlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
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
      virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->detail_ == nullptr && this->transactionId_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline Result& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Result& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // transactionId Field Functions 
      bool hasTransactionId() const { return this->transactionId_ != nullptr;};
      void deleteTransactionId() { this->transactionId_ = nullptr;};
      inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
      inline Result& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    protected:
      // The verification result. Valid values:
      // 
      // - **1**: Passed (billed)
      // - **2**: Failed (The device is in a prohibited region) (billed)
      // - **3**: Unknown (billed)
      shared_ptr<string> bizCode_ {};
      // Verification details, including：
      // 
      // - **DistanceRange**：Position rang：[DistanceRange description](https://www.alibabacloud.com/help/zh/ekyc/latest/add-verify-pro-api?spm=a2c63.p38356.0.i27#ee274c08976er)。
      // > If the input phone number or address is empty, or if no carrier information is found, this field will not be returned.
      // 
      // - **IspName**: The carrier name:
      //    - **CMCC**: China Mobile
      //    - **CTCC**: China Telecom
      //    - **CUCC**: China Unicom
      // > This parameter is not returned if the mobile phone number or address is empty in the request, or if carrier information is not found.
      // 
      // - **PhoneStatus**: The status of the mobile phone:
      //   - **0**: Abnormal
      //   - **1**: Normal
      // 
      // > This parameter is not returned if the mobile phone number is empty in the request.
      shared_ptr<string> detail_ {};
      // The transaction ID
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddressVerifyV2IntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddressVerifyV2IntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddressVerifyV2IntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const AddressVerifyV2IntlResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, AddressVerifyV2IntlResponseBody::Result) };
    inline AddressVerifyV2IntlResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, AddressVerifyV2IntlResponseBody::Result) };
    inline AddressVerifyV2IntlResponseBody& setResult(const AddressVerifyV2IntlResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline AddressVerifyV2IntlResponseBody& setResult(AddressVerifyV2IntlResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // [Return Code](https://www.alibabacloud.com/help/zh/ekyc/latest/add-verify-pro-api?spm=a2c63.p38356.0.i4#ae60001a3804w)
    shared_ptr<string> code_ {};
    // Detailed description of the return code
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Result object
    shared_ptr<AddressVerifyV2IntlResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
