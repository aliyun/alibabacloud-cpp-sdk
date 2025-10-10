// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSecurityPolicyRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateSecurityPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_TO_JSON(TLSVersions, TLSVersions_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_FROM_JSON(TLSVersions, TLSVersions_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateSecurityPolicyRequest() = default ;
    CreateSecurityPolicyRequest(const CreateSecurityPolicyRequest &) = default ;
    CreateSecurityPolicyRequest(CreateSecurityPolicyRequest &&) = default ;
    CreateSecurityPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityPolicyRequest() = default ;
    CreateSecurityPolicyRequest& operator=(const CreateSecurityPolicyRequest &) = default ;
    CreateSecurityPolicyRequest& operator=(CreateSecurityPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ciphers_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->resourceGroupId_ != nullptr && this->securityPolicyName_ != nullptr && this->TLSVersions_ != nullptr
        && this->tag_ != nullptr; };
    // ciphers Field Functions 
    bool hasCiphers() const { return this->ciphers_ != nullptr;};
    void deleteCiphers() { this->ciphers_ = nullptr;};
    inline const vector<string> & ciphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
    inline vector<string> ciphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
    inline CreateSecurityPolicyRequest& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
    inline CreateSecurityPolicyRequest& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSecurityPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateSecurityPolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSecurityPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityPolicyName Field Functions 
    bool hasSecurityPolicyName() const { return this->securityPolicyName_ != nullptr;};
    void deleteSecurityPolicyName() { this->securityPolicyName_ = nullptr;};
    inline string securityPolicyName() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyName_, "") };
    inline CreateSecurityPolicyRequest& setSecurityPolicyName(string securityPolicyName) { DARABONBA_PTR_SET_VALUE(securityPolicyName_, securityPolicyName) };


    // TLSVersions Field Functions 
    bool hasTLSVersions() const { return this->TLSVersions_ != nullptr;};
    void deleteTLSVersions() { this->TLSVersions_ = nullptr;};
    inline const vector<string> & TLSVersions() const { DARABONBA_PTR_GET_CONST(TLSVersions_, vector<string>) };
    inline vector<string> TLSVersions() { DARABONBA_PTR_GET(TLSVersions_, vector<string>) };
    inline CreateSecurityPolicyRequest& setTLSVersions(const vector<string> & TLSVersions) { DARABONBA_PTR_SET_VALUE(TLSVersions_, TLSVersions) };
    inline CreateSecurityPolicyRequest& setTLSVersions(vector<string> && TLSVersions) { DARABONBA_PTR_SET_RVALUE(TLSVersions_, TLSVersions) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateSecurityPolicyRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateSecurityPolicyRequestTag>) };
    inline vector<CreateSecurityPolicyRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateSecurityPolicyRequestTag>) };
    inline CreateSecurityPolicyRequest& setTag(const vector<CreateSecurityPolicyRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateSecurityPolicyRequest& setTag(vector<CreateSecurityPolicyRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The supported cipher suites.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> ciphers_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // > If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**(default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the security policy.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityPolicyName_ = nullptr;
    // The supported Transport Layer Security (TLS) protocol versions.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> TLSVersions_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateSecurityPolicyRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
