// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALOGANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALOGANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateDialogAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDialogAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysisNodes, analysisNodes_);
      DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
      DARABONBA_ANY_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(playCode, playCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDialogAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisNodes, analysisNodes_);
      DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
      DARABONBA_ANY_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(playCode, playCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateDialogAnalysisTaskRequest() = default ;
    CreateDialogAnalysisTaskRequest(const CreateDialogAnalysisTaskRequest &) = default ;
    CreateDialogAnalysisTaskRequest(CreateDialogAnalysisTaskRequest &&) = default ;
    CreateDialogAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDialogAnalysisTaskRequest() = default ;
    CreateDialogAnalysisTaskRequest& operator=(const CreateDialogAnalysisTaskRequest &) = default ;
    CreateDialogAnalysisTaskRequest& operator=(CreateDialogAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConversationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationList& obj) { 
        DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationList& obj) { 
        DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
      };
      ConversationList() = default ;
      ConversationList(const ConversationList &) = default ;
      ConversationList(ConversationList &&) = default ;
      ConversationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConversationList() = default ;
      ConversationList& operator=(const ConversationList &) = default ;
      ConversationList& operator=(ConversationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DialogueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(role, role_);
        };
        friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(role, role_);
        };
        DialogueList() = default ;
        DialogueList(const DialogueList &) = default ;
        DialogueList(DialogueList &&) = default ;
        DialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DialogueList() = default ;
        DialogueList& operator=(const DialogueList &) = default ;
        DialogueList& operator=(DialogueList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline DialogueList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline DialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // This parameter is required.
        shared_ptr<string> content_ {};
        // This parameter is required.
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->dialogueList_ == nullptr; };
      // dialogueList Field Functions 
      bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
      void deleteDialogueList() { this->dialogueList_ = nullptr;};
      inline const vector<ConversationList::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<ConversationList::DialogueList>) };
      inline vector<ConversationList::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<ConversationList::DialogueList>) };
      inline ConversationList& setDialogueList(const vector<ConversationList::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
      inline ConversationList& setDialogueList(vector<ConversationList::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<ConversationList::DialogueList>> dialogueList_ {};
    };

    virtual bool empty() const override { return this->analysisNodes_ == nullptr
        && this->conversationList_ == nullptr && this->metaData_ == nullptr && this->playCode_ == nullptr && this->requestId_ == nullptr; };
    // analysisNodes Field Functions 
    bool hasAnalysisNodes() const { return this->analysisNodes_ != nullptr;};
    void deleteAnalysisNodes() { this->analysisNodes_ = nullptr;};
    inline const vector<string> & getAnalysisNodes() const { DARABONBA_PTR_GET_CONST(analysisNodes_, vector<string>) };
    inline vector<string> getAnalysisNodes() { DARABONBA_PTR_GET(analysisNodes_, vector<string>) };
    inline CreateDialogAnalysisTaskRequest& setAnalysisNodes(const vector<string> & analysisNodes) { DARABONBA_PTR_SET_VALUE(analysisNodes_, analysisNodes) };
    inline CreateDialogAnalysisTaskRequest& setAnalysisNodes(vector<string> && analysisNodes) { DARABONBA_PTR_SET_RVALUE(analysisNodes_, analysisNodes) };


    // conversationList Field Functions 
    bool hasConversationList() const { return this->conversationList_ != nullptr;};
    void deleteConversationList() { this->conversationList_ = nullptr;};
    inline const vector<CreateDialogAnalysisTaskRequest::ConversationList> & getConversationList() const { DARABONBA_PTR_GET_CONST(conversationList_, vector<CreateDialogAnalysisTaskRequest::ConversationList>) };
    inline vector<CreateDialogAnalysisTaskRequest::ConversationList> getConversationList() { DARABONBA_PTR_GET(conversationList_, vector<CreateDialogAnalysisTaskRequest::ConversationList>) };
    inline CreateDialogAnalysisTaskRequest& setConversationList(const vector<CreateDialogAnalysisTaskRequest::ConversationList> & conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };
    inline CreateDialogAnalysisTaskRequest& setConversationList(vector<CreateDialogAnalysisTaskRequest::ConversationList> && conversationList) { DARABONBA_PTR_SET_RVALUE(conversationList_, conversationList) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline     const Darabonba::Json & getMetaData() const { DARABONBA_GET(metaData_) };
    Darabonba::Json & getMetaData() { DARABONBA_GET(metaData_) };
    inline CreateDialogAnalysisTaskRequest& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
    inline CreateDialogAnalysisTaskRequest& setMetaData(Darabonba::Json && metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    // playCode Field Functions 
    bool hasPlayCode() const { return this->playCode_ != nullptr;};
    void deletePlayCode() { this->playCode_ = nullptr;};
    inline string getPlayCode() const { DARABONBA_PTR_GET_DEFAULT(playCode_, "") };
    inline CreateDialogAnalysisTaskRequest& setPlayCode(string playCode) { DARABONBA_PTR_SET_VALUE(playCode_, playCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDialogAnalysisTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> analysisNodes_ {};
    // This parameter is required.
    shared_ptr<vector<CreateDialogAnalysisTaskRequest::ConversationList>> conversationList_ {};
    Darabonba::Json metaData_ {};
    // This parameter is required.
    shared_ptr<string> playCode_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
