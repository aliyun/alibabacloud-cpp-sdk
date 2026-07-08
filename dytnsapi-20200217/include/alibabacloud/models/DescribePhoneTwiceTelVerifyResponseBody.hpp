// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONETWICETELVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONETWICETELVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneTwiceTelVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneTwiceTelVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneTwiceTelVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePhoneTwiceTelVerifyResponseBody() = default ;
    DescribePhoneTwiceTelVerifyResponseBody(const DescribePhoneTwiceTelVerifyResponseBody &) = default ;
    DescribePhoneTwiceTelVerifyResponseBody(DescribePhoneTwiceTelVerifyResponseBody &&) = default ;
    DescribePhoneTwiceTelVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneTwiceTelVerifyResponseBody() = default ;
    DescribePhoneTwiceTelVerifyResponseBody& operator=(const DescribePhoneTwiceTelVerifyResponseBody &) = default ;
    DescribePhoneTwiceTelVerifyResponseBody& operator=(DescribePhoneTwiceTelVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Carrier, carrier_);
        DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
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
      virtual bool empty() const override { return this->carrier_ == nullptr
        && this->verifyResult_ == nullptr; };
      // carrier Field Functions 
      bool hasCarrier() const { return this->carrier_ != nullptr;};
      void deleteCarrier() { this->carrier_ = nullptr;};
      inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
      inline Data& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


      // verifyResult Field Functions 
      bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
      void deleteVerifyResult() { this->verifyResult_ = nullptr;};
      inline string getVerifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, "") };
      inline Data& setVerifyResult(string verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


    protected:
      // The carrier that provides service for the number. Valid values:
      // 
      // - **CMCC**: China Mobile.
      // 
      // - **CUCC**: China Unicom.
      // 
      // - **CTCC**: China Telecom.
      // 
      // > The carrier that currently provides service for the number. For a ported number, this is the destination carrier.
      shared_ptr<string> carrier_ {};
      // The verification result. Valid values:
      // 
      // - **0**: Cannot be determined.
      // 
      // - **1**: The number is a recycled number.
      // 
      // - **2**: The number is not a recycled number.
      // 
      // - **3**: The number has been deactivated.
      // 
      // - **4**: Unknown: The number was transferred to a new owner.
      shared_ptr<string> verifyResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePhoneTwiceTelVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePhoneTwiceTelVerifyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePhoneTwiceTelVerifyResponseBody::Data) };
    inline DescribePhoneTwiceTelVerifyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePhoneTwiceTelVerifyResponseBody::Data) };
    inline DescribePhoneTwiceTelVerifyResponseBody& setData(const DescribePhoneTwiceTelVerifyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePhoneTwiceTelVerifyResponseBody& setData(DescribePhoneTwiceTelVerifyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePhoneTwiceTelVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhoneTwiceTelVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request status code. Valid values:
    // 
    // - **OK**: The request was successful.
    // 
    // - **PortabilityNumberNotSupported**: Queries for this ported number are not supported.
    // 
    // - **RequestNumberNotSupported**: Queries are not supported for numbers from China Broadnet (starting with 192), mobile virtual network operators, and other unsupported carriers.
    // 
    // - **RequestFrequencyLimit**: Carriers limit frequent queries for the same number. If you receive this error code, try again later.
    // 
    // > A charge applies when the value of `Code` is `OK` and the value of `VerifyResult` is not `0`. For more information, see [Phone Number Service pricing](https://help.aliyun.com/document_detail/154751.html).
    shared_ptr<string> code_ {};
    // A data structure that contains the verification results.
    shared_ptr<DescribePhoneTwiceTelVerifyResponseBody::Data> data_ {};
    // A description of the returned status code.
    shared_ptr<string> message_ {};
    // The unique ID of the request. This common parameter is returned with each request. Use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
