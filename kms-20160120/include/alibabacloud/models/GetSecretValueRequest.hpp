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
        && return this->fetchExtendedConfig_ == nullptr && return this->secretName_ == nullptr && return this->versionId_ == nullptr && return this->versionStage_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline GetSecretValueRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fetchExtendedConfig Field Functions 
    bool hasFetchExtendedConfig() const { return this->fetchExtendedConfig_ != nullptr;};
    void deleteFetchExtendedConfig() { this->fetchExtendedConfig_ = nullptr;};
    inline bool fetchExtendedConfig() const { DARABONBA_PTR_GET_DEFAULT(fetchExtendedConfig_, false) };
    inline GetSecretValueRequest& setFetchExtendedConfig(bool fetchExtendedConfig) { DARABONBA_PTR_SET_VALUE(fetchExtendedConfig_, fetchExtendedConfig) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline GetSecretValueRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetSecretValueRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionStage Field Functions 
    bool hasVersionStage() const { return this->versionStage_ != nullptr;};
    void deleteVersionStage() { this->versionStage_ = nullptr;};
    inline string versionStage() const { DARABONBA_PTR_GET_DEFAULT(versionStage_, "") };
    inline GetSecretValueRequest& setVersionStage(string versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };


  protected:
    std::shared_ptr<string> dryRun_ = nullptr;
    // Specifies whether to obtain the extended configuration of the secret. Valid values:
    // 
    // *   true
    // *   false: This is the default value.
    // 
    // >  This parameter is ignored for a generic secret.
    std::shared_ptr<bool> fetchExtendedConfig_ = nullptr;
    // The name of the secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
    // The version number of the secret value. If you specify this parameter, Secrets Manager returns the secret value of the specified version.
    // 
    // >  This parameter is ignored for a managed ApsaraDB RDS secret, a managed RAM secret, or a managed ECS secret.
    std::shared_ptr<string> versionId_ = nullptr;
    // The stage label that marks the secret version. If you specify this parameter, Secrets Manager returns the secret value of the version that is marked with the specified stage label.
    // 
    // Default value: ACSCurrent.
    // 
    // >  For a managed ApsaraDB RDS secret, a managed RAM secret, or a managed ECS secret, Secrets Manager can return only the secret value of the version marked with ACSPrevious or ACSCurrent.
    std::shared_ptr<string> versionStage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
