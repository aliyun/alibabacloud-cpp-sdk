// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TWOELEMENTSVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TWOELEMENTSVERIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class TwoElementsVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TwoElementsVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TwoElementsVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TwoElementsVerificationResponseBody() = default ;
    TwoElementsVerificationResponseBody(const TwoElementsVerificationResponseBody &) = default ;
    TwoElementsVerificationResponseBody(TwoElementsVerificationResponseBody &&) = default ;
    TwoElementsVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TwoElementsVerificationResponseBody() = default ;
    TwoElementsVerificationResponseBody& operator=(const TwoElementsVerificationResponseBody &) = default ;
    TwoElementsVerificationResponseBody& operator=(TwoElementsVerificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BasicCarrier, basicCarrier_);
        DARABONBA_PTR_TO_JSON(IsConsistent, isConsistent_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BasicCarrier, basicCarrier_);
        DARABONBA_PTR_FROM_JSON(IsConsistent, isConsistent_);
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
      virtual bool empty() const override { return this->basicCarrier_ == nullptr
        && this->isConsistent_ == nullptr; };
      // basicCarrier Field Functions 
      bool hasBasicCarrier() const { return this->basicCarrier_ != nullptr;};
      void deleteBasicCarrier() { this->basicCarrier_ = nullptr;};
      inline string getBasicCarrier() const { DARABONBA_PTR_GET_DEFAULT(basicCarrier_, "") };
      inline Data& setBasicCarrier(string basicCarrier) { DARABONBA_PTR_SET_VALUE(basicCarrier_, basicCarrier) };


      // isConsistent Field Functions 
      bool hasIsConsistent() const { return this->isConsistent_ != nullptr;};
      void deleteIsConsistent() { this->isConsistent_ = nullptr;};
      inline int32_t getIsConsistent() const { DARABONBA_PTR_GET_DEFAULT(isConsistent_, 0) };
      inline Data& setIsConsistent(int32_t isConsistent) { DARABONBA_PTR_SET_VALUE(isConsistent_, isConsistent) };


    protected:
      // The basic carriers. Valid values:
      // 
      // *   **China Mobile**
      // *   **China Unicom**
      // *   **China Telecom**
      // 
      // >  You are not allowed to verify numbers assigned by China Broadnet.
      shared_ptr<string> basicCarrier_ {};
      // Indicates whether the specified name and phone number belong to the same user. Valid values:
      // 
      // * **1**: The specified name and phone number belong to the same user.
      // 
      // * **0**: The specified name and phone number do not belong to the same user.
      // 
      // * **2**: The specified name and phone number cannot be found.
      // 
      // The phone number registration data of a user is usually updated one or three days after registration. The registration data can be queried only after the update. The following table shows the verification results under different phone number states.
      // 
      // |Carrier/Phone number state|Out-of-service|Nonexistent|Canceled|
      // |---|---|---|---|
      // |China Mobile|Verifications can be carried out normally.|The specified name and phone number cannot be found.|The specified name and phone number cannot be found.|
      // |China Unicom|Verifications can be carried out normally.|The specified name and phone number do not belong to the same user.|The specified name and phone number do not belong to the same user.|
      // |China Telecom|Verifications can be carried out normally.|The specified name and phone number cannot be found.|The specified name and phone number cannot be found.|
      shared_ptr<int32_t> isConsistent_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TwoElementsVerificationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TwoElementsVerificationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TwoElementsVerificationResponseBody::Data) };
    inline TwoElementsVerificationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TwoElementsVerificationResponseBody::Data) };
    inline TwoElementsVerificationResponseBody& setData(const TwoElementsVerificationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TwoElementsVerificationResponseBody& setData(TwoElementsVerificationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TwoElementsVerificationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TwoElementsVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. Valid values:
    // 
    // *   **OK**: The request is successful.
    // *   For more information, see Error codes in this documentation.
    // *   **RequestFrequencyLimit**: Repeated queries for the same phone number or name at a high frequency within a short period of time are prohibited due to restrictions that are set by carriers. If this error code is returned, please try again later.
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<TwoElementsVerificationResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
