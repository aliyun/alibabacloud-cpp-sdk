// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTFLOWLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTFLOWLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortFlowListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortFlowListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortFlowListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribePortFlowListRequest() = default ;
    DescribePortFlowListRequest(const DescribePortFlowListRequest &) = default ;
    DescribePortFlowListRequest(DescribePortFlowListRequest &&) = default ;
    DescribePortFlowListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortFlowListRequest() = default ;
    DescribePortFlowListRequest& operator=(const DescribePortFlowListRequest &) = default ;
    DescribePortFlowListRequest& operator=(DescribePortFlowListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceIds_ == nullptr && this->interval_ == nullptr && this->resourceGroupId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribePortFlowListRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribePortFlowListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribePortFlowListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribePortFlowListRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribePortFlowListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribePortFlowListRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the query. Specify the value as a UNIX timestamp. Unit: seconds.
    // 
    // > The value must be on the minute.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the Anti-DDoS Pro and Anti-DDoS Premium instance.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The interval at which data is returned. Unit: seconds. The supported interval values vary based on the query time range (determined by **StartTime** and **EndTime**). Recommended settings:
    // 
    // - Query time range ≤ 1 hour: minimum interval of 60 seconds, maximum not exceeding the query time range.
    // - Query time range > 1 hour and ≤ 6 hours: minimum interval of 600 seconds, maximum not exceeding the query time range.
    // - Query time range > 6 hours and ≤ 24 hours: minimum interval of 1800 seconds, maximum not exceeding the query time range.
    // - Query time range > 24 hours and ≤ 7 days: minimum interval of 3600 seconds, maximum not exceeding the query time range.
    // - Query time range > 7 days and ≤ 15 days: minimum interval of 14400 seconds, maximum not exceeding the query time range.
    // - Query time range > 15 days: minimum interval of 43200 seconds, maximum not exceeding the query time range.
    // 
    // This parameter is required.
    shared_ptr<int32_t> interval_ {};
    // The ID of the resource group to which the Anti-DDoS Pro and Anti-DDoS Premium instance belongs in Resource Management. By default, this parameter is empty, which indicates that the instance belongs to the default resource group.
    // 
    // For more information about resource groups, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    shared_ptr<string> resourceGroupId_ {};
    // The start time of the query. Specify the value as a UNIX timestamp. Unit: seconds.
    // 
    // > The value must be on the minute.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
