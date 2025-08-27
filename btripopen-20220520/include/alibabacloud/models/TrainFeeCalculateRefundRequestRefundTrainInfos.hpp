// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDREQUESTREFUNDTRAININFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDREQUESTREFUNDTRAININFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainFeeCalculateRefundRequestRefundTrainInfosRefundPassengerInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateRefundRequestRefundTrainInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateRefundRequestRefundTrainInfos& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(refund_passenger_infos, refundPassengerInfos_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateRefundRequestRefundTrainInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(refund_passenger_infos, refundPassengerInfos_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainFeeCalculateRefundRequestRefundTrainInfos() = default ;
    TrainFeeCalculateRefundRequestRefundTrainInfos(const TrainFeeCalculateRefundRequestRefundTrainInfos &) = default ;
    TrainFeeCalculateRefundRequestRefundTrainInfos(TrainFeeCalculateRefundRequestRefundTrainInfos &&) = default ;
    TrainFeeCalculateRefundRequestRefundTrainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateRefundRequestRefundTrainInfos() = default ;
    TrainFeeCalculateRefundRequestRefundTrainInfos& operator=(const TrainFeeCalculateRefundRequestRefundTrainInfos &) = default ;
    TrainFeeCalculateRefundRequestRefundTrainInfos& operator=(TrainFeeCalculateRefundRequestRefundTrainInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStationCode_ != nullptr
        && this->depStationCode_ != nullptr && this->depTime_ != nullptr && this->refundPassengerInfos_ != nullptr && this->trainNo_ != nullptr; };
    // arrStationCode Field Functions 
    bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
    void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
    inline string arrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
    inline TrainFeeCalculateRefundRequestRefundTrainInfos& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainFeeCalculateRefundRequestRefundTrainInfos& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainFeeCalculateRefundRequestRefundTrainInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // refundPassengerInfos Field Functions 
    bool hasRefundPassengerInfos() const { return this->refundPassengerInfos_ != nullptr;};
    void deleteRefundPassengerInfos() { this->refundPassengerInfos_ = nullptr;};
    inline const vector<Models::TrainFeeCalculateRefundRequestRefundTrainInfosRefundPassengerInfos> & refundPassengerInfos() const { DARABONBA_PTR_GET_CONST(refundPassengerInfos_, vector<Models::TrainFeeCalculateRefundRequestRefundTrainInfosRefundPassengerInfos>) };
    inline vector<Models::TrainFeeCalculateRefundRequestRefundTrainInfosRefundPassengerInfos> refundPassengerInfos() { DARABONBA_PTR_GET(refundPassengerInfos_, vector<Models::TrainFeeCalculateRefundRequestRefundTrainInfosRefundPassengerInfos>) };
    inline TrainFeeCalculateRefundRequestRefundTrainInfos& setRefundPassengerInfos(const vector<Models::TrainFeeCalculateRefundRequestRefundTrainInfosRefundPassengerInfos> & refundPassengerInfos) { DARABONBA_PTR_SET_VALUE(refundPassengerInfos_, refundPassengerInfos) };
    inline TrainFeeCalculateRefundRequestRefundTrainInfos& setRefundPassengerInfos(vector<Models::TrainFeeCalculateRefundRequestRefundTrainInfosRefundPassengerInfos> && refundPassengerInfos) { DARABONBA_PTR_SET_RVALUE(refundPassengerInfos_, refundPassengerInfos) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainFeeCalculateRefundRequestRefundTrainInfos& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrStationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depStationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::TrainFeeCalculateRefundRequestRefundTrainInfosRefundPassengerInfos>> refundPassengerInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
