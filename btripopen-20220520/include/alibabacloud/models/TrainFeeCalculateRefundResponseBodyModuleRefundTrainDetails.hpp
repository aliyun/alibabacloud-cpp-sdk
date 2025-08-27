// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDRESPONSEBODYMODULEREFUNDTRAINDETAILS_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDRESPONSEBODYMODULEREFUNDTRAINDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(refund_ticket_details, refundTicketDetails_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(refund_ticket_details, refundTicketDetails_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails() = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails(const TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails &) = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails(TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails &&) = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails() = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& operator=(const TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails &) = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& operator=(TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStationCode_ != nullptr
        && this->depStationCode_ != nullptr && this->depTime_ != nullptr && this->refundTicketDetails_ != nullptr && this->trainNo_ != nullptr; };
    // arrStationCode Field Functions 
    bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
    void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
    inline string arrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // refundTicketDetails Field Functions 
    bool hasRefundTicketDetails() const { return this->refundTicketDetails_ != nullptr;};
    void deleteRefundTicketDetails() { this->refundTicketDetails_ = nullptr;};
    inline const vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails> & refundTicketDetails() const { DARABONBA_PTR_GET_CONST(refundTicketDetails_, vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails>) };
    inline vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails> refundTicketDetails() { DARABONBA_PTR_GET(refundTicketDetails_, vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails>) };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& setRefundTicketDetails(const vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails> & refundTicketDetails) { DARABONBA_PTR_SET_VALUE(refundTicketDetails_, refundTicketDetails) };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& setRefundTicketDetails(vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails> && refundTicketDetails) { DARABONBA_PTR_SET_RVALUE(refundTicketDetails_, refundTicketDetails) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    std::shared_ptr<string> arrStationCode_ = nullptr;
    std::shared_ptr<string> depStationCode_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails>> refundTicketDetails_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
