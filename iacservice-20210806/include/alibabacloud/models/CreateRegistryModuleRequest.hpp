// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREGISTRYMODULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREGISTRYMODULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateRegistryModuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRegistryModuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acl, acl_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRegistryModuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acl, acl_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateRegistryModuleRequest() = default ;
    CreateRegistryModuleRequest(const CreateRegistryModuleRequest &) = default ;
    CreateRegistryModuleRequest(CreateRegistryModuleRequest &&) = default ;
    CreateRegistryModuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRegistryModuleRequest() = default ;
    CreateRegistryModuleRequest& operator=(const CreateRegistryModuleRequest &) = default ;
    CreateRegistryModuleRequest& operator=(CreateRegistryModuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->moduleName_ == nullptr && this->namespaceName_ == nullptr && this->provider_ == nullptr
        && this->type_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string getAcl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline CreateRegistryModuleRequest& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRegistryModuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRegistryModuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline CreateRegistryModuleRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateRegistryModuleRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateRegistryModuleRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRegistryModuleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The access permission. Valid values:
    // 
    // - private: private.
    shared_ptr<string> acl_ {};
    // The idempotence token. Format: [0-9a-zA-Z-]{1,64}. Use a UUID.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The description of the Registry template.
    shared_ptr<string> description_ {};
    // The name of the Registry template. The name must meet the following requirements:
    // 
    // - The name must be 3 to 63 characters in length.
    // - The name can contain uppercase and lowercase letters, digits, hyphens (-), and underscores (_), and cannot start or end with a hyphen.
    // - The name must be unique within the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> moduleName_ {};
    // The workspace name.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
    // The provider type. Valid values:
    // 
    // - alicloud: Alibaba Cloud.
    shared_ptr<string> provider_ {};
    // The template type. Valid values:
    // 
    // - self: custom template.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
