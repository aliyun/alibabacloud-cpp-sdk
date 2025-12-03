// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETGROUPAUTHAPPCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETGROUPAUTHAPPCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetGroupAuthAppCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetGroupAuthAppCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthAppCode, authAppCode_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetGroupAuthAppCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthAppCode, authAppCode_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetGroupAuthAppCodeRequest() = default ;
    SetGroupAuthAppCodeRequest(const SetGroupAuthAppCodeRequest &) = default ;
    SetGroupAuthAppCodeRequest(SetGroupAuthAppCodeRequest &&) = default ;
    SetGroupAuthAppCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetGroupAuthAppCodeRequest() = default ;
    SetGroupAuthAppCodeRequest& operator=(const SetGroupAuthAppCodeRequest &) = default ;
    SetGroupAuthAppCodeRequest& operator=(SetGroupAuthAppCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authAppCode_ == nullptr
        && return this->groupId_ == nullptr && return this->securityToken_ == nullptr; };
    // authAppCode Field Functions 
    bool hasAuthAppCode() const { return this->authAppCode_ != nullptr;};
    void deleteAuthAppCode() { this->authAppCode_ = nullptr;};
    inline string authAppCode() const { DARABONBA_PTR_GET_DEFAULT(authAppCode_, "") };
    inline SetGroupAuthAppCodeRequest& setAuthAppCode(string authAppCode) { DARABONBA_PTR_SET_VALUE(authAppCode_, authAppCode) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetGroupAuthAppCodeRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetGroupAuthAppCodeRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> authAppCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
