// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTBOOKTRAININFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTBOOKTRAININFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderCreateRequestBookTrainInfosBookTicketInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderCreateRequestBookTrainInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCreateRequestBookTrainInfos& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_TO_JSON(book_ticket_infos, bookTicketInfos_);
      DARABONBA_PTR_TO_JSON(choose_beds, chooseBeds_);
      DARABONBA_PTR_TO_JSON(choose_seats, chooseSeats_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCreateRequestBookTrainInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_FROM_JSON(book_ticket_infos, bookTicketInfos_);
      DARABONBA_PTR_FROM_JSON(choose_beds, chooseBeds_);
      DARABONBA_PTR_FROM_JSON(choose_seats, chooseSeats_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainOrderCreateRequestBookTrainInfos() = default ;
    TrainOrderCreateRequestBookTrainInfos(const TrainOrderCreateRequestBookTrainInfos &) = default ;
    TrainOrderCreateRequestBookTrainInfos(TrainOrderCreateRequestBookTrainInfos &&) = default ;
    TrainOrderCreateRequestBookTrainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCreateRequestBookTrainInfos() = default ;
    TrainOrderCreateRequestBookTrainInfos& operator=(const TrainOrderCreateRequestBookTrainInfos &) = default ;
    TrainOrderCreateRequestBookTrainInfos& operator=(TrainOrderCreateRequestBookTrainInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStationCode_ != nullptr
        && this->bookTicketInfos_ != nullptr && this->chooseBeds_ != nullptr && this->chooseSeats_ != nullptr && this->depStationCode_ != nullptr && this->depTime_ != nullptr
        && this->trainNo_ != nullptr; };
    // arrStationCode Field Functions 
    bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
    void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
    inline string arrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
    inline TrainOrderCreateRequestBookTrainInfos& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


    // bookTicketInfos Field Functions 
    bool hasBookTicketInfos() const { return this->bookTicketInfos_ != nullptr;};
    void deleteBookTicketInfos() { this->bookTicketInfos_ = nullptr;};
    inline const vector<Models::TrainOrderCreateRequestBookTrainInfosBookTicketInfos> & bookTicketInfos() const { DARABONBA_PTR_GET_CONST(bookTicketInfos_, vector<Models::TrainOrderCreateRequestBookTrainInfosBookTicketInfos>) };
    inline vector<Models::TrainOrderCreateRequestBookTrainInfosBookTicketInfos> bookTicketInfos() { DARABONBA_PTR_GET(bookTicketInfos_, vector<Models::TrainOrderCreateRequestBookTrainInfosBookTicketInfos>) };
    inline TrainOrderCreateRequestBookTrainInfos& setBookTicketInfos(const vector<Models::TrainOrderCreateRequestBookTrainInfosBookTicketInfos> & bookTicketInfos) { DARABONBA_PTR_SET_VALUE(bookTicketInfos_, bookTicketInfos) };
    inline TrainOrderCreateRequestBookTrainInfos& setBookTicketInfos(vector<Models::TrainOrderCreateRequestBookTrainInfosBookTicketInfos> && bookTicketInfos) { DARABONBA_PTR_SET_RVALUE(bookTicketInfos_, bookTicketInfos) };


    // chooseBeds Field Functions 
    bool hasChooseBeds() const { return this->chooseBeds_ != nullptr;};
    void deleteChooseBeds() { this->chooseBeds_ = nullptr;};
    inline string chooseBeds() const { DARABONBA_PTR_GET_DEFAULT(chooseBeds_, "") };
    inline TrainOrderCreateRequestBookTrainInfos& setChooseBeds(string chooseBeds) { DARABONBA_PTR_SET_VALUE(chooseBeds_, chooseBeds) };


    // chooseSeats Field Functions 
    bool hasChooseSeats() const { return this->chooseSeats_ != nullptr;};
    void deleteChooseSeats() { this->chooseSeats_ = nullptr;};
    inline string chooseSeats() const { DARABONBA_PTR_GET_DEFAULT(chooseSeats_, "") };
    inline TrainOrderCreateRequestBookTrainInfos& setChooseSeats(string chooseSeats) { DARABONBA_PTR_SET_VALUE(chooseSeats_, chooseSeats) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainOrderCreateRequestBookTrainInfos& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainOrderCreateRequestBookTrainInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainOrderCreateRequestBookTrainInfos& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrStationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::TrainOrderCreateRequestBookTrainInfosBookTicketInfos>> bookTicketInfos_ = nullptr;
    std::shared_ptr<string> chooseBeds_ = nullptr;
    std::shared_ptr<string> chooseSeats_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depStationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
