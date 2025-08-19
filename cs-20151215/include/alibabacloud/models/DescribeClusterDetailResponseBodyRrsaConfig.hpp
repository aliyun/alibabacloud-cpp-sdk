// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODYRRSACONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODYRRSACONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterDetailResponseBodyRrsaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterDetailResponseBodyRrsaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(audience, audience_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(issuer, issuer_);
      DARABONBA_PTR_TO_JSON(jwks_url, jwksUrl_);
      DARABONBA_PTR_TO_JSON(max_oidc_token_expiration, maxOidcTokenExpiration_);
      DARABONBA_PTR_TO_JSON(oidc_arn, oidcArn_);
      DARABONBA_PTR_TO_JSON(oidc_name, oidcName_);
      DARABONBA_PTR_TO_JSON(open_api_configuration_url, openApiConfigurationUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterDetailResponseBodyRrsaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(audience, audience_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(jwks_url, jwksUrl_);
      DARABONBA_PTR_FROM_JSON(max_oidc_token_expiration, maxOidcTokenExpiration_);
      DARABONBA_PTR_FROM_JSON(oidc_arn, oidcArn_);
      DARABONBA_PTR_FROM_JSON(oidc_name, oidcName_);
      DARABONBA_PTR_FROM_JSON(open_api_configuration_url, openApiConfigurationUrl_);
    };
    DescribeClusterDetailResponseBodyRrsaConfig() = default ;
    DescribeClusterDetailResponseBodyRrsaConfig(const DescribeClusterDetailResponseBodyRrsaConfig &) = default ;
    DescribeClusterDetailResponseBodyRrsaConfig(DescribeClusterDetailResponseBodyRrsaConfig &&) = default ;
    DescribeClusterDetailResponseBodyRrsaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterDetailResponseBodyRrsaConfig() = default ;
    DescribeClusterDetailResponseBodyRrsaConfig& operator=(const DescribeClusterDetailResponseBodyRrsaConfig &) = default ;
    DescribeClusterDetailResponseBodyRrsaConfig& operator=(DescribeClusterDetailResponseBodyRrsaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audience_ != nullptr
        && this->enabled_ != nullptr && this->issuer_ != nullptr && this->jwksUrl_ != nullptr && this->maxOidcTokenExpiration_ != nullptr && this->oidcArn_ != nullptr
        && this->oidcName_ != nullptr && this->openApiConfigurationUrl_ != nullptr; };
    // audience Field Functions 
    bool hasAudience() const { return this->audience_ != nullptr;};
    void deleteAudience() { this->audience_ = nullptr;};
    inline string audience() const { DARABONBA_PTR_GET_DEFAULT(audience_, "") };
    inline DescribeClusterDetailResponseBodyRrsaConfig& setAudience(string audience) { DARABONBA_PTR_SET_VALUE(audience_, audience) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeClusterDetailResponseBodyRrsaConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribeClusterDetailResponseBodyRrsaConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwksUrl Field Functions 
    bool hasJwksUrl() const { return this->jwksUrl_ != nullptr;};
    void deleteJwksUrl() { this->jwksUrl_ = nullptr;};
    inline string jwksUrl() const { DARABONBA_PTR_GET_DEFAULT(jwksUrl_, "") };
    inline DescribeClusterDetailResponseBodyRrsaConfig& setJwksUrl(string jwksUrl) { DARABONBA_PTR_SET_VALUE(jwksUrl_, jwksUrl) };


    // maxOidcTokenExpiration Field Functions 
    bool hasMaxOidcTokenExpiration() const { return this->maxOidcTokenExpiration_ != nullptr;};
    void deleteMaxOidcTokenExpiration() { this->maxOidcTokenExpiration_ = nullptr;};
    inline string maxOidcTokenExpiration() const { DARABONBA_PTR_GET_DEFAULT(maxOidcTokenExpiration_, "") };
    inline DescribeClusterDetailResponseBodyRrsaConfig& setMaxOidcTokenExpiration(string maxOidcTokenExpiration) { DARABONBA_PTR_SET_VALUE(maxOidcTokenExpiration_, maxOidcTokenExpiration) };


    // oidcArn Field Functions 
    bool hasOidcArn() const { return this->oidcArn_ != nullptr;};
    void deleteOidcArn() { this->oidcArn_ = nullptr;};
    inline string oidcArn() const { DARABONBA_PTR_GET_DEFAULT(oidcArn_, "") };
    inline DescribeClusterDetailResponseBodyRrsaConfig& setOidcArn(string oidcArn) { DARABONBA_PTR_SET_VALUE(oidcArn_, oidcArn) };


    // oidcName Field Functions 
    bool hasOidcName() const { return this->oidcName_ != nullptr;};
    void deleteOidcName() { this->oidcName_ = nullptr;};
    inline string oidcName() const { DARABONBA_PTR_GET_DEFAULT(oidcName_, "") };
    inline DescribeClusterDetailResponseBodyRrsaConfig& setOidcName(string oidcName) { DARABONBA_PTR_SET_VALUE(oidcName_, oidcName) };


    // openApiConfigurationUrl Field Functions 
    bool hasOpenApiConfigurationUrl() const { return this->openApiConfigurationUrl_ != nullptr;};
    void deleteOpenApiConfigurationUrl() { this->openApiConfigurationUrl_ = nullptr;};
    inline string openApiConfigurationUrl() const { DARABONBA_PTR_GET_DEFAULT(openApiConfigurationUrl_, "") };
    inline DescribeClusterDetailResponseBodyRrsaConfig& setOpenApiConfigurationUrl(string openApiConfigurationUrl) { DARABONBA_PTR_SET_VALUE(openApiConfigurationUrl_, openApiConfigurationUrl) };


  protected:
    std::shared_ptr<string> audience_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> issuer_ = nullptr;
    std::shared_ptr<string> jwksUrl_ = nullptr;
    std::shared_ptr<string> maxOidcTokenExpiration_ = nullptr;
    std::shared_ptr<string> oidcArn_ = nullptr;
    std::shared_ptr<string> oidcName_ = nullptr;
    std::shared_ptr<string> openApiConfigurationUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
