// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERLOGFIELDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERLOGFIELDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyUserLogFieldConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserLogFieldConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogDeliveryStrategy, logDeliveryStrategy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserLogFieldConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryStrategy, logDeliveryStrategy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyUserLogFieldConfigRequest() = default ;
    ModifyUserLogFieldConfigRequest(const ModifyUserLogFieldConfigRequest &) = default ;
    ModifyUserLogFieldConfigRequest(ModifyUserLogFieldConfigRequest &&) = default ;
    ModifyUserLogFieldConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserLogFieldConfigRequest() = default ;
    ModifyUserLogFieldConfigRequest& operator=(const ModifyUserLogFieldConfigRequest &) = default ;
    ModifyUserLogFieldConfigRequest& operator=(ModifyUserLogFieldConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryType_ == nullptr
        && this->extendConfig_ == nullptr && this->fieldList_ == nullptr && this->instanceId_ == nullptr && this->logDeliveryStrategy_ == nullptr && this->regionId_ == nullptr
        && this->resourceManagerResourceGroupId_ == nullptr; };
    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline ModifyUserLogFieldConfigRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // extendConfig Field Functions 
    bool hasExtendConfig() const { return this->extendConfig_ != nullptr;};
    void deleteExtendConfig() { this->extendConfig_ = nullptr;};
    inline string getExtendConfig() const { DARABONBA_PTR_GET_DEFAULT(extendConfig_, "") };
    inline ModifyUserLogFieldConfigRequest& setExtendConfig(string extendConfig) { DARABONBA_PTR_SET_VALUE(extendConfig_, extendConfig) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline string getFieldList() const { DARABONBA_PTR_GET_DEFAULT(fieldList_, "") };
    inline ModifyUserLogFieldConfigRequest& setFieldList(string fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyUserLogFieldConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logDeliveryStrategy Field Functions 
    bool hasLogDeliveryStrategy() const { return this->logDeliveryStrategy_ != nullptr;};
    void deleteLogDeliveryStrategy() { this->logDeliveryStrategy_ = nullptr;};
    inline string getLogDeliveryStrategy() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStrategy_, "") };
    inline ModifyUserLogFieldConfigRequest& setLogDeliveryStrategy(string logDeliveryStrategy) { DARABONBA_PTR_SET_VALUE(logDeliveryStrategy_, logDeliveryStrategy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyUserLogFieldConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyUserLogFieldConfigRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    shared_ptr<string> deliveryType_ {};
    shared_ptr<string> extendConfig_ {};
    // This parameter is required.
    shared_ptr<string> fieldList_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> logDeliveryStrategy_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
