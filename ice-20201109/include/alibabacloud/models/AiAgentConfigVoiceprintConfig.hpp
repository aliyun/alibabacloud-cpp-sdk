// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGVOICEPRINTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGVOICEPRINTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigVoiceprintConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigVoiceprintConfig& obj) { 
      DARABONBA_PTR_TO_JSON(UseVoiceprint, useVoiceprint_);
      DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigVoiceprintConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(UseVoiceprint, useVoiceprint_);
      DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
    };
    AIAgentConfigVoiceprintConfig() = default ;
    AIAgentConfigVoiceprintConfig(const AIAgentConfigVoiceprintConfig &) = default ;
    AIAgentConfigVoiceprintConfig(AIAgentConfigVoiceprintConfig &&) = default ;
    AIAgentConfigVoiceprintConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigVoiceprintConfig() = default ;
    AIAgentConfigVoiceprintConfig& operator=(const AIAgentConfigVoiceprintConfig &) = default ;
    AIAgentConfigVoiceprintConfig& operator=(AIAgentConfigVoiceprintConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->useVoiceprint_ == nullptr
        && return this->voiceprintId_ == nullptr; };
    // useVoiceprint Field Functions 
    bool hasUseVoiceprint() const { return this->useVoiceprint_ != nullptr;};
    void deleteUseVoiceprint() { this->useVoiceprint_ = nullptr;};
    inline bool useVoiceprint() const { DARABONBA_PTR_GET_DEFAULT(useVoiceprint_, false) };
    inline AIAgentConfigVoiceprintConfig& setUseVoiceprint(bool useVoiceprint) { DARABONBA_PTR_SET_VALUE(useVoiceprint_, useVoiceprint) };


    // voiceprintId Field Functions 
    bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
    void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
    inline string voiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
    inline AIAgentConfigVoiceprintConfig& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


  protected:
    std::shared_ptr<bool> useVoiceprint_ = nullptr;
    std::shared_ptr<string> voiceprintId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
