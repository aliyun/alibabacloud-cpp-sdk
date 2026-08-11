// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIKEYINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIKEYINPUT_HPP_
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
  class CreateApiKeyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiKeyInput& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ipBlacklist, ipBlacklist_);
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiKeyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ipBlacklist, ipBlacklist_);
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
    };
    CreateApiKeyInput() = default ;
    CreateApiKeyInput(const CreateApiKeyInput &) = default ;
    CreateApiKeyInput(CreateApiKeyInput &&) = default ;
    CreateApiKeyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiKeyInput() = default ;
    CreateApiKeyInput& operator=(const CreateApiKeyInput &) = default ;
    CreateApiKeyInput& operator=(CreateApiKeyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyName_ == nullptr
        && this->expireTime_ == nullptr && this->ipBlacklist_ == nullptr && this->ipWhitelist_ == nullptr && this->teamID_ == nullptr; };
    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline CreateApiKeyInput& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateApiKeyInput& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ipBlacklist Field Functions 
    bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
    void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
    inline const vector<IPConfig> & getIpBlacklist() const { DARABONBA_PTR_GET_CONST(ipBlacklist_, vector<IPConfig>) };
    inline vector<IPConfig> getIpBlacklist() { DARABONBA_PTR_GET(ipBlacklist_, vector<IPConfig>) };
    inline CreateApiKeyInput& setIpBlacklist(const vector<IPConfig> & ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };
    inline CreateApiKeyInput& setIpBlacklist(vector<IPConfig> && ipBlacklist) { DARABONBA_PTR_SET_RVALUE(ipBlacklist_, ipBlacklist) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline const vector<IPConfig> & getIpWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<IPConfig>) };
    inline vector<IPConfig> getIpWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<IPConfig>) };
    inline CreateApiKeyInput& setIpWhitelist(const vector<IPConfig> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
    inline CreateApiKeyInput& setIpWhitelist(vector<IPConfig> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline CreateApiKeyInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


  protected:
    // The API key name.
    shared_ptr<string> apiKeyName_ {};
    // The expiration time.
    shared_ptr<string> expireTime_ {};
    shared_ptr<vector<IPConfig>> ipBlacklist_ {};
    shared_ptr<vector<IPConfig>> ipWhitelist_ {};
    // The unique identifier of the team.
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
