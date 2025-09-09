// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRDSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRDSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CreateDrdsInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDrdsInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceSeries, instanceSeries_);
      DARABONBA_PTR_TO_JSON(IsAutoRenew, isAutoRenew_);
      DARABONBA_PTR_TO_JSON(MasterInstId, masterInstId_);
      DARABONBA_PTR_TO_JSON(MySQLVersion, mySQLVersion_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(isHa, isHa_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDrdsInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceSeries, instanceSeries_);
      DARABONBA_PTR_FROM_JSON(IsAutoRenew, isAutoRenew_);
      DARABONBA_PTR_FROM_JSON(MasterInstId, masterInstId_);
      DARABONBA_PTR_FROM_JSON(MySQLVersion, mySQLVersion_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(isHa, isHa_);
    };
    CreateDrdsInstanceRequest() = default ;
    CreateDrdsInstanceRequest(const CreateDrdsInstanceRequest &) = default ;
    CreateDrdsInstanceRequest(CreateDrdsInstanceRequest &&) = default ;
    CreateDrdsInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDrdsInstanceRequest() = default ;
    CreateDrdsInstanceRequest& operator=(const CreateDrdsInstanceRequest &) = default ;
    CreateDrdsInstanceRequest& operator=(CreateDrdsInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->duration_ != nullptr && this->instanceSeries_ != nullptr && this->isAutoRenew_ != nullptr && this->masterInstId_ != nullptr
        && this->mySQLVersion_ != nullptr && this->payType_ != nullptr && this->pricingCycle_ != nullptr && this->quantity_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->specification_ != nullptr && this->type_ != nullptr && this->vpcId_ != nullptr && this->vswitchId_ != nullptr
        && this->zoneId_ != nullptr && this->isHa_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDrdsInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDrdsInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateDrdsInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceSeries Field Functions 
    bool hasInstanceSeries() const { return this->instanceSeries_ != nullptr;};
    void deleteInstanceSeries() { this->instanceSeries_ = nullptr;};
    inline string instanceSeries() const { DARABONBA_PTR_GET_DEFAULT(instanceSeries_, "") };
    inline CreateDrdsInstanceRequest& setInstanceSeries(string instanceSeries) { DARABONBA_PTR_SET_VALUE(instanceSeries_, instanceSeries) };


    // isAutoRenew Field Functions 
    bool hasIsAutoRenew() const { return this->isAutoRenew_ != nullptr;};
    void deleteIsAutoRenew() { this->isAutoRenew_ = nullptr;};
    inline bool isAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(isAutoRenew_, false) };
    inline CreateDrdsInstanceRequest& setIsAutoRenew(bool isAutoRenew) { DARABONBA_PTR_SET_VALUE(isAutoRenew_, isAutoRenew) };


    // masterInstId Field Functions 
    bool hasMasterInstId() const { return this->masterInstId_ != nullptr;};
    void deleteMasterInstId() { this->masterInstId_ = nullptr;};
    inline string masterInstId() const { DARABONBA_PTR_GET_DEFAULT(masterInstId_, "") };
    inline CreateDrdsInstanceRequest& setMasterInstId(string masterInstId) { DARABONBA_PTR_SET_VALUE(masterInstId_, masterInstId) };


    // mySQLVersion Field Functions 
    bool hasMySQLVersion() const { return this->mySQLVersion_ != nullptr;};
    void deleteMySQLVersion() { this->mySQLVersion_ = nullptr;};
    inline int32_t mySQLVersion() const { DARABONBA_PTR_GET_DEFAULT(mySQLVersion_, 0) };
    inline CreateDrdsInstanceRequest& setMySQLVersion(int32_t mySQLVersion) { DARABONBA_PTR_SET_VALUE(mySQLVersion_, mySQLVersion) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDrdsInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateDrdsInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline CreateDrdsInstanceRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDrdsInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDrdsInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline CreateDrdsInstanceRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDrdsInstanceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDrdsInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline CreateDrdsInstanceRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDrdsInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // isHa Field Functions 
    bool hasIsHa() const { return this->isHa_ != nullptr;};
    void deleteIsHa() { this->isHa_ = nullptr;};
    inline bool isHa() const { DARABONBA_PTR_GET_DEFAULT(isHa_, false) };
    inline CreateDrdsInstanceRequest& setIsHa(bool isHa) { DARABONBA_PTR_SET_VALUE(isHa_, isHa) };


  protected:
    // Specifies the client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can only contain ASCII characters and cannot exceed 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies the description of the instance. The description must meet the following requirements:
    // 
    // *   The description cannot contain the prefix http:// or https://.
    // *   The description must start with a letter or a Chinese character, and can contain uppercase and lowercase letters, Chinese characters, digits, underscores (_), and hyphens (-).
    // *   The description must be 2 to 256 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies the purchase duration of the subscription instance.
    // 
    // *   If the PricingCycle parameter is set to year, the value range of the Duration parameter is 1 to 3.
    // *   If the PricingCycle parameter is set to month, the value range of the Duration parameter is 1 to 9.
    // 
    // >  This parameter only takes effect when the PayType parameter is set to drdsPre.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // Specifies the instance type of the instance. Valid values:
    // 
    // *   **drds.sn2.4c16g**: The instance is of the Starter Edition.
    // *   **drds.sn2.8c32g**: The instance is of the Standard Edition
    // *   **drds.sn2.16c64g**: The instance is of the Enterprise Edition.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceSeries_ = nullptr;
    // Specifies whether to enable automatic renewal. Valid values:
    // 
    // *   **true**: If the PricingCycle parameter is set to month, the subscription is automatically renewed for one month. If the PricingCycle parameter is set to year, the subscription is automatically renewed for one year.
    // *   **false**: The auto-renewal feature is disabled for the instance.
    // 
    // >  This parameter only takes effect when the PayType parameter is set to drdsPre.
    std::shared_ptr<bool> isAutoRenew_ = nullptr;
    // Specifies the ID of the primary instance. This parameter is only required when you create a read-only instance.
    std::shared_ptr<string> masterInstId_ = nullptr;
    // Specifies the MySQL version that is supported by the instance. Valid values:
    // 
    // *   **5**: The instance is fully compatible with MySQL 5.x. This value is the default value.
    // *   **8**: The instance is fully compatible with MySQL 8.0.
    // 
    // >  This parameter only takes effect when you create a primary instance. By default, the MySQL version of the read-only instance is the same as that of the primary instance.
    std::shared_ptr<int32_t> mySQLVersion_ = nullptr;
    // Specifies the billing method of the instance. Valid values:
    // 
    // *   **drdsPre**: The instance uses the subscription billing method.
    // *   **drdsPost**: The instance uses the pay-as-you-go billing method.
    // *   **drdsRo**: By default, the pay-as-you-go billing method is used when you create read-only instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // Specifies the unit of the subscription duration of the subscription instance. Valid values:
    // 
    // *   **year**: The unit of the subscription duration is year.
    // *   **month**: The unit of the subscription duration is month.
    // 
    // >  This parameter is required if you set the PayType parameter to drdsPre.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // Specifies the number of instances to be created. You can set the value only to 1. The value specifies that you can create one instance each time.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> quantity_ = nullptr;
    // Specifies the region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies the ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies the specification code of the instance. The value consists of the instance type and the specified instance specification. For example, you can set the value to drds.sn2.4c16g.8c32g.
    // 
    // This parameter is required.
    std::shared_ptr<string> specification_ = nullptr;
    // Specifies the type of the instance. Set the value to PRIVATE. The value PRIVATE specifies that the instance is a dedicated instance.
    // 
    // >  You can also set the value to 1 to specify that the instance is a dedicated instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // Specifies the ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Specifies the ID of the vSwitch.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // Specifies the zone ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
    // Specifies whether the instance is a high-availability instance.
    std::shared_ptr<bool> isHa_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
