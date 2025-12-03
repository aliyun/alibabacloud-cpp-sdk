// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAPPSECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETAPPSECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ResetAppSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAppSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(NewAppKey, newAppKey_);
      DARABONBA_PTR_TO_JSON(NewAppSecret, newAppSecret_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAppSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(NewAppKey, newAppKey_);
      DARABONBA_PTR_FROM_JSON(NewAppSecret, newAppSecret_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ResetAppSecretRequest() = default ;
    ResetAppSecretRequest(const ResetAppSecretRequest &) = default ;
    ResetAppSecretRequest(ResetAppSecretRequest &&) = default ;
    ResetAppSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAppSecretRequest() = default ;
    ResetAppSecretRequest& operator=(const ResetAppSecretRequest &) = default ;
    ResetAppSecretRequest& operator=(ResetAppSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->newAppKey_ == nullptr && return this->newAppSecret_ == nullptr && return this->securityToken_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ResetAppSecretRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // newAppKey Field Functions 
    bool hasNewAppKey() const { return this->newAppKey_ != nullptr;};
    void deleteNewAppKey() { this->newAppKey_ = nullptr;};
    inline string newAppKey() const { DARABONBA_PTR_GET_DEFAULT(newAppKey_, "") };
    inline ResetAppSecretRequest& setNewAppKey(string newAppKey) { DARABONBA_PTR_SET_VALUE(newAppKey_, newAppKey) };


    // newAppSecret Field Functions 
    bool hasNewAppSecret() const { return this->newAppSecret_ != nullptr;};
    void deleteNewAppSecret() { this->newAppSecret_ = nullptr;};
    inline string newAppSecret() const { DARABONBA_PTR_GET_DEFAULT(newAppSecret_, "") };
    inline ResetAppSecretRequest& setNewAppSecret(string newAppSecret) { DARABONBA_PTR_SET_VALUE(newAppSecret_, newAppSecret) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ResetAppSecretRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The key of the application that is used to make an API call.
    // 
    // This parameter is required.
    std::shared_ptr<string> appKey_ = nullptr;
    // The new AppKey that you set must be globally unique.
    std::shared_ptr<string> newAppKey_ = nullptr;
    // The new key of the application. To improve compatibility, we recommend that you use other parameters.
    std::shared_ptr<string> newAppSecret_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
