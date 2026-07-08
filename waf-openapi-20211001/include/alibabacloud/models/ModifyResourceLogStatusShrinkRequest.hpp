// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCELOGSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCELOGSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyResourceLogStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceLogStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TraceConfig, traceConfigShrink_);
      DARABONBA_PTR_TO_JSON(TraceStatus, traceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceLogStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TraceConfig, traceConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TraceStatus, traceStatus_);
    };
    ModifyResourceLogStatusShrinkRequest() = default ;
    ModifyResourceLogStatusShrinkRequest(const ModifyResourceLogStatusShrinkRequest &) = default ;
    ModifyResourceLogStatusShrinkRequest(ModifyResourceLogStatusShrinkRequest &&) = default ;
    ModifyResourceLogStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceLogStatusShrinkRequest() = default ;
    ModifyResourceLogStatusShrinkRequest& operator=(const ModifyResourceLogStatusShrinkRequest &) = default ;
    ModifyResourceLogStatusShrinkRequest& operator=(ModifyResourceLogStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->resource_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->status_ == nullptr && this->traceConfigShrink_ == nullptr
        && this->traceStatus_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyResourceLogStatusShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyResourceLogStatusShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ModifyResourceLogStatusShrinkRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyResourceLogStatusShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ModifyResourceLogStatusShrinkRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // traceConfigShrink Field Functions 
    bool hasTraceConfigShrink() const { return this->traceConfigShrink_ != nullptr;};
    void deleteTraceConfigShrink() { this->traceConfigShrink_ = nullptr;};
    inline string getTraceConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(traceConfigShrink_, "") };
    inline ModifyResourceLogStatusShrinkRequest& setTraceConfigShrink(string traceConfigShrink) { DARABONBA_PTR_SET_VALUE(traceConfigShrink_, traceConfigShrink) };


    // traceStatus Field Functions 
    bool hasTraceStatus() const { return this->traceStatus_ != nullptr;};
    void deleteTraceStatus() { this->traceStatus_ = nullptr;};
    inline bool getTraceStatus() const { DARABONBA_PTR_GET_DEFAULT(traceStatus_, false) };
    inline ModifyResourceLogStatusShrinkRequest& setTraceStatus(bool traceStatus) { DARABONBA_PTR_SET_VALUE(traceStatus_, traceStatus) };


  protected:
    // The ID of the WAF instance.
    // 
    // > Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region of the WAF instance. Valid values:
    // 
    // - **cn-hangzhou**: The Chinese mainland.
    // 
    // - **ap-southeast-1**: Outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The protected object on which you want to manage the log collection feature.
    // 
    // This parameter is required.
    shared_ptr<string> resource_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // Specifies whether to enable the log collection feature for the protected object. Valid values:
    // 
    // - **true**: Enables the feature.
    // 
    // - **false**: Disables the feature.
    // 
    // This parameter is required.
    shared_ptr<bool> status_ {};
    shared_ptr<string> traceConfigShrink_ {};
    shared_ptr<bool> traceStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
