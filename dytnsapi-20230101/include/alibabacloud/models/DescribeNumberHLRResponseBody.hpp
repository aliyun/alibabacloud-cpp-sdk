// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENUMBERHLRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENUMBERHLRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20230101
{
namespace Models
{
  class DescribeNumberHLRResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNumberHLRResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNumberHLRResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNumberHLRResponseBody() = default ;
    DescribeNumberHLRResponseBody(const DescribeNumberHLRResponseBody &) = default ;
    DescribeNumberHLRResponseBody(DescribeNumberHLRResponseBody &&) = default ;
    DescribeNumberHLRResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNumberHLRResponseBody() = default ;
    DescribeNumberHLRResponseBody& operator=(const DescribeNumberHLRResponseBody &) = default ;
    DescribeNumberHLRResponseBody& operator=(DescribeNumberHLRResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Blocked, blocked_);
        DARABONBA_PTR_TO_JSON(Call, call_);
        DARABONBA_PTR_TO_JSON(Carrier, carrier_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(CountryIso3, countryIso3_);
        DARABONBA_PTR_TO_JSON(Live, live_);
        DARABONBA_PTR_TO_JSON(PhoneType, phoneType_);
        DARABONBA_PTR_TO_JSON(Sms, sms_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Blocked, blocked_);
        DARABONBA_PTR_FROM_JSON(Call, call_);
        DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(CountryIso3, countryIso3_);
        DARABONBA_PTR_FROM_JSON(Live, live_);
        DARABONBA_PTR_FROM_JSON(PhoneType, phoneType_);
        DARABONBA_PTR_FROM_JSON(Sms, sms_);
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
      class Sms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sms& obj) { 
          DARABONBA_PTR_TO_JSON(CleansedCode, cleansedCode_);
          DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_TO_JSON(MinLength, minLength_);
        };
        friend void from_json(const Darabonba::Json& j, Sms& obj) { 
          DARABONBA_PTR_FROM_JSON(CleansedCode, cleansedCode_);
          DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
        };
        Sms() = default ;
        Sms(const Sms &) = default ;
        Sms(Sms &&) = default ;
        Sms(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sms() = default ;
        Sms& operator=(const Sms &) = default ;
        Sms& operator=(Sms &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cleansedCode_ == nullptr
        && this->maxLength_ == nullptr && this->minLength_ == nullptr; };
        // cleansedCode Field Functions 
        bool hasCleansedCode() const { return this->cleansedCode_ != nullptr;};
        void deleteCleansedCode() { this->cleansedCode_ = nullptr;};
        inline int64_t getCleansedCode() const { DARABONBA_PTR_GET_DEFAULT(cleansedCode_, 0L) };
        inline Sms& setCleansedCode(int64_t cleansedCode) { DARABONBA_PTR_SET_VALUE(cleansedCode_, cleansedCode) };


        // maxLength Field Functions 
        bool hasMaxLength() const { return this->maxLength_ != nullptr;};
        void deleteMaxLength() { this->maxLength_ = nullptr;};
        inline int64_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0L) };
        inline Sms& setMaxLength(int64_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


        // minLength Field Functions 
        bool hasMinLength() const { return this->minLength_ != nullptr;};
        void deleteMinLength() { this->minLength_ = nullptr;};
        inline int64_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0L) };
        inline Sms& setMinLength(int64_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


      protected:
        // sms
        shared_ptr<int64_t> cleansedCode_ {};
        shared_ptr<int64_t> maxLength_ {};
        shared_ptr<int64_t> minLength_ {};
      };

      class Live : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Live& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceStatus, deviceStatus_);
          DARABONBA_PTR_TO_JSON(Roaming, roaming_);
          DARABONBA_PTR_TO_JSON(RoamingCountry, roamingCountry_);
          DARABONBA_PTR_TO_JSON(SubscriberStatus, subscriberStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Live& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceStatus, deviceStatus_);
          DARABONBA_PTR_FROM_JSON(Roaming, roaming_);
          DARABONBA_PTR_FROM_JSON(RoamingCountry, roamingCountry_);
          DARABONBA_PTR_FROM_JSON(SubscriberStatus, subscriberStatus_);
        };
        Live() = default ;
        Live(const Live &) = default ;
        Live(Live &&) = default ;
        Live(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Live() = default ;
        Live& operator=(const Live &) = default ;
        Live& operator=(Live &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceStatus_ == nullptr
        && this->roaming_ == nullptr && this->roamingCountry_ == nullptr && this->subscriberStatus_ == nullptr; };
        // deviceStatus Field Functions 
        bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
        void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
        inline string getDeviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
        inline Live& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


        // roaming Field Functions 
        bool hasRoaming() const { return this->roaming_ != nullptr;};
        void deleteRoaming() { this->roaming_ = nullptr;};
        inline string getRoaming() const { DARABONBA_PTR_GET_DEFAULT(roaming_, "") };
        inline Live& setRoaming(string roaming) { DARABONBA_PTR_SET_VALUE(roaming_, roaming) };


        // roamingCountry Field Functions 
        bool hasRoamingCountry() const { return this->roamingCountry_ != nullptr;};
        void deleteRoamingCountry() { this->roamingCountry_ = nullptr;};
        inline string getRoamingCountry() const { DARABONBA_PTR_GET_DEFAULT(roamingCountry_, "") };
        inline Live& setRoamingCountry(string roamingCountry) { DARABONBA_PTR_SET_VALUE(roamingCountry_, roamingCountry) };


        // subscriberStatus Field Functions 
        bool hasSubscriberStatus() const { return this->subscriberStatus_ != nullptr;};
        void deleteSubscriberStatus() { this->subscriberStatus_ = nullptr;};
        inline string getSubscriberStatus() const { DARABONBA_PTR_GET_DEFAULT(subscriberStatus_, "") };
        inline Live& setSubscriberStatus(string subscriberStatus) { DARABONBA_PTR_SET_VALUE(subscriberStatus_, subscriberStatus) };


      protected:
        shared_ptr<string> deviceStatus_ {};
        shared_ptr<string> roaming_ {};
        shared_ptr<string> roamingCountry_ {};
        shared_ptr<string> subscriberStatus_ {};
      };

      class Call : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Call& obj) { 
          DARABONBA_PTR_TO_JSON(CleansedCode, cleansedCode_);
          DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_TO_JSON(MinLength, minLength_);
        };
        friend void from_json(const Darabonba::Json& j, Call& obj) { 
          DARABONBA_PTR_FROM_JSON(CleansedCode, cleansedCode_);
          DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
        };
        Call() = default ;
        Call(const Call &) = default ;
        Call(Call &&) = default ;
        Call(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Call() = default ;
        Call& operator=(const Call &) = default ;
        Call& operator=(Call &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cleansedCode_ == nullptr
        && this->maxLength_ == nullptr && this->minLength_ == nullptr; };
        // cleansedCode Field Functions 
        bool hasCleansedCode() const { return this->cleansedCode_ != nullptr;};
        void deleteCleansedCode() { this->cleansedCode_ = nullptr;};
        inline string getCleansedCode() const { DARABONBA_PTR_GET_DEFAULT(cleansedCode_, "") };
        inline Call& setCleansedCode(string cleansedCode) { DARABONBA_PTR_SET_VALUE(cleansedCode_, cleansedCode) };


        // maxLength Field Functions 
        bool hasMaxLength() const { return this->maxLength_ != nullptr;};
        void deleteMaxLength() { this->maxLength_ = nullptr;};
        inline int64_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0L) };
        inline Call& setMaxLength(int64_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


        // minLength Field Functions 
        bool hasMinLength() const { return this->minLength_ != nullptr;};
        void deleteMinLength() { this->minLength_ = nullptr;};
        inline int64_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0L) };
        inline Call& setMinLength(int64_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


      protected:
        // call
        shared_ptr<string> cleansedCode_ {};
        shared_ptr<int64_t> maxLength_ {};
        shared_ptr<int64_t> minLength_ {};
      };

      virtual bool empty() const override { return this->blocked_ == nullptr
        && this->call_ == nullptr && this->carrier_ == nullptr && this->city_ == nullptr && this->countryIso3_ == nullptr && this->live_ == nullptr
        && this->phoneType_ == nullptr && this->sms_ == nullptr; };
      // blocked Field Functions 
      bool hasBlocked() const { return this->blocked_ != nullptr;};
      void deleteBlocked() { this->blocked_ = nullptr;};
      inline string getBlocked() const { DARABONBA_PTR_GET_DEFAULT(blocked_, "") };
      inline Data& setBlocked(string blocked) { DARABONBA_PTR_SET_VALUE(blocked_, blocked) };


      // call Field Functions 
      bool hasCall() const { return this->call_ != nullptr;};
      void deleteCall() { this->call_ = nullptr;};
      inline const Data::Call & getCall() const { DARABONBA_PTR_GET_CONST(call_, Data::Call) };
      inline Data::Call getCall() { DARABONBA_PTR_GET(call_, Data::Call) };
      inline Data& setCall(const Data::Call & call) { DARABONBA_PTR_SET_VALUE(call_, call) };
      inline Data& setCall(Data::Call && call) { DARABONBA_PTR_SET_RVALUE(call_, call) };


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


      // countryIso3 Field Functions 
      bool hasCountryIso3() const { return this->countryIso3_ != nullptr;};
      void deleteCountryIso3() { this->countryIso3_ = nullptr;};
      inline string getCountryIso3() const { DARABONBA_PTR_GET_DEFAULT(countryIso3_, "") };
      inline Data& setCountryIso3(string countryIso3) { DARABONBA_PTR_SET_VALUE(countryIso3_, countryIso3) };


      // live Field Functions 
      bool hasLive() const { return this->live_ != nullptr;};
      void deleteLive() { this->live_ = nullptr;};
      inline const Data::Live & getLive() const { DARABONBA_PTR_GET_CONST(live_, Data::Live) };
      inline Data::Live getLive() { DARABONBA_PTR_GET(live_, Data::Live) };
      inline Data& setLive(const Data::Live & live) { DARABONBA_PTR_SET_VALUE(live_, live) };
      inline Data& setLive(Data::Live && live) { DARABONBA_PTR_SET_RVALUE(live_, live) };


      // phoneType Field Functions 
      bool hasPhoneType() const { return this->phoneType_ != nullptr;};
      void deletePhoneType() { this->phoneType_ = nullptr;};
      inline string getPhoneType() const { DARABONBA_PTR_GET_DEFAULT(phoneType_, "") };
      inline Data& setPhoneType(string phoneType) { DARABONBA_PTR_SET_VALUE(phoneType_, phoneType) };


      // sms Field Functions 
      bool hasSms() const { return this->sms_ != nullptr;};
      void deleteSms() { this->sms_ = nullptr;};
      inline const Data::Sms & getSms() const { DARABONBA_PTR_GET_CONST(sms_, Data::Sms) };
      inline Data::Sms getSms() { DARABONBA_PTR_GET(sms_, Data::Sms) };
      inline Data& setSms(const Data::Sms & sms) { DARABONBA_PTR_SET_VALUE(sms_, sms) };
      inline Data& setSms(Data::Sms && sms) { DARABONBA_PTR_SET_RVALUE(sms_, sms) };


    protected:
      shared_ptr<string> blocked_ {};
      shared_ptr<Data::Call> call_ {};
      shared_ptr<string> carrier_ {};
      shared_ptr<string> city_ {};
      shared_ptr<string> countryIso3_ {};
      shared_ptr<Data::Live> live_ {};
      shared_ptr<string> phoneType_ {};
      shared_ptr<Data::Sms> sms_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeNumberHLRResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeNumberHLRResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeNumberHLRResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeNumberHLRResponseBody::Data) };
    inline DescribeNumberHLRResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeNumberHLRResponseBody::Data) };
    inline DescribeNumberHLRResponseBody& setData(const DescribeNumberHLRResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeNumberHLRResponseBody& setData(DescribeNumberHLRResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeNumberHLRResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNumberHLRResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<DescribeNumberHLRResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20230101
#endif
