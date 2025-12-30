// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetAIAgentVoiceprintShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAIAgentVoiceprintShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
    };
    friend void from_json(const Darabonba::Json& j, SetAIAgentVoiceprintShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
    };
    SetAIAgentVoiceprintShrinkRequest() = default ;
    SetAIAgentVoiceprintShrinkRequest(const SetAIAgentVoiceprintShrinkRequest &) = default ;
    SetAIAgentVoiceprintShrinkRequest(SetAIAgentVoiceprintShrinkRequest &&) = default ;
    SetAIAgentVoiceprintShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAIAgentVoiceprintShrinkRequest() = default ;
    SetAIAgentVoiceprintShrinkRequest& operator=(const SetAIAgentVoiceprintShrinkRequest &) = default ;
    SetAIAgentVoiceprintShrinkRequest& operator=(SetAIAgentVoiceprintShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputShrink_ == nullptr
        && this->voiceprintId_ == nullptr; };
    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SetAIAgentVoiceprintShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // voiceprintId Field Functions 
    bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
    void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
    inline string getVoiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
    inline SetAIAgentVoiceprintShrinkRequest& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


  protected:
    // The input file.
    shared_ptr<string> inputShrink_ {};
    // A unique identifier for the voiceprint. Generate this ID based on your own business rules. Requirement: 1 to 127 characters in length.
    shared_ptr<string> voiceprintId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
