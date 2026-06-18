// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDIONOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDIONOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class SubmitAudioNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAudioNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(LlmModelId, llmModelId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAudioNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(LlmModelId, llmModelId_);
    };
    SubmitAudioNoteRequest() = default ;
    SubmitAudioNoteRequest(const SubmitAudioNoteRequest &) = default ;
    SubmitAudioNoteRequest(SubmitAudioNoteRequest &&) = default ;
    SubmitAudioNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAudioNoteRequest() = default ;
    SubmitAudioNoteRequest& operator=(const SubmitAudioNoteRequest &) = default ;
    SubmitAudioNoteRequest& operator=(SubmitAudioNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->bizId_ == nullptr && this->filePath_ == nullptr && this->llmModelId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline SubmitAudioNoteRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SubmitAudioNoteRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline SubmitAudioNoteRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // llmModelId Field Functions 
    bool hasLlmModelId() const { return this->llmModelId_ != nullptr;};
    void deleteLlmModelId() { this->llmModelId_ = nullptr;};
    inline int64_t getLlmModelId() const { DARABONBA_PTR_GET_DEFAULT(llmModelId_, 0L) };
    inline SubmitAudioNoteRequest& setLlmModelId(int64_t llmModelId) { DARABONBA_PTR_SET_VALUE(llmModelId_, llmModelId) };


  protected:
    // The ID of the notes agent. Specify the ID of a published recording notes agent.
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The custom task ID defined by the business side. This ID is used to associate external business records during callbacks or troubleshooting.
    shared_ptr<string> bizId_ {};
    // The storage path of the recording file in OSS. Use the FilePath returned by the upload address retrieval operation.
    // 
    // This parameter is required.
    shared_ptr<string> filePath_ {};
    // The ID of the LLM model used for notes inference. If this parameter is not specified, the default model configuration of the agent is used.
    shared_ptr<int64_t> llmModelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
