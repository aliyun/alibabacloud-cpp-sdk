// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOINFOSEARCHRESPONSEBODYMODULETRAINTRANSFERSTATIONSEARCHVO_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOINFOSEARCHRESPONSEBODYMODULETRAINTRANSFERSTATIONSEARCHVO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVOTransferDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO& obj) { 
      DARABONBA_PTR_TO_JSON(transfer_detail_list, transferDetailList_);
      DARABONBA_PTR_TO_JSON(transfer_type, transferType_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO& obj) { 
      DARABONBA_PTR_FROM_JSON(transfer_detail_list, transferDetailList_);
      DARABONBA_PTR_FROM_JSON(transfer_type, transferType_);
    };
    TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO() = default ;
    TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO(const TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO &) = default ;
    TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO(TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO &&) = default ;
    TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO() = default ;
    TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO& operator=(const TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO &) = default ;
    TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO& operator=(TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->transferDetailList_ != nullptr
        && this->transferType_ != nullptr; };
    // transferDetailList Field Functions 
    bool hasTransferDetailList() const { return this->transferDetailList_ != nullptr;};
    void deleteTransferDetailList() { this->transferDetailList_ = nullptr;};
    inline const vector<Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVOTransferDetailList> & transferDetailList() const { DARABONBA_PTR_GET_CONST(transferDetailList_, vector<Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVOTransferDetailList>) };
    inline vector<Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVOTransferDetailList> transferDetailList() { DARABONBA_PTR_GET(transferDetailList_, vector<Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVOTransferDetailList>) };
    inline TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO& setTransferDetailList(const vector<Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVOTransferDetailList> & transferDetailList) { DARABONBA_PTR_SET_VALUE(transferDetailList_, transferDetailList) };
    inline TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO& setTransferDetailList(vector<Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVOTransferDetailList> && transferDetailList) { DARABONBA_PTR_SET_RVALUE(transferDetailList_, transferDetailList) };


    // transferType Field Functions 
    bool hasTransferType() const { return this->transferType_ != nullptr;};
    void deleteTransferType() { this->transferType_ = nullptr;};
    inline string transferType() const { DARABONBA_PTR_GET_DEFAULT(transferType_, "") };
    inline TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVO& setTransferType(string transferType) { DARABONBA_PTR_SET_VALUE(transferType_, transferType) };


  protected:
    std::shared_ptr<vector<Models::TrainNoInfoSearchResponseBodyModuleTrainTransferStationSearchVOTransferDetailList>> transferDetailList_ = nullptr;
    std::shared_ptr<string> transferType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
