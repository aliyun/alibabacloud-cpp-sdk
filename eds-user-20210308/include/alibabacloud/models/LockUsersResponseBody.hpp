// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCKUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOCKUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LockUsersResponseBodyLockUsersResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class LockUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LockUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LockUsersResult, lockUsersResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LockUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LockUsersResult, lockUsersResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LockUsersResponseBody() = default ;
    LockUsersResponseBody(const LockUsersResponseBody &) = default ;
    LockUsersResponseBody(LockUsersResponseBody &&) = default ;
    LockUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LockUsersResponseBody() = default ;
    LockUsersResponseBody& operator=(const LockUsersResponseBody &) = default ;
    LockUsersResponseBody& operator=(LockUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lockUsersResult_ != nullptr
        && this->requestId_ != nullptr; };
    // lockUsersResult Field Functions 
    bool hasLockUsersResult() const { return this->lockUsersResult_ != nullptr;};
    void deleteLockUsersResult() { this->lockUsersResult_ = nullptr;};
    inline const LockUsersResponseBodyLockUsersResult & lockUsersResult() const { DARABONBA_PTR_GET_CONST(lockUsersResult_, LockUsersResponseBodyLockUsersResult) };
    inline LockUsersResponseBodyLockUsersResult lockUsersResult() { DARABONBA_PTR_GET(lockUsersResult_, LockUsersResponseBodyLockUsersResult) };
    inline LockUsersResponseBody& setLockUsersResult(const LockUsersResponseBodyLockUsersResult & lockUsersResult) { DARABONBA_PTR_SET_VALUE(lockUsersResult_, lockUsersResult) };
    inline LockUsersResponseBody& setLockUsersResult(LockUsersResponseBodyLockUsersResult && lockUsersResult) { DARABONBA_PTR_SET_RVALUE(lockUsersResult_, lockUsersResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LockUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result of the locking the convenience user.
    std::shared_ptr<LockUsersResponseBodyLockUsersResult> lockUsersResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
