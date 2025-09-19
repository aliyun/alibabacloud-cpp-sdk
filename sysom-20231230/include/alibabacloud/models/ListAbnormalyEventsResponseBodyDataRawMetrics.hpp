// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODYDATARAWMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODYDATARAWMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAbnormalyEventsResponseBodyDataRawMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbnormalyEventsResponseBodyDataRawMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(metrics, metrics_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbnormalyEventsResponseBodyDataRawMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
    };
    ListAbnormalyEventsResponseBodyDataRawMetrics() = default ;
    ListAbnormalyEventsResponseBodyDataRawMetrics(const ListAbnormalyEventsResponseBodyDataRawMetrics &) = default ;
    ListAbnormalyEventsResponseBodyDataRawMetrics(ListAbnormalyEventsResponseBodyDataRawMetrics &&) = default ;
    ListAbnormalyEventsResponseBodyDataRawMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbnormalyEventsResponseBodyDataRawMetrics() = default ;
    ListAbnormalyEventsResponseBodyDataRawMetrics& operator=(const ListAbnormalyEventsResponseBodyDataRawMetrics &) = default ;
    ListAbnormalyEventsResponseBodyDataRawMetrics& operator=(ListAbnormalyEventsResponseBodyDataRawMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->metrics_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline float endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
    inline ListAbnormalyEventsResponseBodyDataRawMetrics& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<string> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<string>) };
    inline vector<string> metrics() { DARABONBA_PTR_GET(metrics_, vector<string>) };
    inline ListAbnormalyEventsResponseBodyDataRawMetrics& setMetrics(const vector<string> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListAbnormalyEventsResponseBodyDataRawMetrics& setMetrics(vector<string> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline float startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline ListAbnormalyEventsResponseBodyDataRawMetrics& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<float> endTime_ = nullptr;
    std::shared_ptr<vector<string>> metrics_ = nullptr;
    std::shared_ptr<float> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
