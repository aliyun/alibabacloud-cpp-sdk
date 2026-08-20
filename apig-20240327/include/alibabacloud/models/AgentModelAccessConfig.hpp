// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTMODELACCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AGENTMODELACCESSCONFIG_HPP_
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
  class AgentModelAccessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentModelAccessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(consumerIds, consumerIds_);
      DARABONBA_PTR_TO_JSON(modelApiId, modelApiId_);
    };
    friend void from_json(const Darabonba::Json& j, AgentModelAccessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerIds, consumerIds_);
      DARABONBA_PTR_FROM_JSON(modelApiId, modelApiId_);
    };
    AgentModelAccessConfig() = default ;
    AgentModelAccessConfig(const AgentModelAccessConfig &) = default ;
    AgentModelAccessConfig(AgentModelAccessConfig &&) = default ;
    AgentModelAccessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentModelAccessConfig() = default ;
    AgentModelAccessConfig& operator=(const AgentModelAccessConfig &) = default ;
    AgentModelAccessConfig& operator=(AgentModelAccessConfig &&) = default ;
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
    inline AgentModelAccessConfig& setConsumerIds(const vector<string> & consumerIds) { DARABONBA_PTR_SET_VALUE(consumerIds_, consumerIds) };
    inline AgentModelAccessConfig& setConsumerIds(vector<string> && consumerIds) { DARABONBA_PTR_SET_RVALUE(consumerIds_, consumerIds) };


    // modelApiId Field Functions 
    bool hasModelApiId() const { return this->modelApiId_ != nullptr;};
    void deleteModelApiId() { this->modelApiId_ = nullptr;};
    inline string getModelApiId() const { DARABONBA_PTR_GET_DEFAULT(modelApiId_, "") };
    inline AgentModelAccessConfig& setModelApiId(string modelApiId) { DARABONBA_PTR_SET_VALUE(modelApiId_, modelApiId) };


  protected:
    // The list of consumer IDs that represent the Agent to access the Model API. The Model API ID and consumer ID together identify the Agent identity, and the configuration takes effect for all current and future routes of the Model API. Specify at least one consumer. The consumer must be enabled and must have direct Consumer authorization for the Model API in the default environment of the target gateway, with the authorization publish status being Success. Different Agents cannot bind the same consumer to the same Model API. ConsumerGroup is not supported.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> consumerIds_ {};
    // The ID of the Model API to associate. The Model API must belong to the specified gateway.
    // 
    // This parameter is required.
    shared_ptr<string> modelApiId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
