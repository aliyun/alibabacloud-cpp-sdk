// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAFFICCONTROLTASKTRAFFICINFOTARGETTRAFFICSDATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_TRAFFICCONTROLTASKTRAFFICINFOTARGETTRAFFICSDATAVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class TrafficControlTaskTrafficInfoTargetTrafficsDataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrafficControlTaskTrafficInfoTargetTrafficsDataValue& obj) { 
      DARABONBA_PTR_TO_JSON(Traffic, traffic_);
      DARABONBA_PTR_TO_JSON(RecordTime, recordTime_);
    };
    friend void from_json(const Darabonba::Json& j, TrafficControlTaskTrafficInfoTargetTrafficsDataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
      DARABONBA_PTR_FROM_JSON(RecordTime, recordTime_);
    };
    TrafficControlTaskTrafficInfoTargetTrafficsDataValue() = default ;
    TrafficControlTaskTrafficInfoTargetTrafficsDataValue(const TrafficControlTaskTrafficInfoTargetTrafficsDataValue &) = default ;
    TrafficControlTaskTrafficInfoTargetTrafficsDataValue(TrafficControlTaskTrafficInfoTargetTrafficsDataValue &&) = default ;
    TrafficControlTaskTrafficInfoTargetTrafficsDataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrafficControlTaskTrafficInfoTargetTrafficsDataValue() = default ;
    TrafficControlTaskTrafficInfoTargetTrafficsDataValue& operator=(const TrafficControlTaskTrafficInfoTargetTrafficsDataValue &) = default ;
    TrafficControlTaskTrafficInfoTargetTrafficsDataValue& operator=(TrafficControlTaskTrafficInfoTargetTrafficsDataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->traffic_ != nullptr
        && this->recordTime_ != nullptr; };
    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline double traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0.0) };
    inline TrafficControlTaskTrafficInfoTargetTrafficsDataValue& setTraffic(double traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


    // recordTime Field Functions 
    bool hasRecordTime() const { return this->recordTime_ != nullptr;};
    void deleteRecordTime() { this->recordTime_ = nullptr;};
    inline int64_t recordTime() const { DARABONBA_PTR_GET_DEFAULT(recordTime_, 0L) };
    inline TrafficControlTaskTrafficInfoTargetTrafficsDataValue& setRecordTime(int64_t recordTime) { DARABONBA_PTR_SET_VALUE(recordTime_, recordTime) };


  protected:
    std::shared_ptr<double> traffic_ = nullptr;
    std::shared_ptr<int64_t> recordTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
