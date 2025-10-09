// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENACOSMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENACOSMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateNacosMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNacosMcpServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(EncryptToolSpec, encryptToolSpec_);
      DARABONBA_PTR_TO_JSON(EndpointSpecification, endpointSpecification_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(ServerName, serverName_);
      DARABONBA_PTR_TO_JSON(ServerSpecification, serverSpecification_);
      DARABONBA_PTR_TO_JSON(ToolSpecification, toolSpecification_);
      DARABONBA_PTR_TO_JSON(YamlConfig, yamlConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNacosMcpServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(EncryptToolSpec, encryptToolSpec_);
      DARABONBA_PTR_FROM_JSON(EndpointSpecification, endpointSpecification_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
      DARABONBA_PTR_FROM_JSON(ServerSpecification, serverSpecification_);
      DARABONBA_PTR_FROM_JSON(ToolSpecification, toolSpecification_);
      DARABONBA_PTR_FROM_JSON(YamlConfig, yamlConfig_);
    };
    CreateNacosMcpServerRequest() = default ;
    CreateNacosMcpServerRequest(const CreateNacosMcpServerRequest &) = default ;
    CreateNacosMcpServerRequest(CreateNacosMcpServerRequest &&) = default ;
    CreateNacosMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNacosMcpServerRequest() = default ;
    CreateNacosMcpServerRequest& operator=(const CreateNacosMcpServerRequest &) = default ;
    CreateNacosMcpServerRequest& operator=(CreateNacosMcpServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->encryptToolSpec_ != nullptr && this->endpointSpecification_ != nullptr && this->instanceId_ != nullptr && this->namespaceId_ != nullptr && this->serverName_ != nullptr
        && this->serverSpecification_ != nullptr && this->toolSpecification_ != nullptr && this->yamlConfig_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateNacosMcpServerRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // encryptToolSpec Field Functions 
    bool hasEncryptToolSpec() const { return this->encryptToolSpec_ != nullptr;};
    void deleteEncryptToolSpec() { this->encryptToolSpec_ = nullptr;};
    inline bool encryptToolSpec() const { DARABONBA_PTR_GET_DEFAULT(encryptToolSpec_, false) };
    inline CreateNacosMcpServerRequest& setEncryptToolSpec(bool encryptToolSpec) { DARABONBA_PTR_SET_VALUE(encryptToolSpec_, encryptToolSpec) };


    // endpointSpecification Field Functions 
    bool hasEndpointSpecification() const { return this->endpointSpecification_ != nullptr;};
    void deleteEndpointSpecification() { this->endpointSpecification_ = nullptr;};
    inline string endpointSpecification() const { DARABONBA_PTR_GET_DEFAULT(endpointSpecification_, "") };
    inline CreateNacosMcpServerRequest& setEndpointSpecification(string endpointSpecification) { DARABONBA_PTR_SET_VALUE(endpointSpecification_, endpointSpecification) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNacosMcpServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateNacosMcpServerRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string serverName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline CreateNacosMcpServerRequest& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


    // serverSpecification Field Functions 
    bool hasServerSpecification() const { return this->serverSpecification_ != nullptr;};
    void deleteServerSpecification() { this->serverSpecification_ = nullptr;};
    inline string serverSpecification() const { DARABONBA_PTR_GET_DEFAULT(serverSpecification_, "") };
    inline CreateNacosMcpServerRequest& setServerSpecification(string serverSpecification) { DARABONBA_PTR_SET_VALUE(serverSpecification_, serverSpecification) };


    // toolSpecification Field Functions 
    bool hasToolSpecification() const { return this->toolSpecification_ != nullptr;};
    void deleteToolSpecification() { this->toolSpecification_ = nullptr;};
    inline string toolSpecification() const { DARABONBA_PTR_GET_DEFAULT(toolSpecification_, "") };
    inline CreateNacosMcpServerRequest& setToolSpecification(string toolSpecification) { DARABONBA_PTR_SET_VALUE(toolSpecification_, toolSpecification) };


    // yamlConfig Field Functions 
    bool hasYamlConfig() const { return this->yamlConfig_ != nullptr;};
    void deleteYamlConfig() { this->yamlConfig_ = nullptr;};
    inline string yamlConfig() const { DARABONBA_PTR_GET_DEFAULT(yamlConfig_, "") };
    inline CreateNacosMcpServerRequest& setYamlConfig(string yamlConfig) { DARABONBA_PTR_SET_VALUE(yamlConfig_, yamlConfig) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<bool> encryptToolSpec_ = nullptr;
    std::shared_ptr<string> endpointSpecification_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<string> serverName_ = nullptr;
    std::shared_ptr<string> serverSpecification_ = nullptr;
    std::shared_ptr<string> toolSpecification_ = nullptr;
    std::shared_ptr<string> yamlConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
