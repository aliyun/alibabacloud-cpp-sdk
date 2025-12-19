// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKLOADIDENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKLOADIDENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkloadIdentitiesResponseBodyWorkloadIdentities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListWorkloadIdentitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkloadIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentities, workloadIdentities_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkloadIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentities, workloadIdentities_);
    };
    ListWorkloadIdentitiesResponseBody() = default ;
    ListWorkloadIdentitiesResponseBody(const ListWorkloadIdentitiesResponseBody &) = default ;
    ListWorkloadIdentitiesResponseBody(ListWorkloadIdentitiesResponseBody &&) = default ;
    ListWorkloadIdentitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkloadIdentitiesResponseBody() = default ;
    ListWorkloadIdentitiesResponseBody& operator=(const ListWorkloadIdentitiesResponseBody &) = default ;
    ListWorkloadIdentitiesResponseBody& operator=(ListWorkloadIdentitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->workloadIdentities_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkloadIdentitiesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkloadIdentitiesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkloadIdentitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWorkloadIdentitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workloadIdentities Field Functions 
    bool hasWorkloadIdentities() const { return this->workloadIdentities_ != nullptr;};
    void deleteWorkloadIdentities() { this->workloadIdentities_ = nullptr;};
    inline const vector<ListWorkloadIdentitiesResponseBodyWorkloadIdentities> & workloadIdentities() const { DARABONBA_PTR_GET_CONST(workloadIdentities_, vector<ListWorkloadIdentitiesResponseBodyWorkloadIdentities>) };
    inline vector<ListWorkloadIdentitiesResponseBodyWorkloadIdentities> workloadIdentities() { DARABONBA_PTR_GET(workloadIdentities_, vector<ListWorkloadIdentitiesResponseBodyWorkloadIdentities>) };
    inline ListWorkloadIdentitiesResponseBody& setWorkloadIdentities(const vector<ListWorkloadIdentitiesResponseBodyWorkloadIdentities> & workloadIdentities) { DARABONBA_PTR_SET_VALUE(workloadIdentities_, workloadIdentities) };
    inline ListWorkloadIdentitiesResponseBody& setWorkloadIdentities(vector<ListWorkloadIdentitiesResponseBodyWorkloadIdentities> && workloadIdentities) { DARABONBA_PTR_SET_RVALUE(workloadIdentities_, workloadIdentities) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<ListWorkloadIdentitiesResponseBodyWorkloadIdentities>> workloadIdentities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
