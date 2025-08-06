// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYFIRSTFRAMEDURATIONMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYFIRSTFRAMEDURATIONMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlayFirstFrameDurationMetricDataResponseBodyNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayFirstFrameDurationMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayFirstFrameDurationMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayFirstFrameDurationMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlayFirstFrameDurationMetricDataResponseBody() = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBody(const DescribePlayFirstFrameDurationMetricDataResponseBody &) = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBody(DescribePlayFirstFrameDurationMetricDataResponseBody &&) = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayFirstFrameDurationMetricDataResponseBody() = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBody& operator=(const DescribePlayFirstFrameDurationMetricDataResponseBody &) = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBody& operator=(DescribePlayFirstFrameDurationMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr
        && this->requestId_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribePlayFirstFrameDurationMetricDataResponseBodyNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribePlayFirstFrameDurationMetricDataResponseBodyNodes>) };
    inline vector<DescribePlayFirstFrameDurationMetricDataResponseBodyNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<DescribePlayFirstFrameDurationMetricDataResponseBodyNodes>) };
    inline DescribePlayFirstFrameDurationMetricDataResponseBody& setNodes(const vector<DescribePlayFirstFrameDurationMetricDataResponseBodyNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribePlayFirstFrameDurationMetricDataResponseBody& setNodes(vector<DescribePlayFirstFrameDurationMetricDataResponseBodyNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayFirstFrameDurationMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribePlayFirstFrameDurationMetricDataResponseBodyNodes>> nodes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
