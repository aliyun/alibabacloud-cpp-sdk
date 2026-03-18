// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEAITEACHERENGLISHPARAPHRASECHATMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEAITEACHERENGLISHPARAPHRASECHATMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteAITeacherEnglishParaphraseChatMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAITeacherEnglishParaphraseChatMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(grade, grade_);
      DARABONBA_PTR_TO_JSON(questionId, questionId_);
      DARABONBA_PTR_TO_JSON(questionInfo, questionInfo_);
      DARABONBA_PTR_TO_JSON(responseMode, responseMode_);
      DARABONBA_PTR_TO_JSON(userAnswer, userAnswer_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAITeacherEnglishParaphraseChatMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(grade, grade_);
      DARABONBA_PTR_FROM_JSON(questionId, questionId_);
      DARABONBA_PTR_FROM_JSON(questionInfo, questionInfo_);
      DARABONBA_PTR_FROM_JSON(responseMode, responseMode_);
      DARABONBA_PTR_FROM_JSON(userAnswer, userAnswer_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    ExecuteAITeacherEnglishParaphraseChatMessageRequest() = default ;
    ExecuteAITeacherEnglishParaphraseChatMessageRequest(const ExecuteAITeacherEnglishParaphraseChatMessageRequest &) = default ;
    ExecuteAITeacherEnglishParaphraseChatMessageRequest(ExecuteAITeacherEnglishParaphraseChatMessageRequest &&) = default ;
    ExecuteAITeacherEnglishParaphraseChatMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAITeacherEnglishParaphraseChatMessageRequest() = default ;
    ExecuteAITeacherEnglishParaphraseChatMessageRequest& operator=(const ExecuteAITeacherEnglishParaphraseChatMessageRequest &) = default ;
    ExecuteAITeacherEnglishParaphraseChatMessageRequest& operator=(ExecuteAITeacherEnglishParaphraseChatMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatId_ == nullptr
        && this->content_ == nullptr && this->grade_ == nullptr && this->questionId_ == nullptr && this->questionInfo_ == nullptr && this->responseMode_ == nullptr
        && this->userAnswer_ == nullptr && this->userId_ == nullptr; };
    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline ExecuteAITeacherEnglishParaphraseChatMessageRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ExecuteAITeacherEnglishParaphraseChatMessageRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline int64_t getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, 0L) };
    inline ExecuteAITeacherEnglishParaphraseChatMessageRequest& setGrade(int64_t grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // questionId Field Functions 
    bool hasQuestionId() const { return this->questionId_ != nullptr;};
    void deleteQuestionId() { this->questionId_ = nullptr;};
    inline string getQuestionId() const { DARABONBA_PTR_GET_DEFAULT(questionId_, "") };
    inline ExecuteAITeacherEnglishParaphraseChatMessageRequest& setQuestionId(string questionId) { DARABONBA_PTR_SET_VALUE(questionId_, questionId) };


    // questionInfo Field Functions 
    bool hasQuestionInfo() const { return this->questionInfo_ != nullptr;};
    void deleteQuestionInfo() { this->questionInfo_ = nullptr;};
    inline string getQuestionInfo() const { DARABONBA_PTR_GET_DEFAULT(questionInfo_, "") };
    inline ExecuteAITeacherEnglishParaphraseChatMessageRequest& setQuestionInfo(string questionInfo) { DARABONBA_PTR_SET_VALUE(questionInfo_, questionInfo) };


    // responseMode Field Functions 
    bool hasResponseMode() const { return this->responseMode_ != nullptr;};
    void deleteResponseMode() { this->responseMode_ = nullptr;};
    inline string getResponseMode() const { DARABONBA_PTR_GET_DEFAULT(responseMode_, "") };
    inline ExecuteAITeacherEnglishParaphraseChatMessageRequest& setResponseMode(string responseMode) { DARABONBA_PTR_SET_VALUE(responseMode_, responseMode) };


    // userAnswer Field Functions 
    bool hasUserAnswer() const { return this->userAnswer_ != nullptr;};
    void deleteUserAnswer() { this->userAnswer_ = nullptr;};
    inline string getUserAnswer() const { DARABONBA_PTR_GET_DEFAULT(userAnswer_, "") };
    inline ExecuteAITeacherEnglishParaphraseChatMessageRequest& setUserAnswer(string userAnswer) { DARABONBA_PTR_SET_VALUE(userAnswer_, userAnswer) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ExecuteAITeacherEnglishParaphraseChatMessageRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> chatId_ {};
    // This parameter is required.
    shared_ptr<string> content_ {};
    shared_ptr<int64_t> grade_ {};
    shared_ptr<string> questionId_ {};
    // This parameter is required.
    shared_ptr<string> questionInfo_ {};
    // This parameter is required.
    shared_ptr<string> responseMode_ {};
    // This parameter is required.
    shared_ptr<string> userAnswer_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
