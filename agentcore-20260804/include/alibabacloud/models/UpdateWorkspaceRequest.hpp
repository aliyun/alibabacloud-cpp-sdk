// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
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
  class UpdateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest(UpdateWorkspaceRequest &&) = default ;
    UpdateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest& operator=(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest& operator=(UpdateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
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
          DARABONBA_PTR_TO_JSON(vpc, vpc_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkConfiguration& obj) { 
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
          // Specifies whether to enable VPC networking.
          shared_ptr<bool> enabled_ {};
          // The list of vSwitch IDs. When VPC networking is enabled, at least one vSwitch must be included, and all vSwitches must belong to the VPC specified by VpcId.
          shared_ptr<vector<string>> vSwitchIds_ {};
          // The ID of the user VPC.
          shared_ptr<string> vpcId_ {};
        };

        virtual bool empty() const override { return this->vpc_ == nullptr; };
        // vpc Field Functions 
        bool hasVpc() const { return this->vpc_ != nullptr;};
        void deleteVpc() { this->vpc_ = nullptr;};
        inline const NetworkConfiguration::Vpc & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, NetworkConfiguration::Vpc) };
        inline NetworkConfiguration::Vpc getVpc() { DARABONBA_PTR_GET(vpc_, NetworkConfiguration::Vpc) };
        inline NetworkConfiguration& setVpc(const NetworkConfiguration::Vpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
        inline NetworkConfiguration& setVpc(NetworkConfiguration::Vpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


      protected:
        // The user VPC network configuration.
        // 
        // This parameter is required.
        shared_ptr<NetworkConfiguration::Vpc> vpc_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->networkConfiguration_ == nullptr; };
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


    protected:
      // The updated workspace name.
      shared_ptr<string> name_ {};
      // The updated workspace network configuration.
      shared_ptr<Body::NetworkConfiguration> networkConfiguration_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateWorkspaceRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateWorkspaceRequest::Body) };
    inline UpdateWorkspaceRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateWorkspaceRequest::Body) };
    inline UpdateWorkspaceRequest& setBody(const UpdateWorkspaceRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateWorkspaceRequest& setBody(UpdateWorkspaceRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateWorkspaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body for updating a workspace.
    shared_ptr<UpdateWorkspaceRequest::Body> body_ {};
    // The client idempotency token.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
