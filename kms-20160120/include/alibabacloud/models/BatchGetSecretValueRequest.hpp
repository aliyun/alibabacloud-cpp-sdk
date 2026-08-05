// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETSECRETVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETSECRETVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class BatchGetSecretValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetSecretValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecretsList, secretsList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetSecretValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretsList, secretsList_);
    };
    BatchGetSecretValueRequest() = default ;
    BatchGetSecretValueRequest(const BatchGetSecretValueRequest &) = default ;
    BatchGetSecretValueRequest(BatchGetSecretValueRequest &&) = default ;
    BatchGetSecretValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetSecretValueRequest() = default ;
    BatchGetSecretValueRequest& operator=(const BatchGetSecretValueRequest &) = default ;
    BatchGetSecretValueRequest& operator=(BatchGetSecretValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretsList& obj) { 
        DARABONBA_PTR_TO_JSON(FetchExtendedConfig, fetchExtendedConfig_);
        DARABONBA_PTR_TO_JSON(SecretName, secretName_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        DARABONBA_PTR_TO_JSON(VersionStage, versionStage_);
      };
      friend void from_json(const Darabonba::Json& j, SecretsList& obj) { 
        DARABONBA_PTR_FROM_JSON(FetchExtendedConfig, fetchExtendedConfig_);
        DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        DARABONBA_PTR_FROM_JSON(VersionStage, versionStage_);
      };
      SecretsList() = default ;
      SecretsList(const SecretsList &) = default ;
      SecretsList(SecretsList &&) = default ;
      SecretsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretsList() = default ;
      SecretsList& operator=(const SecretsList &) = default ;
      SecretsList& operator=(SecretsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fetchExtendedConfig_ == nullptr
        && this->secretName_ == nullptr && this->versionId_ == nullptr && this->versionStage_ == nullptr; };
      // fetchExtendedConfig Field Functions 
      bool hasFetchExtendedConfig() const { return this->fetchExtendedConfig_ != nullptr;};
      void deleteFetchExtendedConfig() { this->fetchExtendedConfig_ = nullptr;};
      inline string getFetchExtendedConfig() const { DARABONBA_PTR_GET_DEFAULT(fetchExtendedConfig_, "") };
      inline SecretsList& setFetchExtendedConfig(string fetchExtendedConfig) { DARABONBA_PTR_SET_VALUE(fetchExtendedConfig_, fetchExtendedConfig) };


      // secretName Field Functions 
      bool hasSecretName() const { return this->secretName_ != nullptr;};
      void deleteSecretName() { this->secretName_ = nullptr;};
      inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
      inline SecretsList& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline SecretsList& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      // versionStage Field Functions 
      bool hasVersionStage() const { return this->versionStage_ != nullptr;};
      void deleteVersionStage() { this->versionStage_ = nullptr;};
      inline string getVersionStage() const { DARABONBA_PTR_GET_DEFAULT(versionStage_, "") };
      inline SecretsList& setVersionStage(string versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };


    protected:
      // Specifies whether to retrieve the extended configuration of the secret. Valid values:
      // 
      // - true: Retrieve the extended configuration.
      // - false (default): Do not retrieve the extended configuration.
      // 
      // > Generic secrets do not support extended configurations. This parameter is ignored for generic secrets.
      shared_ptr<string> fetchExtendedConfig_ {};
      // The secret name or secret Alibaba Cloud Resource Name (ARN).
      // >When accessing a secret in another Alibaba Cloud account, you must specify the secret ARN. The format of a secret ARN is `acs:kms:${region}:${account}:secret/${secret-name}`.
      // 
      // This parameter is required.
      shared_ptr<string> secretName_ {};
      // The version number.
      shared_ptr<string> versionId_ {};
      // The version stage. Default value: ACSCurrent.
      // 
      // If you specify this parameter, the secret value of the specified version stage is returned. If you do not specify this parameter, the secret value of the ACSCurrent version stage is returned.
      // > For ApsaraDB RDS secrets, PolarDB secrets, Redis/Tair secrets, RAM secrets, and ECS secrets, you can retrieve only the secret values of the ACSPrevious and ACSCurrent versions.
      shared_ptr<string> versionStage_ {};
    };

    virtual bool empty() const override { return this->secretsList_ == nullptr; };
    // secretsList Field Functions 
    bool hasSecretsList() const { return this->secretsList_ != nullptr;};
    void deleteSecretsList() { this->secretsList_ = nullptr;};
    inline const vector<BatchGetSecretValueRequest::SecretsList> & getSecretsList() const { DARABONBA_PTR_GET_CONST(secretsList_, vector<BatchGetSecretValueRequest::SecretsList>) };
    inline vector<BatchGetSecretValueRequest::SecretsList> getSecretsList() { DARABONBA_PTR_GET(secretsList_, vector<BatchGetSecretValueRequest::SecretsList>) };
    inline BatchGetSecretValueRequest& setSecretsList(const vector<BatchGetSecretValueRequest::SecretsList> & secretsList) { DARABONBA_PTR_SET_VALUE(secretsList_, secretsList) };
    inline BatchGetSecretValueRequest& setSecretsList(vector<BatchGetSecretValueRequest::SecretsList> && secretsList) { DARABONBA_PTR_SET_RVALUE(secretsList_, secretsList) };


  protected:
    // The list of secret information. You can query up to 20 different secrets at a time.
    shared_ptr<vector<BatchGetSecretValueRequest::SecretsList>> secretsList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
