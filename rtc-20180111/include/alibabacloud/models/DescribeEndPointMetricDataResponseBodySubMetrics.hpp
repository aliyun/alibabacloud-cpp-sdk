// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTMETRICDATARESPONSEBODYSUBMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTMETRICDATARESPONSEBODYSUBMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEndPointMetricDataResponseBodySubMetricsNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeEndPointMetricDataResponseBodySubMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndPointMetricDataResponseBodySubMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndPointMetricDataResponseBodySubMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeEndPointMetricDataResponseBodySubMetrics() = default ;
    DescribeEndPointMetricDataResponseBodySubMetrics(const DescribeEndPointMetricDataResponseBodySubMetrics &) = default ;
    DescribeEndPointMetricDataResponseBodySubMetrics(DescribeEndPointMetricDataResponseBodySubMetrics &&) = default ;
    DescribeEndPointMetricDataResponseBodySubMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndPointMetricDataResponseBodySubMetrics() = default ;
    DescribeEndPointMetricDataResponseBodySubMetrics& operator=(const DescribeEndPointMetricDataResponseBodySubMetrics &) = default ;
    DescribeEndPointMetricDataResponseBodySubMetrics& operator=(DescribeEndPointMetricDataResponseBodySubMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodes_ == nullptr
        && return this->type_ == nullptr && return this->userId_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::DescribeEndPointMetricDataResponseBodySubMetricsNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::DescribeEndPointMetricDataResponseBodySubMetricsNodes>) };
    inline vector<Models::DescribeEndPointMetricDataResponseBodySubMetricsNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::DescribeEndPointMetricDataResponseBodySubMetricsNodes>) };
    inline DescribeEndPointMetricDataResponseBodySubMetrics& setNodes(const vector<Models::DescribeEndPointMetricDataResponseBodySubMetricsNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeEndPointMetricDataResponseBodySubMetrics& setNodes(vector<Models::DescribeEndPointMetricDataResponseBodySubMetricsNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEndPointMetricDataResponseBodySubMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeEndPointMetricDataResponseBodySubMetrics& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::DescribeEndPointMetricDataResponseBodySubMetricsNodes>> nodes_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
