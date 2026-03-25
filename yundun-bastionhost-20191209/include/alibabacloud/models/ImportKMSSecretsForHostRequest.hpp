// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKMSSECRETSFORHOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKMSSECRETSFORHOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ImportKMSSecretsForHostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKMSSecretsForHostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKMSSecretsForHostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
    };
    ImportKMSSecretsForHostRequest() = default ;
    ImportKMSSecretsForHostRequest(const ImportKMSSecretsForHostRequest &) = default ;
    ImportKMSSecretsForHostRequest(ImportKMSSecretsForHostRequest &&) = default ;
    ImportKMSSecretsForHostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKMSSecretsForHostRequest() = default ;
    ImportKMSSecretsForHostRequest& operator=(const ImportKMSSecretsForHostRequest &) = default ;
    ImportKMSSecretsForHostRequest& operator=(ImportKMSSecretsForHostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Secrets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Secrets& obj) { 
        DARABONBA_PTR_TO_JSON(SecretName, secretName_);
        DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      };
      friend void from_json(const Darabonba::Json& j, Secrets& obj) { 
        DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
        DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      };
      Secrets() = default ;
      Secrets(const Secrets &) = default ;
      Secrets(Secrets &&) = default ;
      Secrets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Secrets() = default ;
      Secrets& operator=(const Secrets &) = default ;
      Secrets& operator=(Secrets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->secretName_ == nullptr
        && this->secretType_ == nullptr; };
      // secretName Field Functions 
      bool hasSecretName() const { return this->secretName_ != nullptr;};
      void deleteSecretName() { this->secretName_ = nullptr;};
      inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
      inline Secrets& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


      // secretType Field Functions 
      bool hasSecretType() const { return this->secretType_ != nullptr;};
      void deleteSecretType() { this->secretType_ = nullptr;};
      inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
      inline Secrets& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    protected:
      shared_ptr<string> secretName_ {};
      shared_ptr<string> secretType_ {};
    };

    virtual bool empty() const override { return this->hostId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->secrets_ == nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline int32_t getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, 0) };
    inline ImportKMSSecretsForHostRequest& setHostId(int32_t hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportKMSSecretsForHostRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportKMSSecretsForHostRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const vector<ImportKMSSecretsForHostRequest::Secrets> & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<ImportKMSSecretsForHostRequest::Secrets>) };
    inline vector<ImportKMSSecretsForHostRequest::Secrets> getSecrets() { DARABONBA_PTR_GET(secrets_, vector<ImportKMSSecretsForHostRequest::Secrets>) };
    inline ImportKMSSecretsForHostRequest& setSecrets(const vector<ImportKMSSecretsForHostRequest::Secrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline ImportKMSSecretsForHostRequest& setSecrets(vector<ImportKMSSecretsForHostRequest::Secrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> hostId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<ImportKMSSecretsForHostRequest::Secrets>> secrets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
