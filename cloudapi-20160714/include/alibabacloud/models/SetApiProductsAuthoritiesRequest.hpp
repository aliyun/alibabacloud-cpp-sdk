// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPIPRODUCTSAUTHORITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPIPRODUCTSAUTHORITIESREQUEST_HPP_
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
  class SetApiProductsAuthoritiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApiProductsAuthoritiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductIds, apiProductIds_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetApiProductsAuthoritiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductIds, apiProductIds_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetApiProductsAuthoritiesRequest() = default ;
    SetApiProductsAuthoritiesRequest(const SetApiProductsAuthoritiesRequest &) = default ;
    SetApiProductsAuthoritiesRequest(SetApiProductsAuthoritiesRequest &&) = default ;
    SetApiProductsAuthoritiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApiProductsAuthoritiesRequest() = default ;
    SetApiProductsAuthoritiesRequest& operator=(const SetApiProductsAuthoritiesRequest &) = default ;
    SetApiProductsAuthoritiesRequest& operator=(SetApiProductsAuthoritiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiProductIds_ == nullptr
        && return this->appId_ == nullptr && return this->authValidTime_ == nullptr && return this->description_ == nullptr && return this->securityToken_ == nullptr; };
    // apiProductIds Field Functions 
    bool hasApiProductIds() const { return this->apiProductIds_ != nullptr;};
    void deleteApiProductIds() { this->apiProductIds_ = nullptr;};
    inline const vector<string> & apiProductIds() const { DARABONBA_PTR_GET_CONST(apiProductIds_, vector<string>) };
    inline vector<string> apiProductIds() { DARABONBA_PTR_GET(apiProductIds_, vector<string>) };
    inline SetApiProductsAuthoritiesRequest& setApiProductIds(const vector<string> & apiProductIds) { DARABONBA_PTR_SET_VALUE(apiProductIds_, apiProductIds) };
    inline SetApiProductsAuthoritiesRequest& setApiProductIds(vector<string> && apiProductIds) { DARABONBA_PTR_SET_RVALUE(apiProductIds_, apiProductIds) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline SetApiProductsAuthoritiesRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authValidTime Field Functions 
    bool hasAuthValidTime() const { return this->authValidTime_ != nullptr;};
    void deleteAuthValidTime() { this->authValidTime_ = nullptr;};
    inline string authValidTime() const { DARABONBA_PTR_GET_DEFAULT(authValidTime_, "") };
    inline SetApiProductsAuthoritiesRequest& setAuthValidTime(string authValidTime) { DARABONBA_PTR_SET_VALUE(authValidTime_, authValidTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetApiProductsAuthoritiesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetApiProductsAuthoritiesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The API products.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> apiProductIds_ = nullptr;
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // 授权有效时间的截止时间，请设置格林尼治标准时间(GMT), 如果为空，即为授权永久有效。
    std::shared_ptr<string> authValidTime_ = nullptr;
    // The authorization description.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
