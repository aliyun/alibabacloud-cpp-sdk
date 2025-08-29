// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAFFICCONTROLTASKTRAFFICINFOTASKTRAFFICSVALUE_HPP_
#define ALIBABACLOUD_MODELS_TRAFFICCONTROLTASKTRAFFICINFOTASKTRAFFICSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class TrafficControlTaskTrafficInfoTaskTrafficsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrafficControlTaskTrafficInfoTaskTrafficsValue& obj) { 
      DARABONBA_PTR_TO_JSON(Traffic, traffic_);
    };
    friend void from_json(const Darabonba::Json& j, TrafficControlTaskTrafficInfoTaskTrafficsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
    };
    TrafficControlTaskTrafficInfoTaskTrafficsValue() = default ;
    TrafficControlTaskTrafficInfoTaskTrafficsValue(const TrafficControlTaskTrafficInfoTaskTrafficsValue &) = default ;
    TrafficControlTaskTrafficInfoTaskTrafficsValue(TrafficControlTaskTrafficInfoTaskTrafficsValue &&) = default ;
    TrafficControlTaskTrafficInfoTaskTrafficsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrafficControlTaskTrafficInfoTaskTrafficsValue() = default ;
    TrafficControlTaskTrafficInfoTaskTrafficsValue& operator=(const TrafficControlTaskTrafficInfoTaskTrafficsValue &) = default ;
    TrafficControlTaskTrafficInfoTaskTrafficsValue& operator=(TrafficControlTaskTrafficInfoTaskTrafficsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->traffic_ != nullptr; };
    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline double traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0.0) };
    inline TrafficControlTaskTrafficInfoTaskTrafficsValue& setTraffic(double traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


  protected:
    std::shared_ptr<double> traffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
