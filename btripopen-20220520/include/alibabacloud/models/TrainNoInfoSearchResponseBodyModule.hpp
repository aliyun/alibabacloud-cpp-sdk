// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOINFOSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOINFOSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainNoInfoSearchResponseBodyModuleTrainStationSearchVO.hpp>
#include <alibabacloud/models/TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoInfoSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoInfoSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(train_station_search_v_o, trainStationSearchVO_);
      DARABONBA_PTR_TO_JSON(train_transfer_station_search_v_o, trainTransferStationSearchVO_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoInfoSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(train_station_search_v_o, trainStationSearchVO_);
      DARABONBA_PTR_FROM_JSON(train_transfer_station_search_v_o, trainTransferStationSearchVO_);
    };
    TrainNoInfoSearchResponseBodyModule() = default ;
    TrainNoInfoSearchResponseBodyModule(const TrainNoInfoSearchResponseBodyModule &) = default ;
    TrainNoInfoSearchResponseBodyModule(TrainNoInfoSearchResponseBodyModule &&) = default ;
    TrainNoInfoSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoInfoSearchResponseBodyModule() = default ;
    TrainNoInfoSearchResponseBodyModule& operator=(const TrainNoInfoSearchResponseBodyModule &) = default ;
    TrainNoInfoSearchResponseBodyModule& operator=(TrainNoInfoSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->trainStationSearchVO_ != nullptr
        && this->trainTransferStationSearchVO_ != nullptr; };
    // trainStationSearchVO Field Functions 
    bool hasTrainStationSearchVO() const { return this->trainStationSearchVO_ != nullptr;};
    void deleteTrainStationSearchVO() { this->trainStationSearchVO_ = nullptr;};
    inline const Models::TrainNoInfoSearchResponseBodyModuleTrainStationSearchVO & trainStationSearchVO() const { DARABONBA_PTR_GET_CONST(trainStationSearchVO_, Models::TrainNoInfoSearchResponseBodyModuleTrainStationSearchVO) };
    inline Models::TrainNoInfoSearchResponseBodyModuleTrainStationSearchVO trainStationSearchVO() { DARABONBA_PTR_GET(trainStationSearchVO_, Models::TrainNoInfoSearchResponseBodyModuleTrainStationSearchVO) };
    inline TrainNoInfoSearchResponseBodyModule& setTrainStationSearchVO(const Models::TrainNoInfoSearchResponseBodyModuleTrainStationSearchVO & trainStationSearchVO) { DARABONBA_PTR_SET_VALUE(trainStationSearchVO_, trainStationSearchVO) };
    inline TrainNoInfoSearchResponseBodyModule& setTrainStationSearchVO(Models::TrainNoInfoSearchResponseBodyModuleTrainStationSearchVO && trainStationSearchVO) { DARABONBA_PTR_SET_RVALUE(trainStationSearchVO_, trainStationSearchVO) };


    // trainTransferStationSearchVO Field Functions 
    bool hasTrainTransferStationSearchVO() const { return this->trainTransferStationSearchVO_ != nullptr;};
    void deleteTrainTransferStationSearchVO() { this->trainTransferStationSearchVO_ = nullptr;};
    inline const Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO & trainTransferStationSearchVO() const { DARABONBA_PTR_GET_CONST(trainTransferStationSearchVO_, Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO) };
    inline Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO trainTransferStationSearchVO() { DARABONBA_PTR_GET(trainTransferStationSearchVO_, Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO) };
    inline TrainNoInfoSearchResponseBodyModule& setTrainTransferStationSearchVO(const Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO & trainTransferStationSearchVO) { DARABONBA_PTR_SET_VALUE(trainTransferStationSearchVO_, trainTransferStationSearchVO) };
    inline TrainNoInfoSearchResponseBodyModule& setTrainTransferStationSearchVO(Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO && trainTransferStationSearchVO) { DARABONBA_PTR_SET_RVALUE(trainTransferStationSearchVO_, trainTransferStationSearchVO) };


  protected:
    std::shared_ptr<Models::TrainNoInfoSearchResponseBodyModuleTrainStationSearchVO> trainStationSearchVO_ = nullptr;
    std::shared_ptr<Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO> trainTransferStationSearchVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
