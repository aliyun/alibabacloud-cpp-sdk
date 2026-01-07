// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/KMSConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(kmsConfig, kmsConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(secretData, secretData_);
      DARABONBA_PTR_TO_JSON(secretSource, secretSource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(kmsConfig, kmsConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(secretData, secretData_);
      DARABONBA_PTR_FROM_JSON(secretSource, secretSource_);
    };
    CreateSecretRequest() = default ;
    CreateSecretRequest(const CreateSecretRequest &) = default ;
    CreateSecretRequest(CreateSecretRequest &&) = default ;
    CreateSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretRequest() = default ;
    CreateSecretRequest& operator=(const CreateSecretRequest &) = default ;
    CreateSecretRequest& operator=(CreateSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->gatewayType_ == nullptr && this->kmsConfig_ == nullptr && this->name_ == nullptr && this->secretData_ == nullptr && this->secretSource_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSecretRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateSecretRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // kmsConfig Field Functions 
    bool hasKmsConfig() const { return this->kmsConfig_ != nullptr;};
    void deleteKmsConfig() { this->kmsConfig_ = nullptr;};
    inline const KMSConfig & getKmsConfig() const { DARABONBA_PTR_GET_CONST(kmsConfig_, KMSConfig) };
    inline KMSConfig getKmsConfig() { DARABONBA_PTR_GET(kmsConfig_, KMSConfig) };
    inline CreateSecretRequest& setKmsConfig(const KMSConfig & kmsConfig) { DARABONBA_PTR_SET_VALUE(kmsConfig_, kmsConfig) };
    inline CreateSecretRequest& setKmsConfig(KMSConfig && kmsConfig) { DARABONBA_PTR_SET_RVALUE(kmsConfig_, kmsConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSecretRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string getSecretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline CreateSecretRequest& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


    // secretSource Field Functions 
    bool hasSecretSource() const { return this->secretSource_ != nullptr;};
    void deleteSecretSource() { this->secretSource_ = nullptr;};
    inline string getSecretSource() const { DARABONBA_PTR_GET_DEFAULT(secretSource_, "") };
    inline CreateSecretRequest& setSecretSource(string secretSource) { DARABONBA_PTR_SET_VALUE(secretSource_, secretSource) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> gatewayType_ {};
    shared_ptr<KMSConfig> kmsConfig_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> secretData_ {};
    shared_ptr<string> secretSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
