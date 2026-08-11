// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEY_HPP_
#define ALIBABACLOUD_MODELS_APIKEY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IPConfig.hpp>
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
      DARABONBA_PTR_TO_JSON(ipBlacklist, ipBlacklist_);
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(teamName, teamName_);
      DARABONBA_PTR_TO_JSON(teamPlan, teamPlan_);
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
      DARABONBA_PTR_FROM_JSON(ipBlacklist, ipBlacklist_);
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(lastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(teamName, teamName_);
      DARABONBA_PTR_FROM_JSON(teamPlan, teamPlan_);
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
        && this->ipBlacklist_ == nullptr && this->ipWhitelist_ == nullptr && this->lastUsedTime_ == nullptr && this->resourceGroupID_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr && this->teamID_ == nullptr && this->teamName_ == nullptr && this->teamPlan_ == nullptr && this->userID_ == nullptr
        && this->username_ == nullptr; };
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


    // ipBlacklist Field Functions 
    bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
    void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
    inline const vector<IPConfig> & getIpBlacklist() const { DARABONBA_PTR_GET_CONST(ipBlacklist_, vector<IPConfig>) };
    inline vector<IPConfig> getIpBlacklist() { DARABONBA_PTR_GET(ipBlacklist_, vector<IPConfig>) };
    inline ApiKey& setIpBlacklist(const vector<IPConfig> & ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };
    inline ApiKey& setIpBlacklist(vector<IPConfig> && ipBlacklist) { DARABONBA_PTR_SET_RVALUE(ipBlacklist_, ipBlacklist) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline const vector<IPConfig> & getIpWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<IPConfig>) };
    inline vector<IPConfig> getIpWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<IPConfig>) };
    inline ApiKey& setIpWhitelist(const vector<IPConfig> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
    inline ApiKey& setIpWhitelist(vector<IPConfig> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline string getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, "") };
    inline ApiKey& setLastUsedTime(string lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline ApiKey& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ApiKey& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ApiKey& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline ApiKey& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline ApiKey& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


    // teamPlan Field Functions 
    bool hasTeamPlan() const { return this->teamPlan_ != nullptr;};
    void deleteTeamPlan() { this->teamPlan_ = nullptr;};
    inline string getTeamPlan() const { DARABONBA_PTR_GET_DEFAULT(teamPlan_, "") };
    inline ApiKey& setTeamPlan(string teamPlan) { DARABONBA_PTR_SET_VALUE(teamPlan_, teamPlan) };


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
    // The unique identifier of the API key.
    shared_ptr<string> apiKeyID_ {};
    // The masked display value of the API key.
    shared_ptr<string> apiKeyMask_ {};
    // The name of the API key.
    shared_ptr<string> apiKeyName_ {};
    // The value of the API key.
    shared_ptr<string> apiKeyValue_ {};
    // The time when the API key was created.
    shared_ptr<string> createdTime_ {};
    // The expiration time.
    shared_ptr<string> expireTime_ {};
    shared_ptr<vector<IPConfig>> ipBlacklist_ {};
    shared_ptr<vector<IPConfig>> ipWhitelist_ {};
    // The time when the API key was last used.
    shared_ptr<string> lastUsedTime_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupID_ {};
    shared_ptr<string> source_ {};
    // The status. Valid values:
    // - active
    // - inactive
    shared_ptr<string> status_ {};
    // The unique identifier of the team.
    shared_ptr<string> teamID_ {};
    // The name of the team.
    shared_ptr<string> teamName_ {};
    shared_ptr<string> teamPlan_ {};
    // The UID of the creator.
    shared_ptr<string> userID_ {};
    // The creator.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
