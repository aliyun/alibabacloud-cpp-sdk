// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAPIPRODUCTSAUTHORITIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAPIPRODUCTSAUTHORITIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveApiProductsAuthoritiesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveApiProductsAuthoritiesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductIds, apiProductIdsShrink_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveApiProductsAuthoritiesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductIds, apiProductIdsShrink_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    RemoveApiProductsAuthoritiesShrinkRequest() = default ;
    RemoveApiProductsAuthoritiesShrinkRequest(const RemoveApiProductsAuthoritiesShrinkRequest &) = default ;
    RemoveApiProductsAuthoritiesShrinkRequest(RemoveApiProductsAuthoritiesShrinkRequest &&) = default ;
    RemoveApiProductsAuthoritiesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveApiProductsAuthoritiesShrinkRequest() = default ;
    RemoveApiProductsAuthoritiesShrinkRequest& operator=(const RemoveApiProductsAuthoritiesShrinkRequest &) = default ;
    RemoveApiProductsAuthoritiesShrinkRequest& operator=(RemoveApiProductsAuthoritiesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiProductIdsShrink_ == nullptr
        && this->appId_ == nullptr && this->securityToken_ == nullptr; };
    // apiProductIdsShrink Field Functions 
    bool hasApiProductIdsShrink() const { return this->apiProductIdsShrink_ != nullptr;};
    void deleteApiProductIdsShrink() { this->apiProductIdsShrink_ = nullptr;};
    inline string getApiProductIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(apiProductIdsShrink_, "") };
    inline RemoveApiProductsAuthoritiesShrinkRequest& setApiProductIdsShrink(string apiProductIdsShrink) { DARABONBA_PTR_SET_VALUE(apiProductIdsShrink_, apiProductIdsShrink) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline RemoveApiProductsAuthoritiesShrinkRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RemoveApiProductsAuthoritiesShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The API products.
    // 
    // This parameter is required.
    shared_ptr<string> apiProductIdsShrink_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
