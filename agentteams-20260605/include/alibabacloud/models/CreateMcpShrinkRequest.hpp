// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class CreateMcpShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcpShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addressesShrink_);
      DARABONBA_PTR_TO_JSON(AuthConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(AuthEnabled, authEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CreateType, createType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SwaggerConfig, swaggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcpShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addressesShrink_);
      DARABONBA_PTR_FROM_JSON(AuthConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(AuthEnabled, authEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CreateType, createType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SwaggerConfig, swaggerConfig_);
    };
    CreateMcpShrinkRequest() = default ;
    CreateMcpShrinkRequest(const CreateMcpShrinkRequest &) = default ;
    CreateMcpShrinkRequest(CreateMcpShrinkRequest &&) = default ;
    CreateMcpShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcpShrinkRequest() = default ;
    CreateMcpShrinkRequest& operator=(const CreateMcpShrinkRequest &) = default ;
    CreateMcpShrinkRequest& operator=(CreateMcpShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressesShrink_ == nullptr
        && this->authConfig_ == nullptr && this->authEnabled_ == nullptr && this->clientToken_ == nullptr && this->createType_ == nullptr && this->description_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr && this->swaggerConfig_ == nullptr; };
    // addressesShrink Field Functions 
    bool hasAddressesShrink() const { return this->addressesShrink_ != nullptr;};
    void deleteAddressesShrink() { this->addressesShrink_ = nullptr;};
    inline string getAddressesShrink() const { DARABONBA_PTR_GET_DEFAULT(addressesShrink_, "") };
    inline CreateMcpShrinkRequest& setAddressesShrink(string addressesShrink) { DARABONBA_PTR_SET_VALUE(addressesShrink_, addressesShrink) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline string getAuthConfig() const { DARABONBA_PTR_GET_DEFAULT(authConfig_, "") };
    inline CreateMcpShrinkRequest& setAuthConfig(string authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };


    // authEnabled Field Functions 
    bool hasAuthEnabled() const { return this->authEnabled_ != nullptr;};
    void deleteAuthEnabled() { this->authEnabled_ = nullptr;};
    inline bool getAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(authEnabled_, false) };
    inline CreateMcpShrinkRequest& setAuthEnabled(bool authEnabled) { DARABONBA_PTR_SET_VALUE(authEnabled_, authEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateMcpShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline CreateMcpShrinkRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMcpShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateMcpShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMcpShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateMcpShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // swaggerConfig Field Functions 
    bool hasSwaggerConfig() const { return this->swaggerConfig_ != nullptr;};
    void deleteSwaggerConfig() { this->swaggerConfig_ = nullptr;};
    inline string getSwaggerConfig() const { DARABONBA_PTR_GET_DEFAULT(swaggerConfig_, "") };
    inline CreateMcpShrinkRequest& setSwaggerConfig(string swaggerConfig) { DARABONBA_PTR_SET_VALUE(swaggerConfig_, swaggerConfig) };


  protected:
    // This parameter is required.
    shared_ptr<string> addressesShrink_ {};
    shared_ptr<string> authConfig_ {};
    shared_ptr<bool> authEnabled_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> createType_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<string> swaggerConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
