// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTORESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTORESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGrantRulesToResourceResponseBodyGrantRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeGrantRulesToResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGrantRulesToResourceResponseBody() = default ;
    DescribeGrantRulesToResourceResponseBody(const DescribeGrantRulesToResourceResponseBody &) = default ;
    DescribeGrantRulesToResourceResponseBody(DescribeGrantRulesToResourceResponseBody &&) = default ;
    DescribeGrantRulesToResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToResourceResponseBody() = default ;
    DescribeGrantRulesToResourceResponseBody& operator=(const DescribeGrantRulesToResourceResponseBody &) = default ;
    DescribeGrantRulesToResourceResponseBody& operator=(DescribeGrantRulesToResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grantRules_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // grantRules Field Functions 
    bool hasGrantRules() const { return this->grantRules_ != nullptr;};
    void deleteGrantRules() { this->grantRules_ = nullptr;};
    inline const vector<DescribeGrantRulesToResourceResponseBodyGrantRules> & grantRules() const { DARABONBA_PTR_GET_CONST(grantRules_, vector<DescribeGrantRulesToResourceResponseBodyGrantRules>) };
    inline vector<DescribeGrantRulesToResourceResponseBodyGrantRules> grantRules() { DARABONBA_PTR_GET(grantRules_, vector<DescribeGrantRulesToResourceResponseBodyGrantRules>) };
    inline DescribeGrantRulesToResourceResponseBody& setGrantRules(const vector<DescribeGrantRulesToResourceResponseBodyGrantRules> & grantRules) { DARABONBA_PTR_SET_VALUE(grantRules_, grantRules) };
    inline DescribeGrantRulesToResourceResponseBody& setGrantRules(vector<DescribeGrantRulesToResourceResponseBodyGrantRules> && grantRules) { DARABONBA_PTR_SET_RVALUE(grantRules_, grantRules) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeGrantRulesToResourceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGrantRulesToResourceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGrantRulesToResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGrantRulesToResourceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The permissions that are granted to the CEN instance.
    std::shared_ptr<vector<DescribeGrantRulesToResourceResponseBodyGrantRules>> grantRules_ = nullptr;
    // *   If no value is specified for **MaxResults**, query results are returned in one batch. The value of **MaxResults** indicates the total number of entries.
    // *   If a value is specified for **MaxResults**, query results are returned in batches. The value of **MaxResults** in the response indicates the number of entries in the current batch.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If the **NextToken** parameter is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
