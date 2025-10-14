// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEENSEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEENSEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AssociateEnsEipAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateEnsEipAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Standby, standby_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateEnsEipAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Standby, standby_);
    };
    AssociateEnsEipAddressRequest() = default ;
    AssociateEnsEipAddressRequest(const AssociateEnsEipAddressRequest &) = default ;
    AssociateEnsEipAddressRequest(AssociateEnsEipAddressRequest &&) = default ;
    AssociateEnsEipAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateEnsEipAddressRequest() = default ;
    AssociateEnsEipAddressRequest& operator=(const AssociateEnsEipAddressRequest &) = default ;
    AssociateEnsEipAddressRequest& operator=(AssociateEnsEipAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->standby_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline AssociateEnsEipAddressRequest& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssociateEnsEipAddressRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline AssociateEnsEipAddressRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // standby Field Functions 
    bool hasStandby() const { return this->standby_ != nullptr;};
    void deleteStandby() { this->standby_ = nullptr;};
    inline bool standby() const { DARABONBA_PTR_GET_DEFAULT(standby_, false) };
    inline AssociateEnsEipAddressRequest& setStandby(bool standby) { DARABONBA_PTR_SET_VALUE(standby_, standby) };


  protected:
    // The ID of the EIP that you want to associate.
    // 
    // This parameter is required.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The ID of the cloud service with which the EIP is associated.
    // 
    // >  You can specify the ID of an Edge Load Balancer (ELB) instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of instance with which you want to associate the EIP. Valid values:
    // 
    // *   **Nat**: NAT gateway.
    // *   **SlbInstance**: Edge Load Balancer (ELB) instance.
    // *   **NetworkInterface**: secondary elastic network interface (ENI).
    // *   **NatSlbInstance**: If you want to associate multiple EIPs with an ELB instance, you need to set the parameter to this value.
    // *   **EnsInstance** (default): ENS instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Specifies whether the EIP is a secondary EIP. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> standby_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
