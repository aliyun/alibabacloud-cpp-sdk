// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest(CreateWorkspaceRequest &&) = default ;
    CreateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest& operator=(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest& operator=(CreateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_TO_JSON(cmsWorkspace, cmsWorkspace_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
        DARABONBA_PTR_TO_JSON(storageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_FROM_JSON(cmsWorkspace, cmsWorkspace_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
        DARABONBA_PTR_FROM_JSON(storageType, storageType_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetworkConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(publicEgressEnabled, publicEgressEnabled_);
          DARABONBA_PTR_TO_JSON(publicIngressEnabled, publicIngressEnabled_);
          DARABONBA_PTR_TO_JSON(vpc, vpc_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(publicEgressEnabled, publicEgressEnabled_);
          DARABONBA_PTR_FROM_JSON(publicIngressEnabled, publicIngressEnabled_);
          DARABONBA_PTR_FROM_JSON(vpc, vpc_);
        };
        NetworkConfiguration() = default ;
        NetworkConfiguration(const NetworkConfiguration &) = default ;
        NetworkConfiguration(NetworkConfiguration &&) = default ;
        NetworkConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkConfiguration() = default ;
        NetworkConfiguration& operator=(const NetworkConfiguration &) = default ;
        NetworkConfiguration& operator=(NetworkConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Vpc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
            DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
            DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          };
          Vpc() = default ;
          Vpc(const Vpc &) = default ;
          Vpc(Vpc &&) = default ;
          Vpc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Vpc() = default ;
          Vpc& operator=(const Vpc &) = default ;
          Vpc& operator=(Vpc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr
        && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline Vpc& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // vSwitchIds Field Functions 
          bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
          void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
          inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
          inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
          inline Vpc& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
          inline Vpc& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // Specifies whether to enable the VPC network.
          shared_ptr<bool> enabled_ {};
          // The list of vSwitch IDs. If the VPC network is enabled, at least one vSwitch must be included, and all vSwitches must belong to the VPC specified by VpcId.
          shared_ptr<vector<string>> vSwitchIds_ {};
          // The ID of the user VPC.
          shared_ptr<string> vpcId_ {};
        };

        virtual bool empty() const override { return this->publicEgressEnabled_ == nullptr
        && this->publicIngressEnabled_ == nullptr && this->vpc_ == nullptr; };
        // publicEgressEnabled Field Functions 
        bool hasPublicEgressEnabled() const { return this->publicEgressEnabled_ != nullptr;};
        void deletePublicEgressEnabled() { this->publicEgressEnabled_ = nullptr;};
        inline bool getPublicEgressEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEgressEnabled_, false) };
        inline NetworkConfiguration& setPublicEgressEnabled(bool publicEgressEnabled) { DARABONBA_PTR_SET_VALUE(publicEgressEnabled_, publicEgressEnabled) };


        // publicIngressEnabled Field Functions 
        bool hasPublicIngressEnabled() const { return this->publicIngressEnabled_ != nullptr;};
        void deletePublicIngressEnabled() { this->publicIngressEnabled_ = nullptr;};
        inline bool getPublicIngressEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicIngressEnabled_, false) };
        inline NetworkConfiguration& setPublicIngressEnabled(bool publicIngressEnabled) { DARABONBA_PTR_SET_VALUE(publicIngressEnabled_, publicIngressEnabled) };


        // vpc Field Functions 
        bool hasVpc() const { return this->vpc_ != nullptr;};
        void deleteVpc() { this->vpc_ = nullptr;};
        inline const NetworkConfiguration::Vpc & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, NetworkConfiguration::Vpc) };
        inline NetworkConfiguration::Vpc getVpc() { DARABONBA_PTR_GET(vpc_, NetworkConfiguration::Vpc) };
        inline NetworkConfiguration& setVpc(const NetworkConfiguration::Vpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
        inline NetworkConfiguration& setVpc(NetworkConfiguration::Vpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


      protected:
        // Specifies whether to allow public outbound access from the platform. If not specified, the default value is true. This setting only controls whether the latest versions of managed and custom agents use the public outbound endpoint of the platform. It does not affect fixed historical versions, model or Model Context Protocol (MCP) proxy outbound endpoints, or the public outbound endpoint of the user VPC.
        shared_ptr<bool> publicEgressEnabled_ {};
        // Specifies whether to allow public inbound access. If not specified, the default value is true. If disabled, the public inbound endpoints of all agent endpoints in the workspace are closed. If re-enabled, the original public inbound endpoints are restored. INNER_DIRECT and user VPC inbound endpoints are not affected. Collaboration and Element Web inbound endpoints are not controlled by this setting.
        shared_ptr<bool> publicIngressEnabled_ {};
        // The VPC network configuration of the user.
        shared_ptr<NetworkConfiguration::Vpc> vpc_ {};
      };

      virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->cmsWorkspace_ == nullptr && this->name_ == nullptr && this->networkConfiguration_ == nullptr && this->storageType_ == nullptr; };
      // agentSpace Field Functions 
      bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
      void deleteAgentSpace() { this->agentSpace_ = nullptr;};
      inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
      inline Body& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


      // cmsWorkspace Field Functions 
      bool hasCmsWorkspace() const { return this->cmsWorkspace_ != nullptr;};
      void deleteCmsWorkspace() { this->cmsWorkspace_ = nullptr;};
      inline string getCmsWorkspace() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspace_, "") };
      inline Body& setCmsWorkspace(string cmsWorkspace) { DARABONBA_PTR_SET_VALUE(cmsWorkspace_, cmsWorkspace) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkConfiguration Field Functions 
      bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
      void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
      inline const Body::NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, Body::NetworkConfiguration) };
      inline Body::NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, Body::NetworkConfiguration) };
      inline Body& setNetworkConfiguration(const Body::NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
      inline Body& setNetworkConfiguration(Body::NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Body& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      // If specified, the workspace is directly bound to this AgentSpace without creating a new one. The associated CloudMonitor (CMS) workspace is determined by the server\\"s reverse lookup result, and CmsWorkspace validation is skipped. When the workspace is deleted, only the binding is removed, and the AgentSpace is not deleted. The value must match the current account and region, and the associated CMS workspace must be found through reverse lookup. Otherwise, InvalidParameter is returned.
      shared_ptr<string> agentSpace_ {};
      // If specified, the workspace is bound to this CloudMonitor (CMS) workspace without creating a new one. When the workspace is deleted, only the binding is removed, and the CMS workspace is not deleted. The value must match the current account and region. Otherwise, InvalidParameter is returned.
      shared_ptr<string> cmsWorkspace_ {};
      // The name of the workspace.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The network configuration of the workspace.
      shared_ptr<Body::NetworkConfiguration> networkConfiguration_ {};
      // The storage type of the workspace. PLATFORM indicates platform-managed storage. PRIVATE indicates user-owned private Object Storage Service (OSS) storage.
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateWorkspaceRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateWorkspaceRequest::Body) };
    inline CreateWorkspaceRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateWorkspaceRequest::Body) };
    inline CreateWorkspaceRequest& setBody(const CreateWorkspaceRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateWorkspaceRequest& setBody(CreateWorkspaceRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateWorkspaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body for creating a workspace.
    shared_ptr<CreateWorkspaceRequest::Body> body_ {};
    // The client idempotency token.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
