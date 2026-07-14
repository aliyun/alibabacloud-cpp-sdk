// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNOTIFYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNOTIFYPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotifyPolicySummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListNotifyPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNotifyPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(notifyPolicyList, notifyPolicyList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNotifyPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(notifyPolicyList, notifyPolicyList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListNotifyPoliciesResponseBody() = default ;
    ListNotifyPoliciesResponseBody(const ListNotifyPoliciesResponseBody &) = default ;
    ListNotifyPoliciesResponseBody(ListNotifyPoliciesResponseBody &&) = default ;
    ListNotifyPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNotifyPoliciesResponseBody() = default ;
    ListNotifyPoliciesResponseBody& operator=(const ListNotifyPoliciesResponseBody &) = default ;
    ListNotifyPoliciesResponseBody& operator=(ListNotifyPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->notifyPolicyList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNotifyPoliciesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNotifyPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // notifyPolicyList Field Functions 
    bool hasNotifyPolicyList() const { return this->notifyPolicyList_ != nullptr;};
    void deleteNotifyPolicyList() { this->notifyPolicyList_ = nullptr;};
    inline const vector<NotifyPolicySummary> & getNotifyPolicyList() const { DARABONBA_PTR_GET_CONST(notifyPolicyList_, vector<NotifyPolicySummary>) };
    inline vector<NotifyPolicySummary> getNotifyPolicyList() { DARABONBA_PTR_GET(notifyPolicyList_, vector<NotifyPolicySummary>) };
    inline ListNotifyPoliciesResponseBody& setNotifyPolicyList(const vector<NotifyPolicySummary> & notifyPolicyList) { DARABONBA_PTR_SET_VALUE(notifyPolicyList_, notifyPolicyList) };
    inline ListNotifyPoliciesResponseBody& setNotifyPolicyList(vector<NotifyPolicySummary> && notifyPolicyList) { DARABONBA_PTR_SET_RVALUE(notifyPolicyList_, notifyPolicyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNotifyPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListNotifyPoliciesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. This parameter is empty if no more data is available.
    shared_ptr<string> nextToken_ {};
    // The list of notify policies. Each entry is of the NotifyPolicySummary type (lightweight view).
    shared_ptr<vector<NotifyPolicySummary>> notifyPolicyList_ {};
    // The request ID. You can use this ID for troubleshooting and ticket submission.
    shared_ptr<string> requestId_ {};
    // The total number of entries. The actual total is returned on the first page. A fixed value of -1 is returned on subsequent pages.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
