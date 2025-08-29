// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICCONTROLTASKTRAFFICREQUESTTRAFFICS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICCONTROLTASKTRAFFICREQUESTTRAFFICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateTrafficControlTaskTrafficRequestTraffics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficControlTaskTrafficRequestTraffics& obj) { 
      DARABONBA_PTR_TO_JSON(ItemOrExperimentId, itemOrExperimentId_);
      DARABONBA_PTR_TO_JSON(RecordTime, recordTime_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargetAimTraffic, trafficControlTargetAimTraffic_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargetId, trafficControlTargetId_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargetTraffic, trafficControlTargetTraffic_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskTraffic, trafficControlTaskTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficControlTaskTrafficRequestTraffics& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemOrExperimentId, itemOrExperimentId_);
      DARABONBA_PTR_FROM_JSON(RecordTime, recordTime_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargetAimTraffic, trafficControlTargetAimTraffic_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargetId, trafficControlTargetId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargetTraffic, trafficControlTargetTraffic_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskTraffic, trafficControlTaskTraffic_);
    };
    UpdateTrafficControlTaskTrafficRequestTraffics() = default ;
    UpdateTrafficControlTaskTrafficRequestTraffics(const UpdateTrafficControlTaskTrafficRequestTraffics &) = default ;
    UpdateTrafficControlTaskTrafficRequestTraffics(UpdateTrafficControlTaskTrafficRequestTraffics &&) = default ;
    UpdateTrafficControlTaskTrafficRequestTraffics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficControlTaskTrafficRequestTraffics() = default ;
    UpdateTrafficControlTaskTrafficRequestTraffics& operator=(const UpdateTrafficControlTaskTrafficRequestTraffics &) = default ;
    UpdateTrafficControlTaskTrafficRequestTraffics& operator=(UpdateTrafficControlTaskTrafficRequestTraffics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemOrExperimentId_ != nullptr
        && this->recordTime_ != nullptr && this->trafficControlTargetAimTraffic_ != nullptr && this->trafficControlTargetId_ != nullptr && this->trafficControlTargetTraffic_ != nullptr && this->trafficControlTaskTraffic_ != nullptr; };
    // itemOrExperimentId Field Functions 
    bool hasItemOrExperimentId() const { return this->itemOrExperimentId_ != nullptr;};
    void deleteItemOrExperimentId() { this->itemOrExperimentId_ = nullptr;};
    inline string itemOrExperimentId() const { DARABONBA_PTR_GET_DEFAULT(itemOrExperimentId_, "") };
    inline UpdateTrafficControlTaskTrafficRequestTraffics& setItemOrExperimentId(string itemOrExperimentId) { DARABONBA_PTR_SET_VALUE(itemOrExperimentId_, itemOrExperimentId) };


    // recordTime Field Functions 
    bool hasRecordTime() const { return this->recordTime_ != nullptr;};
    void deleteRecordTime() { this->recordTime_ = nullptr;};
    inline string recordTime() const { DARABONBA_PTR_GET_DEFAULT(recordTime_, "") };
    inline UpdateTrafficControlTaskTrafficRequestTraffics& setRecordTime(string recordTime) { DARABONBA_PTR_SET_VALUE(recordTime_, recordTime) };


    // trafficControlTargetAimTraffic Field Functions 
    bool hasTrafficControlTargetAimTraffic() const { return this->trafficControlTargetAimTraffic_ != nullptr;};
    void deleteTrafficControlTargetAimTraffic() { this->trafficControlTargetAimTraffic_ = nullptr;};
    inline double trafficControlTargetAimTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetAimTraffic_, 0.0) };
    inline UpdateTrafficControlTaskTrafficRequestTraffics& setTrafficControlTargetAimTraffic(double trafficControlTargetAimTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTargetAimTraffic_, trafficControlTargetAimTraffic) };


    // trafficControlTargetId Field Functions 
    bool hasTrafficControlTargetId() const { return this->trafficControlTargetId_ != nullptr;};
    void deleteTrafficControlTargetId() { this->trafficControlTargetId_ = nullptr;};
    inline string trafficControlTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetId_, "") };
    inline UpdateTrafficControlTaskTrafficRequestTraffics& setTrafficControlTargetId(string trafficControlTargetId) { DARABONBA_PTR_SET_VALUE(trafficControlTargetId_, trafficControlTargetId) };


    // trafficControlTargetTraffic Field Functions 
    bool hasTrafficControlTargetTraffic() const { return this->trafficControlTargetTraffic_ != nullptr;};
    void deleteTrafficControlTargetTraffic() { this->trafficControlTargetTraffic_ = nullptr;};
    inline int64_t trafficControlTargetTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetTraffic_, 0L) };
    inline UpdateTrafficControlTaskTrafficRequestTraffics& setTrafficControlTargetTraffic(int64_t trafficControlTargetTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTargetTraffic_, trafficControlTargetTraffic) };


    // trafficControlTaskTraffic Field Functions 
    bool hasTrafficControlTaskTraffic() const { return this->trafficControlTaskTraffic_ != nullptr;};
    void deleteTrafficControlTaskTraffic() { this->trafficControlTaskTraffic_ = nullptr;};
    inline int64_t trafficControlTaskTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskTraffic_, 0L) };
    inline UpdateTrafficControlTaskTrafficRequestTraffics& setTrafficControlTaskTraffic(int64_t trafficControlTaskTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTaskTraffic_, trafficControlTaskTraffic) };


  protected:
    std::shared_ptr<string> itemOrExperimentId_ = nullptr;
    std::shared_ptr<string> recordTime_ = nullptr;
    std::shared_ptr<double> trafficControlTargetAimTraffic_ = nullptr;
    std::shared_ptr<string> trafficControlTargetId_ = nullptr;
    std::shared_ptr<int64_t> trafficControlTargetTraffic_ = nullptr;
    std::shared_ptr<int64_t> trafficControlTaskTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
