// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPTIMIZETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPTIMIZETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateOptimizeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOptimizeTaskRequest& obj) { 
      DARABONBA_ANY_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(optimizeTaskName, optimizeTaskName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOptimizeTaskRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(optimizeTaskName, optimizeTaskName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateOptimizeTaskRequest() = default ;
    CreateOptimizeTaskRequest(const CreateOptimizeTaskRequest &) = default ;
    CreateOptimizeTaskRequest(CreateOptimizeTaskRequest &&) = default ;
    CreateOptimizeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOptimizeTaskRequest() = default ;
    CreateOptimizeTaskRequest& operator=(const CreateOptimizeTaskRequest &) = default ;
    CreateOptimizeTaskRequest& operator=(CreateOptimizeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->optimizeTaskName_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->clientToken_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
    Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
    inline CreateOptimizeTaskRequest& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline CreateOptimizeTaskRequest& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


    // optimizeTaskName Field Functions 
    bool hasOptimizeTaskName() const { return this->optimizeTaskName_ != nullptr;};
    void deleteOptimizeTaskName() { this->optimizeTaskName_ = nullptr;};
    inline string getOptimizeTaskName() const { DARABONBA_PTR_GET_DEFAULT(optimizeTaskName_, "") };
    inline CreateOptimizeTaskRequest& setOptimizeTaskName(string optimizeTaskName) { DARABONBA_PTR_SET_VALUE(optimizeTaskName_, optimizeTaskName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateOptimizeTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateOptimizeTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateOptimizeTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The type-specific configurations. Optional prompts for ExperienceMining and SkillOptimize only support inline Markdown. The main text is saved to inputs.prompt.content (non-empty UTF-8, up to 16 KiB).
    Darabonba::Json config_ {};
    // The name of the optimization task. The name of a new service task is specified by the caller and must be unique within the same AgentSpace.
    shared_ptr<string> optimizeTaskName_ {};
    // The status of the task. Valid values: Enabled, Disabled.
    shared_ptr<string> status_ {};
    // The type of the optimization task. Valid values: ExperienceMining, SkillOptimize, EfficiencyAnalysis, SOPGeneration, EvalMining, PolicyMining, and AssetMining. The memory base uses the current ContextStore and the original Worker, and is not integrated with Mining.
    shared_ptr<string> type_ {};
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
