// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PhoneNumberAttribute, phoneNumberAttribute_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberAttribute, phoneNumberAttribute_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePhoneNumberAttributeResponseBody() = default ;
    DescribePhoneNumberAttributeResponseBody(const DescribePhoneNumberAttributeResponseBody &) = default ;
    DescribePhoneNumberAttributeResponseBody(DescribePhoneNumberAttributeResponseBody &&) = default ;
    DescribePhoneNumberAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberAttributeResponseBody() = default ;
    DescribePhoneNumberAttributeResponseBody& operator=(const DescribePhoneNumberAttributeResponseBody &) = default ;
    DescribePhoneNumberAttributeResponseBody& operator=(DescribePhoneNumberAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PhoneNumberAttribute : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PhoneNumberAttribute& obj) { 
        DARABONBA_PTR_TO_JSON(BasicCarrier, basicCarrier_);
        DARABONBA_PTR_TO_JSON(Carrier, carrier_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(IsNumberPortability, isNumberPortability_);
        DARABONBA_PTR_TO_JSON(NumberSegment, numberSegment_);
        DARABONBA_PTR_TO_JSON(Province, province_);
      };
      friend void from_json(const Darabonba::Json& j, PhoneNumberAttribute& obj) { 
        DARABONBA_PTR_FROM_JSON(BasicCarrier, basicCarrier_);
        DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(IsNumberPortability, isNumberPortability_);
        DARABONBA_PTR_FROM_JSON(NumberSegment, numberSegment_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
      };
      PhoneNumberAttribute() = default ;
      PhoneNumberAttribute(const PhoneNumberAttribute &) = default ;
      PhoneNumberAttribute(PhoneNumberAttribute &&) = default ;
      PhoneNumberAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PhoneNumberAttribute() = default ;
      PhoneNumberAttribute& operator=(const PhoneNumberAttribute &) = default ;
      PhoneNumberAttribute& operator=(PhoneNumberAttribute &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->basicCarrier_ == nullptr
        && this->carrier_ == nullptr && this->city_ == nullptr && this->isNumberPortability_ == nullptr && this->numberSegment_ == nullptr && this->province_ == nullptr; };
      // basicCarrier Field Functions 
      bool hasBasicCarrier() const { return this->basicCarrier_ != nullptr;};
      void deleteBasicCarrier() { this->basicCarrier_ = nullptr;};
      inline string getBasicCarrier() const { DARABONBA_PTR_GET_DEFAULT(basicCarrier_, "") };
      inline PhoneNumberAttribute& setBasicCarrier(string basicCarrier) { DARABONBA_PTR_SET_VALUE(basicCarrier_, basicCarrier) };


      // carrier Field Functions 
      bool hasCarrier() const { return this->carrier_ != nullptr;};
      void deleteCarrier() { this->carrier_ = nullptr;};
      inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
      inline PhoneNumberAttribute& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline PhoneNumberAttribute& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // isNumberPortability Field Functions 
      bool hasIsNumberPortability() const { return this->isNumberPortability_ != nullptr;};
      void deleteIsNumberPortability() { this->isNumberPortability_ = nullptr;};
      inline bool getIsNumberPortability() const { DARABONBA_PTR_GET_DEFAULT(isNumberPortability_, false) };
      inline PhoneNumberAttribute& setIsNumberPortability(bool isNumberPortability) { DARABONBA_PTR_SET_VALUE(isNumberPortability_, isNumberPortability) };


      // numberSegment Field Functions 
      bool hasNumberSegment() const { return this->numberSegment_ != nullptr;};
      void deleteNumberSegment() { this->numberSegment_ = nullptr;};
      inline int64_t getNumberSegment() const { DARABONBA_PTR_GET_DEFAULT(numberSegment_, 0L) };
      inline PhoneNumberAttribute& setNumberSegment(int64_t numberSegment) { DARABONBA_PTR_SET_VALUE(numberSegment_, numberSegment) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline PhoneNumberAttribute& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    protected:
      // The basic carrier. Valid values:
      // 
      // *   **China Mobile**
      // *   **China Unicom**
      // *   **China Telecom**
      shared_ptr<string> basicCarrier_ {};
      // The actual carrier, including the virtual network operator (VNO). If the phone number involves mobile number portability, the value of this parameter is the carrier after mobile number portability.
      shared_ptr<string> carrier_ {};
      // The city where the phone number is registered.
      shared_ptr<string> city_ {};
      // Indicates whether the phone number involves mobile number portability. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isNumberPortability_ {};
      // The number segment to which the phone number belongs.
      shared_ptr<int64_t> numberSegment_ {};
      // The province where the phone number is registered.
      shared_ptr<string> province_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->phoneNumberAttribute_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePhoneNumberAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePhoneNumberAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // phoneNumberAttribute Field Functions 
    bool hasPhoneNumberAttribute() const { return this->phoneNumberAttribute_ != nullptr;};
    void deletePhoneNumberAttribute() { this->phoneNumberAttribute_ = nullptr;};
    inline const DescribePhoneNumberAttributeResponseBody::PhoneNumberAttribute & getPhoneNumberAttribute() const { DARABONBA_PTR_GET_CONST(phoneNumberAttribute_, DescribePhoneNumberAttributeResponseBody::PhoneNumberAttribute) };
    inline DescribePhoneNumberAttributeResponseBody::PhoneNumberAttribute getPhoneNumberAttribute() { DARABONBA_PTR_GET(phoneNumberAttribute_, DescribePhoneNumberAttributeResponseBody::PhoneNumberAttribute) };
    inline DescribePhoneNumberAttributeResponseBody& setPhoneNumberAttribute(const DescribePhoneNumberAttributeResponseBody::PhoneNumberAttribute & phoneNumberAttribute) { DARABONBA_PTR_SET_VALUE(phoneNumberAttribute_, phoneNumberAttribute) };
    inline DescribePhoneNumberAttributeResponseBody& setPhoneNumberAttribute(DescribePhoneNumberAttributeResponseBody::PhoneNumberAttribute && phoneNumberAttribute) { DARABONBA_PTR_SET_RVALUE(phoneNumberAttribute_, phoneNumberAttribute) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhoneNumberAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. Valid values:
    // 
    // *   **OK**: The request is successful.
    // *   **InvalidParameter**: The specified phone number is invalid or the parameter format is invalid.
    // *   **PhoneNumberNotfound**: No attribute information can be found for the specified phone number.
    // *   **isp.UNKNOWN**: An unknown exception occurred.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The attribute information about the phone number.
    shared_ptr<DescribePhoneNumberAttributeResponseBody::PhoneNumberAttribute> phoneNumberAttribute_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
