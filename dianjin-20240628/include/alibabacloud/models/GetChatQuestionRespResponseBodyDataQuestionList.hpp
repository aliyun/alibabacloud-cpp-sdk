// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATQUESTIONRESPRESPONSEBODYDATAQUESTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCHATQUESTIONRESPRESPONSEBODYDATAQUESTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetChatQuestionRespResponseBodyDataQuestionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatQuestionRespResponseBodyDataQuestionList& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(oriContent, oriContent_);
      DARABONBA_PTR_TO_JSON(reply, reply_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatQuestionRespResponseBodyDataQuestionList& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(oriContent, oriContent_);
      DARABONBA_PTR_FROM_JSON(reply, reply_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    GetChatQuestionRespResponseBodyDataQuestionList() = default ;
    GetChatQuestionRespResponseBodyDataQuestionList(const GetChatQuestionRespResponseBodyDataQuestionList &) = default ;
    GetChatQuestionRespResponseBodyDataQuestionList(GetChatQuestionRespResponseBodyDataQuestionList &&) = default ;
    GetChatQuestionRespResponseBodyDataQuestionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatQuestionRespResponseBodyDataQuestionList() = default ;
    GetChatQuestionRespResponseBodyDataQuestionList& operator=(const GetChatQuestionRespResponseBodyDataQuestionList &) = default ;
    GetChatQuestionRespResponseBodyDataQuestionList& operator=(GetChatQuestionRespResponseBodyDataQuestionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->gmtCreate_ != nullptr && this->oriContent_ != nullptr && this->reply_ != nullptr && this->sessionId_ != nullptr && this->type_ != nullptr
        && this->userId_ != nullptr && this->userName_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetChatQuestionRespResponseBodyDataQuestionList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetChatQuestionRespResponseBodyDataQuestionList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // oriContent Field Functions 
    bool hasOriContent() const { return this->oriContent_ != nullptr;};
    void deleteOriContent() { this->oriContent_ = nullptr;};
    inline string oriContent() const { DARABONBA_PTR_GET_DEFAULT(oriContent_, "") };
    inline GetChatQuestionRespResponseBodyDataQuestionList& setOriContent(string oriContent) { DARABONBA_PTR_SET_VALUE(oriContent_, oriContent) };


    // reply Field Functions 
    bool hasReply() const { return this->reply_ != nullptr;};
    void deleteReply() { this->reply_ = nullptr;};
    inline string reply() const { DARABONBA_PTR_GET_DEFAULT(reply_, "") };
    inline GetChatQuestionRespResponseBodyDataQuestionList& setReply(string reply) { DARABONBA_PTR_SET_VALUE(reply_, reply) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetChatQuestionRespResponseBodyDataQuestionList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetChatQuestionRespResponseBodyDataQuestionList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetChatQuestionRespResponseBodyDataQuestionList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetChatQuestionRespResponseBodyDataQuestionList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> oriContent_ = nullptr;
    std::shared_ptr<string> reply_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
