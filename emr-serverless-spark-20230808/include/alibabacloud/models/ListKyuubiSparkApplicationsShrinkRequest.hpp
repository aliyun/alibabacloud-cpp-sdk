// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiSparkApplicationsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiSparkApplicationsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(applicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(minDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderByShrink_);
      DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(startTime, startTimeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiSparkApplicationsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(applicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(minDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderByShrink_);
      DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(startTime, startTimeShrink_);
    };
    ListKyuubiSparkApplicationsShrinkRequest() = default ;
    ListKyuubiSparkApplicationsShrinkRequest(const ListKyuubiSparkApplicationsShrinkRequest &) = default ;
    ListKyuubiSparkApplicationsShrinkRequest(ListKyuubiSparkApplicationsShrinkRequest &&) = default ;
    ListKyuubiSparkApplicationsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiSparkApplicationsShrinkRequest() = default ;
    ListKyuubiSparkApplicationsShrinkRequest& operator=(const ListKyuubiSparkApplicationsShrinkRequest &) = default ;
    ListKyuubiSparkApplicationsShrinkRequest& operator=(ListKyuubiSparkApplicationsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applicationName_ != nullptr && this->maxResults_ != nullptr && this->minDuration_ != nullptr && this->nextToken_ != nullptr && this->orderByShrink_ != nullptr
        && this->resourceQueueId_ != nullptr && this->sort_ != nullptr && this->startTimeShrink_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListKyuubiSparkApplicationsShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListKyuubiSparkApplicationsShrinkRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKyuubiSparkApplicationsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline int64_t minDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, 0L) };
    inline ListKyuubiSparkApplicationsShrinkRequest& setMinDuration(int64_t minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKyuubiSparkApplicationsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderByShrink Field Functions 
    bool hasOrderByShrink() const { return this->orderByShrink_ != nullptr;};
    void deleteOrderByShrink() { this->orderByShrink_ = nullptr;};
    inline string orderByShrink() const { DARABONBA_PTR_GET_DEFAULT(orderByShrink_, "") };
    inline ListKyuubiSparkApplicationsShrinkRequest& setOrderByShrink(string orderByShrink) { DARABONBA_PTR_SET_VALUE(orderByShrink_, orderByShrink) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string resourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline ListKyuubiSparkApplicationsShrinkRequest& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListKyuubiSparkApplicationsShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTimeShrink Field Functions 
    bool hasStartTimeShrink() const { return this->startTimeShrink_ != nullptr;};
    void deleteStartTimeShrink() { this->startTimeShrink_ = nullptr;};
    inline string startTimeShrink() const { DARABONBA_PTR_GET_DEFAULT(startTimeShrink_, "") };
    inline ListKyuubiSparkApplicationsShrinkRequest& setStartTimeShrink(string startTimeShrink) { DARABONBA_PTR_SET_VALUE(startTimeShrink_, startTimeShrink) };


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
    std::shared_ptr<string> orderByShrink_ = nullptr;
    std::shared_ptr<string> resourceQueueId_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    // The range of start time.
    std::shared_ptr<string> startTimeShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
