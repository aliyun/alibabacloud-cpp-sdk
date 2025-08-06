// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESREQUESTCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESREQUESTCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyReservedInstancesRequestConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReservedInstancesRequestConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceName, reservedInstanceName_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReservedInstancesRequestConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceName, reservedInstanceName_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ModifyReservedInstancesRequestConfiguration() = default ;
    ModifyReservedInstancesRequestConfiguration(const ModifyReservedInstancesRequestConfiguration &) = default ;
    ModifyReservedInstancesRequestConfiguration(ModifyReservedInstancesRequestConfiguration &&) = default ;
    ModifyReservedInstancesRequestConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReservedInstancesRequestConfiguration() = default ;
    ModifyReservedInstancesRequestConfiguration& operator=(const ModifyReservedInstancesRequestConfiguration &) = default ;
    ModifyReservedInstancesRequestConfiguration& operator=(ModifyReservedInstancesRequestConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceAmount_ != nullptr
        && this->instanceType_ != nullptr && this->reservedInstanceName_ != nullptr && this->scope_ != nullptr && this->zoneId_ != nullptr; };
    // instanceAmount Field Functions 
    bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
    void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
    inline int32_t instanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
    inline ModifyReservedInstancesRequestConfiguration& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyReservedInstancesRequestConfiguration& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // reservedInstanceName Field Functions 
    bool hasReservedInstanceName() const { return this->reservedInstanceName_ != nullptr;};
    void deleteReservedInstanceName() { this->reservedInstanceName_ = nullptr;};
    inline string reservedInstanceName() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceName_, "") };
    inline ModifyReservedInstancesRequestConfiguration& setReservedInstanceName(string reservedInstanceName) { DARABONBA_PTR_SET_VALUE(reservedInstanceName_, reservedInstanceName) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ModifyReservedInstancesRequestConfiguration& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyReservedInstancesRequestConfiguration& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of pay-as-you-go instances of the specified instance type that the new reserved instance can match. The value of this parameter must be greater than or equal to 1.
    std::shared_ptr<int32_t> instanceAmount_ = nullptr;
    // The instance types that the new reserved instance can match.
    // 
    // >  The supported instance types are continuously updated. For information about the instance types supported by reserved instances, see [Overview of reserved instances](~~100370#3c1b682051vt4~~).
    std::shared_ptr<string> instanceType_ = nullptr;
    // The name of the new reserved instance.
    // 
    // The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with http:// or https://. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> reservedInstanceName_ = nullptr;
    // The scope level of the new reserved instance. Valid values:
    // 
    // *   Region
    // *   Zone
    // 
    // Default value: Region.
    std::shared_ptr<string> scope_ = nullptr;
    // The zone ID of the new reserved instance.
    // 
    // This parameter is required when you set `Scope` to `Zone`.
    // 
    // You can call the [DescribeZones](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
