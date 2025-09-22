// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ChatStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(question, question_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(question, question_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    ChatStreamRequest() = default ;
    ChatStreamRequest(const ChatStreamRequest &) = default ;
    ChatStreamRequest(ChatStreamRequest &&) = default ;
    ChatStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatStreamRequest() = default ;
    ChatStreamRequest& operator=(const ChatStreamRequest &) = default ;
    ChatStreamRequest& operator=(ChatStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->question_ != nullptr
        && this->sessionId_ != nullptr; };
    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline ChatStreamRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatStreamRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // Q&A content.
    // 
    // This parameter is required.
    std::shared_ptr<string> question_ = nullptr;
    // - Q&A session ID.
    // - Historical sessions can be retrieved through GetSessionList.
    // - A new session can also be created via CreateChatSession.
    // 
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
