// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHRESPONSEBODYMODULETRAINSTATIONSEARCHVOSSEATINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHRESPONSEBODYMODULETRAINSTATIONSEARCHVOSSEATINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos& obj) { 
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(seat_name, seatName_);
      DARABONBA_PTR_TO_JSON(seat_type, seatType_);
      DARABONBA_PTR_TO_JSON(stock, stock_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(seat_name, seatName_);
      DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
      DARABONBA_PTR_FROM_JSON(stock, stock_);
    };
    TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos() = default ;
    TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos(const TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos &) = default ;
    TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos(TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos &&) = default ;
    TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos() = default ;
    TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos& operator=(const TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos &) = default ;
    TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos& operator=(TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->price_ != nullptr
        && this->seatName_ != nullptr && this->seatType_ != nullptr && this->stock_ != nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // seatName Field Functions 
    bool hasSeatName() const { return this->seatName_ != nullptr;};
    void deleteSeatName() { this->seatName_ = nullptr;};
    inline string seatName() const { DARABONBA_PTR_GET_DEFAULT(seatName_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos& setSeatName(string seatName) { DARABONBA_PTR_SET_VALUE(seatName_, seatName) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // stock Field Functions 
    bool hasStock() const { return this->stock_ != nullptr;};
    void deleteStock() { this->stock_ = nullptr;};
    inline string stock() const { DARABONBA_PTR_GET_DEFAULT(stock_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainStationSearchVOSSeatInfos& setStock(string stock) { DARABONBA_PTR_SET_VALUE(stock_, stock) };


  protected:
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<string> seatName_ = nullptr;
    std::shared_ptr<string> seatType_ = nullptr;
    std::shared_ptr<string> stock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
