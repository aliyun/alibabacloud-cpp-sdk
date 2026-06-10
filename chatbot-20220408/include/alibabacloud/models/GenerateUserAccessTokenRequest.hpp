// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUSERACCESSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUSERACCESSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class GenerateUserAccessTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUserAccessTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(ForeignId, foreignId_);
      DARABONBA_PTR_TO_JSON(Nick, nick_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUserAccessTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(ForeignId, foreignId_);
      DARABONBA_PTR_FROM_JSON(Nick, nick_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
    };
    GenerateUserAccessTokenRequest() = default ;
    GenerateUserAccessTokenRequest(const GenerateUserAccessTokenRequest &) = default ;
    GenerateUserAccessTokenRequest(GenerateUserAccessTokenRequest &&) = default ;
    GenerateUserAccessTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUserAccessTokenRequest() = default ;
    GenerateUserAccessTokenRequest& operator=(const GenerateUserAccessTokenRequest &) = default ;
    GenerateUserAccessTokenRequest& operator=(GenerateUserAccessTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->email_ == nullptr && this->expireTime_ == nullptr && this->extraInfo_ == nullptr && this->foreignId_ == nullptr && this->nick_ == nullptr
        && this->telephone_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GenerateUserAccessTokenRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GenerateUserAccessTokenRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline GenerateUserAccessTokenRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline GenerateUserAccessTokenRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // foreignId Field Functions 
    bool hasForeignId() const { return this->foreignId_ != nullptr;};
    void deleteForeignId() { this->foreignId_ = nullptr;};
    inline string getForeignId() const { DARABONBA_PTR_GET_DEFAULT(foreignId_, "") };
    inline GenerateUserAccessTokenRequest& setForeignId(string foreignId) { DARABONBA_PTR_SET_VALUE(foreignId_, foreignId) };


    // nick Field Functions 
    bool hasNick() const { return this->nick_ != nullptr;};
    void deleteNick() { this->nick_ = nullptr;};
    inline string getNick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
    inline GenerateUserAccessTokenRequest& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline GenerateUserAccessTokenRequest& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


  protected:
    // The key of the business space. If you do not specify this parameter, the system accesses the default business space. You can obtain the key from the Business Management page of your main account.
    shared_ptr<string> agentKey_ {};
    // The user\\"s email address.
    shared_ptr<string> email_ {};
    // This parameter is reserved. You do not need to specify it.
    shared_ptr<int32_t> expireTime_ {};
    // Additional information formatted as a JSON string.
    shared_ptr<string> extraInfo_ {};
    // The external user ID.
    // 
    // This parameter is required.
    shared_ptr<string> foreignId_ {};
    // The visitor\\"s nickname.
    // 
    // This parameter is required.
    shared_ptr<string> nick_ {};
    // The user\\"s telephone number.
    shared_ptr<string> telephone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
