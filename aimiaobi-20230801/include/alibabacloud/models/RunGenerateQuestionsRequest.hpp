// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNGENERATEQUESTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNGENERATEQUESTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunGenerateQuestionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunGenerateQuestionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunGenerateQuestionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ReferenceContent, referenceContent_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunGenerateQuestionsRequest() = default ;
    RunGenerateQuestionsRequest(const RunGenerateQuestionsRequest &) = default ;
    RunGenerateQuestionsRequest(RunGenerateQuestionsRequest &&) = default ;
    RunGenerateQuestionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunGenerateQuestionsRequest() = default ;
    RunGenerateQuestionsRequest& operator=(const RunGenerateQuestionsRequest &) = default ;
    RunGenerateQuestionsRequest& operator=(RunGenerateQuestionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docId_ != nullptr
        && this->modelName_ != nullptr && this->referenceContent_ != nullptr && this->sessionId_ != nullptr && this->workspaceId_ != nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunGenerateQuestionsRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RunGenerateQuestionsRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // referenceContent Field Functions 
    bool hasReferenceContent() const { return this->referenceContent_ != nullptr;};
    void deleteReferenceContent() { this->referenceContent_ = nullptr;};
    inline string referenceContent() const { DARABONBA_PTR_GET_DEFAULT(referenceContent_, "") };
    inline RunGenerateQuestionsRequest& setReferenceContent(string referenceContent) { DARABONBA_PTR_SET_VALUE(referenceContent_, referenceContent) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunGenerateQuestionsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunGenerateQuestionsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> referenceContent_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
