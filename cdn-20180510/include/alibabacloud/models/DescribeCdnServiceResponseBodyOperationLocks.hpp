// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSERVICERESPONSEBODYOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSERVICERESPONSEBODYOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnServiceResponseBodyOperationLocksLockReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnServiceResponseBodyOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnServiceResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnServiceResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeCdnServiceResponseBodyOperationLocks() = default ;
    DescribeCdnServiceResponseBodyOperationLocks(const DescribeCdnServiceResponseBodyOperationLocks &) = default ;
    DescribeCdnServiceResponseBodyOperationLocks(DescribeCdnServiceResponseBodyOperationLocks &&) = default ;
    DescribeCdnServiceResponseBodyOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnServiceResponseBodyOperationLocks() = default ;
    DescribeCdnServiceResponseBodyOperationLocks& operator=(const DescribeCdnServiceResponseBodyOperationLocks &) = default ;
    DescribeCdnServiceResponseBodyOperationLocks& operator=(DescribeCdnServiceResponseBodyOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockReason_ == nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline const vector<Models::DescribeCdnServiceResponseBodyOperationLocksLockReason> & lockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<Models::DescribeCdnServiceResponseBodyOperationLocksLockReason>) };
    inline vector<Models::DescribeCdnServiceResponseBodyOperationLocksLockReason> lockReason() { DARABONBA_PTR_GET(lockReason_, vector<Models::DescribeCdnServiceResponseBodyOperationLocksLockReason>) };
    inline DescribeCdnServiceResponseBodyOperationLocks& setLockReason(const vector<Models::DescribeCdnServiceResponseBodyOperationLocksLockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
    inline DescribeCdnServiceResponseBodyOperationLocks& setLockReason(vector<Models::DescribeCdnServiceResponseBodyOperationLocksLockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnServiceResponseBodyOperationLocksLockReason>> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
