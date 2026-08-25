// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetSecretValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FetchExtendedConfig, fetchExtendedConfig_);
      DARABONBA_PTR_TO_JSON(Recipient, recipient_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionStage, versionStage_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FetchExtendedConfig, fetchExtendedConfig_);
      DARABONBA_PTR_FROM_JSON(Recipient, recipient_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(VersionStage, versionStage_);
    };
    GetSecretValueRequest() = default ;
    GetSecretValueRequest(const GetSecretValueRequest &) = default ;
    GetSecretValueRequest(GetSecretValueRequest &&) = default ;
    GetSecretValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretValueRequest() = default ;
    GetSecretValueRequest& operator=(const GetSecretValueRequest &) = default ;
    GetSecretValueRequest& operator=(GetSecretValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->fetchExtendedConfig_ == nullptr && this->recipient_ == nullptr && this->secretName_ == nullptr && this->versionId_ == nullptr && this->versionStage_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline GetSecretValueRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fetchExtendedConfig Field Functions 
    bool hasFetchExtendedConfig() const { return this->fetchExtendedConfig_ != nullptr;};
    void deleteFetchExtendedConfig() { this->fetchExtendedConfig_ = nullptr;};
    inline bool getFetchExtendedConfig() const { DARABONBA_PTR_GET_DEFAULT(fetchExtendedConfig_, false) };
    inline GetSecretValueRequest& setFetchExtendedConfig(bool fetchExtendedConfig) { DARABONBA_PTR_SET_VALUE(fetchExtendedConfig_, fetchExtendedConfig) };


    // recipient Field Functions 
    bool hasRecipient() const { return this->recipient_ != nullptr;};
    void deleteRecipient() { this->recipient_ = nullptr;};
    inline string getRecipient() const { DARABONBA_PTR_GET_DEFAULT(recipient_, "") };
    inline GetSecretValueRequest& setRecipient(string recipient) { DARABONBA_PTR_SET_VALUE(recipient_, recipient) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline GetSecretValueRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetSecretValueRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionStage Field Functions 
    bool hasVersionStage() const { return this->versionStage_ != nullptr;};
    void deleteVersionStage() { this->versionStage_ = nullptr;};
    inline string getVersionStage() const { DARABONBA_PTR_GET_DEFAULT(versionStage_, "") };
    inline GetSecretValueRequest& setVersionStage(string versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };


  protected:
    // Specifies whether to enable DryRun mode. Valid values:
    // 
    // - true: enables DryRun mode.
    // - false (default): disables DryRun mode.
    // 
    // DryRun mode is used to test API calls and verify whether you have the required permissions on the corresponding resources and whether the request parameters are correctly configured. When DryRun mode is enabled, KMS always returns a failure and provides the failure reason. Failure reasons include:
    // 
    // - DryRunOperationError: The request would succeed without the DryRun parameter.
    // - ValidationError: The parameters specified in the request are invalid.
    // - AccessDeniedError: You are not authorized to perform this operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // Specifies whether to retrieve the extended configuration of the secret. Valid values:
    // 
    // - true: retrieves the extended configuration.
    // - false (default): does not retrieve the extended configuration.
    // 
    // > Generic secrets do not support extended configurations. This parameter is ignored if specified.
    shared_ptr<bool> fetchExtendedConfig_ {};
    shared_ptr<string> recipient_ {};
    // The secret name or secret Alibaba Cloud Resource Name (ARN).
    // >To access a secret in another Alibaba Cloud account, you must specify the secret ARN. The format of the secret ARN is `acs:kms:${region}:${account}:secret/${secret-name}`.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
    // The version number.
    // 
    // > ApsaraDB RDS secrets, PolarDB secrets, Redis/Tair secrets, RAM secrets, and ECS secrets do not support specifying VersionId. This parameter is ignored if specified.
    shared_ptr<string> versionId_ {};
    // The version stage. Default value: ACSCurrent.
    // 
    // If you specify this parameter, the secret value of the specified version stage is returned. If you do not specify this parameter, the secret value of the ACSCurrent version stage is returned.
    // > For ApsaraDB RDS secrets, PolarDB secrets, Redis/Tair secrets, RAM secrets, and ECS secrets, you can retrieve only the secret values of the ACSPrevious and ACSCurrent versions.
    shared_ptr<string> versionStage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
