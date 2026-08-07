// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAUTHCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAUTHCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GenerateAuthCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAuthCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucAppName, bucAppName_);
      DARABONBA_PTR_TO_JSON(SsoTicket, ssoTicket_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(ValidRedirectUri, validRedirectUri_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAuthCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucAppName, bucAppName_);
      DARABONBA_PTR_FROM_JSON(SsoTicket, ssoTicket_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(ValidRedirectUri, validRedirectUri_);
    };
    GenerateAuthCodeRequest() = default ;
    GenerateAuthCodeRequest(const GenerateAuthCodeRequest &) = default ;
    GenerateAuthCodeRequest(GenerateAuthCodeRequest &&) = default ;
    GenerateAuthCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAuthCodeRequest() = default ;
    GenerateAuthCodeRequest& operator=(const GenerateAuthCodeRequest &) = default ;
    GenerateAuthCodeRequest& operator=(GenerateAuthCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->bucAppName_ == nullptr
        && this->ssoTicket_ == nullptr && this->tenantContext_ == nullptr && this->validRedirectUri_ == nullptr; };
    // bucAppName Field Functions 
    bool hasBucAppName() const { return this->bucAppName_ != nullptr;};
    void deleteBucAppName() { this->bucAppName_ = nullptr;};
    inline string getBucAppName() const { DARABONBA_PTR_GET_DEFAULT(bucAppName_, "") };
    inline GenerateAuthCodeRequest& setBucAppName(string bucAppName) { DARABONBA_PTR_SET_VALUE(bucAppName_, bucAppName) };


    // ssoTicket Field Functions 
    bool hasSsoTicket() const { return this->ssoTicket_ != nullptr;};
    void deleteSsoTicket() { this->ssoTicket_ = nullptr;};
    inline string getSsoTicket() const { DARABONBA_PTR_GET_DEFAULT(ssoTicket_, "") };
    inline GenerateAuthCodeRequest& setSsoTicket(string ssoTicket) { DARABONBA_PTR_SET_VALUE(ssoTicket_, ssoTicket) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GenerateAuthCodeRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GenerateAuthCodeRequest::TenantContext) };
    inline GenerateAuthCodeRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GenerateAuthCodeRequest::TenantContext) };
    inline GenerateAuthCodeRequest& setTenantContext(const GenerateAuthCodeRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GenerateAuthCodeRequest& setTenantContext(GenerateAuthCodeRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // validRedirectUri Field Functions 
    bool hasValidRedirectUri() const { return this->validRedirectUri_ != nullptr;};
    void deleteValidRedirectUri() { this->validRedirectUri_ = nullptr;};
    inline string getValidRedirectUri() const { DARABONBA_PTR_GET_DEFAULT(validRedirectUri_, "") };
    inline GenerateAuthCodeRequest& setValidRedirectUri(string validRedirectUri) { DARABONBA_PTR_SET_VALUE(validRedirectUri_, validRedirectUri) };


  protected:
    // This parameter is required.
    shared_ptr<string> bucAppName_ {};
    // This parameter is required.
    shared_ptr<string> ssoTicket_ {};
    shared_ptr<GenerateAuthCodeRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> validRedirectUri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
