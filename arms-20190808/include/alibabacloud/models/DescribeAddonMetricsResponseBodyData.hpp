// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAddonMetricsResponseBodyDataLabels.hpp>
#include <alibabacloud/models/DescribeAddonMetricsResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeAddonMetricsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonMetricsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonMetricsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    DescribeAddonMetricsResponseBodyData() = default ;
    DescribeAddonMetricsResponseBodyData(const DescribeAddonMetricsResponseBodyData &) = default ;
    DescribeAddonMetricsResponseBodyData(DescribeAddonMetricsResponseBodyData &&) = default ;
    DescribeAddonMetricsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonMetricsResponseBodyData() = default ;
    DescribeAddonMetricsResponseBodyData& operator=(const DescribeAddonMetricsResponseBodyData &) = default ;
    DescribeAddonMetricsResponseBodyData& operator=(DescribeAddonMetricsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr
        && this->labels_ != nullptr && this->metrics_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline DescribeAddonMetricsResponseBodyData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::DescribeAddonMetricsResponseBodyDataLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::DescribeAddonMetricsResponseBodyDataLabels>) };
    inline vector<Models::DescribeAddonMetricsResponseBodyDataLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::DescribeAddonMetricsResponseBodyDataLabels>) };
    inline DescribeAddonMetricsResponseBodyData& setLabels(const vector<Models::DescribeAddonMetricsResponseBodyDataLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeAddonMetricsResponseBodyData& setLabels(vector<Models::DescribeAddonMetricsResponseBodyDataLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::DescribeAddonMetricsResponseBodyDataMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::DescribeAddonMetricsResponseBodyDataMetrics>) };
    inline vector<Models::DescribeAddonMetricsResponseBodyDataMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::DescribeAddonMetricsResponseBodyDataMetrics>) };
    inline DescribeAddonMetricsResponseBodyData& setMetrics(const vector<Models::DescribeAddonMetricsResponseBodyDataMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribeAddonMetricsResponseBodyData& setMetrics(vector<Models::DescribeAddonMetricsResponseBodyDataMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The metric group.
    std::shared_ptr<string> group_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::DescribeAddonMetricsResponseBodyDataLabels>> labels_ = nullptr;
    // The metrics.
    std::shared_ptr<vector<Models::DescribeAddonMetricsResponseBodyDataMetrics>> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
