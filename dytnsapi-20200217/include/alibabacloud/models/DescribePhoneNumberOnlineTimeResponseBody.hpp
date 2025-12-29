// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERONLINETIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERONLINETIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberOnlineTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberOnlineTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberOnlineTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePhoneNumberOnlineTimeResponseBody() = default ;
    DescribePhoneNumberOnlineTimeResponseBody(const DescribePhoneNumberOnlineTimeResponseBody &) = default ;
    DescribePhoneNumberOnlineTimeResponseBody(DescribePhoneNumberOnlineTimeResponseBody &&) = default ;
    DescribePhoneNumberOnlineTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberOnlineTimeResponseBody() = default ;
    DescribePhoneNumberOnlineTimeResponseBody& operator=(const DescribePhoneNumberOnlineTimeResponseBody &) = default ;
    DescribePhoneNumberOnlineTimeResponseBody& operator=(DescribePhoneNumberOnlineTimeResponseBody &&) = default ;
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
      inline string getVerifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, "") };
      inline Data& setVerifyResult(string verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


    protected:
      // The carrier code. Valid values:
      // 
      // *   **CMCC**: China Mobile
      // *   **CUCC**: China Unicom
      // *   **CTCC**: China Telecom
      // *   **CBN**: China Broadnet
      shared_ptr<string> carrierCode_ {};
      // The enumerated value of the usage period of a phone number. Valid values:
      // 
      // *   **-1**: No usage period information is available for the phone number.
      // *   **0**: The phone number status is abnormal. For example, the phone number is a nonexistent number.
      // *   **1** :[0-3) months.
      // *   **2** :[3-6] months.
      // *   **3** :(6-12] months.
      // *   **4** :(12-24] months.
      // *   **5** :(24,+) months.
      shared_ptr<string> verifyResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePhoneNumberOnlineTimeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePhoneNumberOnlineTimeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePhoneNumberOnlineTimeResponseBody::Data) };
    inline DescribePhoneNumberOnlineTimeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePhoneNumberOnlineTimeResponseBody::Data) };
    inline DescribePhoneNumberOnlineTimeResponseBody& setData(const DescribePhoneNumberOnlineTimeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePhoneNumberOnlineTimeResponseBody& setData(DescribePhoneNumberOnlineTimeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePhoneNumberOnlineTimeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhoneNumberOnlineTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. Valid values:
    // 
    // *   **OK**: The request is successful.
    // *   **PortabilityNumberNotSupported**: The phone number that is involved in mobile number portability is not supported.
    // *   **RequestFrequencyLimit**: Repeated queries for the same phone number at a high frequency within a short period of time are prohibited due to restrictions that are set by carriers. If this error code is returned, please try again later.
    // 
    // >  You are charged if the value of Code is OK and the value of VerifyResult is not -1. For more information, see [Pricing](https://help.aliyun.com/document_detail/154751.html).
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<DescribePhoneNumberOnlineTimeResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
