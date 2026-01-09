// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHIRDSSOAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETHIRDSSOAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CreateThirdSsoAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateThirdSsoAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateThirdSsoAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
    };
    CreateThirdSsoAgentRequest() = default ;
    CreateThirdSsoAgentRequest(const CreateThirdSsoAgentRequest &) = default ;
    CreateThirdSsoAgentRequest(CreateThirdSsoAgentRequest &&) = default ;
    CreateThirdSsoAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateThirdSsoAgentRequest() = default ;
    CreateThirdSsoAgentRequest& operator=(const CreateThirdSsoAgentRequest &) = default ;
    CreateThirdSsoAgentRequest& operator=(CreateThirdSsoAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->clientId_ == nullptr && this->clientToken_ == nullptr && this->displayName_ == nullptr && this->instanceId_ == nullptr
        && this->roleIds_ == nullptr && this->skillGroupIds_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateThirdSsoAgentRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateThirdSsoAgentRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline CreateThirdSsoAgentRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateThirdSsoAgentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateThirdSsoAgentRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateThirdSsoAgentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline const vector<int64_t> & getRoleIds() const { DARABONBA_PTR_GET_CONST(roleIds_, vector<int64_t>) };
    inline vector<int64_t> getRoleIds() { DARABONBA_PTR_GET(roleIds_, vector<int64_t>) };
    inline CreateThirdSsoAgentRequest& setRoleIds(const vector<int64_t> & roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };
    inline CreateThirdSsoAgentRequest& setRoleIds(vector<int64_t> && roleIds) { DARABONBA_PTR_SET_RVALUE(roleIds_, roleIds) };


    // skillGroupIds Field Functions 
    bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
    void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
    inline const vector<int64_t> & getSkillGroupIds() const { DARABONBA_PTR_GET_CONST(skillGroupIds_, vector<int64_t>) };
    inline vector<int64_t> getSkillGroupIds() { DARABONBA_PTR_GET(skillGroupIds_, vector<int64_t>) };
    inline CreateThirdSsoAgentRequest& setSkillGroupIds(const vector<int64_t> & skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };
    inline CreateThirdSsoAgentRequest& setSkillGroupIds(vector<int64_t> && skillGroupIds) { DARABONBA_PTR_SET_RVALUE(skillGroupIds_, skillGroupIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> displayName_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<int64_t>> roleIds_ {};
    shared_ptr<vector<int64_t>> skillGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
