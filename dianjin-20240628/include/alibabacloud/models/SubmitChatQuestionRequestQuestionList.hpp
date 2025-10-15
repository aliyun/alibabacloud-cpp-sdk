// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCHATQUESTIONREQUESTQUESTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCHATQUESTIONREQUESTQUESTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class SubmitChatQuestionRequestQuestionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitChatQuestionRequestQuestionList& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(reply, reply_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitChatQuestionRequestQuestionList& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(reply, reply_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    SubmitChatQuestionRequestQuestionList() = default ;
    SubmitChatQuestionRequestQuestionList(const SubmitChatQuestionRequestQuestionList &) = default ;
    SubmitChatQuestionRequestQuestionList(SubmitChatQuestionRequestQuestionList &&) = default ;
    SubmitChatQuestionRequestQuestionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitChatQuestionRequestQuestionList() = default ;
    SubmitChatQuestionRequestQuestionList& operator=(const SubmitChatQuestionRequestQuestionList &) = default ;
    SubmitChatQuestionRequestQuestionList& operator=(SubmitChatQuestionRequestQuestionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->reply_ == nullptr && return this->sessionId_ == nullptr && return this->type_ == nullptr && return this->userId_ == nullptr
        && return this->userName_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SubmitChatQuestionRequestQuestionList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline SubmitChatQuestionRequestQuestionList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // reply Field Functions 
    bool hasReply() const { return this->reply_ != nullptr;};
    void deleteReply() { this->reply_ = nullptr;};
    inline string reply() const { DARABONBA_PTR_GET_DEFAULT(reply_, "") };
    inline SubmitChatQuestionRequestQuestionList& setReply(string reply) { DARABONBA_PTR_SET_VALUE(reply_, reply) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SubmitChatQuestionRequestQuestionList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitChatQuestionRequestQuestionList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SubmitChatQuestionRequestQuestionList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline SubmitChatQuestionRequestQuestionList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> reply_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
