// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODYUNLOCKUSERSRESULT_HPP_
#define ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODYUNLOCKUSERSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UnlockUsersResponseBodyUnlockUsersResultFailedUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UnlockUsersResponseBodyUnlockUsersResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnlockUsersResponseBodyUnlockUsersResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
      DARABONBA_PTR_TO_JSON(UnlockedUsers, unlockedUsers_);
    };
    friend void from_json(const Darabonba::Json& j, UnlockUsersResponseBodyUnlockUsersResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
      DARABONBA_PTR_FROM_JSON(UnlockedUsers, unlockedUsers_);
    };
    UnlockUsersResponseBodyUnlockUsersResult() = default ;
    UnlockUsersResponseBodyUnlockUsersResult(const UnlockUsersResponseBodyUnlockUsersResult &) = default ;
    UnlockUsersResponseBodyUnlockUsersResult(UnlockUsersResponseBodyUnlockUsersResult &&) = default ;
    UnlockUsersResponseBodyUnlockUsersResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnlockUsersResponseBodyUnlockUsersResult() = default ;
    UnlockUsersResponseBodyUnlockUsersResult& operator=(const UnlockUsersResponseBodyUnlockUsersResult &) = default ;
    UnlockUsersResponseBodyUnlockUsersResult& operator=(UnlockUsersResponseBodyUnlockUsersResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedUsers_ == nullptr
        && return this->unlockedUsers_ == nullptr; };
    // failedUsers Field Functions 
    bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
    void deleteFailedUsers() { this->failedUsers_ = nullptr;};
    inline const vector<Models::UnlockUsersResponseBodyUnlockUsersResultFailedUsers> & failedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<Models::UnlockUsersResponseBodyUnlockUsersResultFailedUsers>) };
    inline vector<Models::UnlockUsersResponseBodyUnlockUsersResultFailedUsers> failedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<Models::UnlockUsersResponseBodyUnlockUsersResultFailedUsers>) };
    inline UnlockUsersResponseBodyUnlockUsersResult& setFailedUsers(const vector<Models::UnlockUsersResponseBodyUnlockUsersResultFailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
    inline UnlockUsersResponseBodyUnlockUsersResult& setFailedUsers(vector<Models::UnlockUsersResponseBodyUnlockUsersResultFailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


    // unlockedUsers Field Functions 
    bool hasUnlockedUsers() const { return this->unlockedUsers_ != nullptr;};
    void deleteUnlockedUsers() { this->unlockedUsers_ = nullptr;};
    inline const vector<string> & unlockedUsers() const { DARABONBA_PTR_GET_CONST(unlockedUsers_, vector<string>) };
    inline vector<string> unlockedUsers() { DARABONBA_PTR_GET(unlockedUsers_, vector<string>) };
    inline UnlockUsersResponseBodyUnlockUsersResult& setUnlockedUsers(const vector<string> & unlockedUsers) { DARABONBA_PTR_SET_VALUE(unlockedUsers_, unlockedUsers) };
    inline UnlockUsersResponseBodyUnlockUsersResult& setUnlockedUsers(vector<string> && unlockedUsers) { DARABONBA_PTR_SET_RVALUE(unlockedUsers_, unlockedUsers) };


  protected:
    // The convenience users that failed to be unlocked.
    std::shared_ptr<vector<Models::UnlockUsersResponseBodyUnlockUsersResultFailedUsers>> failedUsers_ = nullptr;
    // The convenience users that were unlocked.
    std::shared_ptr<vector<string>> unlockedUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
