// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATSESSIONINFO_HPP_
#define ALIBABACLOUD_MODELS_CHATSESSIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ChatSessionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatSessionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(mainAccountId, mainAccountId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatSessionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(mainAccountId, mainAccountId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    ChatSessionInfo() = default ;
    ChatSessionInfo(const ChatSessionInfo &) = default ;
    ChatSessionInfo(ChatSessionInfo &&) = default ;
    ChatSessionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatSessionInfo() = default ;
    ChatSessionInfo& operator=(const ChatSessionInfo &) = default ;
    ChatSessionInfo& operator=(ChatSessionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->mainAccountId_ == nullptr && return this->sessionId_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline ChatSessionInfo& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // mainAccountId Field Functions 
    bool hasMainAccountId() const { return this->mainAccountId_ != nullptr;};
    void deleteMainAccountId() { this->mainAccountId_ = nullptr;};
    inline int64_t mainAccountId() const { DARABONBA_PTR_GET_DEFAULT(mainAccountId_, 0L) };
    inline ChatSessionInfo& setMainAccountId(int64_t mainAccountId) { DARABONBA_PTR_SET_VALUE(mainAccountId_, mainAccountId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatSessionInfo& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<int64_t> mainAccountId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
