// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCHATQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCHATQUESTIONREQUEST_HPP_
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
  class SubmitChatQuestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitChatQuestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gmtService, gmtService_);
      DARABONBA_PTR_TO_JSON(liveScriptContent, liveScriptContent_);
      DARABONBA_PTR_TO_JSON(openSmallTalk, openSmallTalk_);
      DARABONBA_PTR_TO_JSON(questionList, questionList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitChatQuestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gmtService, gmtService_);
      DARABONBA_PTR_FROM_JSON(liveScriptContent, liveScriptContent_);
      DARABONBA_PTR_FROM_JSON(openSmallTalk, openSmallTalk_);
      DARABONBA_PTR_FROM_JSON(questionList, questionList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    SubmitChatQuestionRequest() = default ;
    SubmitChatQuestionRequest(const SubmitChatQuestionRequest &) = default ;
    SubmitChatQuestionRequest(SubmitChatQuestionRequest &&) = default ;
    SubmitChatQuestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitChatQuestionRequest() = default ;
    SubmitChatQuestionRequest& operator=(const SubmitChatQuestionRequest &) = default ;
    SubmitChatQuestionRequest& operator=(SubmitChatQuestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuestionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuestionList& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(reply, reply_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(userName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, QuestionList& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(reply, reply_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(userName, userName_);
      };
      QuestionList() = default ;
      QuestionList(const QuestionList &) = default ;
      QuestionList(QuestionList &&) = default ;
      QuestionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuestionList() = default ;
      QuestionList& operator=(const QuestionList &) = default ;
      QuestionList& operator=(QuestionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->gmtCreate_ == nullptr && this->reply_ == nullptr && this->sessionId_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline QuestionList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline QuestionList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // reply Field Functions 
      bool hasReply() const { return this->reply_ != nullptr;};
      void deleteReply() { this->reply_ = nullptr;};
      inline string getReply() const { DARABONBA_PTR_GET_DEFAULT(reply_, "") };
      inline QuestionList& setReply(string reply) { DARABONBA_PTR_SET_VALUE(reply_, reply) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline QuestionList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline QuestionList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline QuestionList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline QuestionList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // This parameter is required.
      shared_ptr<string> content_ {};
      // This parameter is required.
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> reply_ {};
      // This parameter is required.
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> type_ {};
      // This parameter is required.
      shared_ptr<string> userId_ {};
      // This parameter is required.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->gmtService_ == nullptr
        && this->liveScriptContent_ == nullptr && this->openSmallTalk_ == nullptr && this->questionList_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr; };
    // gmtService Field Functions 
    bool hasGmtService() const { return this->gmtService_ != nullptr;};
    void deleteGmtService() { this->gmtService_ = nullptr;};
    inline string getGmtService() const { DARABONBA_PTR_GET_DEFAULT(gmtService_, "") };
    inline SubmitChatQuestionRequest& setGmtService(string gmtService) { DARABONBA_PTR_SET_VALUE(gmtService_, gmtService) };


    // liveScriptContent Field Functions 
    bool hasLiveScriptContent() const { return this->liveScriptContent_ != nullptr;};
    void deleteLiveScriptContent() { this->liveScriptContent_ = nullptr;};
    inline string getLiveScriptContent() const { DARABONBA_PTR_GET_DEFAULT(liveScriptContent_, "") };
    inline SubmitChatQuestionRequest& setLiveScriptContent(string liveScriptContent) { DARABONBA_PTR_SET_VALUE(liveScriptContent_, liveScriptContent) };


    // openSmallTalk Field Functions 
    bool hasOpenSmallTalk() const { return this->openSmallTalk_ != nullptr;};
    void deleteOpenSmallTalk() { this->openSmallTalk_ = nullptr;};
    inline bool getOpenSmallTalk() const { DARABONBA_PTR_GET_DEFAULT(openSmallTalk_, false) };
    inline SubmitChatQuestionRequest& setOpenSmallTalk(bool openSmallTalk) { DARABONBA_PTR_SET_VALUE(openSmallTalk_, openSmallTalk) };


    // questionList Field Functions 
    bool hasQuestionList() const { return this->questionList_ != nullptr;};
    void deleteQuestionList() { this->questionList_ = nullptr;};
    inline const vector<SubmitChatQuestionRequest::QuestionList> & getQuestionList() const { DARABONBA_PTR_GET_CONST(questionList_, vector<SubmitChatQuestionRequest::QuestionList>) };
    inline vector<SubmitChatQuestionRequest::QuestionList> getQuestionList() { DARABONBA_PTR_GET(questionList_, vector<SubmitChatQuestionRequest::QuestionList>) };
    inline SubmitChatQuestionRequest& setQuestionList(const vector<SubmitChatQuestionRequest::QuestionList> & questionList) { DARABONBA_PTR_SET_VALUE(questionList_, questionList) };
    inline SubmitChatQuestionRequest& setQuestionList(vector<SubmitChatQuestionRequest::QuestionList> && questionList) { DARABONBA_PTR_SET_RVALUE(questionList_, questionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitChatQuestionRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SubmitChatQuestionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> gmtService_ {};
    // This parameter is required.
    shared_ptr<string> liveScriptContent_ {};
    shared_ptr<bool> openSmallTalk_ {};
    // This parameter is required.
    shared_ptr<vector<SubmitChatQuestionRequest::QuestionList>> questionList_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
