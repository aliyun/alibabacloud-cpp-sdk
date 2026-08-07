// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAUTHCODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAUTHCODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GenerateAuthCodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAuthCodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucAppName, bucAppName_);
      DARABONBA_PTR_TO_JSON(SsoTicket, ssoTicket_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(ValidRedirectUri, validRedirectUri_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAuthCodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucAppName, bucAppName_);
      DARABONBA_PTR_FROM_JSON(SsoTicket, ssoTicket_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(ValidRedirectUri, validRedirectUri_);
    };
    GenerateAuthCodeShrinkRequest() = default ;
    GenerateAuthCodeShrinkRequest(const GenerateAuthCodeShrinkRequest &) = default ;
    GenerateAuthCodeShrinkRequest(GenerateAuthCodeShrinkRequest &&) = default ;
    GenerateAuthCodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAuthCodeShrinkRequest() = default ;
    GenerateAuthCodeShrinkRequest& operator=(const GenerateAuthCodeShrinkRequest &) = default ;
    GenerateAuthCodeShrinkRequest& operator=(GenerateAuthCodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucAppName_ == nullptr
        && this->ssoTicket_ == nullptr && this->tenantContextShrink_ == nullptr && this->validRedirectUri_ == nullptr; };
    // bucAppName Field Functions 
    bool hasBucAppName() const { return this->bucAppName_ != nullptr;};
    void deleteBucAppName() { this->bucAppName_ = nullptr;};
    inline string getBucAppName() const { DARABONBA_PTR_GET_DEFAULT(bucAppName_, "") };
    inline GenerateAuthCodeShrinkRequest& setBucAppName(string bucAppName) { DARABONBA_PTR_SET_VALUE(bucAppName_, bucAppName) };


    // ssoTicket Field Functions 
    bool hasSsoTicket() const { return this->ssoTicket_ != nullptr;};
    void deleteSsoTicket() { this->ssoTicket_ = nullptr;};
    inline string getSsoTicket() const { DARABONBA_PTR_GET_DEFAULT(ssoTicket_, "") };
    inline GenerateAuthCodeShrinkRequest& setSsoTicket(string ssoTicket) { DARABONBA_PTR_SET_VALUE(ssoTicket_, ssoTicket) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GenerateAuthCodeShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // validRedirectUri Field Functions 
    bool hasValidRedirectUri() const { return this->validRedirectUri_ != nullptr;};
    void deleteValidRedirectUri() { this->validRedirectUri_ = nullptr;};
    inline string getValidRedirectUri() const { DARABONBA_PTR_GET_DEFAULT(validRedirectUri_, "") };
    inline GenerateAuthCodeShrinkRequest& setValidRedirectUri(string validRedirectUri) { DARABONBA_PTR_SET_VALUE(validRedirectUri_, validRedirectUri) };


  protected:
    // This parameter is required.
    shared_ptr<string> bucAppName_ {};
    // This parameter is required.
    shared_ptr<string> ssoTicket_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> validRedirectUri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
