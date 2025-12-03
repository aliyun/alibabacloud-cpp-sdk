// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPSAUTHTOAPIPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPPSAUTHTOAPIPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetAppsAuthToApiProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAppsAuthToApiProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetAppsAuthToApiProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetAppsAuthToApiProductRequest() = default ;
    SetAppsAuthToApiProductRequest(const SetAppsAuthToApiProductRequest &) = default ;
    SetAppsAuthToApiProductRequest(SetAppsAuthToApiProductRequest &&) = default ;
    SetAppsAuthToApiProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAppsAuthToApiProductRequest() = default ;
    SetAppsAuthToApiProductRequest& operator=(const SetAppsAuthToApiProductRequest &) = default ;
    SetAppsAuthToApiProductRequest& operator=(SetAppsAuthToApiProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiProductId_ == nullptr
        && return this->appIds_ == nullptr && return this->authValidTime_ == nullptr && return this->description_ == nullptr && return this->securityToken_ == nullptr; };
    // apiProductId Field Functions 
    bool hasApiProductId() const { return this->apiProductId_ != nullptr;};
    void deleteApiProductId() { this->apiProductId_ = nullptr;};
    inline string apiProductId() const { DARABONBA_PTR_GET_DEFAULT(apiProductId_, "") };
    inline SetAppsAuthToApiProductRequest& setApiProductId(string apiProductId) { DARABONBA_PTR_SET_VALUE(apiProductId_, apiProductId) };


    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline const vector<int64_t> & appIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<int64_t>) };
    inline vector<int64_t> appIds() { DARABONBA_PTR_GET(appIds_, vector<int64_t>) };
    inline SetAppsAuthToApiProductRequest& setAppIds(const vector<int64_t> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
    inline SetAppsAuthToApiProductRequest& setAppIds(vector<int64_t> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


    // authValidTime Field Functions 
    bool hasAuthValidTime() const { return this->authValidTime_ != nullptr;};
    void deleteAuthValidTime() { this->authValidTime_ = nullptr;};
    inline string authValidTime() const { DARABONBA_PTR_GET_DEFAULT(authValidTime_, "") };
    inline SetAppsAuthToApiProductRequest& setAuthValidTime(string authValidTime) { DARABONBA_PTR_SET_VALUE(authValidTime_, authValidTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetAppsAuthToApiProductRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetAppsAuthToApiProductRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the API product.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiProductId_ = nullptr;
    // The IDs of the applications that you want to authorize.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> appIds_ = nullptr;
    // The time (UTC) when the authorization expires. If this parameter is empty, the authorization does not expire.
    std::shared_ptr<string> authValidTime_ = nullptr;
    // The description of the authorization.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
