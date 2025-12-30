// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERBATCHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERBATCHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalTimerBatchesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalTimerBatchesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_TO_JSON(TimerType, timerType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalTimerBatchesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
    };
    DescribeGlobalTimerBatchesRequest() = default ;
    DescribeGlobalTimerBatchesRequest(const DescribeGlobalTimerBatchesRequest &) = default ;
    DescribeGlobalTimerBatchesRequest(DescribeGlobalTimerBatchesRequest &&) = default ;
    DescribeGlobalTimerBatchesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalTimerBatchesRequest() = default ;
    DescribeGlobalTimerBatchesRequest& operator=(const DescribeGlobalTimerBatchesRequest &) = default ;
    DescribeGlobalTimerBatchesRequest& operator=(DescribeGlobalTimerBatchesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->searchRegionId_ == nullptr && this->timerType_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeGlobalTimerBatchesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline DescribeGlobalTimerBatchesRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGlobalTimerBatchesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalTimerBatchesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string getSearchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline DescribeGlobalTimerBatchesRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
    inline DescribeGlobalTimerBatchesRequest& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


  protected:
    shared_ptr<string> groupId_ {};
    shared_ptr<string> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> searchRegionId_ {};
    shared_ptr<string> timerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
