// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAgentSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    CreateAgentSessionRequest() = default ;
    CreateAgentSessionRequest(const CreateAgentSessionRequest &) = default ;
    CreateAgentSessionRequest(CreateAgentSessionRequest &&) = default ;
    CreateAgentSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentSessionRequest() = default ;
    CreateAgentSessionRequest& operator=(const CreateAgentSessionRequest &) = default ;
    CreateAgentSessionRequest& operator=(CreateAgentSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(Meta, meta_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(Meta, meta_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Meta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Meta& obj) { 
          DARABONBA_PTR_TO_JSON(Agent, agent_);
          DARABONBA_PTR_TO_JSON(Config, config_);
        };
        friend void from_json(const Darabonba::Json& j, Meta& obj) { 
          DARABONBA_PTR_FROM_JSON(Agent, agent_);
          DARABONBA_PTR_FROM_JSON(Config, config_);
        };
        Meta() = default ;
        Meta(const Meta &) = default ;
        Meta(Meta &&) = default ;
        Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Meta() = default ;
        Meta& operator=(const Meta &) = default ;
        Meta& operator=(Meta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Config : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Config& obj) { 
            DARABONBA_PTR_TO_JSON(SessionSource, sessionSource_);
            DARABONBA_PTR_TO_JSON(SessionTags, sessionTags_);
          };
          friend void from_json(const Darabonba::Json& j, Config& obj) { 
            DARABONBA_PTR_FROM_JSON(SessionSource, sessionSource_);
            DARABONBA_PTR_FROM_JSON(SessionTags, sessionTags_);
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
          class SessionTags : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SessionTags& obj) { 
              DARABONBA_PTR_TO_JSON(SessionTagCode, sessionTagCode_);
            };
            friend void from_json(const Darabonba::Json& j, SessionTags& obj) { 
              DARABONBA_PTR_FROM_JSON(SessionTagCode, sessionTagCode_);
            };
            SessionTags() = default ;
            SessionTags(const SessionTags &) = default ;
            SessionTags(SessionTags &&) = default ;
            SessionTags(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SessionTags() = default ;
            SessionTags& operator=(const SessionTags &) = default ;
            SessionTags& operator=(SessionTags &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->sessionTagCode_ == nullptr; };
            // sessionTagCode Field Functions 
            bool hasSessionTagCode() const { return this->sessionTagCode_ != nullptr;};
            void deleteSessionTagCode() { this->sessionTagCode_ = nullptr;};
            inline string getSessionTagCode() const { DARABONBA_PTR_GET_DEFAULT(sessionTagCode_, "") };
            inline SessionTags& setSessionTagCode(string sessionTagCode) { DARABONBA_PTR_SET_VALUE(sessionTagCode_, sessionTagCode) };


          protected:
            shared_ptr<string> sessionTagCode_ {};
          };

          virtual bool empty() const override { return this->sessionSource_ == nullptr
        && this->sessionTags_ == nullptr; };
          // sessionSource Field Functions 
          bool hasSessionSource() const { return this->sessionSource_ != nullptr;};
          void deleteSessionSource() { this->sessionSource_ = nullptr;};
          inline string getSessionSource() const { DARABONBA_PTR_GET_DEFAULT(sessionSource_, "") };
          inline Config& setSessionSource(string sessionSource) { DARABONBA_PTR_SET_VALUE(sessionSource_, sessionSource) };


          // sessionTags Field Functions 
          bool hasSessionTags() const { return this->sessionTags_ != nullptr;};
          void deleteSessionTags() { this->sessionTags_ = nullptr;};
          inline const vector<Config::SessionTags> & getSessionTags() const { DARABONBA_PTR_GET_CONST(sessionTags_, vector<Config::SessionTags>) };
          inline vector<Config::SessionTags> getSessionTags() { DARABONBA_PTR_GET(sessionTags_, vector<Config::SessionTags>) };
          inline Config& setSessionTags(const vector<Config::SessionTags> & sessionTags) { DARABONBA_PTR_SET_VALUE(sessionTags_, sessionTags) };
          inline Config& setSessionTags(vector<Config::SessionTags> && sessionTags) { DARABONBA_PTR_SET_RVALUE(sessionTags_, sessionTags) };


        protected:
          shared_ptr<string> sessionSource_ {};
          shared_ptr<vector<Config::SessionTags>> sessionTags_ {};
        };

        class Agent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Agent& obj) { 
            DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          };
          friend void from_json(const Darabonba::Json& j, Agent& obj) { 
            DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          };
          Agent() = default ;
          Agent(const Agent &) = default ;
          Agent(Agent &&) = default ;
          Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Agent() = default ;
          Agent& operator=(const Agent &) = default ;
          Agent& operator=(Agent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->agentName_ == nullptr; };
          // agentName Field Functions 
          bool hasAgentName() const { return this->agentName_ != nullptr;};
          void deleteAgentName() { this->agentName_ = nullptr;};
          inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
          inline Agent& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        protected:
          shared_ptr<string> agentName_ {};
        };

        virtual bool empty() const override { return this->agent_ == nullptr
        && this->config_ == nullptr; };
        // agent Field Functions 
        bool hasAgent() const { return this->agent_ != nullptr;};
        void deleteAgent() { this->agent_ = nullptr;};
        inline const Meta::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, Meta::Agent) };
        inline Meta::Agent getAgent() { DARABONBA_PTR_GET(agent_, Meta::Agent) };
        inline Meta& setAgent(const Meta::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
        inline Meta& setAgent(Meta::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline const Meta::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Meta::Config) };
        inline Meta::Config getConfig() { DARABONBA_PTR_GET(config_, Meta::Config) };
        inline Meta& setConfig(const Meta::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
        inline Meta& setConfig(Meta::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      protected:
        shared_ptr<Meta::Agent> agent_ {};
        shared_ptr<Meta::Config> config_ {};
      };

      virtual bool empty() const override { return this->meta_ == nullptr; };
      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const Params::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Params::Meta) };
      inline Params::Meta getMeta() { DARABONBA_PTR_GET(meta_, Params::Meta) };
      inline Params& setMeta(const Params::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Params& setMeta(Params::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    protected:
      shared_ptr<Params::Meta> meta_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->params_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateAgentSessionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline CreateAgentSessionRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const CreateAgentSessionRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, CreateAgentSessionRequest::Params) };
    inline CreateAgentSessionRequest::Params getParams() { DARABONBA_PTR_GET(params_, CreateAgentSessionRequest::Params) };
    inline CreateAgentSessionRequest& setParams(const CreateAgentSessionRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline CreateAgentSessionRequest& setParams(CreateAgentSessionRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> jsonrpc_ {};
    shared_ptr<CreateAgentSessionRequest::Params> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
