// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGEREQUESTCHANGETRAINDETAILS_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGEREQUESTCHANGETRAINDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateChangeRequestChangeTrainDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateChangeRequestChangeTrainDetails& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(original_dep_time, originalDepTime_);
      DARABONBA_PTR_TO_JSON(original_train_no, originalTrainNo_);
      DARABONBA_PTR_TO_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_TO_JSON(seat_type, seatType_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateChangeRequestChangeTrainDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(original_dep_time, originalDepTime_);
      DARABONBA_PTR_FROM_JSON(original_train_no, originalTrainNo_);
      DARABONBA_PTR_FROM_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainFeeCalculateChangeRequestChangeTrainDetails() = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetails(const TrainFeeCalculateChangeRequestChangeTrainDetails &) = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetails(TrainFeeCalculateChangeRequestChangeTrainDetails &&) = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateChangeRequestChangeTrainDetails() = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetails& operator=(const TrainFeeCalculateChangeRequestChangeTrainDetails &) = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetails& operator=(TrainFeeCalculateChangeRequestChangeTrainDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStationCode_ != nullptr
        && this->depStationCode_ != nullptr && this->depTime_ != nullptr && this->originalDepTime_ != nullptr && this->originalTrainNo_ != nullptr && this->passengerInfo_ != nullptr
        && this->seatType_ != nullptr && this->trainNo_ != nullptr; };
    // arrStationCode Field Functions 
    bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
    void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
    inline string arrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetails& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetails& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetails& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // originalDepTime Field Functions 
    bool hasOriginalDepTime() const { return this->originalDepTime_ != nullptr;};
    void deleteOriginalDepTime() { this->originalDepTime_ = nullptr;};
    inline string originalDepTime() const { DARABONBA_PTR_GET_DEFAULT(originalDepTime_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetails& setOriginalDepTime(string originalDepTime) { DARABONBA_PTR_SET_VALUE(originalDepTime_, originalDepTime) };


    // originalTrainNo Field Functions 
    bool hasOriginalTrainNo() const { return this->originalTrainNo_ != nullptr;};
    void deleteOriginalTrainNo() { this->originalTrainNo_ = nullptr;};
    inline string originalTrainNo() const { DARABONBA_PTR_GET_DEFAULT(originalTrainNo_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetails& setOriginalTrainNo(string originalTrainNo) { DARABONBA_PTR_SET_VALUE(originalTrainNo_, originalTrainNo) };


    // passengerInfo Field Functions 
    bool hasPassengerInfo() const { return this->passengerInfo_ != nullptr;};
    void deletePassengerInfo() { this->passengerInfo_ = nullptr;};
    inline const Models::TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo & passengerInfo() const { DARABONBA_PTR_GET_CONST(passengerInfo_, Models::TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo) };
    inline Models::TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo passengerInfo() { DARABONBA_PTR_GET(passengerInfo_, Models::TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo) };
    inline TrainFeeCalculateChangeRequestChangeTrainDetails& setPassengerInfo(const Models::TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo & passengerInfo) { DARABONBA_PTR_SET_VALUE(passengerInfo_, passengerInfo) };
    inline TrainFeeCalculateChangeRequestChangeTrainDetails& setPassengerInfo(Models::TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo && passengerInfo) { DARABONBA_PTR_SET_RVALUE(passengerInfo_, passengerInfo) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetails& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetails& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrStationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depStationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originalDepTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originalTrainNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo> passengerInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> seatType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
