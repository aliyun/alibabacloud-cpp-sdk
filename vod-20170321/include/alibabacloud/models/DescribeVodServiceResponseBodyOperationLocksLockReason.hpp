// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSERVICERESPONSEBODYOPERATIONLOCKSLOCKREASON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSERVICERESPONSEBODYOPERATIONLOCKSLOCKREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodServiceResponseBodyOperationLocksLockReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodServiceResponseBodyOperationLocksLockReason& obj) { 
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodServiceResponseBodyOperationLocksLockReason& obj) { 
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
    };
    DescribeVodServiceResponseBodyOperationLocksLockReason() = default ;
    DescribeVodServiceResponseBodyOperationLocksLockReason(const DescribeVodServiceResponseBodyOperationLocksLockReason &) = default ;
    DescribeVodServiceResponseBodyOperationLocksLockReason(DescribeVodServiceResponseBodyOperationLocksLockReason &&) = default ;
    DescribeVodServiceResponseBodyOperationLocksLockReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodServiceResponseBodyOperationLocksLockReason() = default ;
    DescribeVodServiceResponseBodyOperationLocksLockReason& operator=(const DescribeVodServiceResponseBodyOperationLocksLockReason &) = default ;
    DescribeVodServiceResponseBodyOperationLocksLockReason& operator=(DescribeVodServiceResponseBodyOperationLocksLockReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lockReason_ != nullptr; };
    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeVodServiceResponseBodyOperationLocksLockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


  protected:
    std::shared_ptr<string> lockReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
