// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICSTAT_HPP_
#define ALIBABACLOUD_MODELS_METRICSTAT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/Dimension.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MetricStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricStat& obj) { 
      DARABONBA_PTR_TO_JSON(Associated, associated_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(LogTime, logTime_);
      DARABONBA_ANY_TO_JSON(Measurements, measurements_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, MetricStat& obj) { 
      DARABONBA_PTR_FROM_JSON(Associated, associated_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
      DARABONBA_ANY_FROM_JSON(Measurements, measurements_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    MetricStat() = default ;
    MetricStat(const MetricStat &) = default ;
    MetricStat(MetricStat &&) = default ;
    MetricStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricStat() = default ;
    MetricStat& operator=(const MetricStat &) = default ;
    MetricStat& operator=(MetricStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associated_ == nullptr
        && return this->dimensions_ == nullptr && return this->logTime_ == nullptr && return this->measurements_ == nullptr && return this->metric_ == nullptr && return this->namespace_ == nullptr
        && return this->period_ == nullptr && return this->timestamp_ == nullptr; };
    // associated Field Functions 
    bool hasAssociated() const { return this->associated_ != nullptr;};
    void deleteAssociated() { this->associated_ = nullptr;};
    inline const map<string, string> & associated() const { DARABONBA_PTR_GET_CONST(associated_, map<string, string>) };
    inline map<string, string> associated() { DARABONBA_PTR_GET(associated_, map<string, string>) };
    inline MetricStat& setAssociated(const map<string, string> & associated) { DARABONBA_PTR_SET_VALUE(associated_, associated) };
    inline MetricStat& setAssociated(map<string, string> && associated) { DARABONBA_PTR_SET_RVALUE(associated_, associated) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<Dimension> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Dimension>) };
    inline vector<Dimension> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<Dimension>) };
    inline MetricStat& setDimensions(const vector<Dimension> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline MetricStat& setDimensions(vector<Dimension> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // logTime Field Functions 
    bool hasLogTime() const { return this->logTime_ != nullptr;};
    void deleteLogTime() { this->logTime_ = nullptr;};
    inline int64_t logTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, 0L) };
    inline MetricStat& setLogTime(int64_t logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


    // measurements Field Functions 
    bool hasMeasurements() const { return this->measurements_ != nullptr;};
    void deleteMeasurements() { this->measurements_ = nullptr;};
    inline     const Darabonba::Json & measurements() const { DARABONBA_GET(measurements_) };
    Darabonba::Json & measurements() { DARABONBA_GET(measurements_) };
    inline MetricStat& setMeasurements(const Darabonba::Json & measurements) { DARABONBA_SET_VALUE(measurements_, measurements) };
    inline MetricStat& setMeasurements(Darabonba::Json & measurements) { DARABONBA_SET_RVALUE(measurements_, measurements) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline MetricStat& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline MetricStat& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline MetricStat& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline MetricStat& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<map<string, string>> associated_ = nullptr;
    std::shared_ptr<vector<Dimension>> dimensions_ = nullptr;
    std::shared_ptr<int64_t> logTime_ = nullptr;
    Darabonba::Json measurements_ = nullptr;
    std::shared_ptr<string> metric_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
