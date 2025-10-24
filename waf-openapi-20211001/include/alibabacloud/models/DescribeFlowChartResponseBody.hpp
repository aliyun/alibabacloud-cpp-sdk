// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWCHARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWCHARTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowChartResponseBodyFlowChart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFlowChartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowChartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowChart, flowChart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowChartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowChart, flowChart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFlowChartResponseBody() = default ;
    DescribeFlowChartResponseBody(const DescribeFlowChartResponseBody &) = default ;
    DescribeFlowChartResponseBody(DescribeFlowChartResponseBody &&) = default ;
    DescribeFlowChartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowChartResponseBody() = default ;
    DescribeFlowChartResponseBody& operator=(const DescribeFlowChartResponseBody &) = default ;
    DescribeFlowChartResponseBody& operator=(DescribeFlowChartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowChart_ == nullptr
        && return this->requestId_ == nullptr; };
    // flowChart Field Functions 
    bool hasFlowChart() const { return this->flowChart_ != nullptr;};
    void deleteFlowChart() { this->flowChart_ = nullptr;};
    inline const vector<DescribeFlowChartResponseBodyFlowChart> & flowChart() const { DARABONBA_PTR_GET_CONST(flowChart_, vector<DescribeFlowChartResponseBodyFlowChart>) };
    inline vector<DescribeFlowChartResponseBodyFlowChart> flowChart() { DARABONBA_PTR_GET(flowChart_, vector<DescribeFlowChartResponseBodyFlowChart>) };
    inline DescribeFlowChartResponseBody& setFlowChart(const vector<DescribeFlowChartResponseBodyFlowChart> & flowChart) { DARABONBA_PTR_SET_VALUE(flowChart_, flowChart) };
    inline DescribeFlowChartResponseBody& setFlowChart(vector<DescribeFlowChartResponseBodyFlowChart> && flowChart) { DARABONBA_PTR_SET_RVALUE(flowChart_, flowChart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowChartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The traffic statistics.
    std::shared_ptr<vector<DescribeFlowChartResponseBodyFlowChart>> flowChart_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
