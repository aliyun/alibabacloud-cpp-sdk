// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(k8sSourceConfig, k8sSourceConfig_);
      DARABONBA_PTR_TO_JSON(nacosSourceConfig, nacosSourceConfig_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(k8sSourceConfig, k8sSourceConfig_);
      DARABONBA_PTR_FROM_JSON(nacosSourceConfig, nacosSourceConfig_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateSourceRequest() = default ;
    CreateSourceRequest(const CreateSourceRequest &) = default ;
    CreateSourceRequest(CreateSourceRequest &&) = default ;
    CreateSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSourceRequest() = default ;
    CreateSourceRequest& operator=(const CreateSourceRequest &) = default ;
    CreateSourceRequest& operator=(CreateSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NacosSourceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NacosSourceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, NacosSourceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      };
      NacosSourceConfig() = default ;
      NacosSourceConfig(const NacosSourceConfig &) = default ;
      NacosSourceConfig(NacosSourceConfig &&) = default ;
      NacosSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NacosSourceConfig() = default ;
      NacosSourceConfig& operator=(const NacosSourceConfig &) = default ;
      NacosSourceConfig& operator=(NacosSourceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NacosSourceConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The Nacos instance ID.
      shared_ptr<string> instanceId_ {};
    };

    class K8sSourceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const K8sSourceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(authorizeSecurityGroupRules, authorizeSecurityGroupRules_);
        DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      };
      friend void from_json(const Darabonba::Json& j, K8sSourceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(authorizeSecurityGroupRules, authorizeSecurityGroupRules_);
        DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      };
      K8sSourceConfig() = default ;
      K8sSourceConfig(const K8sSourceConfig &) = default ;
      K8sSourceConfig(K8sSourceConfig &&) = default ;
      K8sSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~K8sSourceConfig() = default ;
      K8sSourceConfig& operator=(const K8sSourceConfig &) = default ;
      K8sSourceConfig& operator=(K8sSourceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthorizeSecurityGroupRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizeSecurityGroupRules& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(portRanges, portRanges_);
          DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizeSecurityGroupRules& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(portRanges, portRanges_);
          DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
        };
        AuthorizeSecurityGroupRules() = default ;
        AuthorizeSecurityGroupRules(const AuthorizeSecurityGroupRules &) = default ;
        AuthorizeSecurityGroupRules(AuthorizeSecurityGroupRules &&) = default ;
        AuthorizeSecurityGroupRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizeSecurityGroupRules() = default ;
        AuthorizeSecurityGroupRules& operator=(const AuthorizeSecurityGroupRules &) = default ;
        AuthorizeSecurityGroupRules& operator=(AuthorizeSecurityGroupRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->portRanges_ == nullptr && this->securityGroupId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AuthorizeSecurityGroupRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // portRanges Field Functions 
        bool hasPortRanges() const { return this->portRanges_ != nullptr;};
        void deletePortRanges() { this->portRanges_ = nullptr;};
        inline const vector<string> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<string>) };
        inline vector<string> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<string>) };
        inline AuthorizeSecurityGroupRules& setPortRanges(const vector<string> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
        inline AuthorizeSecurityGroupRules& setPortRanges(vector<string> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline AuthorizeSecurityGroupRules& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      protected:
        // The rule description.
        shared_ptr<string> description_ {};
        // The list of port ranges.
        shared_ptr<vector<string>> portRanges_ {};
        // The ID of a security group.
        shared_ptr<string> securityGroupId_ {};
      };

      virtual bool empty() const override { return this->authorizeSecurityGroupRules_ == nullptr
        && this->clusterId_ == nullptr; };
      // authorizeSecurityGroupRules Field Functions 
      bool hasAuthorizeSecurityGroupRules() const { return this->authorizeSecurityGroupRules_ != nullptr;};
      void deleteAuthorizeSecurityGroupRules() { this->authorizeSecurityGroupRules_ = nullptr;};
      inline const vector<K8sSourceConfig::AuthorizeSecurityGroupRules> & getAuthorizeSecurityGroupRules() const { DARABONBA_PTR_GET_CONST(authorizeSecurityGroupRules_, vector<K8sSourceConfig::AuthorizeSecurityGroupRules>) };
      inline vector<K8sSourceConfig::AuthorizeSecurityGroupRules> getAuthorizeSecurityGroupRules() { DARABONBA_PTR_GET(authorizeSecurityGroupRules_, vector<K8sSourceConfig::AuthorizeSecurityGroupRules>) };
      inline K8sSourceConfig& setAuthorizeSecurityGroupRules(const vector<K8sSourceConfig::AuthorizeSecurityGroupRules> & authorizeSecurityGroupRules) { DARABONBA_PTR_SET_VALUE(authorizeSecurityGroupRules_, authorizeSecurityGroupRules) };
      inline K8sSourceConfig& setAuthorizeSecurityGroupRules(vector<K8sSourceConfig::AuthorizeSecurityGroupRules> && authorizeSecurityGroupRules) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityGroupRules_, authorizeSecurityGroupRules) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline K8sSourceConfig& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    protected:
      // The security group rules.
      shared_ptr<vector<K8sSourceConfig::AuthorizeSecurityGroupRules>> authorizeSecurityGroupRules_ {};
      // The ID of the ACK cluster.
      shared_ptr<string> clusterId_ {};
    };

    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->k8sSourceConfig_ == nullptr && this->nacosSourceConfig_ == nullptr && this->resourceGroupId_ == nullptr && this->type_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateSourceRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // k8sSourceConfig Field Functions 
    bool hasK8sSourceConfig() const { return this->k8sSourceConfig_ != nullptr;};
    void deleteK8sSourceConfig() { this->k8sSourceConfig_ = nullptr;};
    inline const CreateSourceRequest::K8sSourceConfig & getK8sSourceConfig() const { DARABONBA_PTR_GET_CONST(k8sSourceConfig_, CreateSourceRequest::K8sSourceConfig) };
    inline CreateSourceRequest::K8sSourceConfig getK8sSourceConfig() { DARABONBA_PTR_GET(k8sSourceConfig_, CreateSourceRequest::K8sSourceConfig) };
    inline CreateSourceRequest& setK8sSourceConfig(const CreateSourceRequest::K8sSourceConfig & k8sSourceConfig) { DARABONBA_PTR_SET_VALUE(k8sSourceConfig_, k8sSourceConfig) };
    inline CreateSourceRequest& setK8sSourceConfig(CreateSourceRequest::K8sSourceConfig && k8sSourceConfig) { DARABONBA_PTR_SET_RVALUE(k8sSourceConfig_, k8sSourceConfig) };


    // nacosSourceConfig Field Functions 
    bool hasNacosSourceConfig() const { return this->nacosSourceConfig_ != nullptr;};
    void deleteNacosSourceConfig() { this->nacosSourceConfig_ = nullptr;};
    inline const CreateSourceRequest::NacosSourceConfig & getNacosSourceConfig() const { DARABONBA_PTR_GET_CONST(nacosSourceConfig_, CreateSourceRequest::NacosSourceConfig) };
    inline CreateSourceRequest::NacosSourceConfig getNacosSourceConfig() { DARABONBA_PTR_GET(nacosSourceConfig_, CreateSourceRequest::NacosSourceConfig) };
    inline CreateSourceRequest& setNacosSourceConfig(const CreateSourceRequest::NacosSourceConfig & nacosSourceConfig) { DARABONBA_PTR_SET_VALUE(nacosSourceConfig_, nacosSourceConfig) };
    inline CreateSourceRequest& setNacosSourceConfig(CreateSourceRequest::NacosSourceConfig && nacosSourceConfig) { DARABONBA_PTR_SET_RVALUE(nacosSourceConfig_, nacosSourceConfig) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSourceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSourceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The gateway instance ID.
    shared_ptr<string> gatewayId_ {};
    // The source configuration when the source type is K8S.
    shared_ptr<CreateSourceRequest::K8sSourceConfig> k8sSourceConfig_ {};
    // The source configuration when the source type is MSE_NACOS.
    shared_ptr<CreateSourceRequest::NacosSourceConfig> nacosSourceConfig_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The source type. Valid values:
    // 
    // *   MSE_NACOS: MSE Nacos
    // *   K8S: Container Service for Kubernetes (ACK)
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
