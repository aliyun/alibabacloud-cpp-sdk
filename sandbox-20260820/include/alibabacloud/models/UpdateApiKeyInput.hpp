// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIKEYINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIKEYINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IPConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class UpdateApiKeyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiKeyInput& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ipBlacklist, ipBlacklist_);
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(vpcBindings, vpcBindings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiKeyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ipBlacklist, ipBlacklist_);
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(vpcBindings, vpcBindings_);
    };
    UpdateApiKeyInput() = default ;
    UpdateApiKeyInput(const UpdateApiKeyInput &) = default ;
    UpdateApiKeyInput(UpdateApiKeyInput &&) = default ;
    UpdateApiKeyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiKeyInput() = default ;
    UpdateApiKeyInput& operator=(const UpdateApiKeyInput &) = default ;
    UpdateApiKeyInput& operator=(UpdateApiKeyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyName_ == nullptr
        && this->expireTime_ == nullptr && this->ipBlacklist_ == nullptr && this->ipWhitelist_ == nullptr && this->status_ == nullptr && this->vpcBindings_ == nullptr; };
    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline UpdateApiKeyInput& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline UpdateApiKeyInput& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ipBlacklist Field Functions 
    bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
    void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
    inline const vector<IPConfig> & getIpBlacklist() const { DARABONBA_PTR_GET_CONST(ipBlacklist_, vector<IPConfig>) };
    inline vector<IPConfig> getIpBlacklist() { DARABONBA_PTR_GET(ipBlacklist_, vector<IPConfig>) };
    inline UpdateApiKeyInput& setIpBlacklist(const vector<IPConfig> & ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };
    inline UpdateApiKeyInput& setIpBlacklist(vector<IPConfig> && ipBlacklist) { DARABONBA_PTR_SET_RVALUE(ipBlacklist_, ipBlacklist) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline const vector<IPConfig> & getIpWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<IPConfig>) };
    inline vector<IPConfig> getIpWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<IPConfig>) };
    inline UpdateApiKeyInput& setIpWhitelist(const vector<IPConfig> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
    inline UpdateApiKeyInput& setIpWhitelist(vector<IPConfig> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateApiKeyInput& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcBindings Field Functions 
    bool hasVpcBindings() const { return this->vpcBindings_ != nullptr;};
    void deleteVpcBindings() { this->vpcBindings_ = nullptr;};
    inline const vector<string> & getVpcBindings() const { DARABONBA_PTR_GET_CONST(vpcBindings_, vector<string>) };
    inline vector<string> getVpcBindings() { DARABONBA_PTR_GET(vpcBindings_, vector<string>) };
    inline UpdateApiKeyInput& setVpcBindings(const vector<string> & vpcBindings) { DARABONBA_PTR_SET_VALUE(vpcBindings_, vpcBindings) };
    inline UpdateApiKeyInput& setVpcBindings(vector<string> && vpcBindings) { DARABONBA_PTR_SET_RVALUE(vpcBindings_, vpcBindings) };


  protected:
    // The new name of the API key. The name can be up to 128 characters in length and can contain only letters, digits, spaces, hyphens (-), underscores (_), and periods (.).
    shared_ptr<string> apiKeyName_ {};
    // The expiration time of the API key in UTC. The time must be in RFC 3339 format. An empty value indicates that the API key never expires.
    shared_ptr<string> expireTime_ {};
    // The IP address blacklist. If you specify this parameter, the existing blacklist is completely overwritten. This parameter is mutually exclusive with ipWhitelist.
    shared_ptr<vector<IPConfig>> ipBlacklist_ {};
    // The IP address whitelist. If you specify this parameter, the existing whitelist is completely overwritten. This parameter is mutually exclusive with ipBlacklist.
    shared_ptr<vector<IPConfig>> ipWhitelist_ {};
    // The new status of the API key. Valid values:
    // - active: Enabled.
    // - inactive: Disabled.
    shared_ptr<string> status_ {};
    // The set of allowed source VPC IDs. This set is updated independently of the IP blacklists and whitelists. If you omit this parameter or set it to null, the original set is retained. A non-empty array completely replaces the original set. An explicit empty array [] purges the VPC restrictions. Updating only this parameter does not affect the IP address lists, and updating the IP address lists does not affect the VPC restrictions. An empty request body {} purges all IP address and VPC source restrictions. You can update this parameter along with other parameters such as the name.
    shared_ptr<vector<string>> vpcBindings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
