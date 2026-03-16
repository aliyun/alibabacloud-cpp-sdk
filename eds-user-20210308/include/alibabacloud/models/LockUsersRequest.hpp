// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCKUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOCKUSERSREQUEST_HPP_
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
  class LockUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LockUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(LogoutSession, logoutSession_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, LockUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(LogoutSession, logoutSession_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    LockUsersRequest() = default ;
    LockUsersRequest(const LockUsersRequest &) = default ;
    LockUsersRequest(LockUsersRequest &&) = default ;
    LockUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LockUsersRequest() = default ;
    LockUsersRequest& operator=(const LockUsersRequest &) = default ;
    LockUsersRequest& operator=(LockUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->logoutSession_ == nullptr && this->users_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline LockUsersRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // logoutSession Field Functions 
    bool hasLogoutSession() const { return this->logoutSession_ != nullptr;};
    void deleteLogoutSession() { this->logoutSession_ = nullptr;};
    inline bool getLogoutSession() const { DARABONBA_PTR_GET_DEFAULT(logoutSession_, false) };
    inline LockUsersRequest& setLogoutSession(bool logoutSession) { DARABONBA_PTR_SET_VALUE(logoutSession_, logoutSession) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline LockUsersRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline LockUsersRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    shared_ptr<string> businessChannel_ {};
    shared_ptr<bool> logoutSession_ {};
    // The usernames of the convenience users that you want to lock.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
