// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYUSERSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYUSERSCOPERESPONSEBODY_HPP_
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
  class GetPolicyUserScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyUserScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserScope, userScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyUserScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserScope, userScope_);
    };
    GetPolicyUserScopeResponseBody() = default ;
    GetPolicyUserScopeResponseBody(const GetPolicyUserScopeResponseBody &) = default ;
    GetPolicyUserScopeResponseBody(GetPolicyUserScopeResponseBody &&) = default ;
    GetPolicyUserScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyUserScopeResponseBody() = default ;
    GetPolicyUserScopeResponseBody& operator=(const GetPolicyUserScopeResponseBody &) = default ;
    GetPolicyUserScopeResponseBody& operator=(GetPolicyUserScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserScope& obj) { 
        DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
        DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, UserScope& obj) { 
        DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
        DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      };
      UserScope() = default ;
      UserScope(const UserScope &) = default ;
      UserScope(UserScope &&) = default ;
      UserScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserScope() = default ;
      UserScope& operator=(const UserScope &) = default ;
      UserScope& operator=(UserScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->scopeType_ == nullptr
        && this->userGroupIds_ == nullptr && this->userIds_ == nullptr; };
      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
      inline UserScope& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


      // userGroupIds Field Functions 
      bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
      void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
      inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
      inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
      inline UserScope& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
      inline UserScope& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline UserScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline UserScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      // The scope of users to whom the control policy applies.
      // *   If **All** is returned for this parameter, the control policy applies to all users.
      // 
      // *   If no value is returned for this parameter, the control policy applies to the assets specified in the return values of UserGroupIds and UserIds.
      shared_ptr<string> scopeType_ {};
      // The user groups to which the control policy applies.
      shared_ptr<vector<string>> userGroupIds_ {};
      // The users to whom the control policy applies.
      shared_ptr<vector<string>> userIds_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userScope_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyUserScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userScope Field Functions 
    bool hasUserScope() const { return this->userScope_ != nullptr;};
    void deleteUserScope() { this->userScope_ = nullptr;};
    inline const GetPolicyUserScopeResponseBody::UserScope & getUserScope() const { DARABONBA_PTR_GET_CONST(userScope_, GetPolicyUserScopeResponseBody::UserScope) };
    inline GetPolicyUserScopeResponseBody::UserScope getUserScope() { DARABONBA_PTR_GET(userScope_, GetPolicyUserScopeResponseBody::UserScope) };
    inline GetPolicyUserScopeResponseBody& setUserScope(const GetPolicyUserScopeResponseBody::UserScope & userScope) { DARABONBA_PTR_SET_VALUE(userScope_, userScope) };
    inline GetPolicyUserScopeResponseBody& setUserScope(GetPolicyUserScopeResponseBody::UserScope && userScope) { DARABONBA_PTR_SET_RVALUE(userScope_, userScope) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The users to whom the control policy applies.
    shared_ptr<GetPolicyUserScopeResponseBody::UserScope> userScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
