// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeProductsOfActiveMetricRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsOfActiveMetricRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllProductInitMetricRuleList, allProductInitMetricRuleList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsOfActiveMetricRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllProductInitMetricRuleList, allProductInitMetricRuleList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeProductsOfActiveMetricRuleResponseBody() = default ;
    DescribeProductsOfActiveMetricRuleResponseBody(const DescribeProductsOfActiveMetricRuleResponseBody &) = default ;
    DescribeProductsOfActiveMetricRuleResponseBody(DescribeProductsOfActiveMetricRuleResponseBody &&) = default ;
    DescribeProductsOfActiveMetricRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsOfActiveMetricRuleResponseBody() = default ;
    DescribeProductsOfActiveMetricRuleResponseBody& operator=(const DescribeProductsOfActiveMetricRuleResponseBody &) = default ;
    DescribeProductsOfActiveMetricRuleResponseBody& operator=(DescribeProductsOfActiveMetricRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allProductInitMetricRuleList_ == nullptr
        && return this->code_ == nullptr && return this->datapoints_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // allProductInitMetricRuleList Field Functions 
    bool hasAllProductInitMetricRuleList() const { return this->allProductInitMetricRuleList_ != nullptr;};
    void deleteAllProductInitMetricRuleList() { this->allProductInitMetricRuleList_ = nullptr;};
    inline const DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList & allProductInitMetricRuleList() const { DARABONBA_PTR_GET_CONST(allProductInitMetricRuleList_, DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList) };
    inline DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList allProductInitMetricRuleList() { DARABONBA_PTR_GET(allProductInitMetricRuleList_, DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList) };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setAllProductInitMetricRuleList(const DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList & allProductInitMetricRuleList) { DARABONBA_PTR_SET_VALUE(allProductInitMetricRuleList_, allProductInitMetricRuleList) };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setAllProductInitMetricRuleList(DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList && allProductInitMetricRuleList) { DARABONBA_PTR_SET_RVALUE(allProductInitMetricRuleList_, allProductInitMetricRuleList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline string datapoints() const { DARABONBA_PTR_GET_DEFAULT(datapoints_, "") };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setDatapoints(string datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the services for which one-click alert is enabled.
    std::shared_ptr<DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList> allProductInitMetricRuleList_ = nullptr;
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The information about the services for which the initiative alert feature is enabled. Services are separated with commas (,). Valid values:
    // 
    // *   ECS: Elastic Compute Service (ECS)
    // *   rds: ApsaraDB RDS
    // *   slb: Server Load Balancer (SLB)
    // *   redis_standard: Redis Open-Source Edition (standard architecture)
    // *   redis_sharding: Redis Open-Source Edition (cluster architecture)
    // *   redis_splitrw: Redis Open-Source Edition (read/write splitting architecture)
    // *   mongodb: ApsaraDB for MongoDB of the replica set architecture
    // *   mongodb_sharding: ApsaraDB for MongoDB of the sharded cluster architecture
    // *   hbase: ApsaraDB for HBase
    // *   elasticsearch: Elasticsearch
    // *   opensearch: OpenSearch
    std::shared_ptr<string> datapoints_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
