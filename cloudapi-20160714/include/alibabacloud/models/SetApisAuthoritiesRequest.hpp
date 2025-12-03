// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPISAUTHORITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPISAUTHORITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetApisAuthoritiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApisAuthoritiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, SetApisAuthoritiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    SetApisAuthoritiesRequest() = default ;
    SetApisAuthoritiesRequest(const SetApisAuthoritiesRequest &) = default ;
    SetApisAuthoritiesRequest(SetApisAuthoritiesRequest &&) = default ;
    SetApisAuthoritiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApisAuthoritiesRequest() = default ;
    SetApisAuthoritiesRequest& operator=(const SetApisAuthoritiesRequest &) = default ;
    SetApisAuthoritiesRequest& operator=(SetApisAuthoritiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIds_ == nullptr
        && return this->appId_ == nullptr && return this->authValidTime_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->securityToken_ == nullptr
        && return this->stageName_ == nullptr; };
    // apiIds Field Functions 
    bool hasApiIds() const { return this->apiIds_ != nullptr;};
    void deleteApiIds() { this->apiIds_ = nullptr;};
    inline string apiIds() const { DARABONBA_PTR_GET_DEFAULT(apiIds_, "") };
    inline SetApisAuthoritiesRequest& setApiIds(string apiIds) { DARABONBA_PTR_SET_VALUE(apiIds_, apiIds) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline SetApisAuthoritiesRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authValidTime Field Functions 
    bool hasAuthValidTime() const { return this->authValidTime_ != nullptr;};
    void deleteAuthValidTime() { this->authValidTime_ = nullptr;};
    inline string authValidTime() const { DARABONBA_PTR_GET_DEFAULT(authValidTime_, "") };
    inline SetApisAuthoritiesRequest& setAuthValidTime(string authValidTime) { DARABONBA_PTR_SET_VALUE(authValidTime_, authValidTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetApisAuthoritiesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetApisAuthoritiesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetApisAuthoritiesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline SetApisAuthoritiesRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The IDs of the APIs. Separate multiple API IDs with commas (,). A maximum of 100 API IDs can be entered.
    std::shared_ptr<string> apiIds_ = nullptr;
    // The ID of the application. This ID is generated by the system and globally unique.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The time (UTC) when the authorization expires. If this parameter is empty, the authorization does not expire.
    std::shared_ptr<string> authValidTime_ = nullptr;
    // The description of the authorization.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group. This ID is generated by the system and globally unique.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    // 
    // This parameter is required.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
