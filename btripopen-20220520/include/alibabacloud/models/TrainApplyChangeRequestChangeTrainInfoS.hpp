// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYCHANGEREQUESTCHANGETRAININFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYCHANGEREQUESTCHANGETRAININFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainApplyChangeRequestChangeTrainInfoS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyChangeRequestChangeTrainInfoS& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_TO_JSON(change_ticket_info_s, changeTicketInfoS_);
      DARABONBA_PTR_TO_JSON(choose_bed_s, chooseBedS_);
      DARABONBA_PTR_TO_JSON(choose_seat_s, chooseSeatS_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(original_dep_time, originalDepTime_);
      DARABONBA_PTR_TO_JSON(original_train_no, originalTrainNo_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyChangeRequestChangeTrainInfoS& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_FROM_JSON(change_ticket_info_s, changeTicketInfoS_);
      DARABONBA_PTR_FROM_JSON(choose_bed_s, chooseBedS_);
      DARABONBA_PTR_FROM_JSON(choose_seat_s, chooseSeatS_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(original_dep_time, originalDepTime_);
      DARABONBA_PTR_FROM_JSON(original_train_no, originalTrainNo_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainApplyChangeRequestChangeTrainInfoS() = default ;
    TrainApplyChangeRequestChangeTrainInfoS(const TrainApplyChangeRequestChangeTrainInfoS &) = default ;
    TrainApplyChangeRequestChangeTrainInfoS(TrainApplyChangeRequestChangeTrainInfoS &&) = default ;
    TrainApplyChangeRequestChangeTrainInfoS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyChangeRequestChangeTrainInfoS() = default ;
    TrainApplyChangeRequestChangeTrainInfoS& operator=(const TrainApplyChangeRequestChangeTrainInfoS &) = default ;
    TrainApplyChangeRequestChangeTrainInfoS& operator=(TrainApplyChangeRequestChangeTrainInfoS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStationCode_ != nullptr
        && this->changeTicketInfoS_ != nullptr && this->chooseBedS_ != nullptr && this->chooseSeatS_ != nullptr && this->depStationCode_ != nullptr && this->depTime_ != nullptr
        && this->originalDepTime_ != nullptr && this->originalTrainNo_ != nullptr && this->trainNo_ != nullptr; };
    // arrStationCode Field Functions 
    bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
    void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
    inline string arrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoS& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


    // changeTicketInfoS Field Functions 
    bool hasChangeTicketInfoS() const { return this->changeTicketInfoS_ != nullptr;};
    void deleteChangeTicketInfoS() { this->changeTicketInfoS_ = nullptr;};
    inline const vector<Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS> & changeTicketInfoS() const { DARABONBA_PTR_GET_CONST(changeTicketInfoS_, vector<Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS>) };
    inline vector<Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS> changeTicketInfoS() { DARABONBA_PTR_GET(changeTicketInfoS_, vector<Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS>) };
    inline TrainApplyChangeRequestChangeTrainInfoS& setChangeTicketInfoS(const vector<Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS> & changeTicketInfoS) { DARABONBA_PTR_SET_VALUE(changeTicketInfoS_, changeTicketInfoS) };
    inline TrainApplyChangeRequestChangeTrainInfoS& setChangeTicketInfoS(vector<Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS> && changeTicketInfoS) { DARABONBA_PTR_SET_RVALUE(changeTicketInfoS_, changeTicketInfoS) };


    // chooseBedS Field Functions 
    bool hasChooseBedS() const { return this->chooseBedS_ != nullptr;};
    void deleteChooseBedS() { this->chooseBedS_ = nullptr;};
    inline string chooseBedS() const { DARABONBA_PTR_GET_DEFAULT(chooseBedS_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoS& setChooseBedS(string chooseBedS) { DARABONBA_PTR_SET_VALUE(chooseBedS_, chooseBedS) };


    // chooseSeatS Field Functions 
    bool hasChooseSeatS() const { return this->chooseSeatS_ != nullptr;};
    void deleteChooseSeatS() { this->chooseSeatS_ = nullptr;};
    inline string chooseSeatS() const { DARABONBA_PTR_GET_DEFAULT(chooseSeatS_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoS& setChooseSeatS(string chooseSeatS) { DARABONBA_PTR_SET_VALUE(chooseSeatS_, chooseSeatS) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoS& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoS& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // originalDepTime Field Functions 
    bool hasOriginalDepTime() const { return this->originalDepTime_ != nullptr;};
    void deleteOriginalDepTime() { this->originalDepTime_ = nullptr;};
    inline string originalDepTime() const { DARABONBA_PTR_GET_DEFAULT(originalDepTime_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoS& setOriginalDepTime(string originalDepTime) { DARABONBA_PTR_SET_VALUE(originalDepTime_, originalDepTime) };


    // originalTrainNo Field Functions 
    bool hasOriginalTrainNo() const { return this->originalTrainNo_ != nullptr;};
    void deleteOriginalTrainNo() { this->originalTrainNo_ = nullptr;};
    inline string originalTrainNo() const { DARABONBA_PTR_GET_DEFAULT(originalTrainNo_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoS& setOriginalTrainNo(string originalTrainNo) { DARABONBA_PTR_SET_VALUE(originalTrainNo_, originalTrainNo) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoS& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrStationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS>> changeTicketInfoS_ = nullptr;
    std::shared_ptr<string> chooseBedS_ = nullptr;
    std::shared_ptr<string> chooseSeatS_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depStationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originalDepTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originalTrainNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
