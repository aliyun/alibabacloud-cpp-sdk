// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNBOOKINTRODUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNBOOKINTRODUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunBookIntroductionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunBookIntroductionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(KeyPointPrompt, keyPointPrompt_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SummaryPrompt, summaryPrompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunBookIntroductionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(KeyPointPrompt, keyPointPrompt_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SummaryPrompt, summaryPrompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunBookIntroductionRequest() = default ;
    RunBookIntroductionRequest(const RunBookIntroductionRequest &) = default ;
    RunBookIntroductionRequest(RunBookIntroductionRequest &&) = default ;
    RunBookIntroductionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunBookIntroductionRequest() = default ;
    RunBookIntroductionRequest& operator=(const RunBookIntroductionRequest &) = default ;
    RunBookIntroductionRequest& operator=(RunBookIntroductionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docId_ == nullptr
        && return this->keyPointPrompt_ == nullptr && return this->sessionId_ == nullptr && return this->summaryPrompt_ == nullptr && return this->workspaceId_ == nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunBookIntroductionRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // keyPointPrompt Field Functions 
    bool hasKeyPointPrompt() const { return this->keyPointPrompt_ != nullptr;};
    void deleteKeyPointPrompt() { this->keyPointPrompt_ = nullptr;};
    inline string keyPointPrompt() const { DARABONBA_PTR_GET_DEFAULT(keyPointPrompt_, "") };
    inline RunBookIntroductionRequest& setKeyPointPrompt(string keyPointPrompt) { DARABONBA_PTR_SET_VALUE(keyPointPrompt_, keyPointPrompt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunBookIntroductionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // summaryPrompt Field Functions 
    bool hasSummaryPrompt() const { return this->summaryPrompt_ != nullptr;};
    void deleteSummaryPrompt() { this->summaryPrompt_ = nullptr;};
    inline string summaryPrompt() const { DARABONBA_PTR_GET_DEFAULT(summaryPrompt_, "") };
    inline RunBookIntroductionRequest& setSummaryPrompt(string summaryPrompt) { DARABONBA_PTR_SET_VALUE(summaryPrompt_, summaryPrompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunBookIntroductionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> keyPointPrompt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> summaryPrompt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
