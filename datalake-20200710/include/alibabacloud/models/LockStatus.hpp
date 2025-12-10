// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_LOCKSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class LockStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LockStatus& obj) { 
      DARABONBA_PTR_TO_JSON(LockId, lockId_);
      DARABONBA_PTR_TO_JSON(LockState, lockState_);
    };
    friend void from_json(const Darabonba::Json& j, LockStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(LockId, lockId_);
      DARABONBA_PTR_FROM_JSON(LockState, lockState_);
    };
    LockStatus() = default ;
    LockStatus(const LockStatus &) = default ;
    LockStatus(LockStatus &&) = default ;
    LockStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LockStatus() = default ;
    LockStatus& operator=(const LockStatus &) = default ;
    LockStatus& operator=(LockStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockId_ == nullptr
        && return this->lockState_ == nullptr; };
    // lockId Field Functions 
    bool hasLockId() const { return this->lockId_ != nullptr;};
    void deleteLockId() { this->lockId_ = nullptr;};
    inline int64_t lockId() const { DARABONBA_PTR_GET_DEFAULT(lockId_, 0L) };
    inline LockStatus& setLockId(int64_t lockId) { DARABONBA_PTR_SET_VALUE(lockId_, lockId) };


    // lockState Field Functions 
    bool hasLockState() const { return this->lockState_ != nullptr;};
    void deleteLockState() { this->lockState_ = nullptr;};
    inline string lockState() const { DARABONBA_PTR_GET_DEFAULT(lockState_, "") };
    inline LockStatus& setLockState(string lockState) { DARABONBA_PTR_SET_VALUE(lockState_, lockState) };


  protected:
    std::shared_ptr<int64_t> lockId_ = nullptr;
    std::shared_ptr<string> lockState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
