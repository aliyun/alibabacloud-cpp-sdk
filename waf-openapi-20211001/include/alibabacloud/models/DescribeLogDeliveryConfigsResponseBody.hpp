// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeLogDeliveryConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogDeliveryConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogDeliveryConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLogDeliveryConfigsResponseBody() = default ;
    DescribeLogDeliveryConfigsResponseBody(const DescribeLogDeliveryConfigsResponseBody &) = default ;
    DescribeLogDeliveryConfigsResponseBody(DescribeLogDeliveryConfigsResponseBody &&) = default ;
    DescribeLogDeliveryConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogDeliveryConfigsResponseBody() = default ;
    DescribeLogDeliveryConfigsResponseBody& operator=(const DescribeLogDeliveryConfigsResponseBody &) = default ;
    DescribeLogDeliveryConfigsResponseBody& operator=(DescribeLogDeliveryConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryConfigs_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // deliveryConfigs Field Functions 
    bool hasDeliveryConfigs() const { return this->deliveryConfigs_ != nullptr;};
    void deleteDeliveryConfigs() { this->deliveryConfigs_ = nullptr;};
    inline const vector<DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs> & deliveryConfigs() const { DARABONBA_PTR_GET_CONST(deliveryConfigs_, vector<DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs>) };
    inline vector<DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs> deliveryConfigs() { DARABONBA_PTR_GET(deliveryConfigs_, vector<DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs>) };
    inline DescribeLogDeliveryConfigsResponseBody& setDeliveryConfigs(const vector<DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs> & deliveryConfigs) { DARABONBA_PTR_SET_VALUE(deliveryConfigs_, deliveryConfigs) };
    inline DescribeLogDeliveryConfigsResponseBody& setDeliveryConfigs(vector<DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs> && deliveryConfigs) { DARABONBA_PTR_SET_RVALUE(deliveryConfigs_, deliveryConfigs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeLogDeliveryConfigsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLogDeliveryConfigsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogDeliveryConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLogDeliveryConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the log delivery configuration.
    std::shared_ptr<vector<DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs>> deliveryConfigs_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
