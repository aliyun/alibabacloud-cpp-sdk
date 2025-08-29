// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTARGETTRAFFICHISTORYRESPONSEBODYTRAFFICCONTROLTASKTRAFFICHISTORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTARGETTRAFFICHISTORYRESPONSEBODYTRAFFICCONTROLTASKTRAFFICHISTORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(RecordTime, recordTime_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargetAimTraffic, trafficControlTargetAimTraffic_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargetTraffic, trafficControlTargetTraffic_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskTraffic, trafficControlTaskTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(RecordTime, recordTime_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargetAimTraffic, trafficControlTargetAimTraffic_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargetTraffic, trafficControlTargetTraffic_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskTraffic, trafficControlTaskTraffic_);
    };
    ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories() = default ;
    ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories(const ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories &) = default ;
    ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories(ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories &&) = default ;
    ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories() = default ;
    ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& operator=(const ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories &) = default ;
    ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& operator=(ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->experimentId_ != nullptr
        && this->itemId_ != nullptr && this->recordTime_ != nullptr && this->trafficControlTargetAimTraffic_ != nullptr && this->trafficControlTargetTraffic_ != nullptr && this->trafficControlTaskTraffic_ != nullptr; };
    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // recordTime Field Functions 
    bool hasRecordTime() const { return this->recordTime_ != nullptr;};
    void deleteRecordTime() { this->recordTime_ = nullptr;};
    inline string recordTime() const { DARABONBA_PTR_GET_DEFAULT(recordTime_, "") };
    inline ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& setRecordTime(string recordTime) { DARABONBA_PTR_SET_VALUE(recordTime_, recordTime) };


    // trafficControlTargetAimTraffic Field Functions 
    bool hasTrafficControlTargetAimTraffic() const { return this->trafficControlTargetAimTraffic_ != nullptr;};
    void deleteTrafficControlTargetAimTraffic() { this->trafficControlTargetAimTraffic_ = nullptr;};
    inline double trafficControlTargetAimTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetAimTraffic_, 0.0) };
    inline ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& setTrafficControlTargetAimTraffic(double trafficControlTargetAimTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTargetAimTraffic_, trafficControlTargetAimTraffic) };


    // trafficControlTargetTraffic Field Functions 
    bool hasTrafficControlTargetTraffic() const { return this->trafficControlTargetTraffic_ != nullptr;};
    void deleteTrafficControlTargetTraffic() { this->trafficControlTargetTraffic_ = nullptr;};
    inline double trafficControlTargetTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetTraffic_, 0.0) };
    inline ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& setTrafficControlTargetTraffic(double trafficControlTargetTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTargetTraffic_, trafficControlTargetTraffic) };


    // trafficControlTaskTraffic Field Functions 
    bool hasTrafficControlTaskTraffic() const { return this->trafficControlTaskTraffic_ != nullptr;};
    void deleteTrafficControlTaskTraffic() { this->trafficControlTaskTraffic_ = nullptr;};
    inline double trafficControlTaskTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskTraffic_, 0.0) };
    inline ListTrafficControlTargetTrafficHistoryResponseBodyTrafficControlTaskTrafficHistories& setTrafficControlTaskTraffic(double trafficControlTaskTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTaskTraffic_, trafficControlTaskTraffic) };


  protected:
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<string> recordTime_ = nullptr;
    std::shared_ptr<double> trafficControlTargetAimTraffic_ = nullptr;
    std::shared_ptr<double> trafficControlTargetTraffic_ = nullptr;
    std::shared_ptr<double> trafficControlTaskTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
