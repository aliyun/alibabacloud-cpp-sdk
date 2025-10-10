// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSLOADBALANCEROPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSLOADBALANCEROPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(LockType, lockType_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(LockType, lockType_);
    };
    ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks() = default ;
    ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks(const ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks(ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks &&) = default ;
    ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks() = default ;
    ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks& operator=(const ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks& operator=(ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lockReason_ != nullptr
        && this->lockType_ != nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // lockType Field Functions 
    bool hasLockType() const { return this->lockType_ != nullptr;};
    void deleteLockType() { this->lockType_ = nullptr;};
    inline string lockType() const { DARABONBA_PTR_GET_DEFAULT(lockType_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks& setLockType(string lockType) { DARABONBA_PTR_SET_VALUE(lockType_, lockType) };


  protected:
    // The reason why the ALB instance is locked. This parameter is valid only if **LoadBalancerBussinessStatus** is set to **Abnormal**.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The lock type. Valid values:
    // 
    // *   **SecurityLocked**: The ALB instance is locked due to security risks.
    // *   **RelatedResourceLocked**: The ALB instance is locked due to other resources associated with the ALB instance.
    // *   **FinancialLocked**: The ALB instance is locked due to overdue payments.
    // *   **ResidualLocked**: The ALB instance is locked because the associated resources have overdue payments and the resources are released.
    std::shared_ptr<string> lockType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
