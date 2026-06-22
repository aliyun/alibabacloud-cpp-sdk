// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPITEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPITEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApiTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListApiTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiTemplates, apiTemplates_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiTemplates, apiTemplates_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApiTemplatesResponseBody() = default ;
    ListApiTemplatesResponseBody(const ListApiTemplatesResponseBody &) = default ;
    ListApiTemplatesResponseBody(ListApiTemplatesResponseBody &&) = default ;
    ListApiTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiTemplatesResponseBody() = default ;
    ListApiTemplatesResponseBody& operator=(const ListApiTemplatesResponseBody &) = default ;
    ListApiTemplatesResponseBody& operator=(ListApiTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiTemplates_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiTemplates Field Functions 
    bool hasApiTemplates() const { return this->apiTemplates_ != nullptr;};
    void deleteApiTemplates() { this->apiTemplates_ = nullptr;};
    inline const vector<ApiTemplate> & getApiTemplates() const { DARABONBA_PTR_GET_CONST(apiTemplates_, vector<ApiTemplate>) };
    inline vector<ApiTemplate> getApiTemplates() { DARABONBA_PTR_GET(apiTemplates_, vector<ApiTemplate>) };
    inline ListApiTemplatesResponseBody& setApiTemplates(const vector<ApiTemplate> & apiTemplates) { DARABONBA_PTR_SET_VALUE(apiTemplates_, apiTemplates) };
    inline ListApiTemplatesResponseBody& setApiTemplates(vector<ApiTemplate> && apiTemplates) { DARABONBA_PTR_SET_RVALUE(apiTemplates_, apiTemplates) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApiTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApiTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApiTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The array of API templates.
    shared_ptr<vector<ApiTemplate>> apiTemplates_ {};
    // The maximum number of entries returned for the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The token to use to retrieve the next page of results. This value is empty when there are no more results to return.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that meet the filter criteria.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
