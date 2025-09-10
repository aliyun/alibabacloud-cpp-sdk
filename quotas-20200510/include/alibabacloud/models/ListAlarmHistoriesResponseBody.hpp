// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMHISTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlarmHistoriesResponseBodyAlarmHistories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListAlarmHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmHistories, alarmHistories_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlarmHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmHistories, alarmHistories_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlarmHistoriesResponseBody() = default ;
    ListAlarmHistoriesResponseBody(const ListAlarmHistoriesResponseBody &) = default ;
    ListAlarmHistoriesResponseBody(ListAlarmHistoriesResponseBody &&) = default ;
    ListAlarmHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmHistoriesResponseBody() = default ;
    ListAlarmHistoriesResponseBody& operator=(const ListAlarmHistoriesResponseBody &) = default ;
    ListAlarmHistoriesResponseBody& operator=(ListAlarmHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmHistories_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // alarmHistories Field Functions 
    bool hasAlarmHistories() const { return this->alarmHistories_ != nullptr;};
    void deleteAlarmHistories() { this->alarmHistories_ = nullptr;};
    inline const vector<ListAlarmHistoriesResponseBodyAlarmHistories> & alarmHistories() const { DARABONBA_PTR_GET_CONST(alarmHistories_, vector<ListAlarmHistoriesResponseBodyAlarmHistories>) };
    inline vector<ListAlarmHistoriesResponseBodyAlarmHistories> alarmHistories() { DARABONBA_PTR_GET(alarmHistories_, vector<ListAlarmHistoriesResponseBodyAlarmHistories>) };
    inline ListAlarmHistoriesResponseBody& setAlarmHistories(const vector<ListAlarmHistoriesResponseBodyAlarmHistories> & alarmHistories) { DARABONBA_PTR_SET_VALUE(alarmHistories_, alarmHistories) };
    inline ListAlarmHistoriesResponseBody& setAlarmHistories(vector<ListAlarmHistoriesResponseBodyAlarmHistories> && alarmHistories) { DARABONBA_PTR_SET_RVALUE(alarmHistories_, alarmHistories) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAlarmHistoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAlarmHistoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlarmHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAlarmHistoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the quota alert records.
    std::shared_ptr<vector<ListAlarmHistoriesResponseBodyAlarmHistories>> alarmHistories_ = nullptr;
    // The maximum number of records that are returned for the query.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the position at which the query ends. An empty value indicates that all data is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of records that are returned for the query.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
