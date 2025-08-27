// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHRESPONSEBODYMODULETRAINTRANSFERSTATIONSEARCHVOSTRANSFERDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHRESPONSEBODYMODULETRAINTRANSFERSTATIONSEARCHVOSTRANSFERDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailListSeatInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_day_tag, arrDayTag_);
      DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_TO_JSON(arr_station_name, arrStationName_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(cost_time, costTime_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_station_name, depStationName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(is_end_station, isEndStation_);
      DARABONBA_PTR_TO_JSON(is_start_station, isStartStation_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(sale_flag, saleFlag_);
      DARABONBA_PTR_TO_JSON(sale_flag_msg, saleFlagMsg_);
      DARABONBA_PTR_TO_JSON(seat_infos, seatInfos_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
      DARABONBA_PTR_TO_JSON(train_type, trainType_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_day_tag, arrDayTag_);
      DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
      DARABONBA_PTR_FROM_JSON(arr_station_name, arrStationName_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(cost_time, costTime_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_station_name, depStationName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(is_end_station, isEndStation_);
      DARABONBA_PTR_FROM_JSON(is_start_station, isStartStation_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(sale_flag, saleFlag_);
      DARABONBA_PTR_FROM_JSON(sale_flag_msg, saleFlagMsg_);
      DARABONBA_PTR_FROM_JSON(seat_infos, seatInfos_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
      DARABONBA_PTR_FROM_JSON(train_type, trainType_);
    };
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList() = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList(const TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList &) = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList(TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList &&) = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList() = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& operator=(const TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList &) = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& operator=(TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrDayTag_ != nullptr
        && this->arrStationCode_ != nullptr && this->arrStationName_ != nullptr && this->arrTime_ != nullptr && this->costTime_ != nullptr && this->depStationCode_ != nullptr
        && this->depStationName_ != nullptr && this->depTime_ != nullptr && this->isEndStation_ != nullptr && this->isStartStation_ != nullptr && this->price_ != nullptr
        && this->saleFlag_ != nullptr && this->saleFlagMsg_ != nullptr && this->seatInfos_ != nullptr && this->segmentIndex_ != nullptr && this->trainNo_ != nullptr
        && this->trainType_ != nullptr; };
    // arrDayTag Field Functions 
    bool hasArrDayTag() const { return this->arrDayTag_ != nullptr;};
    void deleteArrDayTag() { this->arrDayTag_ = nullptr;};
    inline string arrDayTag() const { DARABONBA_PTR_GET_DEFAULT(arrDayTag_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setArrDayTag(string arrDayTag) { DARABONBA_PTR_SET_VALUE(arrDayTag_, arrDayTag) };


    // arrStationCode Field Functions 
    bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
    void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
    inline string arrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


    // arrStationName Field Functions 
    bool hasArrStationName() const { return this->arrStationName_ != nullptr;};
    void deleteArrStationName() { this->arrStationName_ = nullptr;};
    inline string arrStationName() const { DARABONBA_PTR_GET_DEFAULT(arrStationName_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setArrStationName(string arrStationName) { DARABONBA_PTR_SET_VALUE(arrStationName_, arrStationName) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // costTime Field Functions 
    bool hasCostTime() const { return this->costTime_ != nullptr;};
    void deleteCostTime() { this->costTime_ = nullptr;};
    inline string costTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depStationName Field Functions 
    bool hasDepStationName() const { return this->depStationName_ != nullptr;};
    void deleteDepStationName() { this->depStationName_ = nullptr;};
    inline string depStationName() const { DARABONBA_PTR_GET_DEFAULT(depStationName_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setDepStationName(string depStationName) { DARABONBA_PTR_SET_VALUE(depStationName_, depStationName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // isEndStation Field Functions 
    bool hasIsEndStation() const { return this->isEndStation_ != nullptr;};
    void deleteIsEndStation() { this->isEndStation_ = nullptr;};
    inline int32_t isEndStation() const { DARABONBA_PTR_GET_DEFAULT(isEndStation_, 0) };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setIsEndStation(int32_t isEndStation) { DARABONBA_PTR_SET_VALUE(isEndStation_, isEndStation) };


    // isStartStation Field Functions 
    bool hasIsStartStation() const { return this->isStartStation_ != nullptr;};
    void deleteIsStartStation() { this->isStartStation_ = nullptr;};
    inline int32_t isStartStation() const { DARABONBA_PTR_GET_DEFAULT(isStartStation_, 0) };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setIsStartStation(int32_t isStartStation) { DARABONBA_PTR_SET_VALUE(isStartStation_, isStartStation) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline string price() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // saleFlag Field Functions 
    bool hasSaleFlag() const { return this->saleFlag_ != nullptr;};
    void deleteSaleFlag() { this->saleFlag_ = nullptr;};
    inline string saleFlag() const { DARABONBA_PTR_GET_DEFAULT(saleFlag_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setSaleFlag(string saleFlag) { DARABONBA_PTR_SET_VALUE(saleFlag_, saleFlag) };


    // saleFlagMsg Field Functions 
    bool hasSaleFlagMsg() const { return this->saleFlagMsg_ != nullptr;};
    void deleteSaleFlagMsg() { this->saleFlagMsg_ = nullptr;};
    inline string saleFlagMsg() const { DARABONBA_PTR_GET_DEFAULT(saleFlagMsg_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setSaleFlagMsg(string saleFlagMsg) { DARABONBA_PTR_SET_VALUE(saleFlagMsg_, saleFlagMsg) };


    // seatInfos Field Functions 
    bool hasSeatInfos() const { return this->seatInfos_ != nullptr;};
    void deleteSeatInfos() { this->seatInfos_ = nullptr;};
    inline const vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailListSeatInfos> & seatInfos() const { DARABONBA_PTR_GET_CONST(seatInfos_, vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailListSeatInfos>) };
    inline vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailListSeatInfos> seatInfos() { DARABONBA_PTR_GET(seatInfos_, vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailListSeatInfos>) };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setSeatInfos(const vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailListSeatInfos> & seatInfos) { DARABONBA_PTR_SET_VALUE(seatInfos_, seatInfos) };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setSeatInfos(vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailListSeatInfos> && seatInfos) { DARABONBA_PTR_SET_RVALUE(seatInfos_, seatInfos) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline string segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setSegmentIndex(string segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


    // trainType Field Functions 
    bool hasTrainType() const { return this->trainType_ != nullptr;};
    void deleteTrainType() { this->trainType_ = nullptr;};
    inline string trainType() const { DARABONBA_PTR_GET_DEFAULT(trainType_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList& setTrainType(string trainType) { DARABONBA_PTR_SET_VALUE(trainType_, trainType) };


  protected:
    std::shared_ptr<string> arrDayTag_ = nullptr;
    std::shared_ptr<string> arrStationCode_ = nullptr;
    std::shared_ptr<string> arrStationName_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> costTime_ = nullptr;
    std::shared_ptr<string> depStationCode_ = nullptr;
    std::shared_ptr<string> depStationName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<int32_t> isEndStation_ = nullptr;
    std::shared_ptr<int32_t> isStartStation_ = nullptr;
    std::shared_ptr<string> price_ = nullptr;
    std::shared_ptr<string> saleFlag_ = nullptr;
    std::shared_ptr<string> saleFlagMsg_ = nullptr;
    std::shared_ptr<vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailListSeatInfos>> seatInfos_ = nullptr;
    std::shared_ptr<string> segmentIndex_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
    std::shared_ptr<string> trainType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
