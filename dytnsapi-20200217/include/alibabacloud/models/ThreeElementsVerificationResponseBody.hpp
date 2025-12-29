// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_THREEELEMENTSVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_THREEELEMENTSVERIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class ThreeElementsVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ThreeElementsVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ThreeElementsVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ThreeElementsVerificationResponseBody() = default ;
    ThreeElementsVerificationResponseBody(const ThreeElementsVerificationResponseBody &) = default ;
    ThreeElementsVerificationResponseBody(ThreeElementsVerificationResponseBody &&) = default ;
    ThreeElementsVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ThreeElementsVerificationResponseBody() = default ;
    ThreeElementsVerificationResponseBody& operator=(const ThreeElementsVerificationResponseBody &) = default ;
    ThreeElementsVerificationResponseBody& operator=(ThreeElementsVerificationResponseBody &&) = default ;
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
      // The basic carrier. Valid values:
      // 
      // *   **China Mobile**
      // *   **China Unicom**
      // *   **China Telecom**
      shared_ptr<string> basicCarrier_ {};
      // Indicates whether the specified name, phone number, and ID card number belong to the same user. Valid values:
      // 
      // * **1**: The specified name, phone number, and ID card number belong to the same user.
      // * **0**: The specified name, phone number, and ID card number do not belong to the same user.
      // * **2**: The specified name, phone number, and ID card number cannot be found.
      // 
      // **Note** The phone number registration data of a user is usually updated one or three days after registration. The registration data can be queried only after the update. The following table shows the verification results under different phone number states.
      // 
      // |Carrier/Phone number state|Out-of-service|Nonexistent|Canceled|
      // |---|---|---|---|
      // |China Mobile|Verifications can be carried out normally.|The specified name, phone number, and ID card number cannot be found.|The specified name, phone number, and ID card number cannot be found.|
      // |China Unicom|Verifications can be carried out normally.|The specified name, phone number, and ID card number do not belong to the same user.|The specified name, phone number, and ID card number do not belong to the same user.|
      // |China Telecom|Verifications can be carried out normally.|The specified name, phone number, and ID card number cannot be found.|The specified name, phone number, and ID card number cannot be found.|
      shared_ptr<int32_t> isConsistent_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ThreeElementsVerificationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ThreeElementsVerificationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ThreeElementsVerificationResponseBody::Data) };
    inline ThreeElementsVerificationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ThreeElementsVerificationResponseBody::Data) };
    inline ThreeElementsVerificationResponseBody& setData(const ThreeElementsVerificationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ThreeElementsVerificationResponseBody& setData(ThreeElementsVerificationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ThreeElementsVerificationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ThreeElementsVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   **OK**: The request is successful.
    // *   For more information, see Error codes in this documentation.
    // *   **RequestFrequencyLimit**: Repeated queries for the same phone number at a high frequency within a short period of time are prohibited due to restrictions that are set by carriers. If this error code is returned, please try again later.
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<ThreeElementsVerificationResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
