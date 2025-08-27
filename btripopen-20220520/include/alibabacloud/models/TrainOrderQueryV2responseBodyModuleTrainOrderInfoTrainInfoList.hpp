// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULETRAINORDERINFOTRAININFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULETRAINORDERINFOTRAININFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoListTrainTicketInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_TO_JSON(from_station_name, fromStationName_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(run_time, runTime_);
      DARABONBA_PTR_TO_JSON(sub_from_city_ad_code, subFromCityAdCode_);
      DARABONBA_PTR_TO_JSON(sub_from_city_ad_name, subFromCityAdName_);
      DARABONBA_PTR_TO_JSON(sub_to_city_code, subToCityCode_);
      DARABONBA_PTR_TO_JSON(sub_to_city_name, subToCityName_);
      DARABONBA_PTR_TO_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_TO_JSON(to_station_name, toStationName_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
      DARABONBA_PTR_TO_JSON(train_ticket_infos, trainTicketInfos_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_FROM_JSON(from_station_name, fromStationName_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(run_time, runTime_);
      DARABONBA_PTR_FROM_JSON(sub_from_city_ad_code, subFromCityAdCode_);
      DARABONBA_PTR_FROM_JSON(sub_from_city_ad_name, subFromCityAdName_);
      DARABONBA_PTR_FROM_JSON(sub_to_city_code, subToCityCode_);
      DARABONBA_PTR_FROM_JSON(sub_to_city_name, subToCityName_);
      DARABONBA_PTR_FROM_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_FROM_JSON(to_station_name, toStationName_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
      DARABONBA_PTR_FROM_JSON(train_ticket_infos, trainTicketInfos_);
    };
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList() = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList(const TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList &) = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList(TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList &&) = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList() = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& operator=(const TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList &) = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& operator=(TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrTime_ != nullptr
        && this->depTime_ != nullptr && this->fromCityAdCode_ != nullptr && this->fromCityName_ != nullptr && this->fromStationName_ != nullptr && this->itemId_ != nullptr
        && this->runTime_ != nullptr && this->subFromCityAdCode_ != nullptr && this->subFromCityAdName_ != nullptr && this->subToCityCode_ != nullptr && this->subToCityName_ != nullptr
        && this->toCityAdCode_ != nullptr && this->toCityName_ != nullptr && this->toStationName_ != nullptr && this->trainNo_ != nullptr && this->trainTicketInfos_ != nullptr; };
    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // fromCityAdCode Field Functions 
    bool hasFromCityAdCode() const { return this->fromCityAdCode_ != nullptr;};
    void deleteFromCityAdCode() { this->fromCityAdCode_ = nullptr;};
    inline string fromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityAdCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setFromCityAdCode(string fromCityAdCode) { DARABONBA_PTR_SET_VALUE(fromCityAdCode_, fromCityAdCode) };


    // fromCityName Field Functions 
    bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
    void deleteFromCityName() { this->fromCityName_ = nullptr;};
    inline string fromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


    // fromStationName Field Functions 
    bool hasFromStationName() const { return this->fromStationName_ != nullptr;};
    void deleteFromStationName() { this->fromStationName_ = nullptr;};
    inline string fromStationName() const { DARABONBA_PTR_GET_DEFAULT(fromStationName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setFromStationName(string fromStationName) { DARABONBA_PTR_SET_VALUE(fromStationName_, fromStationName) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // runTime Field Functions 
    bool hasRunTime() const { return this->runTime_ != nullptr;};
    void deleteRunTime() { this->runTime_ = nullptr;};
    inline int64_t runTime() const { DARABONBA_PTR_GET_DEFAULT(runTime_, 0L) };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setRunTime(int64_t runTime) { DARABONBA_PTR_SET_VALUE(runTime_, runTime) };


    // subFromCityAdCode Field Functions 
    bool hasSubFromCityAdCode() const { return this->subFromCityAdCode_ != nullptr;};
    void deleteSubFromCityAdCode() { this->subFromCityAdCode_ = nullptr;};
    inline string subFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(subFromCityAdCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setSubFromCityAdCode(string subFromCityAdCode) { DARABONBA_PTR_SET_VALUE(subFromCityAdCode_, subFromCityAdCode) };


    // subFromCityAdName Field Functions 
    bool hasSubFromCityAdName() const { return this->subFromCityAdName_ != nullptr;};
    void deleteSubFromCityAdName() { this->subFromCityAdName_ = nullptr;};
    inline string subFromCityAdName() const { DARABONBA_PTR_GET_DEFAULT(subFromCityAdName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setSubFromCityAdName(string subFromCityAdName) { DARABONBA_PTR_SET_VALUE(subFromCityAdName_, subFromCityAdName) };


    // subToCityCode Field Functions 
    bool hasSubToCityCode() const { return this->subToCityCode_ != nullptr;};
    void deleteSubToCityCode() { this->subToCityCode_ = nullptr;};
    inline string subToCityCode() const { DARABONBA_PTR_GET_DEFAULT(subToCityCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setSubToCityCode(string subToCityCode) { DARABONBA_PTR_SET_VALUE(subToCityCode_, subToCityCode) };


    // subToCityName Field Functions 
    bool hasSubToCityName() const { return this->subToCityName_ != nullptr;};
    void deleteSubToCityName() { this->subToCityName_ = nullptr;};
    inline string subToCityName() const { DARABONBA_PTR_GET_DEFAULT(subToCityName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setSubToCityName(string subToCityName) { DARABONBA_PTR_SET_VALUE(subToCityName_, subToCityName) };


    // toCityAdCode Field Functions 
    bool hasToCityAdCode() const { return this->toCityAdCode_ != nullptr;};
    void deleteToCityAdCode() { this->toCityAdCode_ = nullptr;};
    inline string toCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(toCityAdCode_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setToCityAdCode(string toCityAdCode) { DARABONBA_PTR_SET_VALUE(toCityAdCode_, toCityAdCode) };


    // toCityName Field Functions 
    bool hasToCityName() const { return this->toCityName_ != nullptr;};
    void deleteToCityName() { this->toCityName_ = nullptr;};
    inline string toCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


    // toStationName Field Functions 
    bool hasToStationName() const { return this->toStationName_ != nullptr;};
    void deleteToStationName() { this->toStationName_ = nullptr;};
    inline string toStationName() const { DARABONBA_PTR_GET_DEFAULT(toStationName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setToStationName(string toStationName) { DARABONBA_PTR_SET_VALUE(toStationName_, toStationName) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


    // trainTicketInfos Field Functions 
    bool hasTrainTicketInfos() const { return this->trainTicketInfos_ != nullptr;};
    void deleteTrainTicketInfos() { this->trainTicketInfos_ = nullptr;};
    inline const vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoListTrainTicketInfos> & trainTicketInfos() const { DARABONBA_PTR_GET_CONST(trainTicketInfos_, vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoListTrainTicketInfos>) };
    inline vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoListTrainTicketInfos> trainTicketInfos() { DARABONBA_PTR_GET(trainTicketInfos_, vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoListTrainTicketInfos>) };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setTrainTicketInfos(const vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoListTrainTicketInfos> & trainTicketInfos) { DARABONBA_PTR_SET_VALUE(trainTicketInfos_, trainTicketInfos) };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList& setTrainTicketInfos(vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoListTrainTicketInfos> && trainTicketInfos) { DARABONBA_PTR_SET_RVALUE(trainTicketInfos_, trainTicketInfos) };


  protected:
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> fromCityAdCode_ = nullptr;
    std::shared_ptr<string> fromCityName_ = nullptr;
    std::shared_ptr<string> fromStationName_ = nullptr;
    // itemId
    std::shared_ptr<int64_t> itemId_ = nullptr;
    std::shared_ptr<int64_t> runTime_ = nullptr;
    std::shared_ptr<string> subFromCityAdCode_ = nullptr;
    std::shared_ptr<string> subFromCityAdName_ = nullptr;
    std::shared_ptr<string> subToCityCode_ = nullptr;
    std::shared_ptr<string> subToCityName_ = nullptr;
    std::shared_ptr<string> toCityAdCode_ = nullptr;
    std::shared_ptr<string> toCityName_ = nullptr;
    std::shared_ptr<string> toStationName_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoListTrainTicketInfos>> trainTicketInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
