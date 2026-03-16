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
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, UnlockUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoLockTime, autoLockTime_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
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
    virtual bool empty() const override { return this->autoLockTime_ == nullptr
        && this->businessChannel_ == nullptr && this->users_ == nullptr; };
    // autoLockTime Field Functions 
    bool hasAutoLockTime() const { return this->autoLockTime_ != nullptr;};
    void deleteAutoLockTime() { this->autoLockTime_ = nullptr;};
    inline string getAutoLockTime() const { DARABONBA_PTR_GET_DEFAULT(autoLockTime_, "") };
    inline UnlockUsersRequest& setAutoLockTime(string autoLockTime) { DARABONBA_PTR_SET_VALUE(autoLockTime_, autoLockTime) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline UnlockUsersRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline UnlockUsersRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline UnlockUsersRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The date on which the convenience users are automatically locked.
    shared_ptr<string> autoLockTime_ {};
    shared_ptr<string> businessChannel_ {};
    // The usernames of the convenience users that you want to unlock.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
