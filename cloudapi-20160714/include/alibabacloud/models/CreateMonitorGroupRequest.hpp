// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateMonitorGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Auth, auth_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RawMonitorGroupId, rawMonitorGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Auth, auth_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RawMonitorGroupId, rawMonitorGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    CreateMonitorGroupRequest() = default ;
    CreateMonitorGroupRequest(const CreateMonitorGroupRequest &) = default ;
    CreateMonitorGroupRequest(CreateMonitorGroupRequest &&) = default ;
    CreateMonitorGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorGroupRequest() = default ;
    CreateMonitorGroupRequest& operator=(const CreateMonitorGroupRequest &) = default ;
    CreateMonitorGroupRequest& operator=(CreateMonitorGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auth_ == nullptr
        && this->groupId_ == nullptr && this->rawMonitorGroupId_ == nullptr && this->securityToken_ == nullptr; };
    // auth Field Functions 
    bool hasAuth() const { return this->auth_ != nullptr;};
    void deleteAuth() { this->auth_ = nullptr;};
    inline string getAuth() const { DARABONBA_PTR_GET_DEFAULT(auth_, "") };
    inline CreateMonitorGroupRequest& setAuth(string auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateMonitorGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // rawMonitorGroupId Field Functions 
    bool hasRawMonitorGroupId() const { return this->rawMonitorGroupId_ != nullptr;};
    void deleteRawMonitorGroupId() { this->rawMonitorGroupId_ = nullptr;};
    inline int64_t getRawMonitorGroupId() const { DARABONBA_PTR_GET_DEFAULT(rawMonitorGroupId_, 0L) };
    inline CreateMonitorGroupRequest& setRawMonitorGroupId(int64_t rawMonitorGroupId) { DARABONBA_PTR_SET_VALUE(rawMonitorGroupId_, rawMonitorGroupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateMonitorGroupRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The caller authentication status of the API. Valid values: **ok**: The authentication is successful. **mismatch**: The request is redirected. **servicenotfound**: A request error occurred. **Unknown**: An unknown error occurred.
    // 
    // This parameter is required.
    shared_ptr<string> auth_ {};
    // The ID of the API group.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the monitoring group.
    shared_ptr<int64_t> rawMonitorGroupId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
