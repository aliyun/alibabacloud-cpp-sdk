// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEFLIGHTTALEINFODTO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEFLIGHTTALEINFODTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(journeys, journeys_);
      DARABONBA_PTR_TO_JSON(notice_tips, noticeTips_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
      DARABONBA_PTR_TO_JSON(trip_type_code, tripTypeCode_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(journeys, journeys_);
      DARABONBA_PTR_FROM_JSON(notice_tips, noticeTips_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
      DARABONBA_PTR_FROM_JSON(trip_type_code, tripTypeCode_);
    };
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO() = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO(const FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO &) = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO(FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO &&) = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO() = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO& operator=(const FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO &) = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO& operator=(FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->journeys_ != nullptr
        && this->noticeTips_ != nullptr && this->tripType_ != nullptr && this->tripTypeCode_ != nullptr; };
    // journeys Field Functions 
    bool hasJourneys() const { return this->journeys_ != nullptr;};
    void deleteJourneys() { this->journeys_ = nullptr;};
    inline const vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys> & journeys() const { DARABONBA_PTR_GET_CONST(journeys_, vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys>) };
    inline vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys> journeys() { DARABONBA_PTR_GET(journeys_, vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys>) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO& setJourneys(const vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys> & journeys) { DARABONBA_PTR_SET_VALUE(journeys_, journeys) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO& setJourneys(vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys> && journeys) { DARABONBA_PTR_SET_RVALUE(journeys_, journeys) };


    // noticeTips Field Functions 
    bool hasNoticeTips() const { return this->noticeTips_ != nullptr;};
    void deleteNoticeTips() { this->noticeTips_ = nullptr;};
    inline string noticeTips() const { DARABONBA_PTR_GET_DEFAULT(noticeTips_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO& setNoticeTips(string noticeTips) { DARABONBA_PTR_SET_VALUE(noticeTips_, noticeTips) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline string tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO& setTripType(string tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


    // tripTypeCode Field Functions 
    bool hasTripTypeCode() const { return this->tripTypeCode_ != nullptr;};
    void deleteTripTypeCode() { this->tripTypeCode_ = nullptr;};
    inline int32_t tripTypeCode() const { DARABONBA_PTR_GET_DEFAULT(tripTypeCode_, 0) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTO& setTripTypeCode(int32_t tripTypeCode) { DARABONBA_PTR_SET_VALUE(tripTypeCode_, tripTypeCode) };


  protected:
    std::shared_ptr<vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys>> journeys_ = nullptr;
    std::shared_ptr<string> noticeTips_ = nullptr;
    std::shared_ptr<string> tripType_ = nullptr;
    std::shared_ptr<int32_t> tripTypeCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
