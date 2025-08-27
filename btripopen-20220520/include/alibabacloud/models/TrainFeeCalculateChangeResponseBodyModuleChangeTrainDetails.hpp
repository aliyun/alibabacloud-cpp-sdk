// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGERESPONSEBODYMODULECHANGETRAINDETAILS_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGERESPONSEBODYMODULECHANGETRAINDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_TO_JSON(change_ticket_details, changeTicketDetails_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_FROM_JSON(change_ticket_details, changeTicketDetails_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails() = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails(const TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails &) = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails(TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails &&) = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails() = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& operator=(const TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails &) = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& operator=(TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStationCode_ != nullptr
        && this->changeTicketDetails_ != nullptr && this->depStationCode_ != nullptr && this->depTime_ != nullptr && this->trainNo_ != nullptr; };
    // arrStationCode Field Functions 
    bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
    void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
    inline string arrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


    // changeTicketDetails Field Functions 
    bool hasChangeTicketDetails() const { return this->changeTicketDetails_ != nullptr;};
    void deleteChangeTicketDetails() { this->changeTicketDetails_ = nullptr;};
    inline const vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails> & changeTicketDetails() const { DARABONBA_PTR_GET_CONST(changeTicketDetails_, vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails>) };
    inline vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails> changeTicketDetails() { DARABONBA_PTR_GET(changeTicketDetails_, vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails>) };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& setChangeTicketDetails(const vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails> & changeTicketDetails) { DARABONBA_PTR_SET_VALUE(changeTicketDetails_, changeTicketDetails) };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& setChangeTicketDetails(vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails> && changeTicketDetails) { DARABONBA_PTR_SET_RVALUE(changeTicketDetails_, changeTicketDetails) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    std::shared_ptr<string> arrStationCode_ = nullptr;
    std::shared_ptr<vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails>> changeTicketDetails_ = nullptr;
    std::shared_ptr<string> depStationCode_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
