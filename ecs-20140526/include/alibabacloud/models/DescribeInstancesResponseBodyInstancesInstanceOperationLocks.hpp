// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeInstancesResponseBodyInstancesInstanceOperationLocks() = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocks(const DescribeInstancesResponseBodyInstancesInstanceOperationLocks &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocks(DescribeInstancesResponseBodyInstancesInstanceOperationLocks &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceOperationLocks() = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocks& operator=(const DescribeInstancesResponseBodyInstancesInstanceOperationLocks &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceOperationLocks& operator=(DescribeInstancesResponseBodyInstancesInstanceOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lockReason_ != nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason> & lockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason> lockReason() { DARABONBA_PTR_GET(lockReason_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason>) };
    inline DescribeInstancesResponseBodyInstancesInstanceOperationLocks& setLockReason(const vector<Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
    inline DescribeInstancesResponseBodyInstancesInstanceOperationLocks& setLockReason(vector<Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocksLockReason>> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
