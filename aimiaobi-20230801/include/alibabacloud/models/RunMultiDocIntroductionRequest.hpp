// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunMultiDocIntroductionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMultiDocIntroductionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocIds, docIds_);
      DARABONBA_PTR_TO_JSON(KeyPointPrompt, keyPointPrompt_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SummaryPrompt, summaryPrompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunMultiDocIntroductionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocIds, docIds_);
      DARABONBA_PTR_FROM_JSON(KeyPointPrompt, keyPointPrompt_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SummaryPrompt, summaryPrompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunMultiDocIntroductionRequest() = default ;
    RunMultiDocIntroductionRequest(const RunMultiDocIntroductionRequest &) = default ;
    RunMultiDocIntroductionRequest(RunMultiDocIntroductionRequest &&) = default ;
    RunMultiDocIntroductionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMultiDocIntroductionRequest() = default ;
    RunMultiDocIntroductionRequest& operator=(const RunMultiDocIntroductionRequest &) = default ;
    RunMultiDocIntroductionRequest& operator=(RunMultiDocIntroductionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docIds_ == nullptr
        && this->keyPointPrompt_ == nullptr && this->modelName_ == nullptr && this->sessionId_ == nullptr && this->summaryPrompt_ == nullptr && this->workspaceId_ == nullptr; };
    // docIds Field Functions 
    bool hasDocIds() const { return this->docIds_ != nullptr;};
    void deleteDocIds() { this->docIds_ = nullptr;};
    inline const vector<string> & getDocIds() const { DARABONBA_PTR_GET_CONST(docIds_, vector<string>) };
    inline vector<string> getDocIds() { DARABONBA_PTR_GET(docIds_, vector<string>) };
    inline RunMultiDocIntroductionRequest& setDocIds(const vector<string> & docIds) { DARABONBA_PTR_SET_VALUE(docIds_, docIds) };
    inline RunMultiDocIntroductionRequest& setDocIds(vector<string> && docIds) { DARABONBA_PTR_SET_RVALUE(docIds_, docIds) };


    // keyPointPrompt Field Functions 
    bool hasKeyPointPrompt() const { return this->keyPointPrompt_ != nullptr;};
    void deleteKeyPointPrompt() { this->keyPointPrompt_ = nullptr;};
    inline string getKeyPointPrompt() const { DARABONBA_PTR_GET_DEFAULT(keyPointPrompt_, "") };
    inline RunMultiDocIntroductionRequest& setKeyPointPrompt(string keyPointPrompt) { DARABONBA_PTR_SET_VALUE(keyPointPrompt_, keyPointPrompt) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunMultiDocIntroductionRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunMultiDocIntroductionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // summaryPrompt Field Functions 
    bool hasSummaryPrompt() const { return this->summaryPrompt_ != nullptr;};
    void deleteSummaryPrompt() { this->summaryPrompt_ = nullptr;};
    inline string getSummaryPrompt() const { DARABONBA_PTR_GET_DEFAULT(summaryPrompt_, "") };
    inline RunMultiDocIntroductionRequest& setSummaryPrompt(string summaryPrompt) { DARABONBA_PTR_SET_VALUE(summaryPrompt_, summaryPrompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunMultiDocIntroductionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> docIds_ {};
    shared_ptr<string> keyPointPrompt_ {};
    shared_ptr<string> modelName_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> summaryPrompt_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
