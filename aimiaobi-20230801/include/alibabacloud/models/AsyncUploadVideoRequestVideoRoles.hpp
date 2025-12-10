// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOREQUESTVIDEOROLES_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEOREQUESTVIDEOROLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AsyncUploadVideoRequestVideoRolesRoleUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncUploadVideoRequestVideoRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncUploadVideoRequestVideoRoles& obj) { 
      DARABONBA_PTR_TO_JSON(RoleInfo, roleInfo_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(RoleUrls, roleUrls_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncUploadVideoRequestVideoRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleInfo, roleInfo_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(RoleUrls, roleUrls_);
    };
    AsyncUploadVideoRequestVideoRoles() = default ;
    AsyncUploadVideoRequestVideoRoles(const AsyncUploadVideoRequestVideoRoles &) = default ;
    AsyncUploadVideoRequestVideoRoles(AsyncUploadVideoRequestVideoRoles &&) = default ;
    AsyncUploadVideoRequestVideoRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncUploadVideoRequestVideoRoles() = default ;
    AsyncUploadVideoRequestVideoRoles& operator=(const AsyncUploadVideoRequestVideoRoles &) = default ;
    AsyncUploadVideoRequestVideoRoles& operator=(AsyncUploadVideoRequestVideoRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleInfo_ == nullptr
        && return this->roleName_ == nullptr && return this->roleUrls_ == nullptr; };
    // roleInfo Field Functions 
    bool hasRoleInfo() const { return this->roleInfo_ != nullptr;};
    void deleteRoleInfo() { this->roleInfo_ = nullptr;};
    inline string roleInfo() const { DARABONBA_PTR_GET_DEFAULT(roleInfo_, "") };
    inline AsyncUploadVideoRequestVideoRoles& setRoleInfo(string roleInfo) { DARABONBA_PTR_SET_VALUE(roleInfo_, roleInfo) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline AsyncUploadVideoRequestVideoRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // roleUrls Field Functions 
    bool hasRoleUrls() const { return this->roleUrls_ != nullptr;};
    void deleteRoleUrls() { this->roleUrls_ = nullptr;};
    inline const vector<Models::AsyncUploadVideoRequestVideoRolesRoleUrls> & roleUrls() const { DARABONBA_PTR_GET_CONST(roleUrls_, vector<Models::AsyncUploadVideoRequestVideoRolesRoleUrls>) };
    inline vector<Models::AsyncUploadVideoRequestVideoRolesRoleUrls> roleUrls() { DARABONBA_PTR_GET(roleUrls_, vector<Models::AsyncUploadVideoRequestVideoRolesRoleUrls>) };
    inline AsyncUploadVideoRequestVideoRoles& setRoleUrls(const vector<Models::AsyncUploadVideoRequestVideoRolesRoleUrls> & roleUrls) { DARABONBA_PTR_SET_VALUE(roleUrls_, roleUrls) };
    inline AsyncUploadVideoRequestVideoRoles& setRoleUrls(vector<Models::AsyncUploadVideoRequestVideoRolesRoleUrls> && roleUrls) { DARABONBA_PTR_SET_RVALUE(roleUrls_, roleUrls) };


  protected:
    std::shared_ptr<string> roleInfo_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<vector<Models::AsyncUploadVideoRequestVideoRolesRoleUrls>> roleUrls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
