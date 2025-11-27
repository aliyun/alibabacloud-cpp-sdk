// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYOPERATIONLOCKSLOCKREASON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYOPERATIONLOCKSLOCKREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason() = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason(const DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason &) = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason(DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason &&) = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason() = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason& operator=(const DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason &) = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason& operator=(DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockReason_ == nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


  protected:
    // The reason why the instance is locked. Valid values:
    // 
    // *   **financial**: The instance is locked due to overdue payments.
    // *   **security**: The instance is locked for security purposes.
    // *   **recycling**: The instance is locked because the instance is a preemptible instance and pending to be released.
    // *   **dedicatedhostfinancial**: The instance is locked due to overdue payments for the dedicated host.
    // *   **refunded**: The instance is locked because a refund was made for the instance.
    std::shared_ptr<string> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
