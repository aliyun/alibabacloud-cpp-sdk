// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentStatusesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentStatusesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAvailabilityTaskId, hostAvailabilityTaskId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentStatusesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAvailabilityTaskId, hostAvailabilityTaskId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeMonitoringAgentStatusesRequest() = default ;
    DescribeMonitoringAgentStatusesRequest(const DescribeMonitoringAgentStatusesRequest &) = default ;
    DescribeMonitoringAgentStatusesRequest(DescribeMonitoringAgentStatusesRequest &&) = default ;
    DescribeMonitoringAgentStatusesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentStatusesRequest() = default ;
    DescribeMonitoringAgentStatusesRequest& operator=(const DescribeMonitoringAgentStatusesRequest &) = default ;
    DescribeMonitoringAgentStatusesRequest& operator=(DescribeMonitoringAgentStatusesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostAvailabilityTaskId_ != nullptr
        && this->instanceIds_ != nullptr && this->regionId_ != nullptr; };
    // hostAvailabilityTaskId Field Functions 
    bool hasHostAvailabilityTaskId() const { return this->hostAvailabilityTaskId_ != nullptr;};
    void deleteHostAvailabilityTaskId() { this->hostAvailabilityTaskId_ = nullptr;};
    inline string hostAvailabilityTaskId() const { DARABONBA_PTR_GET_DEFAULT(hostAvailabilityTaskId_, "") };
    inline DescribeMonitoringAgentStatusesRequest& setHostAvailabilityTaskId(string hostAvailabilityTaskId) { DARABONBA_PTR_SET_VALUE(hostAvailabilityTaskId_, hostAvailabilityTaskId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeMonitoringAgentStatusesRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMonitoringAgentStatusesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the availability monitoring task.
    std::shared_ptr<string> hostAvailabilityTaskId_ = nullptr;
    // The instance IDs. Separate multiple instance IDs with commas (,).
    std::shared_ptr<string> instanceIds_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
