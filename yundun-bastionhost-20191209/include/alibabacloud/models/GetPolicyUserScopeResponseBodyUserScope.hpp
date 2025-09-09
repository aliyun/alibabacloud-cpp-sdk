// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYUSERSCOPERESPONSEBODYUSERSCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYUSERSCOPERESPONSEBODYUSERSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyUserScopeResponseBodyUserScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyUserScopeResponseBodyUserScope& obj) { 
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyUserScopeResponseBodyUserScope& obj) { 
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    GetPolicyUserScopeResponseBodyUserScope() = default ;
    GetPolicyUserScopeResponseBodyUserScope(const GetPolicyUserScopeResponseBodyUserScope &) = default ;
    GetPolicyUserScopeResponseBodyUserScope(GetPolicyUserScopeResponseBodyUserScope &&) = default ;
    GetPolicyUserScopeResponseBodyUserScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyUserScopeResponseBodyUserScope() = default ;
    GetPolicyUserScopeResponseBodyUserScope& operator=(const GetPolicyUserScopeResponseBodyUserScope &) = default ;
    GetPolicyUserScopeResponseBodyUserScope& operator=(GetPolicyUserScopeResponseBodyUserScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scopeType_ != nullptr
        && this->userGroupIds_ != nullptr && this->userIds_ != nullptr; };
    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline GetPolicyUserScopeResponseBodyUserScope& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline GetPolicyUserScopeResponseBodyUserScope& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline GetPolicyUserScopeResponseBodyUserScope& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & userIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> userIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline GetPolicyUserScopeResponseBodyUserScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline GetPolicyUserScopeResponseBodyUserScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The scope of users to whom the control policy applies.
    // *   If **All** is returned for this parameter, the control policy applies to all users.
    // 
    // *   If no value is returned for this parameter, the control policy applies to the assets specified in the return values of UserGroupIds and UserIds.
    std::shared_ptr<string> scopeType_ = nullptr;
    // The user groups to which the control policy applies.
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    // The users to whom the control policy applies.
    std::shared_ptr<vector<string>> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
