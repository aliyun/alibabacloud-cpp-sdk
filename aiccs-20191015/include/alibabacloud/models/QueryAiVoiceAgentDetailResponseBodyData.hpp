// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig.hpp>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(AiVoiceAgentCallConfig, aiVoiceAgentCallConfig_);
      DARABONBA_PTR_TO_JSON(AiVoiceAgentModelConfig, aiVoiceAgentModelConfig_);
      DARABONBA_PTR_TO_JSON(BusinessTypeName, businessTypeName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KnowledgeName, knowledgeName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VoiceStyleName, voiceStyleName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(AiVoiceAgentCallConfig, aiVoiceAgentCallConfig_);
      DARABONBA_PTR_FROM_JSON(AiVoiceAgentModelConfig, aiVoiceAgentModelConfig_);
      DARABONBA_PTR_FROM_JSON(BusinessTypeName, businessTypeName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KnowledgeName, knowledgeName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VoiceStyleName, voiceStyleName_);
    };
    QueryAiVoiceAgentDetailResponseBodyData() = default ;
    QueryAiVoiceAgentDetailResponseBodyData(const QueryAiVoiceAgentDetailResponseBodyData &) = default ;
    QueryAiVoiceAgentDetailResponseBodyData(QueryAiVoiceAgentDetailResponseBodyData &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyData() = default ;
    QueryAiVoiceAgentDetailResponseBodyData& operator=(const QueryAiVoiceAgentDetailResponseBodyData &) = default ;
    QueryAiVoiceAgentDetailResponseBodyData& operator=(QueryAiVoiceAgentDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentName_ == nullptr && return this->aiVoiceAgentCallConfig_ == nullptr && return this->aiVoiceAgentModelConfig_ == nullptr && return this->businessTypeName_ == nullptr && return this->description_ == nullptr
        && return this->knowledgeName_ == nullptr && return this->status_ == nullptr && return this->voiceStyleName_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyData& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyData& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // aiVoiceAgentCallConfig Field Functions 
    bool hasAiVoiceAgentCallConfig() const { return this->aiVoiceAgentCallConfig_ != nullptr;};
    void deleteAiVoiceAgentCallConfig() { this->aiVoiceAgentCallConfig_ = nullptr;};
    inline const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig & aiVoiceAgentCallConfig() const { DARABONBA_PTR_GET_CONST(aiVoiceAgentCallConfig_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig) };
    inline Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig aiVoiceAgentCallConfig() { DARABONBA_PTR_GET(aiVoiceAgentCallConfig_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyData& setAiVoiceAgentCallConfig(const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig & aiVoiceAgentCallConfig) { DARABONBA_PTR_SET_VALUE(aiVoiceAgentCallConfig_, aiVoiceAgentCallConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyData& setAiVoiceAgentCallConfig(Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig && aiVoiceAgentCallConfig) { DARABONBA_PTR_SET_RVALUE(aiVoiceAgentCallConfig_, aiVoiceAgentCallConfig) };


    // aiVoiceAgentModelConfig Field Functions 
    bool hasAiVoiceAgentModelConfig() const { return this->aiVoiceAgentModelConfig_ != nullptr;};
    void deleteAiVoiceAgentModelConfig() { this->aiVoiceAgentModelConfig_ = nullptr;};
    inline const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig & aiVoiceAgentModelConfig() const { DARABONBA_PTR_GET_CONST(aiVoiceAgentModelConfig_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig) };
    inline Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig aiVoiceAgentModelConfig() { DARABONBA_PTR_GET(aiVoiceAgentModelConfig_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyData& setAiVoiceAgentModelConfig(const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig & aiVoiceAgentModelConfig) { DARABONBA_PTR_SET_VALUE(aiVoiceAgentModelConfig_, aiVoiceAgentModelConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyData& setAiVoiceAgentModelConfig(Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig && aiVoiceAgentModelConfig) { DARABONBA_PTR_SET_RVALUE(aiVoiceAgentModelConfig_, aiVoiceAgentModelConfig) };


    // businessTypeName Field Functions 
    bool hasBusinessTypeName() const { return this->businessTypeName_ != nullptr;};
    void deleteBusinessTypeName() { this->businessTypeName_ = nullptr;};
    inline string businessTypeName() const { DARABONBA_PTR_GET_DEFAULT(businessTypeName_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyData& setBusinessTypeName(string businessTypeName) { DARABONBA_PTR_SET_VALUE(businessTypeName_, businessTypeName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // knowledgeName Field Functions 
    bool hasKnowledgeName() const { return this->knowledgeName_ != nullptr;};
    void deleteKnowledgeName() { this->knowledgeName_ = nullptr;};
    inline string knowledgeName() const { DARABONBA_PTR_GET_DEFAULT(knowledgeName_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyData& setKnowledgeName(string knowledgeName) { DARABONBA_PTR_SET_VALUE(knowledgeName_, knowledgeName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyData& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // voiceStyleName Field Functions 
    bool hasVoiceStyleName() const { return this->voiceStyleName_ != nullptr;};
    void deleteVoiceStyleName() { this->voiceStyleName_ = nullptr;};
    inline string voiceStyleName() const { DARABONBA_PTR_GET_DEFAULT(voiceStyleName_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyData& setVoiceStyleName(string voiceStyleName) { DARABONBA_PTR_SET_VALUE(voiceStyleName_, voiceStyleName) };


  protected:
    std::shared_ptr<int64_t> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig> aiVoiceAgentCallConfig_ = nullptr;
    std::shared_ptr<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig> aiVoiceAgentModelConfig_ = nullptr;
    std::shared_ptr<string> businessTypeName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> knowledgeName_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> voiceStyleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
