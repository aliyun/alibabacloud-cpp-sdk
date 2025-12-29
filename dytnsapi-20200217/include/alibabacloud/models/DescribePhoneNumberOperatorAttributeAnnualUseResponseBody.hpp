// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBEROPERATORATTRIBUTEANNUALUSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBEROPERATORATTRIBUTEANNUALUSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberOperatorAttributeAnnualUseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePhoneNumberOperatorAttributeAnnualUseResponseBody() = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseResponseBody(const DescribePhoneNumberOperatorAttributeAnnualUseResponseBody &) = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseResponseBody(DescribePhoneNumberOperatorAttributeAnnualUseResponseBody &&) = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberOperatorAttributeAnnualUseResponseBody() = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& operator=(const DescribePhoneNumberOperatorAttributeAnnualUseResponseBody &) = default ;
    DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& operator=(DescribePhoneNumberOperatorAttributeAnnualUseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BasicCarrier, basicCarrier_);
        DARABONBA_PTR_TO_JSON(Carrier, carrier_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(IsNumberPortability, isNumberPortability_);
        DARABONBA_PTR_TO_JSON(NumberSegment, numberSegment_);
        DARABONBA_PTR_TO_JSON(Province, province_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BasicCarrier, basicCarrier_);
        DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(IsNumberPortability, isNumberPortability_);
        DARABONBA_PTR_FROM_JSON(NumberSegment, numberSegment_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
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
        && this->carrier_ == nullptr && this->city_ == nullptr && this->isNumberPortability_ == nullptr && this->numberSegment_ == nullptr && this->province_ == nullptr; };
      // basicCarrier Field Functions 
      bool hasBasicCarrier() const { return this->basicCarrier_ != nullptr;};
      void deleteBasicCarrier() { this->basicCarrier_ = nullptr;};
      inline string getBasicCarrier() const { DARABONBA_PTR_GET_DEFAULT(basicCarrier_, "") };
      inline Data& setBasicCarrier(string basicCarrier) { DARABONBA_PTR_SET_VALUE(basicCarrier_, basicCarrier) };


      // carrier Field Functions 
      bool hasCarrier() const { return this->carrier_ != nullptr;};
      void deleteCarrier() { this->carrier_ = nullptr;};
      inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
      inline Data& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline Data& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // isNumberPortability Field Functions 
      bool hasIsNumberPortability() const { return this->isNumberPortability_ != nullptr;};
      void deleteIsNumberPortability() { this->isNumberPortability_ = nullptr;};
      inline bool getIsNumberPortability() const { DARABONBA_PTR_GET_DEFAULT(isNumberPortability_, false) };
      inline Data& setIsNumberPortability(bool isNumberPortability) { DARABONBA_PTR_SET_VALUE(isNumberPortability_, isNumberPortability) };


      // numberSegment Field Functions 
      bool hasNumberSegment() const { return this->numberSegment_ != nullptr;};
      void deleteNumberSegment() { this->numberSegment_ = nullptr;};
      inline int64_t getNumberSegment() const { DARABONBA_PTR_GET_DEFAULT(numberSegment_, 0L) };
      inline Data& setNumberSegment(int64_t numberSegment) { DARABONBA_PTR_SET_VALUE(numberSegment_, numberSegment) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline Data& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    protected:
      shared_ptr<string> basicCarrier_ {};
      shared_ptr<string> carrier_ {};
      shared_ptr<string> city_ {};
      shared_ptr<bool> isNumberPortability_ {};
      shared_ptr<int64_t> numberSegment_ {};
      shared_ptr<string> province_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePhoneNumberOperatorAttributeAnnualUseResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePhoneNumberOperatorAttributeAnnualUseResponseBody::Data) };
    inline DescribePhoneNumberOperatorAttributeAnnualUseResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePhoneNumberOperatorAttributeAnnualUseResponseBody::Data) };
    inline DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& setData(const DescribePhoneNumberOperatorAttributeAnnualUseResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& setData(DescribePhoneNumberOperatorAttributeAnnualUseResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualUseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<DescribePhoneNumberOperatorAttributeAnnualUseResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
