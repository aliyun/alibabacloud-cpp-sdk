// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTNISTRAFFICRANKINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTNISTRAFFICRANKINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class StartNisTrafficRankingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartNisTrafficRankingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupByShrink_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StorageInterval, storageInterval_);
      DARABONBA_PTR_TO_JSON(TopN, topN_);
      DARABONBA_PTR_TO_JSON(TrafficAnalyzerId, trafficAnalyzerId_);
      DARABONBA_PTR_TO_JSON(TrafficScenario, trafficScenario_);
      DARABONBA_PTR_TO_JSON(TupleDimension, tupleDimension_);
    };
    friend void from_json(const Darabonba::Json& j, StartNisTrafficRankingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupByShrink_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StorageInterval, storageInterval_);
      DARABONBA_PTR_FROM_JSON(TopN, topN_);
      DARABONBA_PTR_FROM_JSON(TrafficAnalyzerId, trafficAnalyzerId_);
      DARABONBA_PTR_FROM_JSON(TrafficScenario, trafficScenario_);
      DARABONBA_PTR_FROM_JSON(TupleDimension, tupleDimension_);
    };
    StartNisTrafficRankingShrinkRequest() = default ;
    StartNisTrafficRankingShrinkRequest(const StartNisTrafficRankingShrinkRequest &) = default ;
    StartNisTrafficRankingShrinkRequest(StartNisTrafficRankingShrinkRequest &&) = default ;
    StartNisTrafficRankingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartNisTrafficRankingShrinkRequest() = default ;
    StartNisTrafficRankingShrinkRequest& operator=(const StartNisTrafficRankingShrinkRequest &) = default ;
    StartNisTrafficRankingShrinkRequest& operator=(StartNisTrafficRankingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->direction_ == nullptr && this->endTime_ == nullptr && this->filterShrink_ == nullptr && this->groupByShrink_ == nullptr && this->language_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr && this->regionNo_ == nullptr && this->sort_ == nullptr
        && this->storageInterval_ == nullptr && this->topN_ == nullptr && this->trafficAnalyzerId_ == nullptr && this->trafficScenario_ == nullptr && this->tupleDimension_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline StartNisTrafficRankingShrinkRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline StartNisTrafficRankingShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline StartNisTrafficRankingShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline StartNisTrafficRankingShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // groupByShrink Field Functions 
    bool hasGroupByShrink() const { return this->groupByShrink_ != nullptr;};
    void deleteGroupByShrink() { this->groupByShrink_ = nullptr;};
    inline string getGroupByShrink() const { DARABONBA_PTR_GET_DEFAULT(groupByShrink_, "") };
    inline StartNisTrafficRankingShrinkRequest& setGroupByShrink(string groupByShrink) { DARABONBA_PTR_SET_VALUE(groupByShrink_, groupByShrink) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline StartNisTrafficRankingShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline StartNisTrafficRankingShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline StartNisTrafficRankingShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline StartNisTrafficRankingShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline StartNisTrafficRankingShrinkRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline StartNisTrafficRankingShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // storageInterval Field Functions 
    bool hasStorageInterval() const { return this->storageInterval_ != nullptr;};
    void deleteStorageInterval() { this->storageInterval_ = nullptr;};
    inline int32_t getStorageInterval() const { DARABONBA_PTR_GET_DEFAULT(storageInterval_, 0) };
    inline StartNisTrafficRankingShrinkRequest& setStorageInterval(int32_t storageInterval) { DARABONBA_PTR_SET_VALUE(storageInterval_, storageInterval) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline StartNisTrafficRankingShrinkRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


    // trafficAnalyzerId Field Functions 
    bool hasTrafficAnalyzerId() const { return this->trafficAnalyzerId_ != nullptr;};
    void deleteTrafficAnalyzerId() { this->trafficAnalyzerId_ = nullptr;};
    inline string getTrafficAnalyzerId() const { DARABONBA_PTR_GET_DEFAULT(trafficAnalyzerId_, "") };
    inline StartNisTrafficRankingShrinkRequest& setTrafficAnalyzerId(string trafficAnalyzerId) { DARABONBA_PTR_SET_VALUE(trafficAnalyzerId_, trafficAnalyzerId) };


    // trafficScenario Field Functions 
    bool hasTrafficScenario() const { return this->trafficScenario_ != nullptr;};
    void deleteTrafficScenario() { this->trafficScenario_ = nullptr;};
    inline string getTrafficScenario() const { DARABONBA_PTR_GET_DEFAULT(trafficScenario_, "") };
    inline StartNisTrafficRankingShrinkRequest& setTrafficScenario(string trafficScenario) { DARABONBA_PTR_SET_VALUE(trafficScenario_, trafficScenario) };


    // tupleDimension Field Functions 
    bool hasTupleDimension() const { return this->tupleDimension_ != nullptr;};
    void deleteTupleDimension() { this->tupleDimension_ = nullptr;};
    inline string getTupleDimension() const { DARABONBA_PTR_GET_DEFAULT(tupleDimension_, "") };
    inline StartNisTrafficRankingShrinkRequest& setTupleDimension(string tupleDimension) { DARABONBA_PTR_SET_VALUE(tupleDimension_, tupleDimension) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> filterShrink_ {};
    shared_ptr<string> groupByShrink_ {};
    shared_ptr<string> language_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> orderBy_ {};
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    shared_ptr<string> sort_ {};
    shared_ptr<int32_t> storageInterval_ {};
    shared_ptr<int32_t> topN_ {};
    // This parameter is required.
    shared_ptr<string> trafficAnalyzerId_ {};
    // This parameter is required.
    shared_ptr<string> trafficScenario_ {};
    shared_ptr<string> tupleDimension_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
