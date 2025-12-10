// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABORTLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ABORTLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class AbortLockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbortLockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LockId, lockId_);
    };
    friend void from_json(const Darabonba::Json& j, AbortLockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LockId, lockId_);
    };
    AbortLockRequest() = default ;
    AbortLockRequest(const AbortLockRequest &) = default ;
    AbortLockRequest(AbortLockRequest &&) = default ;
    AbortLockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbortLockRequest() = default ;
    AbortLockRequest& operator=(const AbortLockRequest &) = default ;
    AbortLockRequest& operator=(AbortLockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockId_ == nullptr; };
    // lockId Field Functions 
    bool hasLockId() const { return this->lockId_ != nullptr;};
    void deleteLockId() { this->lockId_ = nullptr;};
    inline int64_t lockId() const { DARABONBA_PTR_GET_DEFAULT(lockId_, 0L) };
    inline AbortLockRequest& setLockId(int64_t lockId) { DARABONBA_PTR_SET_VALUE(lockId_, lockId) };


  protected:
    // The lock ID.
    std::shared_ptr<int64_t> lockId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
