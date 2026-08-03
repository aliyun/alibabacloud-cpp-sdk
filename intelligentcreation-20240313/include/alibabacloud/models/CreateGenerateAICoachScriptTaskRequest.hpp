// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGENERATEAICOACHSCRIPTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGENERATEAICOACHSCRIPTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateGenerateAICoachScriptTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGenerateAICoachScriptTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assessmentPoint, assessmentPoint_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(dialogueKey, dialogueKey_);
      DARABONBA_PTR_TO_JSON(dialogueUrl, dialogueUrl_);
      DARABONBA_PTR_TO_JSON(docList, docList_);
      DARABONBA_PTR_TO_JSON(docUrlList, docUrlList_);
      DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGenerateAICoachScriptTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assessmentPoint, assessmentPoint_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(dialogueKey, dialogueKey_);
      DARABONBA_PTR_FROM_JSON(dialogueUrl, dialogueUrl_);
      DARABONBA_PTR_FROM_JSON(docList, docList_);
      DARABONBA_PTR_FROM_JSON(docUrlList, docUrlList_);
      DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
    };
    CreateGenerateAICoachScriptTaskRequest() = default ;
    CreateGenerateAICoachScriptTaskRequest(const CreateGenerateAICoachScriptTaskRequest &) = default ;
    CreateGenerateAICoachScriptTaskRequest(CreateGenerateAICoachScriptTaskRequest &&) = default ;
    CreateGenerateAICoachScriptTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGenerateAICoachScriptTaskRequest() = default ;
    CreateGenerateAICoachScriptTaskRequest& operator=(const CreateGenerateAICoachScriptTaskRequest &) = default ;
    CreateGenerateAICoachScriptTaskRequest& operator=(CreateGenerateAICoachScriptTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DocList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DocList& obj) { 
        DARABONBA_PTR_TO_JSON(docId, docId_);
        DARABONBA_PTR_TO_JSON(docName, docName_);
        DARABONBA_PTR_TO_JSON(kbId, kbId_);
      };
      friend void from_json(const Darabonba::Json& j, DocList& obj) { 
        DARABONBA_PTR_FROM_JSON(docId, docId_);
        DARABONBA_PTR_FROM_JSON(docName, docName_);
        DARABONBA_PTR_FROM_JSON(kbId, kbId_);
      };
      DocList() = default ;
      DocList(const DocList &) = default ;
      DocList(DocList &&) = default ;
      DocList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DocList() = default ;
      DocList& operator=(const DocList &) = default ;
      DocList& operator=(DocList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->docId_ == nullptr
        && this->docName_ == nullptr && this->kbId_ == nullptr; };
      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline DocList& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // docName Field Functions 
      bool hasDocName() const { return this->docName_ != nullptr;};
      void deleteDocName() { this->docName_ = nullptr;};
      inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
      inline DocList& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


      // kbId Field Functions 
      bool hasKbId() const { return this->kbId_ != nullptr;};
      void deleteKbId() { this->kbId_ = nullptr;};
      inline string getKbId() const { DARABONBA_PTR_GET_DEFAULT(kbId_, "") };
      inline DocList& setKbId(string kbId) { DARABONBA_PTR_SET_VALUE(kbId_, kbId) };


    protected:
      shared_ptr<string> docId_ {};
      shared_ptr<string> docName_ {};
      shared_ptr<string> kbId_ {};
    };

    virtual bool empty() const override { return this->assessmentPoint_ == nullptr
        && this->description_ == nullptr && this->dialogueKey_ == nullptr && this->dialogueUrl_ == nullptr && this->docList_ == nullptr && this->docUrlList_ == nullptr
        && this->scriptName_ == nullptr; };
    // assessmentPoint Field Functions 
    bool hasAssessmentPoint() const { return this->assessmentPoint_ != nullptr;};
    void deleteAssessmentPoint() { this->assessmentPoint_ = nullptr;};
    inline bool getAssessmentPoint() const { DARABONBA_PTR_GET_DEFAULT(assessmentPoint_, false) };
    inline CreateGenerateAICoachScriptTaskRequest& setAssessmentPoint(bool assessmentPoint) { DARABONBA_PTR_SET_VALUE(assessmentPoint_, assessmentPoint) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGenerateAICoachScriptTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dialogueKey Field Functions 
    bool hasDialogueKey() const { return this->dialogueKey_ != nullptr;};
    void deleteDialogueKey() { this->dialogueKey_ = nullptr;};
    inline string getDialogueKey() const { DARABONBA_PTR_GET_DEFAULT(dialogueKey_, "") };
    inline CreateGenerateAICoachScriptTaskRequest& setDialogueKey(string dialogueKey) { DARABONBA_PTR_SET_VALUE(dialogueKey_, dialogueKey) };


    // dialogueUrl Field Functions 
    bool hasDialogueUrl() const { return this->dialogueUrl_ != nullptr;};
    void deleteDialogueUrl() { this->dialogueUrl_ = nullptr;};
    inline string getDialogueUrl() const { DARABONBA_PTR_GET_DEFAULT(dialogueUrl_, "") };
    inline CreateGenerateAICoachScriptTaskRequest& setDialogueUrl(string dialogueUrl) { DARABONBA_PTR_SET_VALUE(dialogueUrl_, dialogueUrl) };


    // docList Field Functions 
    bool hasDocList() const { return this->docList_ != nullptr;};
    void deleteDocList() { this->docList_ = nullptr;};
    inline const vector<CreateGenerateAICoachScriptTaskRequest::DocList> & getDocList() const { DARABONBA_PTR_GET_CONST(docList_, vector<CreateGenerateAICoachScriptTaskRequest::DocList>) };
    inline vector<CreateGenerateAICoachScriptTaskRequest::DocList> getDocList() { DARABONBA_PTR_GET(docList_, vector<CreateGenerateAICoachScriptTaskRequest::DocList>) };
    inline CreateGenerateAICoachScriptTaskRequest& setDocList(const vector<CreateGenerateAICoachScriptTaskRequest::DocList> & docList) { DARABONBA_PTR_SET_VALUE(docList_, docList) };
    inline CreateGenerateAICoachScriptTaskRequest& setDocList(vector<CreateGenerateAICoachScriptTaskRequest::DocList> && docList) { DARABONBA_PTR_SET_RVALUE(docList_, docList) };


    // docUrlList Field Functions 
    bool hasDocUrlList() const { return this->docUrlList_ != nullptr;};
    void deleteDocUrlList() { this->docUrlList_ = nullptr;};
    inline const vector<string> & getDocUrlList() const { DARABONBA_PTR_GET_CONST(docUrlList_, vector<string>) };
    inline vector<string> getDocUrlList() { DARABONBA_PTR_GET(docUrlList_, vector<string>) };
    inline CreateGenerateAICoachScriptTaskRequest& setDocUrlList(const vector<string> & docUrlList) { DARABONBA_PTR_SET_VALUE(docUrlList_, docUrlList) };
    inline CreateGenerateAICoachScriptTaskRequest& setDocUrlList(vector<string> && docUrlList) { DARABONBA_PTR_SET_RVALUE(docUrlList_, docUrlList) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline CreateGenerateAICoachScriptTaskRequest& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


  protected:
    shared_ptr<bool> assessmentPoint_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> dialogueKey_ {};
    shared_ptr<string> dialogueUrl_ {};
    shared_ptr<vector<CreateGenerateAICoachScriptTaskRequest::DocList>> docList_ {};
    shared_ptr<vector<string>> docUrlList_ {};
    shared_ptr<string> scriptName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
