// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlayMetricDataResponseBodyNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SummaryData, summaryData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SummaryData, summaryData_);
    };
    DescribePlayMetricDataResponseBody() = default ;
    DescribePlayMetricDataResponseBody(const DescribePlayMetricDataResponseBody &) = default ;
    DescribePlayMetricDataResponseBody(DescribePlayMetricDataResponseBody &&) = default ;
    DescribePlayMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayMetricDataResponseBody() = default ;
    DescribePlayMetricDataResponseBody& operator=(const DescribePlayMetricDataResponseBody &) = default ;
    DescribePlayMetricDataResponseBody& operator=(DescribePlayMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr
        && this->requestId_ != nullptr && this->summaryData_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribePlayMetricDataResponseBodyNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribePlayMetricDataResponseBodyNodes>) };
    inline vector<DescribePlayMetricDataResponseBodyNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<DescribePlayMetricDataResponseBodyNodes>) };
    inline DescribePlayMetricDataResponseBody& setNodes(const vector<DescribePlayMetricDataResponseBodyNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribePlayMetricDataResponseBody& setNodes(vector<DescribePlayMetricDataResponseBodyNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summaryData Field Functions 
    bool hasSummaryData() const { return this->summaryData_ != nullptr;};
    void deleteSummaryData() { this->summaryData_ = nullptr;};
    inline string summaryData() const { DARABONBA_PTR_GET_DEFAULT(summaryData_, "") };
    inline DescribePlayMetricDataResponseBody& setSummaryData(string summaryData) { DARABONBA_PTR_SET_VALUE(summaryData_, summaryData) };


  protected:
    std::shared_ptr<vector<DescribePlayMetricDataResponseBodyNodes>> nodes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> summaryData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
