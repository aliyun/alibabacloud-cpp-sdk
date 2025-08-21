// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSERVICERESPONSEBODYOPERATIONLOCKSLOCKREASON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSERVICERESPONSEBODYOPERATIONLOCKSLOCKREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnServiceResponseBodyOperationLocksLockReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnServiceResponseBodyOperationLocksLockReason& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnServiceResponseBodyOperationLocksLockReason& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeCdnServiceResponseBodyOperationLocksLockReason() = default ;
    DescribeCdnServiceResponseBodyOperationLocksLockReason(const DescribeCdnServiceResponseBodyOperationLocksLockReason &) = default ;
    DescribeCdnServiceResponseBodyOperationLocksLockReason(DescribeCdnServiceResponseBodyOperationLocksLockReason &&) = default ;
    DescribeCdnServiceResponseBodyOperationLocksLockReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnServiceResponseBodyOperationLocksLockReason() = default ;
    DescribeCdnServiceResponseBodyOperationLocksLockReason& operator=(const DescribeCdnServiceResponseBodyOperationLocksLockReason &) = default ;
    DescribeCdnServiceResponseBodyOperationLocksLockReason& operator=(DescribeCdnServiceResponseBodyOperationLocksLockReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lockReason_ != nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeCdnServiceResponseBodyOperationLocksLockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


  protected:
    // The reason why the service is locked. A value of financial indicates that the service is locked due to overdue payments.
    std::shared_ptr<string> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
