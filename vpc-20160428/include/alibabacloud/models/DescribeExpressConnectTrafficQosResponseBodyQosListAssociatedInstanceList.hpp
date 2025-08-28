// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESPONSEBODYQOSLISTASSOCIATEDINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRESPONSEBODYQOSLISTASSOCIATEDINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceProgressing, instanceProgressing_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceProgressing, instanceProgressing_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList() = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList(const DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList &) = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList(DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList &&) = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList() = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList& operator=(const DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList &) = default ;
    DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList& operator=(DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->instanceProgressing_ != nullptr && this->instanceStatus_ != nullptr && this->instanceType_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceProgressing Field Functions 
    bool hasInstanceProgressing() const { return this->instanceProgressing_ != nullptr;};
    void deleteInstanceProgressing() { this->instanceProgressing_ = nullptr;};
    inline int32_t instanceProgressing() const { DARABONBA_PTR_GET_DEFAULT(instanceProgressing_, 0) };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList& setInstanceProgressing(int32_t instanceProgressing) { DARABONBA_PTR_SET_VALUE(instanceProgressing_, instanceProgressing) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeExpressConnectTrafficQosResponseBodyQosListAssociatedInstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The ID of the instance to which the QoS policy is associated.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The configuration progress of the instance to which the QoS policy is associated. Valid values: **0** to **100**.
    std::shared_ptr<int32_t> instanceProgressing_ = nullptr;
    // The state of the instance to which the QoS policy is associated. Valid values:
    // 
    // - **Normal**: The instance is available.
    // - **Configuring**: The instance is being configured.
    // - **Deleting**: The instance is being deleted.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The type of the instance to which the QoS policy is associated. Only **PHYSICALCONNECTION** is returned.
    std::shared_ptr<string> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
