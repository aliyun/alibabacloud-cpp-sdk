// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCESRESERVEDINSTANCEOPERATIONLOCKSOPERATIONLOCK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCESRESERVEDINSTANCEOPERATIONLOCKSOPERATIONLOCK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock() = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock(const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock(DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock &&) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock() = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock& operator=(const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock& operator=(DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockReason_ == nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceOperationLocksOperationLock& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


  protected:
    // The reason why the instance is locked.
    std::shared_ptr<string> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
