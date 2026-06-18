// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
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
  class UpdateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    UpdateAgentRequest() = default ;
    UpdateAgentRequest(const UpdateAgentRequest &) = default ;
    UpdateAgentRequest(UpdateAgentRequest &&) = default ;
    UpdateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentRequest() = default ;
    UpdateAgentRequest& operator=(const UpdateAgentRequest &) = default ;
    UpdateAgentRequest& operator=(UpdateAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->clientToken_ == nullptr && this->displayName_ == nullptr && this->instanceId_ == nullptr && this->skillGroupId_ == nullptr && this->skillGroupIdList_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline UpdateAgentRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAgentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateAgentRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAgentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline const vector<int64_t> & getSkillGroupId() const { DARABONBA_PTR_GET_CONST(skillGroupId_, vector<int64_t>) };
    inline vector<int64_t> getSkillGroupId() { DARABONBA_PTR_GET(skillGroupId_, vector<int64_t>) };
    inline UpdateAgentRequest& setSkillGroupId(const vector<int64_t> & skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };
    inline UpdateAgentRequest& setSkillGroupId(vector<int64_t> && skillGroupId) { DARABONBA_PTR_SET_RVALUE(skillGroupId_, skillGroupId) };


    // skillGroupIdList Field Functions 
    bool hasSkillGroupIdList() const { return this->skillGroupIdList_ != nullptr;};
    void deleteSkillGroupIdList() { this->skillGroupIdList_ = nullptr;};
    inline const vector<int64_t> & getSkillGroupIdList() const { DARABONBA_PTR_GET_CONST(skillGroupIdList_, vector<int64_t>) };
    inline vector<int64_t> getSkillGroupIdList() { DARABONBA_PTR_GET(skillGroupIdList_, vector<int64_t>) };
    inline UpdateAgentRequest& setSkillGroupIdList(const vector<int64_t> & skillGroupIdList) { DARABONBA_PTR_SET_VALUE(skillGroupIdList_, skillGroupIdList) };
    inline UpdateAgentRequest& setSkillGroupIdList(vector<int64_t> && skillGroupIdList) { DARABONBA_PTR_SET_RVALUE(skillGroupIdList_, skillGroupIdList) };


  protected:
    // The agent account name, which is the phone number or mailbox entered during account registration. It is unique within the instance.  
    // > Update is not supported.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // Unique ID for the customer request. Used for idempotency validation. You can generate it using UUID.
    shared_ptr<string> clientToken_ {};
    // Agent\\"s display name.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // AICCS instance ID.  
    // You can obtain it from **Instance Management** in the left-side navigation pane of the [Artificial Intelligence Cloud Call Service console](https://aiccs.console.aliyun.com/overview).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Skill groups to which the agent belongs.
    shared_ptr<vector<int64_t>> skillGroupId_ {};
    // List of skill groups to which the agent belongs.
    shared_ptr<vector<int64_t>> skillGroupIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
