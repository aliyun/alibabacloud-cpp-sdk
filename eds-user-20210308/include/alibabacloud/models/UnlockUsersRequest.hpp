// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOCKUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNLOCKUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UnlockUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnlockUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoLockTime, autoLockTime_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, UnlockUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoLockTime, autoLockTime_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    UnlockUsersRequest() = default ;
    UnlockUsersRequest(const UnlockUsersRequest &) = default ;
    UnlockUsersRequest(UnlockUsersRequest &&) = default ;
    UnlockUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnlockUsersRequest() = default ;
    UnlockUsersRequest& operator=(const UnlockUsersRequest &) = default ;
    UnlockUsersRequest& operator=(UnlockUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoLockTime_ != nullptr
        && this->users_ != nullptr; };
    // autoLockTime Field Functions 
    bool hasAutoLockTime() const { return this->autoLockTime_ != nullptr;};
    void deleteAutoLockTime() { this->autoLockTime_ = nullptr;};
    inline string autoLockTime() const { DARABONBA_PTR_GET_DEFAULT(autoLockTime_, "") };
    inline UnlockUsersRequest& setAutoLockTime(string autoLockTime) { DARABONBA_PTR_SET_VALUE(autoLockTime_, autoLockTime) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline UnlockUsersRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline UnlockUsersRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The date on which the convenience users are automatically locked.
    std::shared_ptr<string> autoLockTime_ = nullptr;
    // The usernames of the convenience users that you want to unlock.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
