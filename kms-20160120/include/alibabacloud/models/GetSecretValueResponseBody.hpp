// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODY_HPP_
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
  class GetSecretValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_TO_JSON(LastRotationDate, lastRotationDate_);
      DARABONBA_PTR_TO_JSON(NextRotationDate, nextRotationDate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
      DARABONBA_PTR_TO_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionStages, versionStages_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_FROM_JSON(LastRotationDate, lastRotationDate_);
      DARABONBA_PTR_FROM_JSON(NextRotationDate, nextRotationDate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
      DARABONBA_PTR_FROM_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(VersionStages, versionStages_);
    };
    GetSecretValueResponseBody() = default ;
    GetSecretValueResponseBody(const GetSecretValueResponseBody &) = default ;
    GetSecretValueResponseBody(GetSecretValueResponseBody &&) = default ;
    GetSecretValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretValueResponseBody() = default ;
    GetSecretValueResponseBody& operator=(const GetSecretValueResponseBody &) = default ;
    GetSecretValueResponseBody& operator=(GetSecretValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VersionStages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VersionStages& obj) { 
        DARABONBA_PTR_TO_JSON(VersionStage, versionStage_);
      };
      friend void from_json(const Darabonba::Json& j, VersionStages& obj) { 
        DARABONBA_PTR_FROM_JSON(VersionStage, versionStage_);
      };
      VersionStages() = default ;
      VersionStages(const VersionStages &) = default ;
      VersionStages(VersionStages &&) = default ;
      VersionStages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VersionStages() = default ;
      VersionStages& operator=(const VersionStages &) = default ;
      VersionStages& operator=(VersionStages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->versionStage_ == nullptr; };
      // versionStage Field Functions 
      bool hasVersionStage() const { return this->versionStage_ != nullptr;};
      void deleteVersionStage() { this->versionStage_ = nullptr;};
      inline const vector<string> & getVersionStage() const { DARABONBA_PTR_GET_CONST(versionStage_, vector<string>) };
      inline vector<string> getVersionStage() { DARABONBA_PTR_GET(versionStage_, vector<string>) };
      inline VersionStages& setVersionStage(const vector<string> & versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };
      inline VersionStages& setVersionStage(vector<string> && versionStage) { DARABONBA_PTR_SET_RVALUE(versionStage_, versionStage) };


    protected:
      shared_ptr<vector<string>> versionStage_ {};
    };

    virtual bool empty() const override { return this->automaticRotation_ == nullptr
        && this->createTime_ == nullptr && this->extendedConfig_ == nullptr && this->lastRotationDate_ == nullptr && this->nextRotationDate_ == nullptr && this->requestId_ == nullptr
        && this->rotationInterval_ == nullptr && this->secretData_ == nullptr && this->secretDataType_ == nullptr && this->secretName_ == nullptr && this->secretType_ == nullptr
        && this->versionId_ == nullptr && this->versionStages_ == nullptr; };
    // automaticRotation Field Functions 
    bool hasAutomaticRotation() const { return this->automaticRotation_ != nullptr;};
    void deleteAutomaticRotation() { this->automaticRotation_ = nullptr;};
    inline string getAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(automaticRotation_, "") };
    inline GetSecretValueResponseBody& setAutomaticRotation(string automaticRotation) { DARABONBA_PTR_SET_VALUE(automaticRotation_, automaticRotation) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSecretValueResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extendedConfig Field Functions 
    bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
    void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
    inline string getExtendedConfig() const { DARABONBA_PTR_GET_DEFAULT(extendedConfig_, "") };
    inline GetSecretValueResponseBody& setExtendedConfig(string extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };


    // lastRotationDate Field Functions 
    bool hasLastRotationDate() const { return this->lastRotationDate_ != nullptr;};
    void deleteLastRotationDate() { this->lastRotationDate_ = nullptr;};
    inline string getLastRotationDate() const { DARABONBA_PTR_GET_DEFAULT(lastRotationDate_, "") };
    inline GetSecretValueResponseBody& setLastRotationDate(string lastRotationDate) { DARABONBA_PTR_SET_VALUE(lastRotationDate_, lastRotationDate) };


    // nextRotationDate Field Functions 
    bool hasNextRotationDate() const { return this->nextRotationDate_ != nullptr;};
    void deleteNextRotationDate() { this->nextRotationDate_ = nullptr;};
    inline string getNextRotationDate() const { DARABONBA_PTR_GET_DEFAULT(nextRotationDate_, "") };
    inline GetSecretValueResponseBody& setNextRotationDate(string nextRotationDate) { DARABONBA_PTR_SET_VALUE(nextRotationDate_, nextRotationDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecretValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string getRotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline GetSecretValueResponseBody& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string getSecretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline GetSecretValueResponseBody& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


    // secretDataType Field Functions 
    bool hasSecretDataType() const { return this->secretDataType_ != nullptr;};
    void deleteSecretDataType() { this->secretDataType_ = nullptr;};
    inline string getSecretDataType() const { DARABONBA_PTR_GET_DEFAULT(secretDataType_, "") };
    inline GetSecretValueResponseBody& setSecretDataType(string secretDataType) { DARABONBA_PTR_SET_VALUE(secretDataType_, secretDataType) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline GetSecretValueResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline GetSecretValueResponseBody& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetSecretValueResponseBody& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionStages Field Functions 
    bool hasVersionStages() const { return this->versionStages_ != nullptr;};
    void deleteVersionStages() { this->versionStages_ = nullptr;};
    inline const GetSecretValueResponseBody::VersionStages & getVersionStages() const { DARABONBA_PTR_GET_CONST(versionStages_, GetSecretValueResponseBody::VersionStages) };
    inline GetSecretValueResponseBody::VersionStages getVersionStages() { DARABONBA_PTR_GET(versionStages_, GetSecretValueResponseBody::VersionStages) };
    inline GetSecretValueResponseBody& setVersionStages(const GetSecretValueResponseBody::VersionStages & versionStages) { DARABONBA_PTR_SET_VALUE(versionStages_, versionStages) };
    inline GetSecretValueResponseBody& setVersionStages(GetSecretValueResponseBody::VersionStages && versionStages) { DARABONBA_PTR_SET_RVALUE(versionStages_, versionStages) };


  protected:
    // Indicates whether automatic rotation is enabled. Valid values:  
    // - Enabled: Automatic rotation is enabled.  
    // - Disabled: Automatic rotation is disabled.  
    // - Invalid: The rotation status is abnormal, and KMS cannot automatically rotate the credential for you.  
    // 
    // > This parameter is returned only for RDS credentials, PolarDB credentials, Redis/Tair credentials, RAM credentials, or ECS credentials.
    shared_ptr<string> automaticRotation_ {};
    // The time when the credential was created.
    shared_ptr<string> createTime_ {};
    // The extended configuration of the credential.  
    // 
    // > This parameter is returned only for RDS credentials, PolarDB credentials, Redis/Tair credentials, RAM credentials, or ECS credentials when FetchExtendedConfig is set to true.
    shared_ptr<string> extendedConfig_ {};
    // The time of the most recent rotation.  
    // 
    // > This parameter is returned only if the credential has been rotated.
    shared_ptr<string> lastRotationDate_ {};
    // The time of the next rotation.  
    // 
    // > This parameter is returned only when automatic rotation is enabled.
    shared_ptr<string> nextRotationDate_ {};
    // The ID of the current request. Alibaba Cloud generates a unique identifier for each request, which can be used for troubleshooting and issue tracking.
    shared_ptr<string> requestId_ {};
    // The epoch for automatic credential rotation.    
    // The format is `integer[unit]`, where `integer` indicates the time duration and `unit` indicates the time unit. Valid value for `unit`: s (seconds). For example, a 7-day rotation epoch is 604800s.
    // 
    // > This parameter is returned only when automatic rotation is enabled.
    shared_ptr<string> rotationInterval_ {};
    // The value of the credential. KMS decrypts the stored ciphertext and returns this parameter.  
    // 
    // - For generic secrets, the credential value you specified is returned.  
    // 
    // - For RDS credentials and Redis/Tair credentials, the credential value is in the format: `{"AccountName":"","AccountPassword":""}`.  
    // 
    // - For RAM credentials, the credential value is in the format: `{"AccessKeyId":"Adfdsfd","AccessKeySecret":"fdsfdsf","GenerateTimestamp": "2023-03-25T10:42:40Z"}`.  
    // 
    // - For ECS credentials, the credential value is in one of the following formats:  
    //   - Security token type: `{"UserName":"ecs-user","Password":"H5asdasdsads****"}`.  
    //   - Public-private key pair type (private key in PEM format): `{"UserName":"ecs-user","PublicKey":"ssh-rsa ****mKwnVix9YTFY9Rs= imported-openssh-key","PrivateKey": "d6bee1cb-2e14-4277-ba6b-73786b21****"}`.  
    // 
    // - For PolarDB credentials, the credential value is in the format: `{"AccountName":"","AccountPassword":""}`.
    shared_ptr<string> secretData_ {};
    // The value type of the credential. Valid values:
    // - text
    // - binary
    shared_ptr<string> secretDataType_ {};
    // The name of the credential.
    shared_ptr<string> secretName_ {};
    // The type of the credential. Valid values:
    // - Generic: generic secret.  
    // - Rds: RDS credential.  
    // - Redis: Redis/Tair credential.
    // - RAMCredentials: RAM credential.  
    // - ECS: ECS credential.
    // - PolarDB: PolarDB credential.
    shared_ptr<string> secretType_ {};
    // The version number of the credential.
    shared_ptr<string> versionId_ {};
    shared_ptr<GetSecretValueResponseBody::VersionStages> versionStages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
