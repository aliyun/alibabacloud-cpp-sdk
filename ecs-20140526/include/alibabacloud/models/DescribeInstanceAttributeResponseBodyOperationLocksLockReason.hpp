// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYOPERATIONLOCKSLOCKREASON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYOPERATIONLOCKSLOCKREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceAttributeResponseBodyOperationLocksLockReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBodyOperationLocksLockReason& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBodyOperationLocksLockReason& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeInstanceAttributeResponseBodyOperationLocksLockReason() = default ;
    DescribeInstanceAttributeResponseBodyOperationLocksLockReason(const DescribeInstanceAttributeResponseBodyOperationLocksLockReason &) = default ;
    DescribeInstanceAttributeResponseBodyOperationLocksLockReason(DescribeInstanceAttributeResponseBodyOperationLocksLockReason &&) = default ;
    DescribeInstanceAttributeResponseBodyOperationLocksLockReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBodyOperationLocksLockReason() = default ;
    DescribeInstanceAttributeResponseBodyOperationLocksLockReason& operator=(const DescribeInstanceAttributeResponseBodyOperationLocksLockReason &) = default ;
    DescribeInstanceAttributeResponseBodyOperationLocksLockReason& operator=(DescribeInstanceAttributeResponseBodyOperationLocksLockReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockReason_ == nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeInstanceAttributeResponseBodyOperationLocksLockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


  protected:
    // The reason why the instance was locked. Valid values:
    // 
    // *   financial: The instance was locked due to overdue payments.
    // *   security: The instance was locked due to security reasons.
    // *   recycling: The spot instance was locked and pending release.
    // *   dedicatedhostfinancial: The instance was locked due to overdue payments for the dedicated host.
    // *   refunded: The instance was locked because a refund is made for the instance.
    std::shared_ptr<string> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
