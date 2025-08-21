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
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->instanceIds_ != nullptr && this->interval_ != nullptr && this->resourceGroupId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribePortFlowListRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribePortFlowListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribePortFlowListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribePortFlowListRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribePortFlowListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribePortFlowListRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // **
    // 
    // **This UNIX timestamp must indicate a point in time that is accurate to the minute.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // An array that consists of the IDs of instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The interval for returning data. Unit: seconds. The interval that you can specify varies based on the time range to query. The time range to query is determined by the values of **StartTime** and **EndTime**.
    // 
    // *   If the time range to query is no greater than 1 hour, we recommend that you specify the interval from 60 seconds to the time range to query.
    // *   If the time range to query is greater than 1 hour but no greater than 6 hours, we recommend that you specify the interval from 600 seconds to the time range to query.
    // *   If the time range to query is greater than 6 hours but no greater than 24 hours, we recommend that you specify the interval from 1,800 seconds to the time range to query.
    // *   If the time range to query is greater than 24 hours but no greater than 7 days, we recommend that you specify the interval from 3,600 seconds to the time range to query.
    // *   If the time range to query is greater than 7 days but no greater than 15 days, we recommend that you specify the interval from 14,400 seconds to the time range to query.
    // *   If the time range to query is greater than 15 days, we recommend that you specify the interval from 43,200 seconds to the time range to query.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    // 
    // For more information about resource groups, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // **
    // 
    // **This UNIX timestamp must indicate a point in time that is accurate to the minute.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
