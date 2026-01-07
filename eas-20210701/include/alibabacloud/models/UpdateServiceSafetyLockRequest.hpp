// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICESAFETYLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICESAFETYLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceSafetyLockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceSafetyLockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lock, lock_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceSafetyLockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lock, lock_);
    };
    UpdateServiceSafetyLockRequest() = default ;
    UpdateServiceSafetyLockRequest(const UpdateServiceSafetyLockRequest &) = default ;
    UpdateServiceSafetyLockRequest(UpdateServiceSafetyLockRequest &&) = default ;
    UpdateServiceSafetyLockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceSafetyLockRequest() = default ;
    UpdateServiceSafetyLockRequest& operator=(const UpdateServiceSafetyLockRequest &) = default ;
    UpdateServiceSafetyLockRequest& operator=(UpdateServiceSafetyLockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lock_ == nullptr; };
    // lock Field Functions 
    bool hasLock() const { return this->lock_ != nullptr;};
    void deleteLock() { this->lock_ = nullptr;};
    inline string getLock() const { DARABONBA_PTR_GET_DEFAULT(lock_, "") };
    inline UpdateServiceSafetyLockRequest& setLock(string lock) { DARABONBA_PTR_SET_VALUE(lock_, lock) };


  protected:
    // The lock scope. Valid values:
    // 
    // *   all: locks all operations.
    // *   dangerous: locks dangerous operations such as delete and stop operations.
    // *   none: locks no operations.
    // 
    // This parameter is required.
    shared_ptr<string> lock_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
