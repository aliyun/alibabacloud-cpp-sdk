// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONPLANACTIVITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONPLANACTIVITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListActionPlanActivitiesResponseBodyActionPlanActivities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListActionPlanActivitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionPlanActivitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanActivities, actionPlanActivities_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionPlanActivitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanActivities, actionPlanActivities_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListActionPlanActivitiesResponseBody() = default ;
    ListActionPlanActivitiesResponseBody(const ListActionPlanActivitiesResponseBody &) = default ;
    ListActionPlanActivitiesResponseBody(ListActionPlanActivitiesResponseBody &&) = default ;
    ListActionPlanActivitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionPlanActivitiesResponseBody() = default ;
    ListActionPlanActivitiesResponseBody& operator=(const ListActionPlanActivitiesResponseBody &) = default ;
    ListActionPlanActivitiesResponseBody& operator=(ListActionPlanActivitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionPlanActivities_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // actionPlanActivities Field Functions 
    bool hasActionPlanActivities() const { return this->actionPlanActivities_ != nullptr;};
    void deleteActionPlanActivities() { this->actionPlanActivities_ = nullptr;};
    inline const vector<ListActionPlanActivitiesResponseBodyActionPlanActivities> & actionPlanActivities() const { DARABONBA_PTR_GET_CONST(actionPlanActivities_, vector<ListActionPlanActivitiesResponseBodyActionPlanActivities>) };
    inline vector<ListActionPlanActivitiesResponseBodyActionPlanActivities> actionPlanActivities() { DARABONBA_PTR_GET(actionPlanActivities_, vector<ListActionPlanActivitiesResponseBodyActionPlanActivities>) };
    inline ListActionPlanActivitiesResponseBody& setActionPlanActivities(const vector<ListActionPlanActivitiesResponseBodyActionPlanActivities> & actionPlanActivities) { DARABONBA_PTR_SET_VALUE(actionPlanActivities_, actionPlanActivities) };
    inline ListActionPlanActivitiesResponseBody& setActionPlanActivities(vector<ListActionPlanActivitiesResponseBodyActionPlanActivities> && actionPlanActivities) { DARABONBA_PTR_SET_RVALUE(actionPlanActivities_, actionPlanActivities) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListActionPlanActivitiesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionPlanActivitiesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActionPlanActivitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListActionPlanActivitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListActionPlanActivitiesResponseBodyActionPlanActivities>> actionPlanActivities_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
