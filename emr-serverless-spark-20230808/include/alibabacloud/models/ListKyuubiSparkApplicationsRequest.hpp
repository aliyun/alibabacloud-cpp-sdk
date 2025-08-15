// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListKyuubiSparkApplicationsRequestStartTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiSparkApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiSparkApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(applicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(minDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiSparkApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(applicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(minDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListKyuubiSparkApplicationsRequest() = default ;
    ListKyuubiSparkApplicationsRequest(const ListKyuubiSparkApplicationsRequest &) = default ;
    ListKyuubiSparkApplicationsRequest(ListKyuubiSparkApplicationsRequest &&) = default ;
    ListKyuubiSparkApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiSparkApplicationsRequest() = default ;
    ListKyuubiSparkApplicationsRequest& operator=(const ListKyuubiSparkApplicationsRequest &) = default ;
    ListKyuubiSparkApplicationsRequest& operator=(ListKyuubiSparkApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applicationName_ != nullptr && this->maxResults_ != nullptr && this->minDuration_ != nullptr && this->nextToken_ != nullptr && this->orderBy_ != nullptr
        && this->resourceQueueId_ != nullptr && this->sort_ != nullptr && this->startTime_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListKyuubiSparkApplicationsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListKyuubiSparkApplicationsRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKyuubiSparkApplicationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline int64_t minDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, 0L) };
    inline ListKyuubiSparkApplicationsRequest& setMinDuration(int64_t minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKyuubiSparkApplicationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline const vector<string> & orderBy() const { DARABONBA_PTR_GET_CONST(orderBy_, vector<string>) };
    inline vector<string> orderBy() { DARABONBA_PTR_GET(orderBy_, vector<string>) };
    inline ListKyuubiSparkApplicationsRequest& setOrderBy(const vector<string> & orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };
    inline ListKyuubiSparkApplicationsRequest& setOrderBy(vector<string> && orderBy) { DARABONBA_PTR_SET_RVALUE(orderBy_, orderBy) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string resourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline ListKyuubiSparkApplicationsRequest& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListKyuubiSparkApplicationsRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline const ListKyuubiSparkApplicationsRequestStartTime & startTime() const { DARABONBA_PTR_GET_CONST(startTime_, ListKyuubiSparkApplicationsRequestStartTime) };
    inline ListKyuubiSparkApplicationsRequestStartTime startTime() { DARABONBA_PTR_GET(startTime_, ListKyuubiSparkApplicationsRequestStartTime) };
    inline ListKyuubiSparkApplicationsRequest& setStartTime(const ListKyuubiSparkApplicationsRequestStartTime & startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };
    inline ListKyuubiSparkApplicationsRequest& setStartTime(ListKyuubiSparkApplicationsRequestStartTime && startTime) { DARABONBA_PTR_SET_RVALUE(startTime_, startTime) };


  protected:
    // The ID of the application that is submitted by using a Kyuubi gateway.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The name of the Spark application that is submitted by using a Kyuubi gateway.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The maximum number of entries to return.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<int64_t> minDuration_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<string>> orderBy_ = nullptr;
    std::shared_ptr<string> resourceQueueId_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    // The range of start time.
    std::shared_ptr<ListKyuubiSparkApplicationsRequestStartTime> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
