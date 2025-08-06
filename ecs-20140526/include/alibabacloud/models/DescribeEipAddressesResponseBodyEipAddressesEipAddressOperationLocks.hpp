// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESSOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESSOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocksLockReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks() = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks(const DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks &) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks(DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks &&) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks() = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks& operator=(const DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks &) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks& operator=(DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lockReason_ != nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline const vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocksLockReason> & lockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocksLockReason>) };
    inline vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocksLockReason> lockReason() { DARABONBA_PTR_GET(lockReason_, vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocksLockReason>) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks& setLockReason(const vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocksLockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocks& setLockReason(vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocksLockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


  protected:
    std::shared_ptr<vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressOperationLocksLockReason>> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
