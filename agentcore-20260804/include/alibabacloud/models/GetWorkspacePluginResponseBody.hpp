// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACEPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACEPLUGINRESPONSEBODY_HPP_
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
  class GetWorkspacePluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspacePluginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspacePluginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetWorkspacePluginResponseBody() = default ;
    GetWorkspacePluginResponseBody(const GetWorkspacePluginResponseBody &) = default ;
    GetWorkspacePluginResponseBody(GetWorkspacePluginResponseBody &&) = default ;
    GetWorkspacePluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspacePluginResponseBody() = default ;
    GetWorkspacePluginResponseBody& operator=(const GetWorkspacePluginResponseBody &) = default ;
    GetWorkspacePluginResponseBody& operator=(GetWorkspacePluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(pluginName, pluginName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(pluginName, pluginName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(agentLoop, agentLoop_);
          DARABONBA_PTR_TO_JSON(network, network_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(agentLoop, agentLoop_);
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
            // Indicates whether VPC network access is enabled for the collaboration plug-in.
            shared_ptr<bool> enabled_ {};
            // The list of vSwitch IDs used for plug-in deployment.
            shared_ptr<vector<string>> vSwitchIds_ {};
            // The VPC ID used for plug-in deployment.
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
            // Indicates whether public network access is enabled.
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
          // The public network access configuration.
          shared_ptr<Network::Internet> internet_ {};
          // The user VPC configuration.
          shared_ptr<Network::Vpc> vpc_ {};
        };

        class AgentLoop : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AgentLoop& obj) { 
            DARABONBA_PTR_TO_JSON(agentSpaceName, agentSpaceName_);
            DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
            DARABONBA_PTR_TO_JSON(regionId, regionId_);
          };
          friend void from_json(const Darabonba::Json& j, AgentLoop& obj) { 
            DARABONBA_PTR_FROM_JSON(agentSpaceName, agentSpaceName_);
            DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
            DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          };
          AgentLoop() = default ;
          AgentLoop(const AgentLoop &) = default ;
          AgentLoop(AgentLoop &&) = default ;
          AgentLoop(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AgentLoop() = default ;
          AgentLoop& operator=(const AgentLoop &) = default ;
          AgentLoop& operator=(AgentLoop &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->agentSpaceName_ == nullptr
        && this->createdAt_ == nullptr && this->regionId_ == nullptr; };
          // agentSpaceName Field Functions 
          bool hasAgentSpaceName() const { return this->agentSpaceName_ != nullptr;};
          void deleteAgentSpaceName() { this->agentSpaceName_ = nullptr;};
          inline string getAgentSpaceName() const { DARABONBA_PTR_GET_DEFAULT(agentSpaceName_, "") };
          inline AgentLoop& setAgentSpaceName(string agentSpaceName) { DARABONBA_PTR_SET_VALUE(agentSpaceName_, agentSpaceName) };


          // createdAt Field Functions 
          bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
          void deleteCreatedAt() { this->createdAt_ = nullptr;};
          inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
          inline AgentLoop& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline AgentLoop& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        protected:
          // The AgentSpace name associated with the AgentLoop plug-in.
          shared_ptr<string> agentSpaceName_ {};
          // The creation time of the AgentSpace in UTC in RFC 3339 format.
          shared_ptr<string> createdAt_ {};
          // The region ID where the AgentSpace resides.
          shared_ptr<string> regionId_ {};
        };

        virtual bool empty() const override { return this->agentLoop_ == nullptr
        && this->network_ == nullptr; };
        // agentLoop Field Functions 
        bool hasAgentLoop() const { return this->agentLoop_ != nullptr;};
        void deleteAgentLoop() { this->agentLoop_ = nullptr;};
        inline const Config::AgentLoop & getAgentLoop() const { DARABONBA_PTR_GET_CONST(agentLoop_, Config::AgentLoop) };
        inline Config::AgentLoop getAgentLoop() { DARABONBA_PTR_GET(agentLoop_, Config::AgentLoop) };
        inline Config& setAgentLoop(const Config::AgentLoop & agentLoop) { DARABONBA_PTR_SET_VALUE(agentLoop_, agentLoop) };
        inline Config& setAgentLoop(Config::AgentLoop && agentLoop) { DARABONBA_PTR_SET_RVALUE(agentLoop_, agentLoop) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline const Config::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, Config::Network) };
        inline Config::Network getNetwork() { DARABONBA_PTR_GET(network_, Config::Network) };
        inline Config& setNetwork(const Config::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
        inline Config& setNetwork(Config::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


      protected:
        // The AgentLoop plug-in configuration.
        shared_ptr<Config::AgentLoop> agentLoop_ {};
        // The network configuration of the plug-in, including public network access configuration and VPC configuration.
        shared_ptr<Config::Network> network_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->enabled_ == nullptr && this->pluginName_ == nullptr && this->status_ == nullptr && this->workspaceId_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Data::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Data::Config) };
      inline Data::Config getConfig() { DARABONBA_PTR_GET(config_, Data::Config) };
      inline Data& setConfig(const Data::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Data& setConfig(Data::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // pluginName Field Functions 
      bool hasPluginName() const { return this->pluginName_ != nullptr;};
      void deletePluginName() { this->pluginName_ = nullptr;};
      inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
      inline Data& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The user-configurable properties currently in effect for the plug-in. This field is empty if the plug-in is not installed.
      shared_ptr<Data::Config> config_ {};
      // Indicates whether the plug-in is enabled. The value is true when the status is ENABLED.
      shared_ptr<bool> enabled_ {};
      // The plug-in name.
      shared_ptr<string> pluginName_ {};
      // The plug-in status. Valid values: DISABLED, ENABLING, ENABLED, ENABLE_FAILED, DISABLING, DISABLE_FAILED.
      shared_ptr<string> status_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWorkspacePluginResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkspacePluginResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkspacePluginResponseBody::Data) };
    inline GetWorkspacePluginResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkspacePluginResponseBody::Data) };
    inline GetWorkspacePluginResponseBody& setData(const GetWorkspacePluginResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkspacePluginResponseBody& setData(GetWorkspacePluginResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetWorkspacePluginResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkspacePluginResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkspacePluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkspacePluginResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The plug-in details.
    shared_ptr<GetWorkspacePluginResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message. An error description is returned if the request fails.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
