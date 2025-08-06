// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssuranceInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssuranceInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceItem, elasticityAssuranceItem_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssuranceInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceItem, elasticityAssuranceItem_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeElasticityAssuranceInstancesResponseBody() = default ;
    DescribeElasticityAssuranceInstancesResponseBody(const DescribeElasticityAssuranceInstancesResponseBody &) = default ;
    DescribeElasticityAssuranceInstancesResponseBody(DescribeElasticityAssuranceInstancesResponseBody &&) = default ;
    DescribeElasticityAssuranceInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssuranceInstancesResponseBody() = default ;
    DescribeElasticityAssuranceInstancesResponseBody& operator=(const DescribeElasticityAssuranceInstancesResponseBody &) = default ;
    DescribeElasticityAssuranceInstancesResponseBody& operator=(DescribeElasticityAssuranceInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticityAssuranceItem_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // elasticityAssuranceItem Field Functions 
    bool hasElasticityAssuranceItem() const { return this->elasticityAssuranceItem_ != nullptr;};
    void deleteElasticityAssuranceItem() { this->elasticityAssuranceItem_ = nullptr;};
    inline const DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem & elasticityAssuranceItem() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceItem_, DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem) };
    inline DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem elasticityAssuranceItem() { DARABONBA_PTR_GET(elasticityAssuranceItem_, DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem) };
    inline DescribeElasticityAssuranceInstancesResponseBody& setElasticityAssuranceItem(const DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem & elasticityAssuranceItem) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceItem_, elasticityAssuranceItem) };
    inline DescribeElasticityAssuranceInstancesResponseBody& setElasticityAssuranceItem(DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem && elasticityAssuranceItem) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceItem_, elasticityAssuranceItem) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeElasticityAssuranceInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeElasticityAssuranceInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticityAssuranceInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeElasticityAssuranceInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the instances that match and use the elasticity assurance.
    std::shared_ptr<DescribeElasticityAssuranceInstancesResponseBodyElasticityAssuranceItem> elasticityAssuranceItem_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
