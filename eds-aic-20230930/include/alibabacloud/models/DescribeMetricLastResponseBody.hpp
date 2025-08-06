// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricLastResponseBodyMetricTotalModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricLastResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricLastResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MetricTotalModel, metricTotalModel_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricLastResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MetricTotalModel, metricTotalModel_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMetricLastResponseBody() = default ;
    DescribeMetricLastResponseBody(const DescribeMetricLastResponseBody &) = default ;
    DescribeMetricLastResponseBody(DescribeMetricLastResponseBody &&) = default ;
    DescribeMetricLastResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricLastResponseBody() = default ;
    DescribeMetricLastResponseBody& operator=(const DescribeMetricLastResponseBody &) = default ;
    DescribeMetricLastResponseBody& operator=(DescribeMetricLastResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->metricTotalModel_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeMetricLastResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // metricTotalModel Field Functions 
    bool hasMetricTotalModel() const { return this->metricTotalModel_ != nullptr;};
    void deleteMetricTotalModel() { this->metricTotalModel_ = nullptr;};
    inline const vector<DescribeMetricLastResponseBodyMetricTotalModel> & metricTotalModel() const { DARABONBA_PTR_GET_CONST(metricTotalModel_, vector<DescribeMetricLastResponseBodyMetricTotalModel>) };
    inline vector<DescribeMetricLastResponseBodyMetricTotalModel> metricTotalModel() { DARABONBA_PTR_GET(metricTotalModel_, vector<DescribeMetricLastResponseBodyMetricTotalModel>) };
    inline DescribeMetricLastResponseBody& setMetricTotalModel(const vector<DescribeMetricLastResponseBodyMetricTotalModel> & metricTotalModel) { DARABONBA_PTR_SET_VALUE(metricTotalModel_, metricTotalModel) };
    inline DescribeMetricLastResponseBody& setMetricTotalModel(vector<DescribeMetricLastResponseBodyMetricTotalModel> && metricTotalModel) { DARABONBA_PTR_SET_RVALUE(metricTotalModel_, metricTotalModel) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMetricLastResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricLastResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<vector<DescribeMetricLastResponseBodyMetricTotalModel>> metricTotalModel_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
