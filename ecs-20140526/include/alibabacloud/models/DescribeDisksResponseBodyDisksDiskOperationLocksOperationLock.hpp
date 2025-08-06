// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKOPERATIONLOCKSOPERATIONLOCK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKOPERATIONLOCKSOPERATIONLOCK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock() = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock(const DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock &) = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock(DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock &&) = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock() = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock& operator=(const DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock &) = default ;
    DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock& operator=(DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lockReason_ != nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDisksResponseBodyDisksDiskOperationLocksOperationLock& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


  protected:
    // The reason why the disk was locked.
    std::shared_ptr<string> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
