// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODYMAINTENANCEATTRIBUTESMAINTENANCEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMAINTENANCEATTRIBUTESRESPONSEBODYMAINTENANCEATTRIBUTESMAINTENANCEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenance.hpp>
#include <alibabacloud/models/DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeMaintenanceWindows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaintenanceWindows, maintenanceWindows_);
      DARABONBA_PTR_TO_JSON(NotifyOnMaintenance, notifyOnMaintenance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaintenanceWindows, maintenanceWindows_);
      DARABONBA_PTR_FROM_JSON(NotifyOnMaintenance, notifyOnMaintenance_);
    };
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute() = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute(const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute(DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute &&) = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute() = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& operator=(const DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute &) = default ;
    DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& operator=(DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionOnMaintenance_ != nullptr
        && this->instanceId_ != nullptr && this->maintenanceWindows_ != nullptr && this->notifyOnMaintenance_ != nullptr; };
    // actionOnMaintenance Field Functions 
    bool hasActionOnMaintenance() const { return this->actionOnMaintenance_ != nullptr;};
    void deleteActionOnMaintenance() { this->actionOnMaintenance_ = nullptr;};
    inline const Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenance & actionOnMaintenance() const { DARABONBA_PTR_GET_CONST(actionOnMaintenance_, Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenance) };
    inline Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenance actionOnMaintenance() { DARABONBA_PTR_GET(actionOnMaintenance_, Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenance) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& setActionOnMaintenance(const Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenance & actionOnMaintenance) { DARABONBA_PTR_SET_VALUE(actionOnMaintenance_, actionOnMaintenance) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& setActionOnMaintenance(Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenance && actionOnMaintenance) { DARABONBA_PTR_SET_RVALUE(actionOnMaintenance_, actionOnMaintenance) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maintenanceWindows Field Functions 
    bool hasMaintenanceWindows() const { return this->maintenanceWindows_ != nullptr;};
    void deleteMaintenanceWindows() { this->maintenanceWindows_ = nullptr;};
    inline const Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeMaintenanceWindows & maintenanceWindows() const { DARABONBA_PTR_GET_CONST(maintenanceWindows_, Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeMaintenanceWindows) };
    inline Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeMaintenanceWindows maintenanceWindows() { DARABONBA_PTR_GET(maintenanceWindows_, Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeMaintenanceWindows) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& setMaintenanceWindows(const Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeMaintenanceWindows & maintenanceWindows) { DARABONBA_PTR_SET_VALUE(maintenanceWindows_, maintenanceWindows) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& setMaintenanceWindows(Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeMaintenanceWindows && maintenanceWindows) { DARABONBA_PTR_SET_RVALUE(maintenanceWindows_, maintenanceWindows) };


    // notifyOnMaintenance Field Functions 
    bool hasNotifyOnMaintenance() const { return this->notifyOnMaintenance_ != nullptr;};
    void deleteNotifyOnMaintenance() { this->notifyOnMaintenance_ = nullptr;};
    inline bool notifyOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(notifyOnMaintenance_, false) };
    inline DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttribute& setNotifyOnMaintenance(bool notifyOnMaintenance) { DARABONBA_PTR_SET_VALUE(notifyOnMaintenance_, notifyOnMaintenance) };


  protected:
    // The attributes of the maintenance action of the instance.
    std::shared_ptr<Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeActionOnMaintenance> actionOnMaintenance_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maintenance windows.
    std::shared_ptr<Models::DescribeInstanceMaintenanceAttributesResponseBodyMaintenanceAttributesMaintenanceAttributeMaintenanceWindows> maintenanceWindows_ = nullptr;
    // Indicates whether an event notification was sent before maintenance.
    std::shared_ptr<bool> notifyOnMaintenance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
