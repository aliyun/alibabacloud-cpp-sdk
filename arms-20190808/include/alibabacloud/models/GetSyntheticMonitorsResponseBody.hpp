// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticMonitorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticMonitorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticMonitorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSyntheticMonitorsResponseBody() = default ;
    GetSyntheticMonitorsResponseBody(const GetSyntheticMonitorsResponseBody &) = default ;
    GetSyntheticMonitorsResponseBody(GetSyntheticMonitorsResponseBody &&) = default ;
    GetSyntheticMonitorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticMonitorsResponseBody() = default ;
    GetSyntheticMonitorsResponseBody& operator=(const GetSyntheticMonitorsResponseBody &) = default ;
    GetSyntheticMonitorsResponseBody& operator=(GetSyntheticMonitorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Available, available_);
        DARABONBA_PTR_TO_JSON(CanBeSelected, canBeSelected_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(Country, country_);
        DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(OperatorCode, operatorCode_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Available, available_);
        DARABONBA_PTR_FROM_JSON(CanBeSelected, canBeSelected_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(Country, country_);
        DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(OperatorCode, operatorCode_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
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
      virtual bool empty() const override { return this->available_ == nullptr
        && this->canBeSelected_ == nullptr && this->city_ == nullptr && this->cityCode_ == nullptr && this->clientType_ == nullptr && this->country_ == nullptr
        && this->ipv6_ == nullptr && this->operator_ == nullptr && this->operatorCode_ == nullptr && this->region_ == nullptr; };
      // available Field Functions 
      bool hasAvailable() const { return this->available_ != nullptr;};
      void deleteAvailable() { this->available_ = nullptr;};
      inline string getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, "") };
      inline Data& setAvailable(string available) { DARABONBA_PTR_SET_VALUE(available_, available) };


      // canBeSelected Field Functions 
      bool hasCanBeSelected() const { return this->canBeSelected_ != nullptr;};
      void deleteCanBeSelected() { this->canBeSelected_ = nullptr;};
      inline bool getCanBeSelected() const { DARABONBA_PTR_GET_DEFAULT(canBeSelected_, false) };
      inline Data& setCanBeSelected(bool canBeSelected) { DARABONBA_PTR_SET_VALUE(canBeSelected_, canBeSelected) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline Data& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // cityCode Field Functions 
      bool hasCityCode() const { return this->cityCode_ != nullptr;};
      void deleteCityCode() { this->cityCode_ = nullptr;};
      inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
      inline Data& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
      inline Data& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline Data& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // ipv6 Field Functions 
      bool hasIpv6() const { return this->ipv6_ != nullptr;};
      void deleteIpv6() { this->ipv6_ = nullptr;};
      inline int32_t getIpv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, 0) };
      inline Data& setIpv6(int32_t ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Data& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // operatorCode Field Functions 
      bool hasOperatorCode() const { return this->operatorCode_ != nullptr;};
      void deleteOperatorCode() { this->operatorCode_ = nullptr;};
      inline string getOperatorCode() const { DARABONBA_PTR_GET_DEFAULT(operatorCode_, "") };
      inline Data& setOperatorCode(string operatorCode) { DARABONBA_PTR_SET_VALUE(operatorCode_, operatorCode) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // Indicates whether the monitoring point is available. Valid values: true and false.
      shared_ptr<string> available_ {};
      // Indicates whether the monitoring point is selected. Valid values: true and false.
      shared_ptr<bool> canBeSelected_ {};
      // The city.
      shared_ptr<string> city_ {};
      // The city code.
      shared_ptr<string> cityCode_ {};
      // The client type of the monitoring point. Valid values: 1: data center. 2: Internet. 3: mobile device. 4: ECS instance.
      shared_ptr<int32_t> clientType_ {};
      // The country.
      shared_ptr<string> country_ {};
      // Indicates whether IPv6 is supported. Valid values: 0: IPv6 is not supported. 1: IPv6 is supported.
      shared_ptr<int32_t> ipv6_ {};
      // The carrier.
      shared_ptr<string> operator_ {};
      // The carrier code.
      shared_ptr<string> operatorCode_ {};
      // The region.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetSyntheticMonitorsResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSyntheticMonitorsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSyntheticMonitorsResponseBody::Data>) };
    inline vector<GetSyntheticMonitorsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSyntheticMonitorsResponseBody::Data>) };
    inline GetSyntheticMonitorsResponseBody& setData(const vector<GetSyntheticMonitorsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSyntheticMonitorsResponseBody& setData(vector<GetSyntheticMonitorsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSyntheticMonitorsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSyntheticMonitorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int64_t> code_ {};
    // The list of monitoring points.
    shared_ptr<vector<GetSyntheticMonitorsResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
