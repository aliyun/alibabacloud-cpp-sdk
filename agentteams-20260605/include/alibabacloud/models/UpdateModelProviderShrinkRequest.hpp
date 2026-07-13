// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELPROVIDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELPROVIDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class UpdateModelProviderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelProviderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(ApiKeys, apiKeysShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Protocols, protocolsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelProviderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(ApiKeys, apiKeysShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocolsShrink_);
    };
    UpdateModelProviderShrinkRequest() = default ;
    UpdateModelProviderShrinkRequest(const UpdateModelProviderShrinkRequest &) = default ;
    UpdateModelProviderShrinkRequest(UpdateModelProviderShrinkRequest &&) = default ;
    UpdateModelProviderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelProviderShrinkRequest() = default ;
    UpdateModelProviderShrinkRequest& operator=(const UpdateModelProviderShrinkRequest &) = default ;
    UpdateModelProviderShrinkRequest& operator=(UpdateModelProviderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->apiKeysShrink_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr
        && this->protocolsShrink_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateModelProviderShrinkRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // apiKeysShrink Field Functions 
    bool hasApiKeysShrink() const { return this->apiKeysShrink_ != nullptr;};
    void deleteApiKeysShrink() { this->apiKeysShrink_ = nullptr;};
    inline string getApiKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(apiKeysShrink_, "") };
    inline UpdateModelProviderShrinkRequest& setApiKeysShrink(string apiKeysShrink) { DARABONBA_PTR_SET_VALUE(apiKeysShrink_, apiKeysShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateModelProviderShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModelProviderShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateModelProviderShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateModelProviderShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // protocolsShrink Field Functions 
    bool hasProtocolsShrink() const { return this->protocolsShrink_ != nullptr;};
    void deleteProtocolsShrink() { this->protocolsShrink_ = nullptr;};
    inline string getProtocolsShrink() const { DARABONBA_PTR_GET_DEFAULT(protocolsShrink_, "") };
    inline UpdateModelProviderShrinkRequest& setProtocolsShrink(string protocolsShrink) { DARABONBA_PTR_SET_VALUE(protocolsShrink_, protocolsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> address_ {};
    // This parameter is required.
    shared_ptr<string> apiKeysShrink_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> id_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> protocolsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
