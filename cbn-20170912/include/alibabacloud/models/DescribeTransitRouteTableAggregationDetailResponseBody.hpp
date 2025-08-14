// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTransitRouteTableAggregationDetailResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeTransitRouteTableAggregationDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouteTableAggregationDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouteTableAggregationDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeTransitRouteTableAggregationDetailResponseBody() = default ;
    DescribeTransitRouteTableAggregationDetailResponseBody(const DescribeTransitRouteTableAggregationDetailResponseBody &) = default ;
    DescribeTransitRouteTableAggregationDetailResponseBody(DescribeTransitRouteTableAggregationDetailResponseBody &&) = default ;
    DescribeTransitRouteTableAggregationDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouteTableAggregationDetailResponseBody() = default ;
    DescribeTransitRouteTableAggregationDetailResponseBody& operator=(const DescribeTransitRouteTableAggregationDetailResponseBody &) = default ;
    DescribeTransitRouteTableAggregationDetailResponseBody& operator=(DescribeTransitRouteTableAggregationDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeTransitRouteTableAggregationDetailResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeTransitRouteTableAggregationDetailResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeTransitRouteTableAggregationDetailResponseBodyData>) };
    inline vector<DescribeTransitRouteTableAggregationDetailResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeTransitRouteTableAggregationDetailResponseBodyData>) };
    inline DescribeTransitRouteTableAggregationDetailResponseBody& setData(const vector<DescribeTransitRouteTableAggregationDetailResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTransitRouteTableAggregationDetailResponseBody& setData(vector<DescribeTransitRouteTableAggregationDetailResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransitRouteTableAggregationDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeTransitRouteTableAggregationDetailResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The configuration of the aggregate route.
    std::shared_ptr<vector<DescribeTransitRouteTableAggregationDetailResponseBodyData>> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
