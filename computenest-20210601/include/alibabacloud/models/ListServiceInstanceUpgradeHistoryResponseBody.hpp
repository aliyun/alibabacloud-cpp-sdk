// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEUPGRADEHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEUPGRADEHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceUpgradeHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceUpgradeHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UpgradeHistory, upgradeHistory_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceUpgradeHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UpgradeHistory, upgradeHistory_);
    };
    ListServiceInstanceUpgradeHistoryResponseBody() = default ;
    ListServiceInstanceUpgradeHistoryResponseBody(const ListServiceInstanceUpgradeHistoryResponseBody &) = default ;
    ListServiceInstanceUpgradeHistoryResponseBody(ListServiceInstanceUpgradeHistoryResponseBody &&) = default ;
    ListServiceInstanceUpgradeHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceUpgradeHistoryResponseBody() = default ;
    ListServiceInstanceUpgradeHistoryResponseBody& operator=(const ListServiceInstanceUpgradeHistoryResponseBody &) = default ;
    ListServiceInstanceUpgradeHistoryResponseBody& operator=(ListServiceInstanceUpgradeHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->upgradeHistory_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // upgradeHistory Field Functions 
    bool hasUpgradeHistory() const { return this->upgradeHistory_ != nullptr;};
    void deleteUpgradeHistory() { this->upgradeHistory_ = nullptr;};
    inline const vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory> & upgradeHistory() const { DARABONBA_PTR_GET_CONST(upgradeHistory_, vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory>) };
    inline vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory> upgradeHistory() { DARABONBA_PTR_GET(upgradeHistory_, vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory>) };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setUpgradeHistory(const vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory> & upgradeHistory) { DARABONBA_PTR_SET_VALUE(upgradeHistory_, upgradeHistory) };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setUpgradeHistory(vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory> && upgradeHistory) { DARABONBA_PTR_SET_RVALUE(upgradeHistory_, upgradeHistory) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The upgrade history.
    std::shared_ptr<vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory>> upgradeHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
