// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPIPRODUCTSAUTHORITIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPIPRODUCTSAUTHORITIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetApiProductsAuthoritiesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApiProductsAuthoritiesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductIds, apiProductIdsShrink_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetApiProductsAuthoritiesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductIds, apiProductIdsShrink_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetApiProductsAuthoritiesShrinkRequest() = default ;
    SetApiProductsAuthoritiesShrinkRequest(const SetApiProductsAuthoritiesShrinkRequest &) = default ;
    SetApiProductsAuthoritiesShrinkRequest(SetApiProductsAuthoritiesShrinkRequest &&) = default ;
    SetApiProductsAuthoritiesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApiProductsAuthoritiesShrinkRequest() = default ;
    SetApiProductsAuthoritiesShrinkRequest& operator=(const SetApiProductsAuthoritiesShrinkRequest &) = default ;
    SetApiProductsAuthoritiesShrinkRequest& operator=(SetApiProductsAuthoritiesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiProductIdsShrink_ == nullptr
        && return this->appId_ == nullptr && return this->authValidTime_ == nullptr && return this->description_ == nullptr && return this->securityToken_ == nullptr; };
    // apiProductIdsShrink Field Functions 
    bool hasApiProductIdsShrink() const { return this->apiProductIdsShrink_ != nullptr;};
    void deleteApiProductIdsShrink() { this->apiProductIdsShrink_ = nullptr;};
    inline string apiProductIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(apiProductIdsShrink_, "") };
    inline SetApiProductsAuthoritiesShrinkRequest& setApiProductIdsShrink(string apiProductIdsShrink) { DARABONBA_PTR_SET_VALUE(apiProductIdsShrink_, apiProductIdsShrink) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline SetApiProductsAuthoritiesShrinkRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authValidTime Field Functions 
    bool hasAuthValidTime() const { return this->authValidTime_ != nullptr;};
    void deleteAuthValidTime() { this->authValidTime_ = nullptr;};
    inline string authValidTime() const { DARABONBA_PTR_GET_DEFAULT(authValidTime_, "") };
    inline SetApiProductsAuthoritiesShrinkRequest& setAuthValidTime(string authValidTime) { DARABONBA_PTR_SET_VALUE(authValidTime_, authValidTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetApiProductsAuthoritiesShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetApiProductsAuthoritiesShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The API products.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiProductIdsShrink_ = nullptr;
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
