// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyHybridCloudServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridCloudServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Continents, continents_);
      DARABONBA_PTR_TO_JSON(CustomName, customName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mid, mid_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridCloudServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Continents, continents_);
      DARABONBA_PTR_FROM_JSON(CustomName, customName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mid, mid_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyHybridCloudServerRequest() = default ;
    ModifyHybridCloudServerRequest(const ModifyHybridCloudServerRequest &) = default ;
    ModifyHybridCloudServerRequest(ModifyHybridCloudServerRequest &&) = default ;
    ModifyHybridCloudServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridCloudServerRequest() = default ;
    ModifyHybridCloudServerRequest& operator=(const ModifyHybridCloudServerRequest &) = default ;
    ModifyHybridCloudServerRequest& operator=(ModifyHybridCloudServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->continents_ == nullptr
        && this->customName_ == nullptr && this->instanceId_ == nullptr && this->mid_ == nullptr && this->operator_ == nullptr && this->regionCode_ == nullptr
        && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // continents Field Functions 
    bool hasContinents() const { return this->continents_ != nullptr;};
    void deleteContinents() { this->continents_ = nullptr;};
    inline string getContinents() const { DARABONBA_PTR_GET_DEFAULT(continents_, "") };
    inline ModifyHybridCloudServerRequest& setContinents(string continents) { DARABONBA_PTR_SET_VALUE(continents_, continents) };


    // customName Field Functions 
    bool hasCustomName() const { return this->customName_ != nullptr;};
    void deleteCustomName() { this->customName_ = nullptr;};
    inline string getCustomName() const { DARABONBA_PTR_GET_DEFAULT(customName_, "") };
    inline ModifyHybridCloudServerRequest& setCustomName(string customName) { DARABONBA_PTR_SET_VALUE(customName_, customName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHybridCloudServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mid Field Functions 
    bool hasMid() const { return this->mid_ != nullptr;};
    void deleteMid() { this->mid_ = nullptr;};
    inline string getMid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
    inline ModifyHybridCloudServerRequest& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ModifyHybridCloudServerRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline ModifyHybridCloudServerRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridCloudServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyHybridCloudServerRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The continent.
    // 
    // This parameter is required.
    shared_ptr<string> continents_ {};
    // The name of the node.
    // 
    // This parameter is required.
    shared_ptr<string> customName_ {};
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the node.
    // 
    // This parameter is required.
    shared_ptr<string> mid_ {};
    // The cloud service provider.
    // 
    // This parameter is required.
    shared_ptr<string> operator_ {};
    // The city.
    // 
    // This parameter is required.
    shared_ptr<string> regionCode_ {};
    // The region of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
