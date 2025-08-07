// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues.hpp>
#include <alibabacloud/models/DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTopNMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkFlowTopNValues, networkFlowTopNValues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopNMetaData, topNMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkFlowTopNValues, networkFlowTopNValues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopNMetaData, topNMetaData_);
    };
    DescribeNetworkFlowTopNMetricResponseBody() = default ;
    DescribeNetworkFlowTopNMetricResponseBody(const DescribeNetworkFlowTopNMetricResponseBody &) = default ;
    DescribeNetworkFlowTopNMetricResponseBody(DescribeNetworkFlowTopNMetricResponseBody &&) = default ;
    DescribeNetworkFlowTopNMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTopNMetricResponseBody() = default ;
    DescribeNetworkFlowTopNMetricResponseBody& operator=(const DescribeNetworkFlowTopNMetricResponseBody &) = default ;
    DescribeNetworkFlowTopNMetricResponseBody& operator=(DescribeNetworkFlowTopNMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkFlowTopNValues_ != nullptr
        && this->requestId_ != nullptr && this->topNMetaData_ != nullptr; };
    // networkFlowTopNValues Field Functions 
    bool hasNetworkFlowTopNValues() const { return this->networkFlowTopNValues_ != nullptr;};
    void deleteNetworkFlowTopNValues() { this->networkFlowTopNValues_ = nullptr;};
    inline const vector<DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues> & networkFlowTopNValues() const { DARABONBA_PTR_GET_CONST(networkFlowTopNValues_, vector<DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues>) };
    inline vector<DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues> networkFlowTopNValues() { DARABONBA_PTR_GET(networkFlowTopNValues_, vector<DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues>) };
    inline DescribeNetworkFlowTopNMetricResponseBody& setNetworkFlowTopNValues(const vector<DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues> & networkFlowTopNValues) { DARABONBA_PTR_SET_VALUE(networkFlowTopNValues_, networkFlowTopNValues) };
    inline DescribeNetworkFlowTopNMetricResponseBody& setNetworkFlowTopNValues(vector<DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues> && networkFlowTopNValues) { DARABONBA_PTR_SET_RVALUE(networkFlowTopNValues_, networkFlowTopNValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkFlowTopNMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topNMetaData Field Functions 
    bool hasTopNMetaData() const { return this->topNMetaData_ != nullptr;};
    void deleteTopNMetaData() { this->topNMetaData_ = nullptr;};
    inline const DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData & topNMetaData() const { DARABONBA_PTR_GET_CONST(topNMetaData_, DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData) };
    inline DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData topNMetaData() { DARABONBA_PTR_GET(topNMetaData_, DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData) };
    inline DescribeNetworkFlowTopNMetricResponseBody& setTopNMetaData(const DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData & topNMetaData) { DARABONBA_PTR_SET_VALUE(topNMetaData_, topNMetaData) };
    inline DescribeNetworkFlowTopNMetricResponseBody& setTopNMetaData(DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData && topNMetaData) { DARABONBA_PTR_SET_RVALUE(topNMetaData_, topNMetaData) };


  protected:
    // The top statistical data array returned.
    std::shared_ptr<vector<DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues>> networkFlowTopNValues_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metadata of the returned data.
    std::shared_ptr<DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData> topNMetaData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
