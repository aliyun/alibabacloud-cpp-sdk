// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupResourceTypes, groupResourceTypes_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(States, states_);
      DARABONBA_PTR_TO_JSON(TimeUsingPeriod, timeUsingPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupResourceTypes, groupResourceTypes_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(States, states_);
      DARABONBA_PTR_FROM_JSON(TimeUsingPeriod, timeUsingPeriod_);
    };
    DescribeGroupsRequest() = default ;
    DescribeGroupsRequest(const DescribeGroupsRequest &) = default ;
    DescribeGroupsRequest(DescribeGroupsRequest &&) = default ;
    DescribeGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupsRequest() = default ;
    DescribeGroupsRequest& operator=(const DescribeGroupsRequest &) = default ;
    DescribeGroupsRequest& operator=(DescribeGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->groupResourceTypes_ == nullptr && this->groupType_ == nullptr && this->instanceIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->resourceIds_ == nullptr && this->startTime_ == nullptr && this->states_ == nullptr && this->timeUsingPeriod_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeGroupsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupResourceTypes Field Functions 
    bool hasGroupResourceTypes() const { return this->groupResourceTypes_ != nullptr;};
    void deleteGroupResourceTypes() { this->groupResourceTypes_ = nullptr;};
    inline const vector<string> & getGroupResourceTypes() const { DARABONBA_PTR_GET_CONST(groupResourceTypes_, vector<string>) };
    inline vector<string> getGroupResourceTypes() { DARABONBA_PTR_GET(groupResourceTypes_, vector<string>) };
    inline DescribeGroupsRequest& setGroupResourceTypes(const vector<string> & groupResourceTypes) { DARABONBA_PTR_SET_VALUE(groupResourceTypes_, groupResourceTypes) };
    inline DescribeGroupsRequest& setGroupResourceTypes(vector<string> && groupResourceTypes) { DARABONBA_PTR_SET_RVALUE(groupResourceTypes_, groupResourceTypes) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeGroupsRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeGroupsRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeGroupsRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline DescribeGroupsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline DescribeGroupsRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeGroupsRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeGroupsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline const vector<string> & getStates() const { DARABONBA_PTR_GET_CONST(states_, vector<string>) };
    inline vector<string> getStates() { DARABONBA_PTR_GET(states_, vector<string>) };
    inline DescribeGroupsRequest& setStates(const vector<string> & states) { DARABONBA_PTR_SET_VALUE(states_, states) };
    inline DescribeGroupsRequest& setStates(vector<string> && states) { DARABONBA_PTR_SET_RVALUE(states_, states) };


    // timeUsingPeriod Field Functions 
    bool hasTimeUsingPeriod() const { return this->timeUsingPeriod_ != nullptr;};
    void deleteTimeUsingPeriod() { this->timeUsingPeriod_ = nullptr;};
    inline bool getTimeUsingPeriod() const { DARABONBA_PTR_GET_DEFAULT(timeUsingPeriod_, false) };
    inline DescribeGroupsRequest& setTimeUsingPeriod(bool timeUsingPeriod) { DARABONBA_PTR_SET_VALUE(timeUsingPeriod_, timeUsingPeriod) };


  protected:
    // The end time of the period.
    shared_ptr<int64_t> endTime_ {};
    // The list of group resource types.
    shared_ptr<vector<string>> groupResourceTypes_ {};
    // The group type.
    // 
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // The Lingxiao instance ID.
    shared_ptr<vector<string>> instanceIds_ {};
    // The number of entries per page.
    shared_ptr<string> maxResults_ {};
    // The pagination token. Leave this parameter empty for the first request. For subsequent requests, use the `nextToken` value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The list of resource IDs.
    shared_ptr<vector<string>> resourceIds_ {};
    // The start time of the period.
    shared_ptr<int64_t> startTime_ {};
    // The list of states.
    shared_ptr<vector<string>> states_ {};
    // The effective period used for the query.
    shared_ptr<bool> timeUsingPeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
