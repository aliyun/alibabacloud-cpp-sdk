// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSERVICERESPONSEBODYOPERATIONLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSERVICERESPONSEBODYOPERATIONLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodServiceResponseBodyOperationLocksLockReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodServiceResponseBodyOperationLocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodServiceResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodServiceResponseBodyOperationLocks& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeVodServiceResponseBodyOperationLocks() = default ;
    DescribeVodServiceResponseBodyOperationLocks(const DescribeVodServiceResponseBodyOperationLocks &) = default ;
    DescribeVodServiceResponseBodyOperationLocks(DescribeVodServiceResponseBodyOperationLocks &&) = default ;
    DescribeVodServiceResponseBodyOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodServiceResponseBodyOperationLocks() = default ;
    DescribeVodServiceResponseBodyOperationLocks& operator=(const DescribeVodServiceResponseBodyOperationLocks &) = default ;
    DescribeVodServiceResponseBodyOperationLocks& operator=(DescribeVodServiceResponseBodyOperationLocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lockReason_ != nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline const vector<Models::DescribeVodServiceResponseBodyOperationLocksLockReason> & lockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<Models::DescribeVodServiceResponseBodyOperationLocksLockReason>) };
    inline vector<Models::DescribeVodServiceResponseBodyOperationLocksLockReason> lockReason() { DARABONBA_PTR_GET(lockReason_, vector<Models::DescribeVodServiceResponseBodyOperationLocksLockReason>) };
    inline DescribeVodServiceResponseBodyOperationLocks& setLockReason(const vector<Models::DescribeVodServiceResponseBodyOperationLocksLockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
    inline DescribeVodServiceResponseBodyOperationLocks& setLockReason(vector<Models::DescribeVodServiceResponseBodyOperationLocksLockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodServiceResponseBodyOperationLocksLockReason>> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
