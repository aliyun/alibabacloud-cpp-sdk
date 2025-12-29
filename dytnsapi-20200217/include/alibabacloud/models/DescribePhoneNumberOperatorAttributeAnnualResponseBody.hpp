// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBEROPERATORATTRIBUTEANNUALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBEROPERATORATTRIBUTEANNUALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberOperatorAttributeAnnualResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberOperatorAttributeAnnualResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberOperatorAttributeAnnualResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribePhoneNumberOperatorAttributeAnnualResponseBody() = default ;
    DescribePhoneNumberOperatorAttributeAnnualResponseBody(const DescribePhoneNumberOperatorAttributeAnnualResponseBody &) = default ;
    DescribePhoneNumberOperatorAttributeAnnualResponseBody(DescribePhoneNumberOperatorAttributeAnnualResponseBody &&) = default ;
    DescribePhoneNumberOperatorAttributeAnnualResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberOperatorAttributeAnnualResponseBody() = default ;
    DescribePhoneNumberOperatorAttributeAnnualResponseBody& operator=(const DescribePhoneNumberOperatorAttributeAnnualResponseBody &) = default ;
    DescribePhoneNumberOperatorAttributeAnnualResponseBody& operator=(DescribePhoneNumberOperatorAttributeAnnualResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Mts, mts_);
        DARABONBA_PTR_TO_JSON(NumberPortability, numberPortability_);
        DARABONBA_PTR_TO_JSON(Province, province_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BasicCarrier, basicCarrier_);
        DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(Mts, mts_);
        DARABONBA_PTR_FROM_JSON(NumberPortability, numberPortability_);
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
        && this->carrier_ == nullptr && this->city_ == nullptr && this->mts_ == nullptr && this->numberPortability_ == nullptr && this->province_ == nullptr; };
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


      // mts Field Functions 
      bool hasMts() const { return this->mts_ != nullptr;};
      void deleteMts() { this->mts_ = nullptr;};
      inline string getMts() const { DARABONBA_PTR_GET_DEFAULT(mts_, "") };
      inline Data& setMts(string mts) { DARABONBA_PTR_SET_VALUE(mts_, mts) };


      // numberPortability Field Functions 
      bool hasNumberPortability() const { return this->numberPortability_ != nullptr;};
      void deleteNumberPortability() { this->numberPortability_ = nullptr;};
      inline bool getNumberPortability() const { DARABONBA_PTR_GET_DEFAULT(numberPortability_, false) };
      inline Data& setNumberPortability(bool numberPortability) { DARABONBA_PTR_SET_VALUE(numberPortability_, numberPortability) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline Data& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    protected:
      shared_ptr<string> basicCarrier_ {};
      shared_ptr<string> carrier_ {};
      shared_ptr<string> city_ {};
      shared_ptr<string> mts_ {};
      shared_ptr<bool> numberPortability_ {};
      shared_ptr<string> province_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePhoneNumberOperatorAttributeAnnualResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePhoneNumberOperatorAttributeAnnualResponseBody::Data) };
    inline DescribePhoneNumberOperatorAttributeAnnualResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePhoneNumberOperatorAttributeAnnualResponseBody::Data) };
    inline DescribePhoneNumberOperatorAttributeAnnualResponseBody& setData(const DescribePhoneNumberOperatorAttributeAnnualResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePhoneNumberOperatorAttributeAnnualResponseBody& setData(DescribePhoneNumberOperatorAttributeAnnualResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhoneNumberOperatorAttributeAnnualResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePhoneNumberOperatorAttributeAnnualResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribePhoneNumberOperatorAttributeAnnualResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
