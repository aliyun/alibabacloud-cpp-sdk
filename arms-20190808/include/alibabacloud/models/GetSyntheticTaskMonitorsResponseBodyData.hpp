// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKMONITORSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKMONITORSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskMonitorsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskMonitorsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Busy, busy_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(District, district_);
      DARABONBA_PTR_TO_JSON(NetServiceId, netServiceId_);
      DARABONBA_PTR_TO_JSON(NetServiceName, netServiceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskMonitorsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Busy, busy_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(District, district_);
      DARABONBA_PTR_FROM_JSON(NetServiceId, netServiceId_);
      DARABONBA_PTR_FROM_JSON(NetServiceName, netServiceName_);
    };
    GetSyntheticTaskMonitorsResponseBodyData() = default ;
    GetSyntheticTaskMonitorsResponseBodyData(const GetSyntheticTaskMonitorsResponseBodyData &) = default ;
    GetSyntheticTaskMonitorsResponseBodyData(GetSyntheticTaskMonitorsResponseBodyData &&) = default ;
    GetSyntheticTaskMonitorsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskMonitorsResponseBodyData() = default ;
    GetSyntheticTaskMonitorsResponseBodyData& operator=(const GetSyntheticTaskMonitorsResponseBodyData &) = default ;
    GetSyntheticTaskMonitorsResponseBodyData& operator=(GetSyntheticTaskMonitorsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->busy_ != nullptr
        && this->city_ != nullptr && this->cityCode_ != nullptr && this->clientType_ != nullptr && this->district_ != nullptr && this->netServiceId_ != nullptr
        && this->netServiceName_ != nullptr; };
    // busy Field Functions 
    bool hasBusy() const { return this->busy_ != nullptr;};
    void deleteBusy() { this->busy_ = nullptr;};
    inline int64_t busy() const { DARABONBA_PTR_GET_DEFAULT(busy_, 0L) };
    inline GetSyntheticTaskMonitorsResponseBodyData& setBusy(int64_t busy) { DARABONBA_PTR_SET_VALUE(busy_, busy) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetSyntheticTaskMonitorsResponseBodyData& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline int64_t cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0L) };
    inline GetSyntheticTaskMonitorsResponseBodyData& setCityCode(int64_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int64_t clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0L) };
    inline GetSyntheticTaskMonitorsResponseBodyData& setClientType(int64_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // district Field Functions 
    bool hasDistrict() const { return this->district_ != nullptr;};
    void deleteDistrict() { this->district_ = nullptr;};
    inline string district() const { DARABONBA_PTR_GET_DEFAULT(district_, "") };
    inline GetSyntheticTaskMonitorsResponseBodyData& setDistrict(string district) { DARABONBA_PTR_SET_VALUE(district_, district) };


    // netServiceId Field Functions 
    bool hasNetServiceId() const { return this->netServiceId_ != nullptr;};
    void deleteNetServiceId() { this->netServiceId_ = nullptr;};
    inline int64_t netServiceId() const { DARABONBA_PTR_GET_DEFAULT(netServiceId_, 0L) };
    inline GetSyntheticTaskMonitorsResponseBodyData& setNetServiceId(int64_t netServiceId) { DARABONBA_PTR_SET_VALUE(netServiceId_, netServiceId) };


    // netServiceName Field Functions 
    bool hasNetServiceName() const { return this->netServiceName_ != nullptr;};
    void deleteNetServiceName() { this->netServiceName_ = nullptr;};
    inline string netServiceName() const { DARABONBA_PTR_GET_DEFAULT(netServiceName_, "") };
    inline GetSyntheticTaskMonitorsResponseBodyData& setNetServiceName(string netServiceName) { DARABONBA_PTR_SET_VALUE(netServiceName_, netServiceName) };


  protected:
    // The task status.
    // 
    // *   0: active
    // *   1: busy
    std::shared_ptr<int64_t> busy_ = nullptr;
    // The name of the city to which the monitoring point belongs.
    std::shared_ptr<string> city_ = nullptr;
    // The ID of the city to which the monitoring point belongs.
    std::shared_ptr<int64_t> cityCode_ = nullptr;
    // The client type:
    // 
    // *   1: IDC
    // *   2: Last mile
    std::shared_ptr<int64_t> clientType_ = nullptr;
    // The region to which the monitoring point belongs.
    std::shared_ptr<string> district_ = nullptr;
    // The ID of the carrier.
    std::shared_ptr<int64_t> netServiceId_ = nullptr;
    // The name of the carrier.
    std::shared_ptr<string> netServiceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
