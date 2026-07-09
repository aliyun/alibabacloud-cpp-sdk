// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICSETNAMEDQUERYENTRY_HPP_
#define ALIBABACLOUD_MODELS_METRICSETNAMEDQUERYENTRY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UmodelLabelFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MetricSetNamedQueryEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricSetNamedQueryEntry& obj) { 
      DARABONBA_PTR_TO_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(metricSet, metricSet_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, MetricSetNamedQueryEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(metricSet, metricSet_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    MetricSetNamedQueryEntry() = default ;
    MetricSetNamedQueryEntry(const MetricSetNamedQueryEntry &) = default ;
    MetricSetNamedQueryEntry(MetricSetNamedQueryEntry &&) = default ;
    MetricSetNamedQueryEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricSetNamedQueryEntry() = default ;
    MetricSetNamedQueryEntry& operator=(const MetricSetNamedQueryEntry &) = default ;
    MetricSetNamedQueryEntry& operator=(MetricSetNamedQueryEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelFilters_ == nullptr
        && this->metric_ == nullptr && this->metricSet_ == nullptr && this->name_ == nullptr; };
    // labelFilters Field Functions 
    bool hasLabelFilters() const { return this->labelFilters_ != nullptr;};
    void deleteLabelFilters() { this->labelFilters_ = nullptr;};
    inline const vector<UmodelLabelFilter> & getLabelFilters() const { DARABONBA_PTR_GET_CONST(labelFilters_, vector<UmodelLabelFilter>) };
    inline vector<UmodelLabelFilter> getLabelFilters() { DARABONBA_PTR_GET(labelFilters_, vector<UmodelLabelFilter>) };
    inline MetricSetNamedQueryEntry& setLabelFilters(const vector<UmodelLabelFilter> & labelFilters) { DARABONBA_PTR_SET_VALUE(labelFilters_, labelFilters) };
    inline MetricSetNamedQueryEntry& setLabelFilters(vector<UmodelLabelFilter> && labelFilters) { DARABONBA_PTR_SET_RVALUE(labelFilters_, labelFilters) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline MetricSetNamedQueryEntry& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // metricSet Field Functions 
    bool hasMetricSet() const { return this->metricSet_ != nullptr;};
    void deleteMetricSet() { this->metricSet_ = nullptr;};
    inline string getMetricSet() const { DARABONBA_PTR_GET_DEFAULT(metricSet_, "") };
    inline MetricSetNamedQueryEntry& setMetricSet(string metricSet) { DARABONBA_PTR_SET_VALUE(metricSet_, metricSet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MetricSetNamedQueryEntry& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<vector<UmodelLabelFilter>> labelFilters_ {};
    shared_ptr<string> metric_ {};
    shared_ptr<string> metricSet_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
