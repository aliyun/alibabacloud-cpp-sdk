// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARAIAGENTVOICEPRINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEARAIAGENTVOICEPRINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ClearAIAgentVoiceprintRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearAIAgentVoiceprintRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
    };
    friend void from_json(const Darabonba::Json& j, ClearAIAgentVoiceprintRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
    };
    ClearAIAgentVoiceprintRequest() = default ;
    ClearAIAgentVoiceprintRequest(const ClearAIAgentVoiceprintRequest &) = default ;
    ClearAIAgentVoiceprintRequest(ClearAIAgentVoiceprintRequest &&) = default ;
    ClearAIAgentVoiceprintRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearAIAgentVoiceprintRequest() = default ;
    ClearAIAgentVoiceprintRequest& operator=(const ClearAIAgentVoiceprintRequest &) = default ;
    ClearAIAgentVoiceprintRequest& operator=(ClearAIAgentVoiceprintRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->voiceprintId_ == nullptr; };
    // voiceprintId Field Functions 
    bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
    void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
    inline string voiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
    inline ClearAIAgentVoiceprintRequest& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


  protected:
    // The unique identifier for the voiceprint.
    std::shared_ptr<string> voiceprintId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
