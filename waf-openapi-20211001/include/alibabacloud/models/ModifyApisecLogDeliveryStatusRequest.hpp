// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISECLOGDELIVERYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISECLOGDELIVERYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyApisecLogDeliveryStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApisecLogDeliveryStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssertKey, assertKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApisecLogDeliveryStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssertKey, assertKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyApisecLogDeliveryStatusRequest() = default ;
    ModifyApisecLogDeliveryStatusRequest(const ModifyApisecLogDeliveryStatusRequest &) = default ;
    ModifyApisecLogDeliveryStatusRequest(ModifyApisecLogDeliveryStatusRequest &&) = default ;
    ModifyApisecLogDeliveryStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApisecLogDeliveryStatusRequest() = default ;
    ModifyApisecLogDeliveryStatusRequest& operator=(const ModifyApisecLogDeliveryStatusRequest &) = default ;
    ModifyApisecLogDeliveryStatusRequest& operator=(ModifyApisecLogDeliveryStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assertKey_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->status_ != nullptr; };
    // assertKey Field Functions 
    bool hasAssertKey() const { return this->assertKey_ != nullptr;};
    void deleteAssertKey() { this->assertKey_ = nullptr;};
    inline string assertKey() const { DARABONBA_PTR_GET_DEFAULT(assertKey_, "") };
    inline ModifyApisecLogDeliveryStatusRequest& setAssertKey(string assertKey) { DARABONBA_PTR_SET_VALUE(assertKey_, assertKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyApisecLogDeliveryStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApisecLogDeliveryStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyApisecLogDeliveryStatusRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ModifyApisecLogDeliveryStatusRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


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
    // The region where the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The status of API security log subscription. Valid values:
    // 
    // *   **true**: enabled.
    // *   **false**: disabled.
    // 
    // This parameter is required.
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
