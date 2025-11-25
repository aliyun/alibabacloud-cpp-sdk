// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYDATA_HPP_
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
  class DescribeMetricListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    DescribeMetricListResponseBodyData() = default ;
    DescribeMetricListResponseBodyData(const DescribeMetricListResponseBodyData &) = default ;
    DescribeMetricListResponseBodyData(DescribeMetricListResponseBodyData &&) = default ;
    DescribeMetricListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListResponseBodyData() = default ;
    DescribeMetricListResponseBodyData& operator=(const DescribeMetricListResponseBodyData &) = default ;
    DescribeMetricListResponseBodyData& operator=(DescribeMetricListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr
        && return this->metricName_ == nullptr && return this->values_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DescribeMetricListResponseBodyData& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricListResponseBodyData& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<vector<string>> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<string>>) };
    inline vector<vector<string>> values() { DARABONBA_PTR_GET(values_, vector<vector<string>>) };
    inline DescribeMetricListResponseBodyData& setValues(const vector<vector<string>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeMetricListResponseBodyData& setValues(vector<vector<string>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<string> labels_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<vector<vector<string>>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
