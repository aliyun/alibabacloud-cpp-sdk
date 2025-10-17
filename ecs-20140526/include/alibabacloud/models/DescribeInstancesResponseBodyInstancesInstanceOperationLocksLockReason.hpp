// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEOPERATIONLOCKSLOCKREASON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEOPERATIONLOCKSLOCKREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason& obj) { 
      DARABONBA_PTR_TO_JSON(LockMsg, lockMsg_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason& obj) { 
      DARABONBA_PTR_FROM_JSON(LockMsg, lockMsg_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason() = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason(const DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason(DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason() = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason& operator=(const DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason& operator=(DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockMsg_ == nullptr
        && return this->lockReason_ == nullptr; };
    // lockMsg Field Functions 
    bool hasLockMsg() const { return this->lockMsg_ != nullptr;};
    void deleteLockMsg() { this->lockMsg_ = nullptr;};
    inline string lockMsg() const { DARABONBA_PTR_GET_DEFAULT(lockMsg_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason& setLockMsg(string lockMsg) { DARABONBA_PTR_SET_VALUE(lockMsg_, lockMsg) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


  protected:
    // The message returned when the instance was locked.
    std::shared_ptr<string> lockMsg_ = nullptr;
    // The reason why the instance was locked. Valid values:
    // 
    // *   financial: The instance was locked due to overdue payments.
    // *   security: The instance was locked due to security reasons.
    // *   recycling: The spot instance was locked and pending release.
    // *   dedicatedhostfinancial: The instance was locked due to overdue payments for the dedicated host.
    // *   refunded: The instance was locked because a refund was made for the instance.
    std::shared_ptr<string> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
