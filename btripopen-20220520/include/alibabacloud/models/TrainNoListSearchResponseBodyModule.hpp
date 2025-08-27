// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainNoListSearchResponseBodyModuleTrainStationSearchVOS.hpp>
#include <alibabacloud/models/TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoListSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoListSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(train_station_search_v_o_s, trainStationSearchVOS_);
      DARABONBA_PTR_TO_JSON(train_transfer_station_search_v_os, trainTransferStationSearchVOs_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoListSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(train_station_search_v_o_s, trainStationSearchVOS_);
      DARABONBA_PTR_FROM_JSON(train_transfer_station_search_v_os, trainTransferStationSearchVOs_);
    };
    TrainNoListSearchResponseBodyModule() = default ;
    TrainNoListSearchResponseBodyModule(const TrainNoListSearchResponseBodyModule &) = default ;
    TrainNoListSearchResponseBodyModule(TrainNoListSearchResponseBodyModule &&) = default ;
    TrainNoListSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoListSearchResponseBodyModule() = default ;
    TrainNoListSearchResponseBodyModule& operator=(const TrainNoListSearchResponseBodyModule &) = default ;
    TrainNoListSearchResponseBodyModule& operator=(TrainNoListSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->trainStationSearchVOS_ != nullptr
        && this->trainTransferStationSearchVOs_ != nullptr; };
    // trainStationSearchVOS Field Functions 
    bool hasTrainStationSearchVOS() const { return this->trainStationSearchVOS_ != nullptr;};
    void deleteTrainStationSearchVOS() { this->trainStationSearchVOS_ = nullptr;};
    inline const vector<Models::TrainNoListSearchResponseBodyModuleTrainStationSearchVOS> & trainStationSearchVOS() const { DARABONBA_PTR_GET_CONST(trainStationSearchVOS_, vector<Models::TrainNoListSearchResponseBodyModuleTrainStationSearchVOS>) };
    inline vector<Models::TrainNoListSearchResponseBodyModuleTrainStationSearchVOS> trainStationSearchVOS() { DARABONBA_PTR_GET(trainStationSearchVOS_, vector<Models::TrainNoListSearchResponseBodyModuleTrainStationSearchVOS>) };
    inline TrainNoListSearchResponseBodyModule& setTrainStationSearchVOS(const vector<Models::TrainNoListSearchResponseBodyModuleTrainStationSearchVOS> & trainStationSearchVOS) { DARABONBA_PTR_SET_VALUE(trainStationSearchVOS_, trainStationSearchVOS) };
    inline TrainNoListSearchResponseBodyModule& setTrainStationSearchVOS(vector<Models::TrainNoListSearchResponseBodyModuleTrainStationSearchVOS> && trainStationSearchVOS) { DARABONBA_PTR_SET_RVALUE(trainStationSearchVOS_, trainStationSearchVOS) };


    // trainTransferStationSearchVOs Field Functions 
    bool hasTrainTransferStationSearchVOs() const { return this->trainTransferStationSearchVOs_ != nullptr;};
    void deleteTrainTransferStationSearchVOs() { this->trainTransferStationSearchVOs_ = nullptr;};
    inline const vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs> & trainTransferStationSearchVOs() const { DARABONBA_PTR_GET_CONST(trainTransferStationSearchVOs_, vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs>) };
    inline vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs> trainTransferStationSearchVOs() { DARABONBA_PTR_GET(trainTransferStationSearchVOs_, vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs>) };
    inline TrainNoListSearchResponseBodyModule& setTrainTransferStationSearchVOs(const vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs> & trainTransferStationSearchVOs) { DARABONBA_PTR_SET_VALUE(trainTransferStationSearchVOs_, trainTransferStationSearchVOs) };
    inline TrainNoListSearchResponseBodyModule& setTrainTransferStationSearchVOs(vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs> && trainTransferStationSearchVOs) { DARABONBA_PTR_SET_RVALUE(trainTransferStationSearchVOs_, trainTransferStationSearchVOs) };


  protected:
    std::shared_ptr<vector<Models::TrainNoListSearchResponseBodyModuleTrainStationSearchVOS>> trainStationSearchVOS_ = nullptr;
    std::shared_ptr<vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs>> trainTransferStationSearchVOs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
