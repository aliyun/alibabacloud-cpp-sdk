// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceAttributeResponseBodyOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceAttributeResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceAttributeResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeRCInstanceAttributeResponseBodyOperationLocks() = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocks(const DescribeRCInstanceAttributeResponseBodyOperationLocks &) = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocks(DescribeRCInstanceAttributeResponseBodyOperationLocks &&) = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceAttributeResponseBodyOperationLocks() = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocks& operator=(const DescribeRCInstanceAttributeResponseBodyOperationLocks &) = default ;
    DescribeRCInstanceAttributeResponseBodyOperationLocks& operator=(DescribeRCInstanceAttributeResponseBodyOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockReason_ == nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline const vector<Models::DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason> & lockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<Models::DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason>) };
    inline vector<Models::DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason> lockReason() { DARABONBA_PTR_GET(lockReason_, vector<Models::DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason>) };
    inline DescribeRCInstanceAttributeResponseBodyOperationLocks& setLockReason(const vector<Models::DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
    inline DescribeRCInstanceAttributeResponseBodyOperationLocks& setLockReason(vector<Models::DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


  protected:
    std::shared_ptr<vector<Models::DescribeRCInstanceAttributeResponseBodyOperationLocksLockReason>> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
