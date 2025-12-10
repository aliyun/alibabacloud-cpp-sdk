// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERROLE_HPP_
#define ALIBABACLOUD_MODELS_USERROLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Role.hpp>
#include <alibabacloud/models/Principal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UserRole : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserRole& obj) { 
      DARABONBA_PTR_TO_JSON(GrantTime, grantTime_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, UserRole& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantTime, grantTime_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    UserRole() = default ;
    UserRole(const UserRole &) = default ;
    UserRole(UserRole &&) = default ;
    UserRole(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserRole() = default ;
    UserRole& operator=(const UserRole &) = default ;
    UserRole& operator=(UserRole &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grantTime_ == nullptr
        && return this->role_ == nullptr && return this->user_ == nullptr; };
    // grantTime Field Functions 
    bool hasGrantTime() const { return this->grantTime_ != nullptr;};
    void deleteGrantTime() { this->grantTime_ = nullptr;};
    inline int64_t grantTime() const { DARABONBA_PTR_GET_DEFAULT(grantTime_, 0L) };
    inline UserRole& setGrantTime(int64_t grantTime) { DARABONBA_PTR_SET_VALUE(grantTime_, grantTime) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const Role & role() const { DARABONBA_PTR_GET_CONST(role_, Role) };
    inline Role role() { DARABONBA_PTR_GET(role_, Role) };
    inline UserRole& setRole(const Role & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline UserRole& setRole(Role && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const Principal & user() const { DARABONBA_PTR_GET_CONST(user_, Principal) };
    inline Principal user() { DARABONBA_PTR_GET(user_, Principal) };
    inline UserRole& setUser(const Principal & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline UserRole& setUser(Principal && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<int64_t> grantTime_ = nullptr;
    std::shared_ptr<Role> role_ = nullptr;
    std::shared_ptr<Principal> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
