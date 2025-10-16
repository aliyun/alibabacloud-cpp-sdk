// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMAPICONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_LLMAPICONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachPolicyConfig.hpp>
#include <alibabacloud/models/LLMDeployConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class LLMAPIConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LLMAPIConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_TO_JSON(attachPolicyConfigs, attachPolicyConfigs_);
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_TO_JSON(removeBasePathOnForward, removeBasePathOnForward_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, LLMAPIConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_FROM_JSON(attachPolicyConfigs, attachPolicyConfigs_);
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_FROM_JSON(removeBasePathOnForward, removeBasePathOnForward_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    LLMAPIConfiguration() = default ;
    LLMAPIConfiguration(const LLMAPIConfiguration &) = default ;
    LLMAPIConfiguration(LLMAPIConfiguration &&) = default ;
    LLMAPIConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LLMAPIConfiguration() = default ;
    LLMAPIConfiguration& operator=(const LLMAPIConfiguration &) = default ;
    LLMAPIConfiguration& operator=(LLMAPIConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiProtocols_ == nullptr
        && return this->attachPolicyConfigs_ == nullptr && return this->basePath_ == nullptr && return this->deployConfigs_ == nullptr && return this->modelCategory_ == nullptr && return this->removeBasePathOnForward_ == nullptr
        && return this->type_ == nullptr; };
    // aiProtocols Field Functions 
    bool hasAiProtocols() const { return this->aiProtocols_ != nullptr;};
    void deleteAiProtocols() { this->aiProtocols_ = nullptr;};
    inline const vector<string> & aiProtocols() const { DARABONBA_PTR_GET_CONST(aiProtocols_, vector<string>) };
    inline vector<string> aiProtocols() { DARABONBA_PTR_GET(aiProtocols_, vector<string>) };
    inline LLMAPIConfiguration& setAiProtocols(const vector<string> & aiProtocols) { DARABONBA_PTR_SET_VALUE(aiProtocols_, aiProtocols) };
    inline LLMAPIConfiguration& setAiProtocols(vector<string> && aiProtocols) { DARABONBA_PTR_SET_RVALUE(aiProtocols_, aiProtocols) };


    // attachPolicyConfigs Field Functions 
    bool hasAttachPolicyConfigs() const { return this->attachPolicyConfigs_ != nullptr;};
    void deleteAttachPolicyConfigs() { this->attachPolicyConfigs_ = nullptr;};
    inline const vector<AttachPolicyConfig> & attachPolicyConfigs() const { DARABONBA_PTR_GET_CONST(attachPolicyConfigs_, vector<AttachPolicyConfig>) };
    inline vector<AttachPolicyConfig> attachPolicyConfigs() { DARABONBA_PTR_GET(attachPolicyConfigs_, vector<AttachPolicyConfig>) };
    inline LLMAPIConfiguration& setAttachPolicyConfigs(const vector<AttachPolicyConfig> & attachPolicyConfigs) { DARABONBA_PTR_SET_VALUE(attachPolicyConfigs_, attachPolicyConfigs) };
    inline LLMAPIConfiguration& setAttachPolicyConfigs(vector<AttachPolicyConfig> && attachPolicyConfigs) { DARABONBA_PTR_SET_RVALUE(attachPolicyConfigs_, attachPolicyConfigs) };


    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string basePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline LLMAPIConfiguration& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<LLMDeployConfig> & deployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<LLMDeployConfig>) };
    inline vector<LLMDeployConfig> deployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<LLMDeployConfig>) };
    inline LLMAPIConfiguration& setDeployConfigs(const vector<LLMDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline LLMAPIConfiguration& setDeployConfigs(vector<LLMDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // modelCategory Field Functions 
    bool hasModelCategory() const { return this->modelCategory_ != nullptr;};
    void deleteModelCategory() { this->modelCategory_ = nullptr;};
    inline string modelCategory() const { DARABONBA_PTR_GET_DEFAULT(modelCategory_, "") };
    inline LLMAPIConfiguration& setModelCategory(string modelCategory) { DARABONBA_PTR_SET_VALUE(modelCategory_, modelCategory) };


    // removeBasePathOnForward Field Functions 
    bool hasRemoveBasePathOnForward() const { return this->removeBasePathOnForward_ != nullptr;};
    void deleteRemoveBasePathOnForward() { this->removeBasePathOnForward_ = nullptr;};
    inline bool removeBasePathOnForward() const { DARABONBA_PTR_GET_DEFAULT(removeBasePathOnForward_, false) };
    inline LLMAPIConfiguration& setRemoveBasePathOnForward(bool removeBasePathOnForward) { DARABONBA_PTR_SET_VALUE(removeBasePathOnForward_, removeBasePathOnForward) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline LLMAPIConfiguration& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<string>> aiProtocols_ = nullptr;
    std::shared_ptr<vector<AttachPolicyConfig>> attachPolicyConfigs_ = nullptr;
    std::shared_ptr<string> basePath_ = nullptr;
    std::shared_ptr<vector<LLMDeployConfig>> deployConfigs_ = nullptr;
    std::shared_ptr<string> modelCategory_ = nullptr;
    std::shared_ptr<bool> removeBasePathOnForward_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
