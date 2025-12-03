// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPSAUTHORITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPPSAUTHORITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetAppsAuthoritiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAppsAuthoritiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, SetAppsAuthoritiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    SetAppsAuthoritiesRequest() = default ;
    SetAppsAuthoritiesRequest(const SetAppsAuthoritiesRequest &) = default ;
    SetAppsAuthoritiesRequest(SetAppsAuthoritiesRequest &&) = default ;
    SetAppsAuthoritiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAppsAuthoritiesRequest() = default ;
    SetAppsAuthoritiesRequest& operator=(const SetAppsAuthoritiesRequest &) = default ;
    SetAppsAuthoritiesRequest& operator=(SetAppsAuthoritiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->appIds_ == nullptr && return this->authValidTime_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->securityToken_ == nullptr
        && return this->stageName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline SetAppsAuthoritiesRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string appIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline SetAppsAuthoritiesRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // authValidTime Field Functions 
    bool hasAuthValidTime() const { return this->authValidTime_ != nullptr;};
    void deleteAuthValidTime() { this->authValidTime_ = nullptr;};
    inline string authValidTime() const { DARABONBA_PTR_GET_DEFAULT(authValidTime_, "") };
    inline SetAppsAuthoritiesRequest& setAuthValidTime(string authValidTime) { DARABONBA_PTR_SET_VALUE(authValidTime_, authValidTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetAppsAuthoritiesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetAppsAuthoritiesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetAppsAuthoritiesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline SetAppsAuthoritiesRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The ID of the API. This ID is generated by the system and globally unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiId_ = nullptr;
    // The IDs of applications. Separate multiple application IDs with commas (,). A maximum of 100 applications IDs can be entered.
    // 
    // This parameter is required.
    std::shared_ptr<string> appIds_ = nullptr;
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
