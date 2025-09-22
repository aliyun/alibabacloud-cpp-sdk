// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDDOCUMENTASKQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDDOCUMENTASKQUESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SendDocumentAskQuestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendDocumentAskQuestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, SendDocumentAskQuestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    SendDocumentAskQuestionRequest() = default ;
    SendDocumentAskQuestionRequest(const SendDocumentAskQuestionRequest &) = default ;
    SendDocumentAskQuestionRequest(SendDocumentAskQuestionRequest &&) = default ;
    SendDocumentAskQuestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendDocumentAskQuestionRequest() = default ;
    SendDocumentAskQuestionRequest& operator=(const SendDocumentAskQuestionRequest &) = default ;
    SendDocumentAskQuestionRequest& operator=(SendDocumentAskQuestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folderId_ != nullptr
        && this->prompt_ != nullptr && this->sessionId_ != nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline SendDocumentAskQuestionRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline SendDocumentAskQuestionRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendDocumentAskQuestionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // Folder ID, used to specify the range of documents for the query. If it is empty, it indicates that all documents under the default folder will be queried.
    std::shared_ptr<string> folderId_ = nullptr;
    // The question queried by the user
    // 
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    // Q&A session ID, used to record multiple Q&A interactions of the same user. If it is empty, it indicates that sessions are not distinguished.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
