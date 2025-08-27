// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHRESPONSEBODYMODULETRAINTRANSFERSTATIONSEARCHVOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHRESPONSEBODYMODULETRAINTRANSFERSTATIONSEARCHVOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
      DARABONBA_PTR_TO_JSON(dep_station, depStation_);
      DARABONBA_PTR_TO_JSON(line_key, lineKey_);
      DARABONBA_PTR_TO_JSON(middle_station, middleStation_);
      DARABONBA_PTR_TO_JSON(transfer_detail_list, transferDetailList_);
      DARABONBA_PTR_TO_JSON(transfer_type, transferType_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
      DARABONBA_PTR_FROM_JSON(dep_station, depStation_);
      DARABONBA_PTR_FROM_JSON(line_key, lineKey_);
      DARABONBA_PTR_FROM_JSON(middle_station, middleStation_);
      DARABONBA_PTR_FROM_JSON(transfer_detail_list, transferDetailList_);
      DARABONBA_PTR_FROM_JSON(transfer_type, transferType_);
    };
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs() = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs(const TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs &) = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs(TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs &&) = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs() = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& operator=(const TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs &) = default ;
    TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& operator=(TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStation_ != nullptr
        && this->depStation_ != nullptr && this->lineKey_ != nullptr && this->middleStation_ != nullptr && this->transferDetailList_ != nullptr && this->transferType_ != nullptr; };
    // arrStation Field Functions 
    bool hasArrStation() const { return this->arrStation_ != nullptr;};
    void deleteArrStation() { this->arrStation_ = nullptr;};
    inline string arrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


    // depStation Field Functions 
    bool hasDepStation() const { return this->depStation_ != nullptr;};
    void deleteDepStation() { this->depStation_ = nullptr;};
    inline string depStation() const { DARABONBA_PTR_GET_DEFAULT(depStation_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& setDepStation(string depStation) { DARABONBA_PTR_SET_VALUE(depStation_, depStation) };


    // lineKey Field Functions 
    bool hasLineKey() const { return this->lineKey_ != nullptr;};
    void deleteLineKey() { this->lineKey_ = nullptr;};
    inline string lineKey() const { DARABONBA_PTR_GET_DEFAULT(lineKey_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& setLineKey(string lineKey) { DARABONBA_PTR_SET_VALUE(lineKey_, lineKey) };


    // middleStation Field Functions 
    bool hasMiddleStation() const { return this->middleStation_ != nullptr;};
    void deleteMiddleStation() { this->middleStation_ = nullptr;};
    inline string middleStation() const { DARABONBA_PTR_GET_DEFAULT(middleStation_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& setMiddleStation(string middleStation) { DARABONBA_PTR_SET_VALUE(middleStation_, middleStation) };


    // transferDetailList Field Functions 
    bool hasTransferDetailList() const { return this->transferDetailList_ != nullptr;};
    void deleteTransferDetailList() { this->transferDetailList_ = nullptr;};
    inline const vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList> & transferDetailList() const { DARABONBA_PTR_GET_CONST(transferDetailList_, vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList>) };
    inline vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList> transferDetailList() { DARABONBA_PTR_GET(transferDetailList_, vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList>) };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& setTransferDetailList(const vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList> & transferDetailList) { DARABONBA_PTR_SET_VALUE(transferDetailList_, transferDetailList) };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& setTransferDetailList(vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList> && transferDetailList) { DARABONBA_PTR_SET_RVALUE(transferDetailList_, transferDetailList) };


    // transferType Field Functions 
    bool hasTransferType() const { return this->transferType_ != nullptr;};
    void deleteTransferType() { this->transferType_ = nullptr;};
    inline string transferType() const { DARABONBA_PTR_GET_DEFAULT(transferType_, "") };
    inline TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOs& setTransferType(string transferType) { DARABONBA_PTR_SET_VALUE(transferType_, transferType) };


  protected:
    std::shared_ptr<string> arrStation_ = nullptr;
    std::shared_ptr<string> depStation_ = nullptr;
    std::shared_ptr<string> lineKey_ = nullptr;
    std::shared_ptr<string> middleStation_ = nullptr;
    std::shared_ptr<vector<Models::TrainNoListSearchResponseBodyModuleTrainTransferStationSearchVOsTransferDetailList>> transferDetailList_ = nullptr;
    std::shared_ptr<string> transferType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
