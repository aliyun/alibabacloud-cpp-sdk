// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISECMODULESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISECMODULESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyApisecModuleStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApisecModuleStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(TraceStatus, traceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApisecModuleStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(TraceStatus, traceStatus_);
    };
    ModifyApisecModuleStatusRequest() = default ;
    ModifyApisecModuleStatusRequest(const ModifyApisecModuleStatusRequest &) = default ;
    ModifyApisecModuleStatusRequest(ModifyApisecModuleStatusRequest &&) = default ;
    ModifyApisecModuleStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApisecModuleStatusRequest() = default ;
    ModifyApisecModuleStatusRequest& operator=(const ModifyApisecModuleStatusRequest &) = default ;
    ModifyApisecModuleStatusRequest& operator=(ModifyApisecModuleStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->reportStatus_ == nullptr && return this->resourceGroups_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr && return this->resources_ == nullptr
        && return this->traceStatus_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyApisecModuleStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApisecModuleStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline int64_t reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, 0L) };
    inline ModifyApisecModuleStatusRequest& setReportStatus(int64_t reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline string resourceGroups() const { DARABONBA_PTR_GET_DEFAULT(resourceGroups_, "") };
    inline ModifyApisecModuleStatusRequest& setResourceGroups(string resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyApisecModuleStatusRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline ModifyApisecModuleStatusRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // traceStatus Field Functions 
    bool hasTraceStatus() const { return this->traceStatus_ != nullptr;};
    void deleteTraceStatus() { this->traceStatus_ = nullptr;};
    inline int32_t traceStatus() const { DARABONBA_PTR_GET_DEFAULT(traceStatus_, 0) };
    inline ModifyApisecModuleStatusRequest& setTraceStatus(int32_t traceStatus) { DARABONBA_PTR_SET_VALUE(traceStatus_, traceStatus) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region in which the Web Application Firewall (WAF) instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the compliance check feature. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int64_t> reportStatus_ = nullptr;
    // The name of the protected object group to which the protected object belongs.
    std::shared_ptr<string> resourceGroups_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The name of the protected object.
    std::shared_ptr<string> resources_ = nullptr;
    // The status of the tracing and auditing feature. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> traceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
