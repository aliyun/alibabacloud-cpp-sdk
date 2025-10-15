// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCHATQUESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCHATQUESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitChatQuestionRequestQuestionList.hpp>
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
    virtual bool empty() const override { return this->gmtService_ == nullptr
        && return this->liveScriptContent_ == nullptr && return this->openSmallTalk_ == nullptr && return this->questionList_ == nullptr && return this->requestId_ == nullptr && return this->sessionId_ == nullptr; };
    // gmtService Field Functions 
    bool hasGmtService() const { return this->gmtService_ != nullptr;};
    void deleteGmtService() { this->gmtService_ = nullptr;};
    inline string gmtService() const { DARABONBA_PTR_GET_DEFAULT(gmtService_, "") };
    inline SubmitChatQuestionRequest& setGmtService(string gmtService) { DARABONBA_PTR_SET_VALUE(gmtService_, gmtService) };


    // liveScriptContent Field Functions 
    bool hasLiveScriptContent() const { return this->liveScriptContent_ != nullptr;};
    void deleteLiveScriptContent() { this->liveScriptContent_ = nullptr;};
    inline string liveScriptContent() const { DARABONBA_PTR_GET_DEFAULT(liveScriptContent_, "") };
    inline SubmitChatQuestionRequest& setLiveScriptContent(string liveScriptContent) { DARABONBA_PTR_SET_VALUE(liveScriptContent_, liveScriptContent) };


    // openSmallTalk Field Functions 
    bool hasOpenSmallTalk() const { return this->openSmallTalk_ != nullptr;};
    void deleteOpenSmallTalk() { this->openSmallTalk_ = nullptr;};
    inline bool openSmallTalk() const { DARABONBA_PTR_GET_DEFAULT(openSmallTalk_, false) };
    inline SubmitChatQuestionRequest& setOpenSmallTalk(bool openSmallTalk) { DARABONBA_PTR_SET_VALUE(openSmallTalk_, openSmallTalk) };


    // questionList Field Functions 
    bool hasQuestionList() const { return this->questionList_ != nullptr;};
    void deleteQuestionList() { this->questionList_ = nullptr;};
    inline const vector<SubmitChatQuestionRequestQuestionList> & questionList() const { DARABONBA_PTR_GET_CONST(questionList_, vector<SubmitChatQuestionRequestQuestionList>) };
    inline vector<SubmitChatQuestionRequestQuestionList> questionList() { DARABONBA_PTR_GET(questionList_, vector<SubmitChatQuestionRequestQuestionList>) };
    inline SubmitChatQuestionRequest& setQuestionList(const vector<SubmitChatQuestionRequestQuestionList> & questionList) { DARABONBA_PTR_SET_VALUE(questionList_, questionList) };
    inline SubmitChatQuestionRequest& setQuestionList(vector<SubmitChatQuestionRequestQuestionList> && questionList) { DARABONBA_PTR_SET_RVALUE(questionList_, questionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitChatQuestionRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SubmitChatQuestionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> gmtService_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> liveScriptContent_ = nullptr;
    std::shared_ptr<bool> openSmallTalk_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<SubmitChatQuestionRequestQuestionList>> questionList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
