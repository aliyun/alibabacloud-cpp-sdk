// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssurancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssurancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceSet, elasticityAssuranceSet_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssurancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceSet, elasticityAssuranceSet_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeElasticityAssurancesResponseBody() = default ;
    DescribeElasticityAssurancesResponseBody(const DescribeElasticityAssurancesResponseBody &) = default ;
    DescribeElasticityAssurancesResponseBody(DescribeElasticityAssurancesResponseBody &&) = default ;
    DescribeElasticityAssurancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssurancesResponseBody() = default ;
    DescribeElasticityAssurancesResponseBody& operator=(const DescribeElasticityAssurancesResponseBody &) = default ;
    DescribeElasticityAssurancesResponseBody& operator=(DescribeElasticityAssurancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticityAssuranceSet_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // elasticityAssuranceSet Field Functions 
    bool hasElasticityAssuranceSet() const { return this->elasticityAssuranceSet_ != nullptr;};
    void deleteElasticityAssuranceSet() { this->elasticityAssuranceSet_ = nullptr;};
    inline const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet & elasticityAssuranceSet() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceSet_, DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet) };
    inline DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet elasticityAssuranceSet() { DARABONBA_PTR_GET(elasticityAssuranceSet_, DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet) };
    inline DescribeElasticityAssurancesResponseBody& setElasticityAssuranceSet(const DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet & elasticityAssuranceSet) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceSet_, elasticityAssuranceSet) };
    inline DescribeElasticityAssurancesResponseBody& setElasticityAssuranceSet(DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet && elasticityAssuranceSet) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceSet_, elasticityAssuranceSet) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeElasticityAssurancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeElasticityAssurancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticityAssurancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeElasticityAssurancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the elasticity assurances.
    std::shared_ptr<DescribeElasticityAssurancesResponseBodyElasticityAssuranceSet> elasticityAssuranceSet_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
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
