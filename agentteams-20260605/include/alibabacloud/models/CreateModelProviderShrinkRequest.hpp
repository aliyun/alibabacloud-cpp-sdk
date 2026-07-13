// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELPROVIDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELPROVIDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class CreateModelProviderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelProviderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(ApiKeys, apiKeysShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocols, protocolsShrink_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelProviderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(ApiKeys, apiKeysShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocolsShrink_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
    };
    CreateModelProviderShrinkRequest() = default ;
    CreateModelProviderShrinkRequest(const CreateModelProviderShrinkRequest &) = default ;
    CreateModelProviderShrinkRequest(CreateModelProviderShrinkRequest &&) = default ;
    CreateModelProviderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelProviderShrinkRequest() = default ;
    CreateModelProviderShrinkRequest& operator=(const CreateModelProviderShrinkRequest &) = default ;
    CreateModelProviderShrinkRequest& operator=(CreateModelProviderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->apiKeysShrink_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr
        && this->protocolsShrink_ == nullptr && this->provider_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateModelProviderShrinkRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // apiKeysShrink Field Functions 
    bool hasApiKeysShrink() const { return this->apiKeysShrink_ != nullptr;};
    void deleteApiKeysShrink() { this->apiKeysShrink_ = nullptr;};
    inline string getApiKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(apiKeysShrink_, "") };
    inline CreateModelProviderShrinkRequest& setApiKeysShrink(string apiKeysShrink) { DARABONBA_PTR_SET_VALUE(apiKeysShrink_, apiKeysShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateModelProviderShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelProviderShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateModelProviderShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModelProviderShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocolsShrink Field Functions 
    bool hasProtocolsShrink() const { return this->protocolsShrink_ != nullptr;};
    void deleteProtocolsShrink() { this->protocolsShrink_ = nullptr;};
    inline string getProtocolsShrink() const { DARABONBA_PTR_GET_DEFAULT(protocolsShrink_, "") };
    inline CreateModelProviderShrinkRequest& setProtocolsShrink(string protocolsShrink) { DARABONBA_PTR_SET_VALUE(protocolsShrink_, protocolsShrink) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateModelProviderShrinkRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    // This parameter is required.
    shared_ptr<string> address_ {};
    // This parameter is required.
    shared_ptr<string> apiKeysShrink_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> protocolsShrink_ {};
    // This parameter is required.
    shared_ptr<string> provider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
