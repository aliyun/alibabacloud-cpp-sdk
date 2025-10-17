// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyOperationLocksLockReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceAttributeResponseBodyOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeInstanceAttributeResponseBodyOperationLocks() = default ;
    DescribeInstanceAttributeResponseBodyOperationLocks(const DescribeInstanceAttributeResponseBodyOperationLocks &) = default ;
    DescribeInstanceAttributeResponseBodyOperationLocks(DescribeInstanceAttributeResponseBodyOperationLocks &&) = default ;
    DescribeInstanceAttributeResponseBodyOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBodyOperationLocks() = default ;
    DescribeInstanceAttributeResponseBodyOperationLocks& operator=(const DescribeInstanceAttributeResponseBodyOperationLocks &) = default ;
    DescribeInstanceAttributeResponseBodyOperationLocks& operator=(DescribeInstanceAttributeResponseBodyOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockReason_ == nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline const vector<Models::DescribeInstanceAttributeResponseBodyOperationLocksLockReason> & lockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<Models::DescribeInstanceAttributeResponseBodyOperationLocksLockReason>) };
    inline vector<Models::DescribeInstanceAttributeResponseBodyOperationLocksLockReason> lockReason() { DARABONBA_PTR_GET(lockReason_, vector<Models::DescribeInstanceAttributeResponseBodyOperationLocksLockReason>) };
    inline DescribeInstanceAttributeResponseBodyOperationLocks& setLockReason(const vector<Models::DescribeInstanceAttributeResponseBodyOperationLocksLockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
    inline DescribeInstanceAttributeResponseBodyOperationLocks& setLockReason(vector<Models::DescribeInstanceAttributeResponseBodyOperationLocksLockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceAttributeResponseBodyOperationLocksLockReason>> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
