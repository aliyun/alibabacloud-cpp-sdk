// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULETRAINORDERINFO_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULETRAINORDERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo& obj) { 
      DARABONBA_PTR_TO_JSON(train_info_list, trainInfoList_);
      DARABONBA_PTR_TO_JSON(train_transfer_info, trainTransferInfo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(train_info_list, trainInfoList_);
      DARABONBA_PTR_FROM_JSON(train_transfer_info, trainTransferInfo_);
    };
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo() = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo(const TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo &) = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo(TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo &&) = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo() = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo& operator=(const TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo &) = default ;
    TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo& operator=(TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->trainInfoList_ != nullptr
        && this->trainTransferInfo_ != nullptr; };
    // trainInfoList Field Functions 
    bool hasTrainInfoList() const { return this->trainInfoList_ != nullptr;};
    void deleteTrainInfoList() { this->trainInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList> & trainInfoList() const { DARABONBA_PTR_GET_CONST(trainInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList>) };
    inline vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList> trainInfoList() { DARABONBA_PTR_GET(trainInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList>) };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo& setTrainInfoList(const vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList> & trainInfoList) { DARABONBA_PTR_SET_VALUE(trainInfoList_, trainInfoList) };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo& setTrainInfoList(vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList> && trainInfoList) { DARABONBA_PTR_SET_RVALUE(trainInfoList_, trainInfoList) };


    // trainTransferInfo Field Functions 
    bool hasTrainTransferInfo() const { return this->trainTransferInfo_ != nullptr;};
    void deleteTrainTransferInfo() { this->trainTransferInfo_ = nullptr;};
    inline const Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo & trainTransferInfo() const { DARABONBA_PTR_GET_CONST(trainTransferInfo_, Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo) };
    inline Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo trainTransferInfo() { DARABONBA_PTR_GET(trainTransferInfo_, Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo) };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo& setTrainTransferInfo(const Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo & trainTransferInfo) { DARABONBA_PTR_SET_VALUE(trainTransferInfo_, trainTransferInfo) };
    inline TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo& setTrainTransferInfo(Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo && trainTransferInfo) { DARABONBA_PTR_SET_RVALUE(trainTransferInfo_, trainTransferInfo) };


  protected:
    std::shared_ptr<vector<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainInfoList>> trainInfoList_ = nullptr;
    std::shared_ptr<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfoTrainTransferInfo> trainTransferInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
