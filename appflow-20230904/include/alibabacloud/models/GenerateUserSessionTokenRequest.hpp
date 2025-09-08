// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUSERSESSIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUSERSESSIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class GenerateUserSessionTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUserSessionTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_TO_JSON(ExpireSecond, expireSecond_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(IntegrateId, integrateId_);
      DARABONBA_PTR_TO_JSON(UserAvatar, userAvatar_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUserSessionTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_FROM_JSON(ExpireSecond, expireSecond_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(IntegrateId, integrateId_);
      DARABONBA_PTR_FROM_JSON(UserAvatar, userAvatar_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    GenerateUserSessionTokenRequest() = default ;
    GenerateUserSessionTokenRequest(const GenerateUserSessionTokenRequest &) = default ;
    GenerateUserSessionTokenRequest(GenerateUserSessionTokenRequest &&) = default ;
    GenerateUserSessionTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUserSessionTokenRequest() = default ;
    GenerateUserSessionTokenRequest& operator=(const GenerateUserSessionTokenRequest &) = default ;
    GenerateUserSessionTokenRequest& operator=(GenerateUserSessionTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chatbotId_ != nullptr
        && this->expireSecond_ != nullptr && this->extraInfo_ != nullptr && this->integrateId_ != nullptr && this->userAvatar_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // chatbotId Field Functions 
    bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
    void deleteChatbotId() { this->chatbotId_ = nullptr;};
    inline string chatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
    inline GenerateUserSessionTokenRequest& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


    // expireSecond Field Functions 
    bool hasExpireSecond() const { return this->expireSecond_ != nullptr;};
    void deleteExpireSecond() { this->expireSecond_ = nullptr;};
    inline int64_t expireSecond() const { DARABONBA_PTR_GET_DEFAULT(expireSecond_, 0L) };
    inline GenerateUserSessionTokenRequest& setExpireSecond(int64_t expireSecond) { DARABONBA_PTR_SET_VALUE(expireSecond_, expireSecond) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline GenerateUserSessionTokenRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // integrateId Field Functions 
    bool hasIntegrateId() const { return this->integrateId_ != nullptr;};
    void deleteIntegrateId() { this->integrateId_ = nullptr;};
    inline string integrateId() const { DARABONBA_PTR_GET_DEFAULT(integrateId_, "") };
    inline GenerateUserSessionTokenRequest& setIntegrateId(string integrateId) { DARABONBA_PTR_SET_VALUE(integrateId_, integrateId) };


    // userAvatar Field Functions 
    bool hasUserAvatar() const { return this->userAvatar_ != nullptr;};
    void deleteUserAvatar() { this->userAvatar_ = nullptr;};
    inline string userAvatar() const { DARABONBA_PTR_GET_DEFAULT(userAvatar_, "") };
    inline GenerateUserSessionTokenRequest& setUserAvatar(string userAvatar) { DARABONBA_PTR_SET_VALUE(userAvatar_, userAvatar) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GenerateUserSessionTokenRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GenerateUserSessionTokenRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // AI Assistant ID
    std::shared_ptr<string> chatbotId_ = nullptr;
    // Expiration Time, in seconds, default 24 hours
    std::shared_ptr<int64_t> expireSecond_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    // Integration ID
    std::shared_ptr<string> integrateId_ = nullptr;
    // User Avatar (URL)
    std::shared_ptr<string> userAvatar_ = nullptr;
    // User ID
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // User Nickname
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
