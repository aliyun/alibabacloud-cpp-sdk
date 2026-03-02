// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICDATA_HPP_
#define ALIBABACLOUD_MODELS_METRICDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MetricData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricData& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(measures, measures_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(typeValue, typeValue_);
    };
    friend void from_json(const Darabonba::Json& j, MetricData& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(measures, measures_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(typeValue, typeValue_);
    };
    MetricData() = default ;
    MetricData(const MetricData &) = default ;
    MetricData(MetricData &&) = default ;
    MetricData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricData() = default ;
    MetricData& operator=(const MetricData &) = default ;
    MetricData& operator=(MetricData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->measures_ == nullptr && this->metric_ == nullptr && this->time_ == nullptr && this->type_ == nullptr && this->typeValue_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline MetricData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // measures Field Functions 
    bool hasMeasures() const { return this->measures_ != nullptr;};
    void deleteMeasures() { this->measures_ = nullptr;};
    inline string getMeasures() const { DARABONBA_PTR_GET_DEFAULT(measures_, "") };
    inline MetricData& setMeasures(string measures) { DARABONBA_PTR_SET_VALUE(measures_, measures) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline MetricData& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline MetricData& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MetricData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeValue Field Functions 
    bool hasTypeValue() const { return this->typeValue_ != nullptr;};
    void deleteTypeValue() { this->typeValue_ = nullptr;};
    inline string getTypeValue() const { DARABONBA_PTR_GET_DEFAULT(typeValue_, "") };
    inline MetricData& setTypeValue(string typeValue) { DARABONBA_PTR_SET_VALUE(typeValue_, typeValue) };


  protected:
    // This parameter is required.
    shared_ptr<string> data_ {};
    // This parameter is required.
    shared_ptr<string> measures_ {};
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // This parameter is required.
    shared_ptr<int64_t> time_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> typeValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
