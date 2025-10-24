// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPEAKTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPEAKTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePeakTrendResponseBodyFlowChart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePeakTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePeakTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowChart, flowChart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePeakTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowChart, flowChart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePeakTrendResponseBody() = default ;
    DescribePeakTrendResponseBody(const DescribePeakTrendResponseBody &) = default ;
    DescribePeakTrendResponseBody(DescribePeakTrendResponseBody &&) = default ;
    DescribePeakTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePeakTrendResponseBody() = default ;
    DescribePeakTrendResponseBody& operator=(const DescribePeakTrendResponseBody &) = default ;
    DescribePeakTrendResponseBody& operator=(DescribePeakTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowChart_ == nullptr
        && return this->requestId_ == nullptr; };
    // flowChart Field Functions 
    bool hasFlowChart() const { return this->flowChart_ != nullptr;};
    void deleteFlowChart() { this->flowChart_ = nullptr;};
    inline const vector<DescribePeakTrendResponseBodyFlowChart> & flowChart() const { DARABONBA_PTR_GET_CONST(flowChart_, vector<DescribePeakTrendResponseBodyFlowChart>) };
    inline vector<DescribePeakTrendResponseBodyFlowChart> flowChart() { DARABONBA_PTR_GET(flowChart_, vector<DescribePeakTrendResponseBodyFlowChart>) };
    inline DescribePeakTrendResponseBody& setFlowChart(const vector<DescribePeakTrendResponseBodyFlowChart> & flowChart) { DARABONBA_PTR_SET_VALUE(flowChart_, flowChart) };
    inline DescribePeakTrendResponseBody& setFlowChart(vector<DescribePeakTrendResponseBodyFlowChart> && flowChart) { DARABONBA_PTR_SET_RVALUE(flowChart_, flowChart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePeakTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array of the QPS statistics of the WAF instance.
    std::shared_ptr<vector<DescribePeakTrendResponseBodyFlowChart>> flowChart_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
