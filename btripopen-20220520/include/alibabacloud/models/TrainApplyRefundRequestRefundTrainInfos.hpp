// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDREQUESTREFUNDTRAININFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDREQUESTREFUNDTRAININFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainApplyRefundRequestRefundTrainInfosRefundPassengerInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainApplyRefundRequestRefundTrainInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyRefundRequestRefundTrainInfos& obj) { 
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(refund_passenger_infos, refundPassengerInfos_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyRefundRequestRefundTrainInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(refund_passenger_infos, refundPassengerInfos_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainApplyRefundRequestRefundTrainInfos() = default ;
    TrainApplyRefundRequestRefundTrainInfos(const TrainApplyRefundRequestRefundTrainInfos &) = default ;
    TrainApplyRefundRequestRefundTrainInfos(TrainApplyRefundRequestRefundTrainInfos &&) = default ;
    TrainApplyRefundRequestRefundTrainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyRefundRequestRefundTrainInfos() = default ;
    TrainApplyRefundRequestRefundTrainInfos& operator=(const TrainApplyRefundRequestRefundTrainInfos &) = default ;
    TrainApplyRefundRequestRefundTrainInfos& operator=(TrainApplyRefundRequestRefundTrainInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->depTime_ != nullptr
        && this->refundPassengerInfos_ != nullptr && this->trainNo_ != nullptr; };
    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainApplyRefundRequestRefundTrainInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // refundPassengerInfos Field Functions 
    bool hasRefundPassengerInfos() const { return this->refundPassengerInfos_ != nullptr;};
    void deleteRefundPassengerInfos() { this->refundPassengerInfos_ = nullptr;};
    inline const vector<Models::TrainApplyRefundRequestRefundTrainInfosRefundPassengerInfos> & refundPassengerInfos() const { DARABONBA_PTR_GET_CONST(refundPassengerInfos_, vector<Models::TrainApplyRefundRequestRefundTrainInfosRefundPassengerInfos>) };
    inline vector<Models::TrainApplyRefundRequestRefundTrainInfosRefundPassengerInfos> refundPassengerInfos() { DARABONBA_PTR_GET(refundPassengerInfos_, vector<Models::TrainApplyRefundRequestRefundTrainInfosRefundPassengerInfos>) };
    inline TrainApplyRefundRequestRefundTrainInfos& setRefundPassengerInfos(const vector<Models::TrainApplyRefundRequestRefundTrainInfosRefundPassengerInfos> & refundPassengerInfos) { DARABONBA_PTR_SET_VALUE(refundPassengerInfos_, refundPassengerInfos) };
    inline TrainApplyRefundRequestRefundTrainInfos& setRefundPassengerInfos(vector<Models::TrainApplyRefundRequestRefundTrainInfosRefundPassengerInfos> && refundPassengerInfos) { DARABONBA_PTR_SET_RVALUE(refundPassengerInfos_, refundPassengerInfos) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainApplyRefundRequestRefundTrainInfos& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> depTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::TrainApplyRefundRequestRefundTrainInfosRefundPassengerInfos>> refundPassengerInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
