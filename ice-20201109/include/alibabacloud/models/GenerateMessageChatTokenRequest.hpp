// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEMESSAGECHATTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEMESSAGECHATTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GenerateMessageChatTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateMessageChatTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateMessageChatTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GenerateMessageChatTokenRequest() = default ;
    GenerateMessageChatTokenRequest(const GenerateMessageChatTokenRequest &) = default ;
    GenerateMessageChatTokenRequest(GenerateMessageChatTokenRequest &&) = default ;
    GenerateMessageChatTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateMessageChatTokenRequest() = default ;
    GenerateMessageChatTokenRequest& operator=(const GenerateMessageChatTokenRequest &) = default ;
    GenerateMessageChatTokenRequest& operator=(GenerateMessageChatTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIAgentId_ != nullptr
        && this->expire_ != nullptr && this->role_ != nullptr && this->userId_ != nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline GenerateMessageChatTokenRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int32_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0) };
    inline GenerateMessageChatTokenRequest& setExpire(int32_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GenerateMessageChatTokenRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GenerateMessageChatTokenRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
    std::shared_ptr<int32_t> expire_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
