// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunMultiDocIntroductionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMultiDocIntroductionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocIds, docIdsShrink_);
      DARABONBA_PTR_TO_JSON(KeyPointPrompt, keyPointPrompt_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SummaryPrompt, summaryPrompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunMultiDocIntroductionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocIds, docIdsShrink_);
      DARABONBA_PTR_FROM_JSON(KeyPointPrompt, keyPointPrompt_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SummaryPrompt, summaryPrompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunMultiDocIntroductionShrinkRequest() = default ;
    RunMultiDocIntroductionShrinkRequest(const RunMultiDocIntroductionShrinkRequest &) = default ;
    RunMultiDocIntroductionShrinkRequest(RunMultiDocIntroductionShrinkRequest &&) = default ;
    RunMultiDocIntroductionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMultiDocIntroductionShrinkRequest() = default ;
    RunMultiDocIntroductionShrinkRequest& operator=(const RunMultiDocIntroductionShrinkRequest &) = default ;
    RunMultiDocIntroductionShrinkRequest& operator=(RunMultiDocIntroductionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docIdsShrink_ != nullptr
        && this->keyPointPrompt_ != nullptr && this->modelName_ != nullptr && this->sessionId_ != nullptr && this->summaryPrompt_ != nullptr && this->workspaceId_ != nullptr; };
    // docIdsShrink Field Functions 
    bool hasDocIdsShrink() const { return this->docIdsShrink_ != nullptr;};
    void deleteDocIdsShrink() { this->docIdsShrink_ = nullptr;};
    inline string docIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(docIdsShrink_, "") };
    inline RunMultiDocIntroductionShrinkRequest& setDocIdsShrink(string docIdsShrink) { DARABONBA_PTR_SET_VALUE(docIdsShrink_, docIdsShrink) };


    // keyPointPrompt Field Functions 
    bool hasKeyPointPrompt() const { return this->keyPointPrompt_ != nullptr;};
    void deleteKeyPointPrompt() { this->keyPointPrompt_ = nullptr;};
    inline string keyPointPrompt() const { DARABONBA_PTR_GET_DEFAULT(keyPointPrompt_, "") };
    inline RunMultiDocIntroductionShrinkRequest& setKeyPointPrompt(string keyPointPrompt) { DARABONBA_PTR_SET_VALUE(keyPointPrompt_, keyPointPrompt) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunMultiDocIntroductionShrinkRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunMultiDocIntroductionShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // summaryPrompt Field Functions 
    bool hasSummaryPrompt() const { return this->summaryPrompt_ != nullptr;};
    void deleteSummaryPrompt() { this->summaryPrompt_ = nullptr;};
    inline string summaryPrompt() const { DARABONBA_PTR_GET_DEFAULT(summaryPrompt_, "") };
    inline RunMultiDocIntroductionShrinkRequest& setSummaryPrompt(string summaryPrompt) { DARABONBA_PTR_SET_VALUE(summaryPrompt_, summaryPrompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunMultiDocIntroductionShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docIdsShrink_ = nullptr;
    std::shared_ptr<string> keyPointPrompt_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
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
