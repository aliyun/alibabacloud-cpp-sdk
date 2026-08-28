// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLWORKSPACEPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLWORKSPACEPLUGINREQUEST_HPP_
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
  class InstallWorkspacePluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallWorkspacePluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, InstallWorkspacePluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    InstallWorkspacePluginRequest() = default ;
    InstallWorkspacePluginRequest(const InstallWorkspacePluginRequest &) = default ;
    InstallWorkspacePluginRequest(InstallWorkspacePluginRequest &&) = default ;
    InstallWorkspacePluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallWorkspacePluginRequest() = default ;
    InstallWorkspacePluginRequest& operator=(const InstallWorkspacePluginRequest &) = default ;
    InstallWorkspacePluginRequest& operator=(InstallWorkspacePluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
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
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(network, network_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(network, network_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Network : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Network& obj) { 
            DARABONBA_PTR_TO_JSON(internet, internet_);
            DARABONBA_PTR_TO_JSON(vpc, vpc_);
          };
          friend void from_json(const Darabonba::Json& j, Network& obj) { 
            DARABONBA_PTR_FROM_JSON(internet, internet_);
            DARABONBA_PTR_FROM_JSON(vpc, vpc_);
          };
          Network() = default ;
          Network(const Network &) = default ;
          Network(Network &&) = default ;
          Network(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Network() = default ;
          Network& operator=(const Network &) = default ;
          Network& operator=(Network &&) = default ;
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
            // Specifies whether the collaboration plugin uses VPC networking. If set to false, vpcId and vSwitchIds are ignored. If set to true, you must provide both vpcId and at least two vSwitchIds.
            shared_ptr<bool> enabled_ {};
            // The list of vSwitch IDs. The collaboration plugin requires that the vSwitches cover at least two different zones, and all vSwitches must belong to the VPC specified by vpcId.
            // 
            // This parameter is required.
            shared_ptr<vector<string>> vSwitchIds_ {};
            // The VPC ID.
            // 
            // This parameter is required.
            shared_ptr<string> vpcId_ {};
          };

          class Internet : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Internet& obj) { 
              DARABONBA_PTR_TO_JSON(enabled, enabled_);
            };
            friend void from_json(const Darabonba::Json& j, Internet& obj) { 
              DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            };
            Internet() = default ;
            Internet(const Internet &) = default ;
            Internet(Internet &&) = default ;
            Internet(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Internet() = default ;
            Internet& operator=(const Internet &) = default ;
            Internet& operator=(Internet &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->enabled_ == nullptr; };
            // enabled Field Functions 
            bool hasEnabled() const { return this->enabled_ != nullptr;};
            void deleteEnabled() { this->enabled_ = nullptr;};
            inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
            inline Internet& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          protected:
            // Specifies whether to enable public network access. If set to true without a VPC specified, PUB_NET is used. If set to true with a VPC specified, PRIVATE_PUBNET is used. If only a VPC is specified, PRIVATE_NET is used. At least one of public network or VPC must be configured.
            shared_ptr<bool> enabled_ {};
          };

          virtual bool empty() const override { return this->internet_ == nullptr
        && this->vpc_ == nullptr; };
          // internet Field Functions 
          bool hasInternet() const { return this->internet_ != nullptr;};
          void deleteInternet() { this->internet_ = nullptr;};
          inline const Network::Internet & getInternet() const { DARABONBA_PTR_GET_CONST(internet_, Network::Internet) };
          inline Network::Internet getInternet() { DARABONBA_PTR_GET(internet_, Network::Internet) };
          inline Network& setInternet(const Network::Internet & internet) { DARABONBA_PTR_SET_VALUE(internet_, internet) };
          inline Network& setInternet(Network::Internet && internet) { DARABONBA_PTR_SET_RVALUE(internet_, internet) };


          // vpc Field Functions 
          bool hasVpc() const { return this->vpc_ != nullptr;};
          void deleteVpc() { this->vpc_ = nullptr;};
          inline const Network::Vpc & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, Network::Vpc) };
          inline Network::Vpc getVpc() { DARABONBA_PTR_GET(vpc_, Network::Vpc) };
          inline Network& setVpc(const Network::Vpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
          inline Network& setVpc(Network::Vpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


        protected:
          // Controls whether the collaboration component is allowed to access the public network. This configuration only controls public network access capability and does not expose the component service to the public network.
          shared_ptr<Network::Internet> internet_ {};
          // The user VPC and vSwitch list used for deploying the collaboration plugin. The zones corresponding to the vSwitches are queried by the server and do not need to be provided by the user.
          shared_ptr<Network::Vpc> vpc_ {};
        };

        virtual bool empty() const override { return this->network_ == nullptr; };
        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline const Config::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, Config::Network) };
        inline Config::Network getNetwork() { DARABONBA_PTR_GET(network_, Config::Network) };
        inline Config& setNetwork(const Config::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
        inline Config& setNetwork(Config::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


      protected:
        // The network configuration used by the collaboration plugin. If not specified, the server uses the existing network configuration of the workspace.
        shared_ptr<Config::Network> network_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Body::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Body::Config) };
      inline Body::Config getConfig() { DARABONBA_PTR_GET(config_, Body::Config) };
      inline Body& setConfig(const Body::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Body& setConfig(Body::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    protected:
      // The plugin-specific configuration. The configuration structure is determined by pluginName. Currently, the collaboration plugin supports network.
      shared_ptr<Body::Config> config_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const InstallWorkspacePluginRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, InstallWorkspacePluginRequest::Body) };
    inline InstallWorkspacePluginRequest::Body getBody() { DARABONBA_PTR_GET(body_, InstallWorkspacePluginRequest::Body) };
    inline InstallWorkspacePluginRequest& setBody(const InstallWorkspacePluginRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline InstallWorkspacePluginRequest& setBody(InstallWorkspacePluginRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline InstallWorkspacePluginRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body for installing a plugin.
    shared_ptr<InstallWorkspacePluginRequest::Body> body_ {};
    // The client idempotency token.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
