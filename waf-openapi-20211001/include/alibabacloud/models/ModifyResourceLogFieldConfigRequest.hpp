// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCELOGFIELDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCELOGFIELDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyResourceLogFieldConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceLogFieldConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogDeliveryStrategy, logDeliveryStrategy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceLogFieldConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryStrategy, logDeliveryStrategy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyResourceLogFieldConfigRequest() = default ;
    ModifyResourceLogFieldConfigRequest(const ModifyResourceLogFieldConfigRequest &) = default ;
    ModifyResourceLogFieldConfigRequest(ModifyResourceLogFieldConfigRequest &&) = default ;
    ModifyResourceLogFieldConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceLogFieldConfigRequest() = default ;
    ModifyResourceLogFieldConfigRequest& operator=(const ModifyResourceLogFieldConfigRequest &) = default ;
    ModifyResourceLogFieldConfigRequest& operator=(ModifyResourceLogFieldConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryType_ == nullptr
        && this->extendConfig_ == nullptr && this->fieldList_ == nullptr && this->instanceId_ == nullptr && this->logDeliveryStrategy_ == nullptr && this->regionId_ == nullptr
        && this->resource_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline ModifyResourceLogFieldConfigRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // extendConfig Field Functions 
    bool hasExtendConfig() const { return this->extendConfig_ != nullptr;};
    void deleteExtendConfig() { this->extendConfig_ = nullptr;};
    inline string getExtendConfig() const { DARABONBA_PTR_GET_DEFAULT(extendConfig_, "") };
    inline ModifyResourceLogFieldConfigRequest& setExtendConfig(string extendConfig) { DARABONBA_PTR_SET_VALUE(extendConfig_, extendConfig) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline string getFieldList() const { DARABONBA_PTR_GET_DEFAULT(fieldList_, "") };
    inline ModifyResourceLogFieldConfigRequest& setFieldList(string fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyResourceLogFieldConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logDeliveryStrategy Field Functions 
    bool hasLogDeliveryStrategy() const { return this->logDeliveryStrategy_ != nullptr;};
    void deleteLogDeliveryStrategy() { this->logDeliveryStrategy_ = nullptr;};
    inline string getLogDeliveryStrategy() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStrategy_, "") };
    inline ModifyResourceLogFieldConfigRequest& setLogDeliveryStrategy(string logDeliveryStrategy) { DARABONBA_PTR_SET_VALUE(logDeliveryStrategy_, logDeliveryStrategy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyResourceLogFieldConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ModifyResourceLogFieldConfigRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyResourceLogFieldConfigRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The log delivery type. Valid values:
    // 
    // - **sls**: Alibaba Cloud Simple Log Service.
    // 
    // - **kafka**: Delivers logs to an external Kafka cluster.
    // 
    // - **syslog**: Delivers logs to an external syslog server.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryType_ {};
    // The extension configuration for log delivery. This is a JSON object converted to a string.
    // 
    // > For more information, see the description of the **ExtendConfig** parameter.
    shared_ptr<string> extendConfig_ {};
    // The list of log fields to deliver. Use the \\`a,b,c,...\\` format.
    // 
    // > - Include all required log fields. Call [DescribeCommonLogFields](~~DescribeCommonLogFields~~) to view the log fields that WAF Simple Log Service supports.
    // >
    // > - If the log fields include **request_header**, use the **ExtendConfig** parameter to specify the request headers to deliver.
    // 
    // This parameter is required.
    shared_ptr<string> fieldList_ {};
    // The ID of the WAF instance.
    // 
    // > Call [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) to query the ID of the current WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The log delivery policies. Multiple policies are supported. This is a JSON array of policy objects converted to a string.
    // 
    // > For more information, see the description of the **LogDeliveryStrategy** parameter.
    shared_ptr<string> logDeliveryStrategy_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // - **cn-hangzhou**: the Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The protected object to modify.
    // 
    // This parameter is required.
    shared_ptr<string> resource_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
