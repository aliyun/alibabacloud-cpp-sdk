// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHEALTHCHECKTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHEALTHCHECKTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHealthCheckTemplatesResponseBodyHealthCheckTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListHealthCheckTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHealthCheckTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckTemplates, healthCheckTemplates_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHealthCheckTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckTemplates, healthCheckTemplates_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHealthCheckTemplatesResponseBody() = default ;
    ListHealthCheckTemplatesResponseBody(const ListHealthCheckTemplatesResponseBody &) = default ;
    ListHealthCheckTemplatesResponseBody(ListHealthCheckTemplatesResponseBody &&) = default ;
    ListHealthCheckTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHealthCheckTemplatesResponseBody() = default ;
    ListHealthCheckTemplatesResponseBody& operator=(const ListHealthCheckTemplatesResponseBody &) = default ;
    ListHealthCheckTemplatesResponseBody& operator=(ListHealthCheckTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->healthCheckTemplates_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // healthCheckTemplates Field Functions 
    bool hasHealthCheckTemplates() const { return this->healthCheckTemplates_ != nullptr;};
    void deleteHealthCheckTemplates() { this->healthCheckTemplates_ = nullptr;};
    inline const vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates> & healthCheckTemplates() const { DARABONBA_PTR_GET_CONST(healthCheckTemplates_, vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates>) };
    inline vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates> healthCheckTemplates() { DARABONBA_PTR_GET(healthCheckTemplates_, vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates>) };
    inline ListHealthCheckTemplatesResponseBody& setHealthCheckTemplates(const vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates> & healthCheckTemplates) { DARABONBA_PTR_SET_VALUE(healthCheckTemplates_, healthCheckTemplates) };
    inline ListHealthCheckTemplatesResponseBody& setHealthCheckTemplates(vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates> && healthCheckTemplates) { DARABONBA_PTR_SET_RVALUE(healthCheckTemplates_, healthCheckTemplates) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHealthCheckTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHealthCheckTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHealthCheckTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHealthCheckTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The health check templates.
    std::shared_ptr<vector<ListHealthCheckTemplatesResponseBodyHealthCheckTemplates>> healthCheckTemplates_ = nullptr;
    // The number of entries returned per page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
