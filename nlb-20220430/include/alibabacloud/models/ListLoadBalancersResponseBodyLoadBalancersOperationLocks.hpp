// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListLoadBalancersResponseBodyLoadBalancersOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancersOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(LockType, lockType_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancersOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(LockType, lockType_);
    };
    ListLoadBalancersResponseBodyLoadBalancersOperationLocks() = default ;
    ListLoadBalancersResponseBodyLoadBalancersOperationLocks(const ListLoadBalancersResponseBodyLoadBalancersOperationLocks &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersOperationLocks(ListLoadBalancersResponseBodyLoadBalancersOperationLocks &&) = default ;
    ListLoadBalancersResponseBodyLoadBalancersOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBodyLoadBalancersOperationLocks() = default ;
    ListLoadBalancersResponseBodyLoadBalancersOperationLocks& operator=(const ListLoadBalancersResponseBodyLoadBalancersOperationLocks &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersOperationLocks& operator=(ListLoadBalancersResponseBodyLoadBalancersOperationLocks &&) = default ;
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
    inline ListLoadBalancersResponseBodyLoadBalancersOperationLocks& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // lockType Field Functions 
    bool hasLockType() const { return this->lockType_ != nullptr;};
    void deleteLockType() { this->lockType_ = nullptr;};
    inline string lockType() const { DARABONBA_PTR_GET_DEFAULT(lockType_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancersOperationLocks& setLockType(string lockType) { DARABONBA_PTR_SET_VALUE(lockType_, lockType) };


  protected:
    // The reason why the NLB instance is locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The type of lock. Valid values:
    // 
    // *   **SecurityLocked**: The NLB instance is locked due to security reasons.
    // *   **RelatedResourceLocked**: The NLB instance is locked due to association issues.
    // *   **FinancialLocked**: The NLB instance is locked due to overdue payments.
    // *   **ResidualLocked**: The NLB instance is locked because the payments of the associated resources are overdue and the resources are released.
    std::shared_ptr<string> lockType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
