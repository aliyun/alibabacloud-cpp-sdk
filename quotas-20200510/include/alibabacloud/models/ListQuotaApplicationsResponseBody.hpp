// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotaApplicationsResponseBodyQuotaApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QuotaApplications, quotaApplications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QuotaApplications, quotaApplications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQuotaApplicationsResponseBody() = default ;
    ListQuotaApplicationsResponseBody(const ListQuotaApplicationsResponseBody &) = default ;
    ListQuotaApplicationsResponseBody(ListQuotaApplicationsResponseBody &&) = default ;
    ListQuotaApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationsResponseBody() = default ;
    ListQuotaApplicationsResponseBody& operator=(const ListQuotaApplicationsResponseBody &) = default ;
    ListQuotaApplicationsResponseBody& operator=(ListQuotaApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->quotaApplications_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaApplicationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaApplicationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // quotaApplications Field Functions 
    bool hasQuotaApplications() const { return this->quotaApplications_ != nullptr;};
    void deleteQuotaApplications() { this->quotaApplications_ = nullptr;};
    inline const vector<ListQuotaApplicationsResponseBodyQuotaApplications> & quotaApplications() const { DARABONBA_PTR_GET_CONST(quotaApplications_, vector<ListQuotaApplicationsResponseBodyQuotaApplications>) };
    inline vector<ListQuotaApplicationsResponseBodyQuotaApplications> quotaApplications() { DARABONBA_PTR_GET(quotaApplications_, vector<ListQuotaApplicationsResponseBodyQuotaApplications>) };
    inline ListQuotaApplicationsResponseBody& setQuotaApplications(const vector<ListQuotaApplicationsResponseBodyQuotaApplications> & quotaApplications) { DARABONBA_PTR_SET_VALUE(quotaApplications_, quotaApplications) };
    inline ListQuotaApplicationsResponseBody& setQuotaApplications(vector<ListQuotaApplicationsResponseBodyQuotaApplications> && quotaApplications) { DARABONBA_PTR_SET_RVALUE(quotaApplications_, quotaApplications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotaApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQuotaApplicationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records that are returned for the query.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the position at which the query ends. An empty value indicates that all data is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The details of the quota increase applications.
    std::shared_ptr<vector<ListQuotaApplicationsResponseBodyQuotaApplications>> quotaApplications_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of applications.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
