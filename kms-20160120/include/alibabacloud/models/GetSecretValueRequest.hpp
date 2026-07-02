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
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionStage, versionStage_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FetchExtendedConfig, fetchExtendedConfig_);
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
        && this->fetchExtendedConfig_ == nullptr && this->secretName_ == nullptr && this->versionId_ == nullptr && this->versionStage_ == nullptr; };
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
    // Indicates whether to enable DryRun mode.
    // 
    // - true: Enabled  
    // - false (Default Value): Disabled  
    // 
    // DryRun mode is used for Testing API Calls to authenticate whether you have the required permissions on the specified resource and whether the Request Parameters are correctly configured. When DryRun mode is enabled, KMS always returns a failed response along with the failure reason. Possible failure reasons include:
    // 
    // - DryRunOperationError: The request would succeed if the DryRun parameter were not specified.  
    // - ValidationError: One or more parameters in the request are invalid.  
    // - AccessDeniedError: You do not have permission to execute this operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // Indicates whether to retrieve the extended configuration of the credential. Valid values:
    // 
    // - true: Retrieve  
    // - false (Default Value): Do not retrieve  
    // 
    // > Generic secrets do not support extended configuration. If you specify this parameter, it will be ignored.
    shared_ptr<bool> fetchExtendedConfig_ {};
    // The name or ARN of the credential.  
    // > When accessing a credential under another Alibaba Cloud account, you must specify the credential ARN. The ARN format is `acs:kms:${region}:${account}:secret/${secret-name}`.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
    // Version number.
    // 
    // > The VersionId parameter is not supported for RDS credentials, PolarDB credentials, Redis/Tair credentials, RAM credentials, and ECS credentials. If you specify this parameter, it will be ignored.
    shared_ptr<string> versionId_ {};
    // The version stage. Default value: ACSCurrent.  
    // 
    // If you specify this parameter, the credential value of the specified version stage is returned. If you do not specify this parameter, the credential value of the ACSCurrent version stage is returned.  
    // > For RDS credentials, PolarDB credentials, Redis/Tair credentials, RAM credentials, and ECS credentials, you can retrieve only the credential values corresponding to the ACSPrevious or ACSCurrent version stages.
    shared_ptr<string> versionStage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
