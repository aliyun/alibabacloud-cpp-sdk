// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULETRANSFERFLIGHTLISTFLIGHTTRANSFERINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULETRANSFERFLIGHTLISTFLIGHTTRANSFERINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfoTransferAirlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& obj) { 
      DARABONBA_PTR_TO_JSON(transfer_airline_info, transferAirlineInfo_);
      DARABONBA_PTR_TO_JSON(transfer_city_code, transferCityCode_);
      DARABONBA_PTR_TO_JSON(transfer_city_name, transferCityName_);
      DARABONBA_PTR_TO_JSON(transfer_dep_time, transferDepTime_);
      DARABONBA_PTR_TO_JSON(transfer_flight_no, transferFlightNo_);
      DARABONBA_PTR_TO_JSON(transfer_flight_size, transferFlightSize_);
      DARABONBA_PTR_TO_JSON(transfer_share, transferShare_);
      DARABONBA_PTR_TO_JSON(transfer_stop_time, transferStopTime_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(transfer_airline_info, transferAirlineInfo_);
      DARABONBA_PTR_FROM_JSON(transfer_city_code, transferCityCode_);
      DARABONBA_PTR_FROM_JSON(transfer_city_name, transferCityName_);
      DARABONBA_PTR_FROM_JSON(transfer_dep_time, transferDepTime_);
      DARABONBA_PTR_FROM_JSON(transfer_flight_no, transferFlightNo_);
      DARABONBA_PTR_FROM_JSON(transfer_flight_size, transferFlightSize_);
      DARABONBA_PTR_FROM_JSON(transfer_share, transferShare_);
      DARABONBA_PTR_FROM_JSON(transfer_stop_time, transferStopTime_);
    };
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo(const FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo(FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo &&) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& operator=(const FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& operator=(FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->transferAirlineInfo_ != nullptr
        && this->transferCityCode_ != nullptr && this->transferCityName_ != nullptr && this->transferDepTime_ != nullptr && this->transferFlightNo_ != nullptr && this->transferFlightSize_ != nullptr
        && this->transferShare_ != nullptr && this->transferStopTime_ != nullptr; };
    // transferAirlineInfo Field Functions 
    bool hasTransferAirlineInfo() const { return this->transferAirlineInfo_ != nullptr;};
    void deleteTransferAirlineInfo() { this->transferAirlineInfo_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfoTransferAirlineInfo & transferAirlineInfo() const { DARABONBA_PTR_GET_CONST(transferAirlineInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfoTransferAirlineInfo) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfoTransferAirlineInfo transferAirlineInfo() { DARABONBA_PTR_GET(transferAirlineInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfoTransferAirlineInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& setTransferAirlineInfo(const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfoTransferAirlineInfo & transferAirlineInfo) { DARABONBA_PTR_SET_VALUE(transferAirlineInfo_, transferAirlineInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& setTransferAirlineInfo(Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfoTransferAirlineInfo && transferAirlineInfo) { DARABONBA_PTR_SET_RVALUE(transferAirlineInfo_, transferAirlineInfo) };


    // transferCityCode Field Functions 
    bool hasTransferCityCode() const { return this->transferCityCode_ != nullptr;};
    void deleteTransferCityCode() { this->transferCityCode_ = nullptr;};
    inline string transferCityCode() const { DARABONBA_PTR_GET_DEFAULT(transferCityCode_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& setTransferCityCode(string transferCityCode) { DARABONBA_PTR_SET_VALUE(transferCityCode_, transferCityCode) };


    // transferCityName Field Functions 
    bool hasTransferCityName() const { return this->transferCityName_ != nullptr;};
    void deleteTransferCityName() { this->transferCityName_ = nullptr;};
    inline string transferCityName() const { DARABONBA_PTR_GET_DEFAULT(transferCityName_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& setTransferCityName(string transferCityName) { DARABONBA_PTR_SET_VALUE(transferCityName_, transferCityName) };


    // transferDepTime Field Functions 
    bool hasTransferDepTime() const { return this->transferDepTime_ != nullptr;};
    void deleteTransferDepTime() { this->transferDepTime_ = nullptr;};
    inline string transferDepTime() const { DARABONBA_PTR_GET_DEFAULT(transferDepTime_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& setTransferDepTime(string transferDepTime) { DARABONBA_PTR_SET_VALUE(transferDepTime_, transferDepTime) };


    // transferFlightNo Field Functions 
    bool hasTransferFlightNo() const { return this->transferFlightNo_ != nullptr;};
    void deleteTransferFlightNo() { this->transferFlightNo_ = nullptr;};
    inline string transferFlightNo() const { DARABONBA_PTR_GET_DEFAULT(transferFlightNo_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& setTransferFlightNo(string transferFlightNo) { DARABONBA_PTR_SET_VALUE(transferFlightNo_, transferFlightNo) };


    // transferFlightSize Field Functions 
    bool hasTransferFlightSize() const { return this->transferFlightSize_ != nullptr;};
    void deleteTransferFlightSize() { this->transferFlightSize_ = nullptr;};
    inline string transferFlightSize() const { DARABONBA_PTR_GET_DEFAULT(transferFlightSize_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& setTransferFlightSize(string transferFlightSize) { DARABONBA_PTR_SET_VALUE(transferFlightSize_, transferFlightSize) };


    // transferShare Field Functions 
    bool hasTransferShare() const { return this->transferShare_ != nullptr;};
    void deleteTransferShare() { this->transferShare_ = nullptr;};
    inline bool transferShare() const { DARABONBA_PTR_GET_DEFAULT(transferShare_, false) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& setTransferShare(bool transferShare) { DARABONBA_PTR_SET_VALUE(transferShare_, transferShare) };


    // transferStopTime Field Functions 
    bool hasTransferStopTime() const { return this->transferStopTime_ != nullptr;};
    void deleteTransferStopTime() { this->transferStopTime_ = nullptr;};
    inline int32_t transferStopTime() const { DARABONBA_PTR_GET_DEFAULT(transferStopTime_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo& setTransferStopTime(int32_t transferStopTime) { DARABONBA_PTR_SET_VALUE(transferStopTime_, transferStopTime) };


  protected:
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfoTransferAirlineInfo> transferAirlineInfo_ = nullptr;
    std::shared_ptr<string> transferCityCode_ = nullptr;
    std::shared_ptr<string> transferCityName_ = nullptr;
    std::shared_ptr<string> transferDepTime_ = nullptr;
    std::shared_ptr<string> transferFlightNo_ = nullptr;
    std::shared_ptr<string> transferFlightSize_ = nullptr;
    std::shared_ptr<bool> transferShare_ = nullptr;
    std::shared_ptr<int32_t> transferStopTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
