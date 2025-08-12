// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCKUSERSRESPONSEBODYLOCKUSERSRESULT_HPP_
#define ALIBABACLOUD_MODELS_LOCKUSERSRESPONSEBODYLOCKUSERSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LockUsersResponseBodyLockUsersResultFailedUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class LockUsersResponseBodyLockUsersResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LockUsersResponseBodyLockUsersResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
      DARABONBA_PTR_TO_JSON(LockedUsers, lockedUsers_);
    };
    friend void from_json(const Darabonba::Json& j, LockUsersResponseBodyLockUsersResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
      DARABONBA_PTR_FROM_JSON(LockedUsers, lockedUsers_);
    };
    LockUsersResponseBodyLockUsersResult() = default ;
    LockUsersResponseBodyLockUsersResult(const LockUsersResponseBodyLockUsersResult &) = default ;
    LockUsersResponseBodyLockUsersResult(LockUsersResponseBodyLockUsersResult &&) = default ;
    LockUsersResponseBodyLockUsersResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LockUsersResponseBodyLockUsersResult() = default ;
    LockUsersResponseBodyLockUsersResult& operator=(const LockUsersResponseBodyLockUsersResult &) = default ;
    LockUsersResponseBodyLockUsersResult& operator=(LockUsersResponseBodyLockUsersResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedUsers_ != nullptr
        && this->lockedUsers_ != nullptr; };
    // failedUsers Field Functions 
    bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
    void deleteFailedUsers() { this->failedUsers_ = nullptr;};
    inline const vector<Models::LockUsersResponseBodyLockUsersResultFailedUsers> & failedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<Models::LockUsersResponseBodyLockUsersResultFailedUsers>) };
    inline vector<Models::LockUsersResponseBodyLockUsersResultFailedUsers> failedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<Models::LockUsersResponseBodyLockUsersResultFailedUsers>) };
    inline LockUsersResponseBodyLockUsersResult& setFailedUsers(const vector<Models::LockUsersResponseBodyLockUsersResultFailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
    inline LockUsersResponseBodyLockUsersResult& setFailedUsers(vector<Models::LockUsersResponseBodyLockUsersResultFailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


    // lockedUsers Field Functions 
    bool hasLockedUsers() const { return this->lockedUsers_ != nullptr;};
    void deleteLockedUsers() { this->lockedUsers_ = nullptr;};
    inline const vector<string> & lockedUsers() const { DARABONBA_PTR_GET_CONST(lockedUsers_, vector<string>) };
    inline vector<string> lockedUsers() { DARABONBA_PTR_GET(lockedUsers_, vector<string>) };
    inline LockUsersResponseBodyLockUsersResult& setLockedUsers(const vector<string> & lockedUsers) { DARABONBA_PTR_SET_VALUE(lockedUsers_, lockedUsers) };
    inline LockUsersResponseBodyLockUsersResult& setLockedUsers(vector<string> && lockedUsers) { DARABONBA_PTR_SET_RVALUE(lockedUsers_, lockedUsers) };


  protected:
    // The convenience users that failed to be locked.
    std::shared_ptr<vector<Models::LockUsersResponseBodyLockUsersResultFailedUsers>> failedUsers_ = nullptr;
    // The convenience users that were locked.
    std::shared_ptr<vector<string>> lockedUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
