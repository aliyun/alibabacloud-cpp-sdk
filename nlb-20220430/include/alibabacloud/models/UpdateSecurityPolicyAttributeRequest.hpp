// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECURITYPOLICYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECURITYPOLICYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class UpdateSecurityPolicyAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecurityPolicyAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_TO_JSON(TlsVersions, tlsVersions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecurityPolicyAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_FROM_JSON(TlsVersions, tlsVersions_);
    };
    UpdateSecurityPolicyAttributeRequest() = default ;
    UpdateSecurityPolicyAttributeRequest(const UpdateSecurityPolicyAttributeRequest &) = default ;
    UpdateSecurityPolicyAttributeRequest(UpdateSecurityPolicyAttributeRequest &&) = default ;
    UpdateSecurityPolicyAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecurityPolicyAttributeRequest() = default ;
    UpdateSecurityPolicyAttributeRequest& operator=(const UpdateSecurityPolicyAttributeRequest &) = default ;
    UpdateSecurityPolicyAttributeRequest& operator=(UpdateSecurityPolicyAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ciphers_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->regionId_ != nullptr && this->securityPolicyId_ != nullptr && this->securityPolicyName_ != nullptr
        && this->tlsVersions_ != nullptr; };
    // ciphers Field Functions 
    bool hasCiphers() const { return this->ciphers_ != nullptr;};
    void deleteCiphers() { this->ciphers_ = nullptr;};
    inline const vector<string> & ciphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
    inline vector<string> ciphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
    inline UpdateSecurityPolicyAttributeRequest& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
    inline UpdateSecurityPolicyAttributeRequest& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateSecurityPolicyAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateSecurityPolicyAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSecurityPolicyAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline UpdateSecurityPolicyAttributeRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // securityPolicyName Field Functions 
    bool hasSecurityPolicyName() const { return this->securityPolicyName_ != nullptr;};
    void deleteSecurityPolicyName() { this->securityPolicyName_ = nullptr;};
    inline string securityPolicyName() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyName_, "") };
    inline UpdateSecurityPolicyAttributeRequest& setSecurityPolicyName(string securityPolicyName) { DARABONBA_PTR_SET_VALUE(securityPolicyName_, securityPolicyName) };


    // tlsVersions Field Functions 
    bool hasTlsVersions() const { return this->tlsVersions_ != nullptr;};
    void deleteTlsVersions() { this->tlsVersions_ = nullptr;};
    inline const vector<string> & tlsVersions() const { DARABONBA_PTR_GET_CONST(tlsVersions_, vector<string>) };
    inline vector<string> tlsVersions() { DARABONBA_PTR_GET(tlsVersions_, vector<string>) };
    inline UpdateSecurityPolicyAttributeRequest& setTlsVersions(const vector<string> & tlsVersions) { DARABONBA_PTR_SET_VALUE(tlsVersions_, tlsVersions) };
    inline UpdateSecurityPolicyAttributeRequest& setTlsVersions(vector<string> && tlsVersions) { DARABONBA_PTR_SET_RVALUE(tlsVersions_, tlsVersions) };


  protected:
    // The cipher suites supported by the security policy. Valid values of this parameter vary based on the value of TlsVersions. You can specify up to 32 cipher suites.
    // 
    // TLSv1.0 and TLSv1.1 support the following cipher suites:
    // 
    // *   **ECDHE-ECDSA-AES128-SHA**
    // *   **ECDHE-ECDSA-AES256-SHA**
    // *   **ECDHE-RSA-AES128-SHA**
    // *   **ECDHE-RSA-AES256-SHA**
    // *   **AES128-SHA**
    // *   **AES256-SHA**
    // *   **DES-CBC3-SHA**
    // 
    // TLSv1.2 supports the following cipher suites:
    // 
    // *   **ECDHE-ECDSA-AES128-SHA**
    // *   **ECDHE-ECDSA-AES256-SHA**
    // *   **ECDHE-RSA-AES128-SHA**
    // *   **ECDHE-RSA-AES256-SHA**
    // *   **AES128-SHA**
    // *   **AES256-SHA**
    // *   **DES-CBC3-SHA**
    // *   **ECDHE-ECDSA-AES128-GCM-SHA256**
    // *   **ECDHE-ECDSA-AES256-GCM-SHA384**
    // *   **ECDHE-ECDSA-AES128-SHA256**
    // *   **ECDHE-ECDSA-AES256-SHA384**
    // *   **ECDHE-RSA-AES128-GCM-SHA256**
    // *   **ECDHE-RSA-AES256-GCM-SHA384**
    // *   **ECDHE-RSA-AES128-SHA256**
    // *   **ECDHE-RSA-AES256-SHA384**
    // *   **AES128-GCM-SHA256**
    // *   **AES256-GCM-SHA384**
    // *   **AES128-SHA256**
    // *   **AES256-SHA256**
    // 
    // TLSv1.3 supports the following cipher suites:
    // 
    // *   **TLS_AES_128_GCM_SHA256**
    // *   **TLS_AES_256_GCM_SHA384**
    // *   **TLS_CHACHA20_POLY1305_SHA256**
    // *   **TLS_AES_128_CCM_SHA256**
    // *   **TLS_AES_128_CCM_8_SHA256**
    std::shared_ptr<vector<string>> ciphers_ = nullptr;
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. Only ASCII characters are allowed.
    // 
    // >  If you do not set this parameter, the value of **RequestId** is used.**** The value of **RequestId** is different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: validates the request without performing the operation. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the validation, the corresponding error message is returned. If the request passes the validation, the `DryRunOperation` error code is returned.
    // *   **false** (default): validates the request and performs the operation. If the request passes the validation, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the TLS security policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The name of the security policy.
    // 
    // The name must be 1 to 200 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> securityPolicyName_ = nullptr;
    // The supported TLS versions. Valid values: **TLSv1.0**, **TLSv1.1**, **TLSv1.2**, and **TLSv1.3**. You can specify up to four TLS versions.
    std::shared_ptr<vector<string>> tlsVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
