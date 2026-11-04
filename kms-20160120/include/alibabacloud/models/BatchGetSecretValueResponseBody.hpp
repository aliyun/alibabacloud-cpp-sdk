// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETSECRETVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETSECRETVALUERESPONSEBODY_HPP_
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
  class BatchGetSecretValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Errors, errors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretValues, secretValues_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Errors, errors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretValues, secretValues_);
    };
    BatchGetSecretValueResponseBody() = default ;
    BatchGetSecretValueResponseBody(const BatchGetSecretValueResponseBody &) = default ;
    BatchGetSecretValueResponseBody(BatchGetSecretValueResponseBody &&) = default ;
    BatchGetSecretValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetSecretValueResponseBody() = default ;
    BatchGetSecretValueResponseBody& operator=(const BatchGetSecretValueResponseBody &) = default ;
    BatchGetSecretValueResponseBody& operator=(BatchGetSecretValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretValues& obj) { 
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
      friend void from_json(const Darabonba::Json& j, SecretValues& obj) { 
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
      SecretValues() = default ;
      SecretValues(const SecretValues &) = default ;
      SecretValues(SecretValues &&) = default ;
      SecretValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretValues() = default ;
      SecretValues& operator=(const SecretValues &) = default ;
      SecretValues& operator=(SecretValues &&) = default ;
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
        // The stage labels of the secret version.
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
      inline SecretValues& setAutomaticRotation(string automaticRotation) { DARABONBA_PTR_SET_VALUE(automaticRotation_, automaticRotation) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SecretValues& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extendedConfig Field Functions 
      bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
      void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
      inline string getExtendedConfig() const { DARABONBA_PTR_GET_DEFAULT(extendedConfig_, "") };
      inline SecretValues& setExtendedConfig(string extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };


      // lastRotationDate Field Functions 
      bool hasLastRotationDate() const { return this->lastRotationDate_ != nullptr;};
      void deleteLastRotationDate() { this->lastRotationDate_ = nullptr;};
      inline string getLastRotationDate() const { DARABONBA_PTR_GET_DEFAULT(lastRotationDate_, "") };
      inline SecretValues& setLastRotationDate(string lastRotationDate) { DARABONBA_PTR_SET_VALUE(lastRotationDate_, lastRotationDate) };


      // nextRotationDate Field Functions 
      bool hasNextRotationDate() const { return this->nextRotationDate_ != nullptr;};
      void deleteNextRotationDate() { this->nextRotationDate_ = nullptr;};
      inline string getNextRotationDate() const { DARABONBA_PTR_GET_DEFAULT(nextRotationDate_, "") };
      inline SecretValues& setNextRotationDate(string nextRotationDate) { DARABONBA_PTR_SET_VALUE(nextRotationDate_, nextRotationDate) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline SecretValues& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // rotationInterval Field Functions 
      bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
      void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
      inline string getRotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
      inline SecretValues& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


      // secretData Field Functions 
      bool hasSecretData() const { return this->secretData_ != nullptr;};
      void deleteSecretData() { this->secretData_ = nullptr;};
      inline string getSecretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
      inline SecretValues& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


      // secretDataType Field Functions 
      bool hasSecretDataType() const { return this->secretDataType_ != nullptr;};
      void deleteSecretDataType() { this->secretDataType_ = nullptr;};
      inline string getSecretDataType() const { DARABONBA_PTR_GET_DEFAULT(secretDataType_, "") };
      inline SecretValues& setSecretDataType(string secretDataType) { DARABONBA_PTR_SET_VALUE(secretDataType_, secretDataType) };


      // secretName Field Functions 
      bool hasSecretName() const { return this->secretName_ != nullptr;};
      void deleteSecretName() { this->secretName_ = nullptr;};
      inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
      inline SecretValues& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


      // secretType Field Functions 
      bool hasSecretType() const { return this->secretType_ != nullptr;};
      void deleteSecretType() { this->secretType_ = nullptr;};
      inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
      inline SecretValues& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline SecretValues& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      // versionStages Field Functions 
      bool hasVersionStages() const { return this->versionStages_ != nullptr;};
      void deleteVersionStages() { this->versionStages_ = nullptr;};
      inline const SecretValues::VersionStages & getVersionStages() const { DARABONBA_PTR_GET_CONST(versionStages_, SecretValues::VersionStages) };
      inline SecretValues::VersionStages getVersionStages() { DARABONBA_PTR_GET(versionStages_, SecretValues::VersionStages) };
      inline SecretValues& setVersionStages(const SecretValues::VersionStages & versionStages) { DARABONBA_PTR_SET_VALUE(versionStages_, versionStages) };
      inline SecretValues& setVersionStages(SecretValues::VersionStages && versionStages) { DARABONBA_PTR_SET_RVALUE(versionStages_, versionStages) };


    protected:
      // Indicates whether automatic rotation is enabled. Valid values:
      // - Enabled: Automatic rotation is enabled.
      // - Disabled: Automatic rotation is disabled.
      // - Invalid: The rotation status is abnormal, and KMS cannot automatically rotate the secret.
      // 
      // > This parameter is returned only for ApsaraDB RDS secrets, PolarDB secrets, Redis/Tair secrets, RAM secrets, or ECS secrets.
      shared_ptr<string> automaticRotation_ {};
      // The time when the secret was created. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The extended configuration of the secret.  
      // 
      // > This parameter is returned only for ApsaraDB RDS secrets, PolarDB secrets, Redis/Tair secrets, RAM secrets, or ECS secrets when FetchExtendedConfig is set to true.
      shared_ptr<string> extendedConfig_ {};
      // The time when the last rotation was performed. The time is displayed in UTC.
      // > This parameter is returned only when the secret has been rotated.
      shared_ptr<string> lastRotationDate_ {};
      // The time when the next rotation is performed. The time is displayed in UTC.
      // > This parameter is returned only when automatic rotation is enabled.
      shared_ptr<string> nextRotationDate_ {};
      // The ID of the request. The ID is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot and locate issues.
      shared_ptr<string> requestId_ {};
      // The interval for automatic secret rotation.
      // The value is in the `integer[unit]` format. `integer` indicates the time length, and `unit` indicates the time unit. Valid values for `unit`: s (seconds). For example, a 7-day rotation interval is 604800s.
      // 
      // > This parameter is returned only when automatic rotation is enabled.
      shared_ptr<string> rotationInterval_ {};
      // The secret value. KMS decrypts the stored ciphertext secret value and returns this parameter.  
      // 
      // - For a generic secret, the specified secret value is returned.
      // 
      // - For an ApsaraDB RDS secret or a Redis/Tair secret, the secret value is in the following format: `{"AccountName":"","AccountPassword":""}`.
      // 
      // - For a RAM secret, the secret value is in the following format: `{"AccessKeyId":"Adfdsfd","AccessKeySecret":"fdsfdsf","GenerateTimestamp": "2023-03-25T10:42:40Z"}`.  
      // 
      // - For an ECS secret, the secret value is in one of the following formats:  
      //   - Password secret: `{"UserName":"ecs-user","Password":"H5asdasdsads****"}`.  
      //   - Public-private key pair secret (the private key is in PEM format): `{"UserName":"ecs-user","PublicKey":"ssh-rsa ****mKwnVix9YTFY9Rs= imported-openssh-key","PrivateKey": "d6bee1cb-2e14-4277-ba6b-73786b21****"}`.
      // 
      // - For a PolarDB secret, the secret value is in the following format: `{"AccountName":"","AccountPassword":""}`.
      shared_ptr<string> secretData_ {};
      // The type of the secret value. Valid values:
      // - text
      // - binary
      shared_ptr<string> secretDataType_ {};
      // The name of the secret.
      shared_ptr<string> secretName_ {};
      // The type of the secret. Valid values:
      // - Generic: generic secret.  
      // - Rds: ApsaraDB RDS secret.  
      // - Redis: Redis/Tair secret.
      // - RAMCredentials: RAM secret.  
      // - ECS: ECS secret.
      // - PolarDB: PolarDB secret.
      shared_ptr<string> secretType_ {};
      // The version ID of the secret.
      shared_ptr<string> versionId_ {};
      // The stage labels of the secret version.
      shared_ptr<SecretValues::VersionStages> versionStages_ {};
    };

    class Errors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Errors& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(HttpStatus, httpStatus_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      };
      friend void from_json(const Darabonba::Json& j, Errors& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(HttpStatus, httpStatus_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      };
      Errors() = default ;
      Errors(const Errors &) = default ;
      Errors(Errors &&) = default ;
      Errors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Errors() = default ;
      Errors& operator=(const Errors &) = default ;
      Errors& operator=(Errors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatus_ == nullptr && this->message_ == nullptr && this->secretName_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Errors& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // httpStatus Field Functions 
      bool hasHttpStatus() const { return this->httpStatus_ != nullptr;};
      void deleteHttpStatus() { this->httpStatus_ = nullptr;};
      inline int32_t getHttpStatus() const { DARABONBA_PTR_GET_DEFAULT(httpStatus_, 0) };
      inline Errors& setHttpStatus(int32_t httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Errors& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // secretName Field Functions 
      bool hasSecretName() const { return this->secretName_ != nullptr;};
      void deleteSecretName() { this->secretName_ = nullptr;};
      inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
      inline Errors& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    protected:
      // The service error code.
      shared_ptr<string> code_ {};
      // The HTTP status code returned for the error.
      shared_ptr<int32_t> httpStatus_ {};
      // The error message returned when the secret fails to be retrieved.
      shared_ptr<string> message_ {};
      // The name of the secret.
      shared_ptr<string> secretName_ {};
    };

    virtual bool empty() const override { return this->errors_ == nullptr
        && this->requestId_ == nullptr && this->secretValues_ == nullptr; };
    // errors Field Functions 
    bool hasErrors() const { return this->errors_ != nullptr;};
    void deleteErrors() { this->errors_ = nullptr;};
    inline const vector<BatchGetSecretValueResponseBody::Errors> & getErrors() const { DARABONBA_PTR_GET_CONST(errors_, vector<BatchGetSecretValueResponseBody::Errors>) };
    inline vector<BatchGetSecretValueResponseBody::Errors> getErrors() { DARABONBA_PTR_GET(errors_, vector<BatchGetSecretValueResponseBody::Errors>) };
    inline BatchGetSecretValueResponseBody& setErrors(const vector<BatchGetSecretValueResponseBody::Errors> & errors) { DARABONBA_PTR_SET_VALUE(errors_, errors) };
    inline BatchGetSecretValueResponseBody& setErrors(vector<BatchGetSecretValueResponseBody::Errors> && errors) { DARABONBA_PTR_SET_RVALUE(errors_, errors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetSecretValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretValues Field Functions 
    bool hasSecretValues() const { return this->secretValues_ != nullptr;};
    void deleteSecretValues() { this->secretValues_ = nullptr;};
    inline const vector<BatchGetSecretValueResponseBody::SecretValues> & getSecretValues() const { DARABONBA_PTR_GET_CONST(secretValues_, vector<BatchGetSecretValueResponseBody::SecretValues>) };
    inline vector<BatchGetSecretValueResponseBody::SecretValues> getSecretValues() { DARABONBA_PTR_GET(secretValues_, vector<BatchGetSecretValueResponseBody::SecretValues>) };
    inline BatchGetSecretValueResponseBody& setSecretValues(const vector<BatchGetSecretValueResponseBody::SecretValues> & secretValues) { DARABONBA_PTR_SET_VALUE(secretValues_, secretValues) };
    inline BatchGetSecretValueResponseBody& setSecretValues(vector<BatchGetSecretValueResponseBody::SecretValues> && secretValues) { DARABONBA_PTR_SET_RVALUE(secretValues_, secretValues) };


  protected:
    // The list of errors for secrets that failed to be retrieved.
    shared_ptr<vector<BatchGetSecretValueResponseBody::Errors>> errors_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of successfully retrieved secrets.
    shared_ptr<vector<BatchGetSecretValueResponseBody::SecretValues>> secretValues_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
