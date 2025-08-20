// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPIDAAS2SUBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPIDAAS2SUBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpIdaas2SubConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpIdaas2SubConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(EventAesKey, eventAesKey_);
      DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PublicKeyEndpoint, publicKeyEndpoint_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SamlMetadata, samlMetadata_);
    };
    friend void from_json(const Darabonba::Json& j, IdpIdaas2SubConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(EventAesKey, eventAesKey_);
      DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PublicKeyEndpoint, publicKeyEndpoint_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SamlMetadata, samlMetadata_);
    };
    IdpIdaas2SubConfig() = default ;
    IdpIdaas2SubConfig(const IdpIdaas2SubConfig &) = default ;
    IdpIdaas2SubConfig(IdpIdaas2SubConfig &&) = default ;
    IdpIdaas2SubConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpIdaas2SubConfig() = default ;
    IdpIdaas2SubConfig& operator=(const IdpIdaas2SubConfig &) = default ;
    IdpIdaas2SubConfig& operator=(IdpIdaas2SubConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->clientId_ != nullptr && this->clientSecret_ != nullptr && this->eventAesKey_ != nullptr && this->eventLabel_ != nullptr && this->instanceId_ != nullptr
        && this->publicKeyEndpoint_ != nullptr && this->region_ != nullptr && this->samlMetadata_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline IdpIdaas2SubConfig& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline IdpIdaas2SubConfig& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline IdpIdaas2SubConfig& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // eventAesKey Field Functions 
    bool hasEventAesKey() const { return this->eventAesKey_ != nullptr;};
    void deleteEventAesKey() { this->eventAesKey_ = nullptr;};
    inline string eventAesKey() const { DARABONBA_PTR_GET_DEFAULT(eventAesKey_, "") };
    inline IdpIdaas2SubConfig& setEventAesKey(string eventAesKey) { DARABONBA_PTR_SET_VALUE(eventAesKey_, eventAesKey) };


    // eventLabel Field Functions 
    bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
    void deleteEventLabel() { this->eventLabel_ = nullptr;};
    inline string eventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
    inline IdpIdaas2SubConfig& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline IdpIdaas2SubConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // publicKeyEndpoint Field Functions 
    bool hasPublicKeyEndpoint() const { return this->publicKeyEndpoint_ != nullptr;};
    void deletePublicKeyEndpoint() { this->publicKeyEndpoint_ = nullptr;};
    inline string publicKeyEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicKeyEndpoint_, "") };
    inline IdpIdaas2SubConfig& setPublicKeyEndpoint(string publicKeyEndpoint) { DARABONBA_PTR_SET_VALUE(publicKeyEndpoint_, publicKeyEndpoint) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline IdpIdaas2SubConfig& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // samlMetadata Field Functions 
    bool hasSamlMetadata() const { return this->samlMetadata_ != nullptr;};
    void deleteSamlMetadata() { this->samlMetadata_ = nullptr;};
    inline string samlMetadata() const { DARABONBA_PTR_GET_DEFAULT(samlMetadata_, "") };
    inline IdpIdaas2SubConfig& setSamlMetadata(string samlMetadata) { DARABONBA_PTR_SET_VALUE(samlMetadata_, samlMetadata) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientSecret_ = nullptr;
    std::shared_ptr<string> eventAesKey_ = nullptr;
    std::shared_ptr<string> eventLabel_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> publicKeyEndpoint_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> samlMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
