// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTMETRICDATARESPONSEBODYPUBMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTMETRICDATARESPONSEBODYPUBMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEndPointMetricDataResponseBodyPubMetricsNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeEndPointMetricDataResponseBodyPubMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndPointMetricDataResponseBodyPubMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndPointMetricDataResponseBodyPubMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeEndPointMetricDataResponseBodyPubMetrics() = default ;
    DescribeEndPointMetricDataResponseBodyPubMetrics(const DescribeEndPointMetricDataResponseBodyPubMetrics &) = default ;
    DescribeEndPointMetricDataResponseBodyPubMetrics(DescribeEndPointMetricDataResponseBodyPubMetrics &&) = default ;
    DescribeEndPointMetricDataResponseBodyPubMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndPointMetricDataResponseBodyPubMetrics() = default ;
    DescribeEndPointMetricDataResponseBodyPubMetrics& operator=(const DescribeEndPointMetricDataResponseBodyPubMetrics &) = default ;
    DescribeEndPointMetricDataResponseBodyPubMetrics& operator=(DescribeEndPointMetricDataResponseBodyPubMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr
        && this->type_ != nullptr && this->userId_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::DescribeEndPointMetricDataResponseBodyPubMetricsNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::DescribeEndPointMetricDataResponseBodyPubMetricsNodes>) };
    inline vector<Models::DescribeEndPointMetricDataResponseBodyPubMetricsNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::DescribeEndPointMetricDataResponseBodyPubMetricsNodes>) };
    inline DescribeEndPointMetricDataResponseBodyPubMetrics& setNodes(const vector<Models::DescribeEndPointMetricDataResponseBodyPubMetricsNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeEndPointMetricDataResponseBodyPubMetrics& setNodes(vector<Models::DescribeEndPointMetricDataResponseBodyPubMetricsNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEndPointMetricDataResponseBodyPubMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeEndPointMetricDataResponseBodyPubMetrics& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::DescribeEndPointMetricDataResponseBodyPubMetricsNodes>> nodes_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
