// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISECLOGDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISECLOGDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyApisecLogDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApisecLogDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssertKey, assertKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApisecLogDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssertKey, assertKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyApisecLogDeliveryRequest() = default ;
    ModifyApisecLogDeliveryRequest(const ModifyApisecLogDeliveryRequest &) = default ;
    ModifyApisecLogDeliveryRequest(ModifyApisecLogDeliveryRequest &&) = default ;
    ModifyApisecLogDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApisecLogDeliveryRequest() = default ;
    ModifyApisecLogDeliveryRequest& operator=(const ModifyApisecLogDeliveryRequest &) = default ;
    ModifyApisecLogDeliveryRequest& operator=(ModifyApisecLogDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assertKey_ == nullptr
        && return this->instanceId_ == nullptr && return this->logRegionId_ == nullptr && return this->logStoreName_ == nullptr && return this->projectName_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceManagerResourceGroupId_ == nullptr; };
    // assertKey Field Functions 
    bool hasAssertKey() const { return this->assertKey_ != nullptr;};
    void deleteAssertKey() { this->assertKey_ = nullptr;};
    inline string assertKey() const { DARABONBA_PTR_GET_DEFAULT(assertKey_, "") };
    inline ModifyApisecLogDeliveryRequest& setAssertKey(string assertKey) { DARABONBA_PTR_SET_VALUE(assertKey_, assertKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyApisecLogDeliveryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline ModifyApisecLogDeliveryRequest& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline ModifyApisecLogDeliveryRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ModifyApisecLogDeliveryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApisecLogDeliveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyApisecLogDeliveryRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The type of the log subscription. Valid values:
    // 
    // *   **risk**: risk information.
    // *   **event**: attack event information.
    // *   **asset**: asset information.
    // 
    // This parameter is required.
    std::shared_ptr<string> assertKey_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region where logs are stored.
    // 
    // >  You can call the [DescribeUserSlsLogRegions](https://help.aliyun.com/document_detail/2712598.html) operation to query available log storage regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> logRegionId_ = nullptr;
    // The name of the Logstore in Simple Log Service.
    // 
    // >  API security logs can be delivered only to Logstores whose names start with apisec-.
    // 
    // This parameter is required.
    std::shared_ptr<string> logStoreName_ = nullptr;
    // The name of the project in Simple Log Service.
    // 
    // >  API security logs can be delivered only to projects whose names start with apisec-.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The region where the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
