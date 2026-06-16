// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXTSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXTSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateContextStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContextStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_TO_JSON(contextType, contextType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContextStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_FROM_JSON(contextType, contextType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateContextStoreRequest() = default ;
    CreateContextStoreRequest(const CreateContextStoreRequest &) = default ;
    CreateContextStoreRequest(CreateContextStoreRequest &&) = default ;
    CreateContextStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContextStoreRequest() = default ;
    CreateContextStoreRequest& operator=(const CreateContextStoreRequest &) = default ;
    CreateContextStoreRequest& operator=(CreateContextStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(metadataField, metadataField_);
        DARABONBA_PTR_TO_JSON(miningInterval, miningInterval_);
        DARABONBA_PTR_TO_JSON(serviceNames, serviceNames_);
        DARABONBA_PTR_TO_JSON(source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(metadataField, metadataField_);
        DARABONBA_PTR_FROM_JSON(miningInterval, miningInterval_);
        DARABONBA_PTR_FROM_JSON(serviceNames, serviceNames_);
        DARABONBA_PTR_FROM_JSON(source, source_);
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
      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        Source() = default ;
        Source(const Source &) = default ;
        Source(Source &&) = default ;
        Source(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Source() = default ;
        Source& operator=(const Source &) = default ;
        Source& operator=(Source &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->startTime_ == nullptr; };
        // agentSpace Field Functions 
        bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
        void deleteAgentSpace() { this->agentSpace_ = nullptr;};
        inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
        inline Source& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Source& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> agentSpace_ {};
        // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->metadataField_ == nullptr
        && this->miningInterval_ == nullptr && this->serviceNames_ == nullptr && this->source_ == nullptr; };
      // metadataField Field Functions 
      bool hasMetadataField() const { return this->metadataField_ != nullptr;};
      void deleteMetadataField() { this->metadataField_ = nullptr;};
      inline const map<string, string> & getMetadataField() const { DARABONBA_PTR_GET_CONST(metadataField_, map<string, string>) };
      inline map<string, string> getMetadataField() { DARABONBA_PTR_GET(metadataField_, map<string, string>) };
      inline Config& setMetadataField(const map<string, string> & metadataField) { DARABONBA_PTR_SET_VALUE(metadataField_, metadataField) };
      inline Config& setMetadataField(map<string, string> && metadataField) { DARABONBA_PTR_SET_RVALUE(metadataField_, metadataField) };


      // miningInterval Field Functions 
      bool hasMiningInterval() const { return this->miningInterval_ != nullptr;};
      void deleteMiningInterval() { this->miningInterval_ = nullptr;};
      inline string getMiningInterval() const { DARABONBA_PTR_GET_DEFAULT(miningInterval_, "") };
      inline Config& setMiningInterval(string miningInterval) { DARABONBA_PTR_SET_VALUE(miningInterval_, miningInterval) };


      // serviceNames Field Functions 
      bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
      void deleteServiceNames() { this->serviceNames_ = nullptr;};
      inline const vector<string> & getServiceNames() const { DARABONBA_PTR_GET_CONST(serviceNames_, vector<string>) };
      inline vector<string> getServiceNames() { DARABONBA_PTR_GET(serviceNames_, vector<string>) };
      inline Config& setServiceNames(const vector<string> & serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };
      inline Config& setServiceNames(vector<string> && serviceNames) { DARABONBA_PTR_SET_RVALUE(serviceNames_, serviceNames) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const Config::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Config::Source) };
      inline Config::Source getSource() { DARABONBA_PTR_GET(source_, Config::Source) };
      inline Config& setSource(const Config::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Config& setSource(Config::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    protected:
      shared_ptr<map<string, string>> metadataField_ {};
      shared_ptr<string> miningInterval_ {};
      // This parameter is required.
      shared_ptr<vector<string>> serviceNames_ {};
      shared_ptr<Config::Source> source_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->contextStoreName_ == nullptr && this->contextType_ == nullptr && this->description_ == nullptr && this->clientToken_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const CreateContextStoreRequest::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, CreateContextStoreRequest::Config) };
    inline CreateContextStoreRequest::Config getConfig() { DARABONBA_PTR_GET(config_, CreateContextStoreRequest::Config) };
    inline CreateContextStoreRequest& setConfig(const CreateContextStoreRequest::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CreateContextStoreRequest& setConfig(CreateContextStoreRequest::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // contextStoreName Field Functions 
    bool hasContextStoreName() const { return this->contextStoreName_ != nullptr;};
    void deleteContextStoreName() { this->contextStoreName_ = nullptr;};
    inline string getContextStoreName() const { DARABONBA_PTR_GET_DEFAULT(contextStoreName_, "") };
    inline CreateContextStoreRequest& setContextStoreName(string contextStoreName) { DARABONBA_PTR_SET_VALUE(contextStoreName_, contextStoreName) };


    // contextType Field Functions 
    bool hasContextType() const { return this->contextType_ != nullptr;};
    void deleteContextType() { this->contextType_ = nullptr;};
    inline string getContextType() const { DARABONBA_PTR_GET_DEFAULT(contextType_, "") };
    inline CreateContextStoreRequest& setContextType(string contextType) { DARABONBA_PTR_SET_VALUE(contextType_, contextType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateContextStoreRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateContextStoreRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<CreateContextStoreRequest::Config> config_ {};
    // This parameter is required.
    shared_ptr<string> contextStoreName_ {};
    // This parameter is required.
    shared_ptr<string> contextType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
