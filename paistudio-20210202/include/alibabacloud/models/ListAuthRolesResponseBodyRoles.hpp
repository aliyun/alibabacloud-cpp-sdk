// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHROLESRESPONSEBODYROLES_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHROLESRESPONSEBODYROLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAuthRolesResponseBodyRolesToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListAuthRolesResponseBodyRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthRolesResponseBodyRoles& obj) { 
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthRolesResponseBodyRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    ListAuthRolesResponseBodyRoles() = default ;
    ListAuthRolesResponseBodyRoles(const ListAuthRolesResponseBodyRoles &) = default ;
    ListAuthRolesResponseBodyRoles(ListAuthRolesResponseBodyRoles &&) = default ;
    ListAuthRolesResponseBodyRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthRolesResponseBodyRoles() = default ;
    ListAuthRolesResponseBodyRoles& operator=(const ListAuthRolesResponseBodyRoles &) = default ;
    ListAuthRolesResponseBodyRoles& operator=(ListAuthRolesResponseBodyRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isEnabled_ == nullptr
        && return this->roleARN_ == nullptr && return this->roleName_ == nullptr && return this->roleType_ == nullptr && return this->token_ == nullptr; };
    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline string isEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, "") };
    inline ListAuthRolesResponseBodyRoles& setIsEnabled(string isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string roleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline ListAuthRolesResponseBodyRoles& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListAuthRolesResponseBodyRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline ListAuthRolesResponseBodyRoles& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline const Models::ListAuthRolesResponseBodyRolesToken & token() const { DARABONBA_PTR_GET_CONST(token_, Models::ListAuthRolesResponseBodyRolesToken) };
    inline Models::ListAuthRolesResponseBodyRolesToken token() { DARABONBA_PTR_GET(token_, Models::ListAuthRolesResponseBodyRolesToken) };
    inline ListAuthRolesResponseBodyRoles& setToken(const Models::ListAuthRolesResponseBodyRolesToken & token) { DARABONBA_PTR_SET_VALUE(token_, token) };
    inline ListAuthRolesResponseBodyRoles& setToken(Models::ListAuthRolesResponseBodyRolesToken && token) { DARABONBA_PTR_SET_RVALUE(token_, token) };


  protected:
    std::shared_ptr<string> isEnabled_ = nullptr;
    std::shared_ptr<string> roleARN_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<string> roleType_ = nullptr;
    std::shared_ptr<Models::ListAuthRolesResponseBodyRolesToken> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
