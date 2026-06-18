// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEY_HPP_
#define ALIBABACLOUD_MODELS_APIKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ApiKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiKey& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyID, apiKeyID_);
      DARABONBA_PTR_TO_JSON(apiKeyMask, apiKeyMask_);
      DARABONBA_PTR_TO_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(apiKeyValue, apiKeyValue_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ApiKey& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyID, apiKeyID_);
      DARABONBA_PTR_FROM_JSON(apiKeyMask, apiKeyMask_);
      DARABONBA_PTR_FROM_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(apiKeyValue, apiKeyValue_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    ApiKey() = default ;
    ApiKey(const ApiKey &) = default ;
    ApiKey(ApiKey &&) = default ;
    ApiKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiKey() = default ;
    ApiKey& operator=(const ApiKey &) = default ;
    ApiKey& operator=(ApiKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyID_ == nullptr
        && this->apiKeyMask_ == nullptr && this->apiKeyName_ == nullptr && this->apiKeyValue_ == nullptr && this->createdTime_ == nullptr && this->expireTime_ == nullptr
        && this->lastUsedTime_ == nullptr && this->userID_ == nullptr && this->username_ == nullptr; };
    // apiKeyID Field Functions 
    bool hasApiKeyID() const { return this->apiKeyID_ != nullptr;};
    void deleteApiKeyID() { this->apiKeyID_ = nullptr;};
    inline string getApiKeyID() const { DARABONBA_PTR_GET_DEFAULT(apiKeyID_, "") };
    inline ApiKey& setApiKeyID(string apiKeyID) { DARABONBA_PTR_SET_VALUE(apiKeyID_, apiKeyID) };


    // apiKeyMask Field Functions 
    bool hasApiKeyMask() const { return this->apiKeyMask_ != nullptr;};
    void deleteApiKeyMask() { this->apiKeyMask_ = nullptr;};
    inline string getApiKeyMask() const { DARABONBA_PTR_GET_DEFAULT(apiKeyMask_, "") };
    inline ApiKey& setApiKeyMask(string apiKeyMask) { DARABONBA_PTR_SET_VALUE(apiKeyMask_, apiKeyMask) };


    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline ApiKey& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // apiKeyValue Field Functions 
    bool hasApiKeyValue() const { return this->apiKeyValue_ != nullptr;};
    void deleteApiKeyValue() { this->apiKeyValue_ = nullptr;};
    inline string getApiKeyValue() const { DARABONBA_PTR_GET_DEFAULT(apiKeyValue_, "") };
    inline ApiKey& setApiKeyValue(string apiKeyValue) { DARABONBA_PTR_SET_VALUE(apiKeyValue_, apiKeyValue) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ApiKey& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ApiKey& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline string getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, "") };
    inline ApiKey& setLastUsedTime(string lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
    inline ApiKey& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ApiKey& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    shared_ptr<string> apiKeyID_ {};
    shared_ptr<string> apiKeyMask_ {};
    shared_ptr<string> apiKeyName_ {};
    shared_ptr<string> apiKeyValue_ {};
    shared_ptr<string> createdTime_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> lastUsedTime_ {};
    shared_ptr<string> userID_ {};
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
