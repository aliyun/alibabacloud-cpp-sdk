// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINEXCEEDAPPLYQUERYRESPONSEBODYMODULEAPPLYINTENTIONINFODO_HPP_
#define ALIBABACLOUD_MODELS_TRAINEXCEEDAPPLYQUERYRESPONSEBODYMODULEAPPLYINTENTIONINFODO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_station, depStation_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(seat_name, seatName_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
      DARABONBA_PTR_TO_JSON(train_type_desc, trainTypeDesc_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_station, depStation_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(seat_name, seatName_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
      DARABONBA_PTR_FROM_JSON(train_type_desc, trainTypeDesc_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO() = default ;
    TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO(const TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO &) = default ;
    TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO(TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO &&) = default ;
    TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO() = default ;
    TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& operator=(const TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO &) = default ;
    TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& operator=(TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->arrCityName_ != nullptr && this->arrStation_ != nullptr && this->arrTime_ != nullptr && this->depCity_ != nullptr && this->depCityName_ != nullptr
        && this->depStation_ != nullptr && this->depTime_ != nullptr && this->price_ != nullptr && this->seatName_ != nullptr && this->trainNo_ != nullptr
        && this->trainTypeDesc_ != nullptr && this->type_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrStation Field Functions 
    bool hasArrStation() const { return this->arrStation_ != nullptr;};
    void deleteArrStation() { this->arrStation_ = nullptr;};
    inline string arrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depStation Field Functions 
    bool hasDepStation() const { return this->depStation_ != nullptr;};
    void deleteDepStation() { this->depStation_ = nullptr;};
    inline string depStation() const { DARABONBA_PTR_GET_DEFAULT(depStation_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setDepStation(string depStation) { DARABONBA_PTR_SET_VALUE(depStation_, depStation) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // seatName Field Functions 
    bool hasSeatName() const { return this->seatName_ != nullptr;};
    void deleteSeatName() { this->seatName_ = nullptr;};
    inline string seatName() const { DARABONBA_PTR_GET_DEFAULT(seatName_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setSeatName(string seatName) { DARABONBA_PTR_SET_VALUE(seatName_, seatName) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


    // trainTypeDesc Field Functions 
    bool hasTrainTypeDesc() const { return this->trainTypeDesc_ != nullptr;};
    void deleteTrainTypeDesc() { this->trainTypeDesc_ = nullptr;};
    inline string trainTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(trainTypeDesc_, "") };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setTrainTypeDesc(string trainTypeDesc) { DARABONBA_PTR_SET_VALUE(trainTypeDesc_, trainTypeDesc) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrStation_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depStation_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<string> seatName_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
    std::shared_ptr<string> trainTypeDesc_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
