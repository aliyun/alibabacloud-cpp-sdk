// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticMonitorsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticMonitorsResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetSyntheticMonitorsResponseBodyData& obj) { 
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
    GetSyntheticMonitorsResponseBodyData() = default ;
    GetSyntheticMonitorsResponseBodyData(const GetSyntheticMonitorsResponseBodyData &) = default ;
    GetSyntheticMonitorsResponseBodyData(GetSyntheticMonitorsResponseBodyData &&) = default ;
    GetSyntheticMonitorsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticMonitorsResponseBodyData() = default ;
    GetSyntheticMonitorsResponseBodyData& operator=(const GetSyntheticMonitorsResponseBodyData &) = default ;
    GetSyntheticMonitorsResponseBodyData& operator=(GetSyntheticMonitorsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->available_ != nullptr
        && this->canBeSelected_ != nullptr && this->city_ != nullptr && this->cityCode_ != nullptr && this->clientType_ != nullptr && this->country_ != nullptr
        && this->ipv6_ != nullptr && this->operator_ != nullptr && this->operatorCode_ != nullptr && this->region_ != nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline string available() const { DARABONBA_PTR_GET_DEFAULT(available_, "") };
    inline GetSyntheticMonitorsResponseBodyData& setAvailable(string available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // canBeSelected Field Functions 
    bool hasCanBeSelected() const { return this->canBeSelected_ != nullptr;};
    void deleteCanBeSelected() { this->canBeSelected_ = nullptr;};
    inline bool canBeSelected() const { DARABONBA_PTR_GET_DEFAULT(canBeSelected_, false) };
    inline GetSyntheticMonitorsResponseBodyData& setCanBeSelected(bool canBeSelected) { DARABONBA_PTR_SET_VALUE(canBeSelected_, canBeSelected) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetSyntheticMonitorsResponseBodyData& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline GetSyntheticMonitorsResponseBodyData& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int32_t clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
    inline GetSyntheticMonitorsResponseBodyData& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline GetSyntheticMonitorsResponseBodyData& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline int32_t ipv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, 0) };
    inline GetSyntheticMonitorsResponseBodyData& setIpv6(int32_t ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetSyntheticMonitorsResponseBodyData& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // operatorCode Field Functions 
    bool hasOperatorCode() const { return this->operatorCode_ != nullptr;};
    void deleteOperatorCode() { this->operatorCode_ = nullptr;};
    inline string operatorCode() const { DARABONBA_PTR_GET_DEFAULT(operatorCode_, "") };
    inline GetSyntheticMonitorsResponseBodyData& setOperatorCode(string operatorCode) { DARABONBA_PTR_SET_VALUE(operatorCode_, operatorCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetSyntheticMonitorsResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // Indicates whether the monitoring point is available. Valid values: true and false.
    std::shared_ptr<string> available_ = nullptr;
    // Indicates whether the monitoring point is selected. Valid values: true and false.
    std::shared_ptr<bool> canBeSelected_ = nullptr;
    // The city.
    std::shared_ptr<string> city_ = nullptr;
    // The city code.
    std::shared_ptr<string> cityCode_ = nullptr;
    // The client type of the monitoring point. Valid values: 1: data center. 2: Internet. 3: mobile device. 4: ECS instance.
    std::shared_ptr<int32_t> clientType_ = nullptr;
    // The country.
    std::shared_ptr<string> country_ = nullptr;
    // Indicates whether IPv6 is supported. Valid values: 0: IPv6 is not supported. 1: IPv6 is supported.
    std::shared_ptr<int32_t> ipv6_ = nullptr;
    // The carrier.
    std::shared_ptr<string> operator_ = nullptr;
    // The carrier code.
    std::shared_ptr<string> operatorCode_ = nullptr;
    // The region.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
