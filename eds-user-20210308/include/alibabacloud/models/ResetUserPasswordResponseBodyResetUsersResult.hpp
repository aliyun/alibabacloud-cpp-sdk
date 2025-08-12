// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETUSERPASSWORDRESPONSEBODYRESETUSERSRESULT_HPP_
#define ALIBABACLOUD_MODELS_RESETUSERPASSWORDRESPONSEBODYRESETUSERSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResetUserPasswordResponseBodyResetUsersResultFailedUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ResetUserPasswordResponseBodyResetUsersResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetUserPasswordResponseBodyResetUsersResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
      DARABONBA_PTR_TO_JSON(ResetUsers, resetUsers_);
    };
    friend void from_json(const Darabonba::Json& j, ResetUserPasswordResponseBodyResetUsersResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
      DARABONBA_PTR_FROM_JSON(ResetUsers, resetUsers_);
    };
    ResetUserPasswordResponseBodyResetUsersResult() = default ;
    ResetUserPasswordResponseBodyResetUsersResult(const ResetUserPasswordResponseBodyResetUsersResult &) = default ;
    ResetUserPasswordResponseBodyResetUsersResult(ResetUserPasswordResponseBodyResetUsersResult &&) = default ;
    ResetUserPasswordResponseBodyResetUsersResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetUserPasswordResponseBodyResetUsersResult() = default ;
    ResetUserPasswordResponseBodyResetUsersResult& operator=(const ResetUserPasswordResponseBodyResetUsersResult &) = default ;
    ResetUserPasswordResponseBodyResetUsersResult& operator=(ResetUserPasswordResponseBodyResetUsersResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedUsers_ != nullptr
        && this->resetUsers_ != nullptr; };
    // failedUsers Field Functions 
    bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
    void deleteFailedUsers() { this->failedUsers_ = nullptr;};
    inline const vector<Models::ResetUserPasswordResponseBodyResetUsersResultFailedUsers> & failedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<Models::ResetUserPasswordResponseBodyResetUsersResultFailedUsers>) };
    inline vector<Models::ResetUserPasswordResponseBodyResetUsersResultFailedUsers> failedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<Models::ResetUserPasswordResponseBodyResetUsersResultFailedUsers>) };
    inline ResetUserPasswordResponseBodyResetUsersResult& setFailedUsers(const vector<Models::ResetUserPasswordResponseBodyResetUsersResultFailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
    inline ResetUserPasswordResponseBodyResetUsersResult& setFailedUsers(vector<Models::ResetUserPasswordResponseBodyResetUsersResultFailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


    // resetUsers Field Functions 
    bool hasResetUsers() const { return this->resetUsers_ != nullptr;};
    void deleteResetUsers() { this->resetUsers_ = nullptr;};
    inline const vector<string> & resetUsers() const { DARABONBA_PTR_GET_CONST(resetUsers_, vector<string>) };
    inline vector<string> resetUsers() { DARABONBA_PTR_GET(resetUsers_, vector<string>) };
    inline ResetUserPasswordResponseBodyResetUsersResult& setResetUsers(const vector<string> & resetUsers) { DARABONBA_PTR_SET_VALUE(resetUsers_, resetUsers) };
    inline ResetUserPasswordResponseBodyResetUsersResult& setResetUsers(vector<string> && resetUsers) { DARABONBA_PTR_SET_RVALUE(resetUsers_, resetUsers) };


  protected:
    // The information about the convenience users whose passwords failed to be reset.
    std::shared_ptr<vector<Models::ResetUserPasswordResponseBodyResetUsersResultFailedUsers>> failedUsers_ = nullptr;
    // The convenience users to which the system sent a password reset email.
    std::shared_ptr<vector<string>> resetUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
