// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOBILEOPERATORATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOBILEOPERATORATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribeMobileOperatorAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMobileOperatorAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMobileOperatorAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMobileOperatorAttributeResponseBody() = default ;
    DescribeMobileOperatorAttributeResponseBody(const DescribeMobileOperatorAttributeResponseBody &) = default ;
    DescribeMobileOperatorAttributeResponseBody(DescribeMobileOperatorAttributeResponseBody &&) = default ;
    DescribeMobileOperatorAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMobileOperatorAttributeResponseBody() = default ;
    DescribeMobileOperatorAttributeResponseBody& operator=(const DescribeMobileOperatorAttributeResponseBody &) = default ;
    DescribeMobileOperatorAttributeResponseBody& operator=(DescribeMobileOperatorAttributeResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Province, province_);
        DARABONBA_PTR_TO_JSON(RealNumber, realNumber_);
        DARABONBA_PTR_TO_JSON(SegmentCarrier, segmentCarrier_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BasicCarrier, basicCarrier_);
        DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(IsNumberPortability, isNumberPortability_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
        DARABONBA_PTR_FROM_JSON(RealNumber, realNumber_);
        DARABONBA_PTR_FROM_JSON(SegmentCarrier, segmentCarrier_);
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
        && this->carrier_ == nullptr && this->city_ == nullptr && this->isNumberPortability_ == nullptr && this->province_ == nullptr && this->realNumber_ == nullptr
        && this->segmentCarrier_ == nullptr; };
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


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline Data& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      // realNumber Field Functions 
      bool hasRealNumber() const { return this->realNumber_ != nullptr;};
      void deleteRealNumber() { this->realNumber_ = nullptr;};
      inline string getRealNumber() const { DARABONBA_PTR_GET_DEFAULT(realNumber_, "") };
      inline Data& setRealNumber(string realNumber) { DARABONBA_PTR_SET_VALUE(realNumber_, realNumber) };


      // segmentCarrier Field Functions 
      bool hasSegmentCarrier() const { return this->segmentCarrier_ != nullptr;};
      void deleteSegmentCarrier() { this->segmentCarrier_ = nullptr;};
      inline string getSegmentCarrier() const { DARABONBA_PTR_GET_DEFAULT(segmentCarrier_, "") };
      inline Data& setSegmentCarrier(string segmentCarrier) { DARABONBA_PTR_SET_VALUE(segmentCarrier_, segmentCarrier) };


    protected:
      shared_ptr<string> basicCarrier_ {};
      shared_ptr<string> carrier_ {};
      shared_ptr<string> city_ {};
      shared_ptr<bool> isNumberPortability_ {};
      shared_ptr<string> province_ {};
      shared_ptr<string> realNumber_ {};
      shared_ptr<string> segmentCarrier_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeMobileOperatorAttributeResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMobileOperatorAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeMobileOperatorAttributeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeMobileOperatorAttributeResponseBody::Data) };
    inline DescribeMobileOperatorAttributeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeMobileOperatorAttributeResponseBody::Data) };
    inline DescribeMobileOperatorAttributeResponseBody& setData(const DescribeMobileOperatorAttributeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMobileOperatorAttributeResponseBody& setData(DescribeMobileOperatorAttributeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMobileOperatorAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMobileOperatorAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<DescribeMobileOperatorAttributeResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
