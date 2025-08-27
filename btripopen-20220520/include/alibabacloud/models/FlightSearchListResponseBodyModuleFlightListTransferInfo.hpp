// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTTRANSFERINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTTRANSFERINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferAirlineInfo.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferArrAirportInfo.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferDepAirportInfo.hpp>
#include <vector>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListTransferInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListTransferInfo& obj) { 
      DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
      DARABONBA_PTR_TO_JSON(flight_type, flightType_);
      DARABONBA_PTR_TO_JSON(transfer_airline_info, transferAirlineInfo_);
      DARABONBA_PTR_TO_JSON(transfer_arr_airport_info, transferArrAirportInfo_);
      DARABONBA_PTR_TO_JSON(transfer_arr_date, transferArrDate_);
      DARABONBA_PTR_TO_JSON(transfer_dep_airport_info, transferDepAirportInfo_);
      DARABONBA_PTR_TO_JSON(transfer_dep_date, transferDepDate_);
      DARABONBA_PTR_TO_JSON(transfer_flight_no, transferFlightNo_);
      DARABONBA_PTR_TO_JSON(transfer_flight_rule_list, transferFlightRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListTransferInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
      DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
      DARABONBA_PTR_FROM_JSON(transfer_airline_info, transferAirlineInfo_);
      DARABONBA_PTR_FROM_JSON(transfer_arr_airport_info, transferArrAirportInfo_);
      DARABONBA_PTR_FROM_JSON(transfer_arr_date, transferArrDate_);
      DARABONBA_PTR_FROM_JSON(transfer_dep_airport_info, transferDepAirportInfo_);
      DARABONBA_PTR_FROM_JSON(transfer_dep_date, transferDepDate_);
      DARABONBA_PTR_FROM_JSON(transfer_flight_no, transferFlightNo_);
      DARABONBA_PTR_FROM_JSON(transfer_flight_rule_list, transferFlightRuleList_);
    };
    FlightSearchListResponseBodyModuleFlightListTransferInfo() = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfo(const FlightSearchListResponseBodyModuleFlightListTransferInfo &) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfo(FlightSearchListResponseBodyModuleFlightListTransferInfo &&) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListTransferInfo() = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfo& operator=(const FlightSearchListResponseBodyModuleFlightListTransferInfo &) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfo& operator=(FlightSearchListResponseBodyModuleFlightListTransferInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightSize_ != nullptr
        && this->flightType_ != nullptr && this->transferAirlineInfo_ != nullptr && this->transferArrAirportInfo_ != nullptr && this->transferArrDate_ != nullptr && this->transferDepAirportInfo_ != nullptr
        && this->transferDepDate_ != nullptr && this->transferFlightNo_ != nullptr && this->transferFlightRuleList_ != nullptr; };
    // flightSize Field Functions 
    bool hasFlightSize() const { return this->flightSize_ != nullptr;};
    void deleteFlightSize() { this->flightSize_ = nullptr;};
    inline string flightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


    // flightType Field Functions 
    bool hasFlightType() const { return this->flightType_ != nullptr;};
    void deleteFlightType() { this->flightType_ = nullptr;};
    inline string flightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


    // transferAirlineInfo Field Functions 
    bool hasTransferAirlineInfo() const { return this->transferAirlineInfo_ != nullptr;};
    void deleteTransferAirlineInfo() { this->transferAirlineInfo_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferAirlineInfo & transferAirlineInfo() const { DARABONBA_PTR_GET_CONST(transferAirlineInfo_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferAirlineInfo) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferAirlineInfo transferAirlineInfo() { DARABONBA_PTR_GET(transferAirlineInfo_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferAirlineInfo) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferAirlineInfo(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferAirlineInfo & transferAirlineInfo) { DARABONBA_PTR_SET_VALUE(transferAirlineInfo_, transferAirlineInfo) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferAirlineInfo(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferAirlineInfo && transferAirlineInfo) { DARABONBA_PTR_SET_RVALUE(transferAirlineInfo_, transferAirlineInfo) };


    // transferArrAirportInfo Field Functions 
    bool hasTransferArrAirportInfo() const { return this->transferArrAirportInfo_ != nullptr;};
    void deleteTransferArrAirportInfo() { this->transferArrAirportInfo_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferArrAirportInfo & transferArrAirportInfo() const { DARABONBA_PTR_GET_CONST(transferArrAirportInfo_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferArrAirportInfo) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferArrAirportInfo transferArrAirportInfo() { DARABONBA_PTR_GET(transferArrAirportInfo_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferArrAirportInfo) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferArrAirportInfo(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferArrAirportInfo & transferArrAirportInfo) { DARABONBA_PTR_SET_VALUE(transferArrAirportInfo_, transferArrAirportInfo) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferArrAirportInfo(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferArrAirportInfo && transferArrAirportInfo) { DARABONBA_PTR_SET_RVALUE(transferArrAirportInfo_, transferArrAirportInfo) };


    // transferArrDate Field Functions 
    bool hasTransferArrDate() const { return this->transferArrDate_ != nullptr;};
    void deleteTransferArrDate() { this->transferArrDate_ = nullptr;};
    inline string transferArrDate() const { DARABONBA_PTR_GET_DEFAULT(transferArrDate_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferArrDate(string transferArrDate) { DARABONBA_PTR_SET_VALUE(transferArrDate_, transferArrDate) };


    // transferDepAirportInfo Field Functions 
    bool hasTransferDepAirportInfo() const { return this->transferDepAirportInfo_ != nullptr;};
    void deleteTransferDepAirportInfo() { this->transferDepAirportInfo_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferDepAirportInfo & transferDepAirportInfo() const { DARABONBA_PTR_GET_CONST(transferDepAirportInfo_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferDepAirportInfo) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferDepAirportInfo transferDepAirportInfo() { DARABONBA_PTR_GET(transferDepAirportInfo_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferDepAirportInfo) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferDepAirportInfo(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferDepAirportInfo & transferDepAirportInfo) { DARABONBA_PTR_SET_VALUE(transferDepAirportInfo_, transferDepAirportInfo) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferDepAirportInfo(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferDepAirportInfo && transferDepAirportInfo) { DARABONBA_PTR_SET_RVALUE(transferDepAirportInfo_, transferDepAirportInfo) };


    // transferDepDate Field Functions 
    bool hasTransferDepDate() const { return this->transferDepDate_ != nullptr;};
    void deleteTransferDepDate() { this->transferDepDate_ = nullptr;};
    inline string transferDepDate() const { DARABONBA_PTR_GET_DEFAULT(transferDepDate_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferDepDate(string transferDepDate) { DARABONBA_PTR_SET_VALUE(transferDepDate_, transferDepDate) };


    // transferFlightNo Field Functions 
    bool hasTransferFlightNo() const { return this->transferFlightNo_ != nullptr;};
    void deleteTransferFlightNo() { this->transferFlightNo_ = nullptr;};
    inline string transferFlightNo() const { DARABONBA_PTR_GET_DEFAULT(transferFlightNo_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferFlightNo(string transferFlightNo) { DARABONBA_PTR_SET_VALUE(transferFlightNo_, transferFlightNo) };


    // transferFlightRuleList Field Functions 
    bool hasTransferFlightRuleList() const { return this->transferFlightRuleList_ != nullptr;};
    void deleteTransferFlightRuleList() { this->transferFlightRuleList_ = nullptr;};
    inline const vector<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList> & transferFlightRuleList() const { DARABONBA_PTR_GET_CONST(transferFlightRuleList_, vector<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList>) };
    inline vector<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList> transferFlightRuleList() { DARABONBA_PTR_GET(transferFlightRuleList_, vector<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList>) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferFlightRuleList(const vector<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList> & transferFlightRuleList) { DARABONBA_PTR_SET_VALUE(transferFlightRuleList_, transferFlightRuleList) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfo& setTransferFlightRuleList(vector<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList> && transferFlightRuleList) { DARABONBA_PTR_SET_RVALUE(transferFlightRuleList_, transferFlightRuleList) };


  protected:
    std::shared_ptr<string> flightSize_ = nullptr;
    std::shared_ptr<string> flightType_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferAirlineInfo> transferAirlineInfo_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferArrAirportInfo> transferArrAirportInfo_ = nullptr;
    std::shared_ptr<string> transferArrDate_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferDepAirportInfo> transferDepAirportInfo_ = nullptr;
    std::shared_ptr<string> transferDepDate_ = nullptr;
    std::shared_ptr<string> transferFlightNo_ = nullptr;
    std::shared_ptr<vector<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList>> transferFlightRuleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
