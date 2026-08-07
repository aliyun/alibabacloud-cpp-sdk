// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTINFO_HPP_
#define ALIBABACLOUD_MODELS_AGENTINFO_HPP_
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
  class AgentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(agentAccess, agentAccess_);
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(agentType, agentType_);
      DARABONBA_PTR_TO_JSON(allowedCapabilities, allowedCapabilities_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(modelAccess, modelAccess_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, AgentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(agentAccess, agentAccess_);
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(agentType, agentType_);
      DARABONBA_PTR_FROM_JSON(allowedCapabilities, allowedCapabilities_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(modelAccess, modelAccess_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    AgentInfo() = default ;
    AgentInfo(const AgentInfo &) = default ;
    AgentInfo(AgentInfo &&) = default ;
    AgentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentInfo() = default ;
    AgentInfo& operator=(const AgentInfo &) = default ;
    AgentInfo& operator=(AgentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelAccess : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelAccess& obj) { 
        DARABONBA_PTR_TO_JSON(consumerIds, consumerIds_);
        DARABONBA_PTR_TO_JSON(modelApiId, modelApiId_);
      };
      friend void from_json(const Darabonba::Json& j, ModelAccess& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerIds, consumerIds_);
        DARABONBA_PTR_FROM_JSON(modelApiId, modelApiId_);
      };
      ModelAccess() = default ;
      ModelAccess(const ModelAccess &) = default ;
      ModelAccess(ModelAccess &&) = default ;
      ModelAccess(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelAccess() = default ;
      ModelAccess& operator=(const ModelAccess &) = default ;
      ModelAccess& operator=(ModelAccess &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->consumerIds_ == nullptr
        && this->modelApiId_ == nullptr; };
      // consumerIds Field Functions 
      bool hasConsumerIds() const { return this->consumerIds_ != nullptr;};
      void deleteConsumerIds() { this->consumerIds_ = nullptr;};
      inline const vector<string> & getConsumerIds() const { DARABONBA_PTR_GET_CONST(consumerIds_, vector<string>) };
      inline vector<string> getConsumerIds() { DARABONBA_PTR_GET(consumerIds_, vector<string>) };
      inline ModelAccess& setConsumerIds(const vector<string> & consumerIds) { DARABONBA_PTR_SET_VALUE(consumerIds_, consumerIds) };
      inline ModelAccess& setConsumerIds(vector<string> && consumerIds) { DARABONBA_PTR_SET_RVALUE(consumerIds_, consumerIds) };


      // modelApiId Field Functions 
      bool hasModelApiId() const { return this->modelApiId_ != nullptr;};
      void deleteModelApiId() { this->modelApiId_ = nullptr;};
      inline string getModelApiId() const { DARABONBA_PTR_GET_DEFAULT(modelApiId_, "") };
      inline ModelAccess& setModelApiId(string modelApiId) { DARABONBA_PTR_SET_VALUE(modelApiId_, modelApiId) };


    protected:
      shared_ptr<vector<string>> consumerIds_ {};
      shared_ptr<string> modelApiId_ {};
    };

    class AgentAccess : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentAccess& obj) { 
        DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
      };
      friend void from_json(const Darabonba::Json& j, AgentAccess& obj) { 
        DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
      };
      AgentAccess() = default ;
      AgentAccess(const AgentAccess &) = default ;
      AgentAccess(AgentAccess &&) = default ;
      AgentAccess(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentAccess() = default ;
      AgentAccess& operator=(const AgentAccess &) = default ;
      AgentAccess& operator=(AgentAccess &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->httpApiId_ == nullptr; };
      // httpApiId Field Functions 
      bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
      void deleteHttpApiId() { this->httpApiId_ = nullptr;};
      inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
      inline AgentAccess& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    protected:
      shared_ptr<string> httpApiId_ {};
    };

    virtual bool empty() const override { return this->agentAccess_ == nullptr
        && this->agentId_ == nullptr && this->agentType_ == nullptr && this->allowedCapabilities_ == nullptr && this->createTimestamp_ == nullptr && this->description_ == nullptr
        && this->gatewayId_ == nullptr && this->modelAccess_ == nullptr && this->name_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->updateTimestamp_ == nullptr; };
    // agentAccess Field Functions 
    bool hasAgentAccess() const { return this->agentAccess_ != nullptr;};
    void deleteAgentAccess() { this->agentAccess_ = nullptr;};
    inline const AgentInfo::AgentAccess & getAgentAccess() const { DARABONBA_PTR_GET_CONST(agentAccess_, AgentInfo::AgentAccess) };
    inline AgentInfo::AgentAccess getAgentAccess() { DARABONBA_PTR_GET(agentAccess_, AgentInfo::AgentAccess) };
    inline AgentInfo& setAgentAccess(const AgentInfo::AgentAccess & agentAccess) { DARABONBA_PTR_SET_VALUE(agentAccess_, agentAccess) };
    inline AgentInfo& setAgentAccess(AgentInfo::AgentAccess && agentAccess) { DARABONBA_PTR_SET_RVALUE(agentAccess_, agentAccess) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline AgentInfo& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline AgentInfo& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // allowedCapabilities Field Functions 
    bool hasAllowedCapabilities() const { return this->allowedCapabilities_ != nullptr;};
    void deleteAllowedCapabilities() { this->allowedCapabilities_ = nullptr;};
    inline const vector<string> & getAllowedCapabilities() const { DARABONBA_PTR_GET_CONST(allowedCapabilities_, vector<string>) };
    inline vector<string> getAllowedCapabilities() { DARABONBA_PTR_GET(allowedCapabilities_, vector<string>) };
    inline AgentInfo& setAllowedCapabilities(const vector<string> & allowedCapabilities) { DARABONBA_PTR_SET_VALUE(allowedCapabilities_, allowedCapabilities) };
    inline AgentInfo& setAllowedCapabilities(vector<string> && allowedCapabilities) { DARABONBA_PTR_SET_RVALUE(allowedCapabilities_, allowedCapabilities) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline AgentInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AgentInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline AgentInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // modelAccess Field Functions 
    bool hasModelAccess() const { return this->modelAccess_ != nullptr;};
    void deleteModelAccess() { this->modelAccess_ = nullptr;};
    inline const AgentInfo::ModelAccess & getModelAccess() const { DARABONBA_PTR_GET_CONST(modelAccess_, AgentInfo::ModelAccess) };
    inline AgentInfo::ModelAccess getModelAccess() { DARABONBA_PTR_GET(modelAccess_, AgentInfo::ModelAccess) };
    inline AgentInfo& setModelAccess(const AgentInfo::ModelAccess & modelAccess) { DARABONBA_PTR_SET_VALUE(modelAccess_, modelAccess) };
    inline AgentInfo& setModelAccess(AgentInfo::ModelAccess && modelAccess) { DARABONBA_PTR_SET_RVALUE(modelAccess_, modelAccess) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AgentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AgentInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AgentInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline AgentInfo& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    shared_ptr<AgentInfo::AgentAccess> agentAccess_ {};
    shared_ptr<string> agentId_ {};
    shared_ptr<string> agentType_ {};
    shared_ptr<vector<string>> allowedCapabilities_ {};
    shared_ptr<int64_t> createTimestamp_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<AgentInfo::ModelAccess> modelAccess_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
