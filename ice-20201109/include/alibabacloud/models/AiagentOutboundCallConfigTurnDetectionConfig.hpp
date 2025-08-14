// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGTURNDETECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGTURNDETECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentOutboundCallConfigTurnDetectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentOutboundCallConfigTurnDetectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(SemanticWaitDuration, semanticWaitDuration_);
      DARABONBA_PTR_TO_JSON(TurnEndWords, turnEndWords_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentOutboundCallConfigTurnDetectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(SemanticWaitDuration, semanticWaitDuration_);
      DARABONBA_PTR_FROM_JSON(TurnEndWords, turnEndWords_);
    };
    AIAgentOutboundCallConfigTurnDetectionConfig() = default ;
    AIAgentOutboundCallConfigTurnDetectionConfig(const AIAgentOutboundCallConfigTurnDetectionConfig &) = default ;
    AIAgentOutboundCallConfigTurnDetectionConfig(AIAgentOutboundCallConfigTurnDetectionConfig &&) = default ;
    AIAgentOutboundCallConfigTurnDetectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentOutboundCallConfigTurnDetectionConfig() = default ;
    AIAgentOutboundCallConfigTurnDetectionConfig& operator=(const AIAgentOutboundCallConfigTurnDetectionConfig &) = default ;
    AIAgentOutboundCallConfigTurnDetectionConfig& operator=(AIAgentOutboundCallConfigTurnDetectionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mode_ != nullptr
        && this->semanticWaitDuration_ != nullptr && this->turnEndWords_ != nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline AIAgentOutboundCallConfigTurnDetectionConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // semanticWaitDuration Field Functions 
    bool hasSemanticWaitDuration() const { return this->semanticWaitDuration_ != nullptr;};
    void deleteSemanticWaitDuration() { this->semanticWaitDuration_ = nullptr;};
    inline int32_t semanticWaitDuration() const { DARABONBA_PTR_GET_DEFAULT(semanticWaitDuration_, 0) };
    inline AIAgentOutboundCallConfigTurnDetectionConfig& setSemanticWaitDuration(int32_t semanticWaitDuration) { DARABONBA_PTR_SET_VALUE(semanticWaitDuration_, semanticWaitDuration) };


    // turnEndWords Field Functions 
    bool hasTurnEndWords() const { return this->turnEndWords_ != nullptr;};
    void deleteTurnEndWords() { this->turnEndWords_ = nullptr;};
    inline const vector<string> & turnEndWords() const { DARABONBA_PTR_GET_CONST(turnEndWords_, vector<string>) };
    inline vector<string> turnEndWords() { DARABONBA_PTR_GET(turnEndWords_, vector<string>) };
    inline AIAgentOutboundCallConfigTurnDetectionConfig& setTurnEndWords(const vector<string> & turnEndWords) { DARABONBA_PTR_SET_VALUE(turnEndWords_, turnEndWords) };
    inline AIAgentOutboundCallConfigTurnDetectionConfig& setTurnEndWords(vector<string> && turnEndWords) { DARABONBA_PTR_SET_RVALUE(turnEndWords_, turnEndWords) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int32_t> semanticWaitDuration_ = nullptr;
    std::shared_ptr<vector<string>> turnEndWords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
