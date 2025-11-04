// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetAIAgentVoiceprintRequestInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetAIAgentVoiceprintRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAIAgentVoiceprintRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
    };
    friend void from_json(const Darabonba::Json& j, SetAIAgentVoiceprintRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
    };
    SetAIAgentVoiceprintRequest() = default ;
    SetAIAgentVoiceprintRequest(const SetAIAgentVoiceprintRequest &) = default ;
    SetAIAgentVoiceprintRequest(SetAIAgentVoiceprintRequest &&) = default ;
    SetAIAgentVoiceprintRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAIAgentVoiceprintRequest() = default ;
    SetAIAgentVoiceprintRequest& operator=(const SetAIAgentVoiceprintRequest &) = default ;
    SetAIAgentVoiceprintRequest& operator=(SetAIAgentVoiceprintRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && return this->voiceprintId_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SetAIAgentVoiceprintRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SetAIAgentVoiceprintRequestInput) };
    inline SetAIAgentVoiceprintRequestInput input() { DARABONBA_PTR_GET(input_, SetAIAgentVoiceprintRequestInput) };
    inline SetAIAgentVoiceprintRequest& setInput(const SetAIAgentVoiceprintRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SetAIAgentVoiceprintRequest& setInput(SetAIAgentVoiceprintRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // voiceprintId Field Functions 
    bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
    void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
    inline string voiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
    inline SetAIAgentVoiceprintRequest& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


  protected:
    // The input file.
    std::shared_ptr<SetAIAgentVoiceprintRequestInput> input_ = nullptr;
    // A unique identifier for the voiceprint. Generate this ID based on your own business rules. Requirement: 1 to 127 characters in length.
    std::shared_ptr<string> voiceprintId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
