// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPASERVICERESPONSEBODYOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPASERVICERESPONSEBODYOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnIpaServiceResponseBodyOperationLocksLockReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaServiceResponseBodyOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaServiceResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaServiceResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeDcdnIpaServiceResponseBodyOperationLocks() = default ;
    DescribeDcdnIpaServiceResponseBodyOperationLocks(const DescribeDcdnIpaServiceResponseBodyOperationLocks &) = default ;
    DescribeDcdnIpaServiceResponseBodyOperationLocks(DescribeDcdnIpaServiceResponseBodyOperationLocks &&) = default ;
    DescribeDcdnIpaServiceResponseBodyOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaServiceResponseBodyOperationLocks() = default ;
    DescribeDcdnIpaServiceResponseBodyOperationLocks& operator=(const DescribeDcdnIpaServiceResponseBodyOperationLocks &) = default ;
    DescribeDcdnIpaServiceResponseBodyOperationLocks& operator=(DescribeDcdnIpaServiceResponseBodyOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lockReason_ != nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline const vector<Models::DescribeDcdnIpaServiceResponseBodyOperationLocksLockReason> & lockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<Models::DescribeDcdnIpaServiceResponseBodyOperationLocksLockReason>) };
    inline vector<Models::DescribeDcdnIpaServiceResponseBodyOperationLocksLockReason> lockReason() { DARABONBA_PTR_GET(lockReason_, vector<Models::DescribeDcdnIpaServiceResponseBodyOperationLocksLockReason>) };
    inline DescribeDcdnIpaServiceResponseBodyOperationLocks& setLockReason(const vector<Models::DescribeDcdnIpaServiceResponseBodyOperationLocksLockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
    inline DescribeDcdnIpaServiceResponseBodyOperationLocks& setLockReason(vector<Models::DescribeDcdnIpaServiceResponseBodyOperationLocksLockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnIpaServiceResponseBodyOperationLocksLockReason>> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
