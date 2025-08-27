// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEBOOKINFOSBOOKTRAININFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEBOOKINFOSBOOKTRAININFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_TO_JSON(arr_station_name, arrStationName_);
      DARABONBA_PTR_TO_JSON(arrive_time, arriveTime_);
      DARABONBA_PTR_TO_JSON(book_ticket_infos, bookTicketInfos_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_station_name, depStationName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_FROM_JSON(arr_station_name, arrStationName_);
      DARABONBA_PTR_FROM_JSON(arrive_time, arriveTime_);
      DARABONBA_PTR_FROM_JSON(book_ticket_infos, bookTicketInfos_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_station_name, depStationName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos(const TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos(TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& operator=(const TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& operator=(TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStationCode_ != nullptr
        && this->arrStationName_ != nullptr && this->arriveTime_ != nullptr && this->bookTicketInfos_ != nullptr && this->depStationCode_ != nullptr && this->depStationName_ != nullptr
        && this->depTime_ != nullptr && this->trainNo_ != nullptr; };
    // arrStationCode Field Functions 
    bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
    void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
    inline string arrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


    // arrStationName Field Functions 
    bool hasArrStationName() const { return this->arrStationName_ != nullptr;};
    void deleteArrStationName() { this->arrStationName_ = nullptr;};
    inline string arrStationName() const { DARABONBA_PTR_GET_DEFAULT(arrStationName_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& setArrStationName(string arrStationName) { DARABONBA_PTR_SET_VALUE(arrStationName_, arrStationName) };


    // arriveTime Field Functions 
    bool hasArriveTime() const { return this->arriveTime_ != nullptr;};
    void deleteArriveTime() { this->arriveTime_ = nullptr;};
    inline string arriveTime() const { DARABONBA_PTR_GET_DEFAULT(arriveTime_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& setArriveTime(string arriveTime) { DARABONBA_PTR_SET_VALUE(arriveTime_, arriveTime) };


    // bookTicketInfos Field Functions 
    bool hasBookTicketInfos() const { return this->bookTicketInfos_ != nullptr;};
    void deleteBookTicketInfos() { this->bookTicketInfos_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos> & bookTicketInfos() const { DARABONBA_PTR_GET_CONST(bookTicketInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos> bookTicketInfos() { DARABONBA_PTR_GET(bookTicketInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos>) };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& setBookTicketInfos(const vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos> & bookTicketInfos) { DARABONBA_PTR_SET_VALUE(bookTicketInfos_, bookTicketInfos) };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& setBookTicketInfos(vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos> && bookTicketInfos) { DARABONBA_PTR_SET_RVALUE(bookTicketInfos_, bookTicketInfos) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depStationName Field Functions 
    bool hasDepStationName() const { return this->depStationName_ != nullptr;};
    void deleteDepStationName() { this->depStationName_ = nullptr;};
    inline string depStationName() const { DARABONBA_PTR_GET_DEFAULT(depStationName_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& setDepStationName(string depStationName) { DARABONBA_PTR_SET_VALUE(depStationName_, depStationName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    std::shared_ptr<string> arrStationCode_ = nullptr;
    std::shared_ptr<string> arrStationName_ = nullptr;
    std::shared_ptr<string> arriveTime_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos>> bookTicketInfos_ = nullptr;
    std::shared_ptr<string> depStationCode_ = nullptr;
    std::shared_ptr<string> depStationName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
