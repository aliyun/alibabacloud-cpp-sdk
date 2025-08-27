// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULECHANGEINFOSCHANGETRAININFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULECHANGEINFOSCHANGETRAININFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_TO_JSON(arr_station_name, arrStationName_);
      DARABONBA_PTR_TO_JSON(arrive_time, arriveTime_);
      DARABONBA_PTR_TO_JSON(change_ticket_infos, changeTicketInfos_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_station_name, depStationName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_FROM_JSON(arr_station_name, arrStationName_);
      DARABONBA_PTR_FROM_JSON(arrive_time, arriveTime_);
      DARABONBA_PTR_FROM_JSON(change_ticket_infos, changeTicketInfos_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_station_name, depStationName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos(const TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos(TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& operator=(const TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& operator=(TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStationCode_ != nullptr
        && this->arrStationName_ != nullptr && this->arriveTime_ != nullptr && this->changeTicketInfos_ != nullptr && this->depStationCode_ != nullptr && this->depStationName_ != nullptr
        && this->depTime_ != nullptr && this->trainNo_ != nullptr; };
    // arrStationCode Field Functions 
    bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
    void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
    inline string arrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


    // arrStationName Field Functions 
    bool hasArrStationName() const { return this->arrStationName_ != nullptr;};
    void deleteArrStationName() { this->arrStationName_ = nullptr;};
    inline string arrStationName() const { DARABONBA_PTR_GET_DEFAULT(arrStationName_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& setArrStationName(string arrStationName) { DARABONBA_PTR_SET_VALUE(arrStationName_, arrStationName) };


    // arriveTime Field Functions 
    bool hasArriveTime() const { return this->arriveTime_ != nullptr;};
    void deleteArriveTime() { this->arriveTime_ = nullptr;};
    inline string arriveTime() const { DARABONBA_PTR_GET_DEFAULT(arriveTime_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& setArriveTime(string arriveTime) { DARABONBA_PTR_SET_VALUE(arriveTime_, arriveTime) };


    // changeTicketInfos Field Functions 
    bool hasChangeTicketInfos() const { return this->changeTicketInfos_ != nullptr;};
    void deleteChangeTicketInfos() { this->changeTicketInfos_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos> & changeTicketInfos() const { DARABONBA_PTR_GET_CONST(changeTicketInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos> changeTicketInfos() { DARABONBA_PTR_GET(changeTicketInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos>) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& setChangeTicketInfos(const vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos> & changeTicketInfos) { DARABONBA_PTR_SET_VALUE(changeTicketInfos_, changeTicketInfos) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& setChangeTicketInfos(vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos> && changeTicketInfos) { DARABONBA_PTR_SET_RVALUE(changeTicketInfos_, changeTicketInfos) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depStationName Field Functions 
    bool hasDepStationName() const { return this->depStationName_ != nullptr;};
    void deleteDepStationName() { this->depStationName_ = nullptr;};
    inline string depStationName() const { DARABONBA_PTR_GET_DEFAULT(depStationName_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& setDepStationName(string depStationName) { DARABONBA_PTR_SET_VALUE(depStationName_, depStationName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    std::shared_ptr<string> arrStationCode_ = nullptr;
    std::shared_ptr<string> arrStationName_ = nullptr;
    std::shared_ptr<string> arriveTime_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos>> changeTicketInfos_ = nullptr;
    std::shared_ptr<string> depStationCode_ = nullptr;
    std::shared_ptr<string> depStationName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
