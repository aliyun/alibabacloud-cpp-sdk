// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAutoScalingActivitiesResponseBodyScalingActivities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListAutoScalingActivitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingActivitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivities, scalingActivities_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingActivitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivities, scalingActivities_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAutoScalingActivitiesResponseBody() = default ;
    ListAutoScalingActivitiesResponseBody(const ListAutoScalingActivitiesResponseBody &) = default ;
    ListAutoScalingActivitiesResponseBody(ListAutoScalingActivitiesResponseBody &&) = default ;
    ListAutoScalingActivitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingActivitiesResponseBody() = default ;
    ListAutoScalingActivitiesResponseBody& operator=(const ListAutoScalingActivitiesResponseBody &) = default ;
    ListAutoScalingActivitiesResponseBody& operator=(ListAutoScalingActivitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->scalingActivities_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAutoScalingActivitiesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAutoScalingActivitiesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAutoScalingActivitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivities Field Functions 
    bool hasScalingActivities() const { return this->scalingActivities_ != nullptr;};
    void deleteScalingActivities() { this->scalingActivities_ = nullptr;};
    inline const vector<ListAutoScalingActivitiesResponseBodyScalingActivities> & scalingActivities() const { DARABONBA_PTR_GET_CONST(scalingActivities_, vector<ListAutoScalingActivitiesResponseBodyScalingActivities>) };
    inline vector<ListAutoScalingActivitiesResponseBodyScalingActivities> scalingActivities() { DARABONBA_PTR_GET(scalingActivities_, vector<ListAutoScalingActivitiesResponseBodyScalingActivities>) };
    inline ListAutoScalingActivitiesResponseBody& setScalingActivities(const vector<ListAutoScalingActivitiesResponseBodyScalingActivities> & scalingActivities) { DARABONBA_PTR_SET_VALUE(scalingActivities_, scalingActivities) };
    inline ListAutoScalingActivitiesResponseBody& setScalingActivities(vector<ListAutoScalingActivitiesResponseBodyScalingActivities> && scalingActivities) { DARABONBA_PTR_SET_RVALUE(scalingActivities_, scalingActivities) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAutoScalingActivitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scaling activities.
    std::shared_ptr<vector<ListAutoScalingActivitiesResponseBodyScalingActivities>> scalingActivities_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
