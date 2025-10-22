// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
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
  class CreateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    CreateAgentRequest() = default ;
    CreateAgentRequest(const CreateAgentRequest &) = default ;
    CreateAgentRequest(CreateAgentRequest &&) = default ;
    CreateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRequest() = default ;
    CreateAgentRequest& operator=(const CreateAgentRequest &) = default ;
    CreateAgentRequest& operator=(CreateAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->clientToken_ == nullptr && return this->displayName_ == nullptr && return this->instanceId_ == nullptr && return this->skillGroupId_ == nullptr && return this->skillGroupIdList_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateAgentRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAgentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateAgentRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAgentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline const vector<int64_t> & skillGroupId() const { DARABONBA_PTR_GET_CONST(skillGroupId_, vector<int64_t>) };
    inline vector<int64_t> skillGroupId() { DARABONBA_PTR_GET(skillGroupId_, vector<int64_t>) };
    inline CreateAgentRequest& setSkillGroupId(const vector<int64_t> & skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };
    inline CreateAgentRequest& setSkillGroupId(vector<int64_t> && skillGroupId) { DARABONBA_PTR_SET_RVALUE(skillGroupId_, skillGroupId) };


    // skillGroupIdList Field Functions 
    bool hasSkillGroupIdList() const { return this->skillGroupIdList_ != nullptr;};
    void deleteSkillGroupIdList() { this->skillGroupIdList_ = nullptr;};
    inline const vector<int64_t> & skillGroupIdList() const { DARABONBA_PTR_GET_CONST(skillGroupIdList_, vector<int64_t>) };
    inline vector<int64_t> skillGroupIdList() { DARABONBA_PTR_GET(skillGroupIdList_, vector<int64_t>) };
    inline CreateAgentRequest& setSkillGroupIdList(const vector<int64_t> & skillGroupIdList) { DARABONBA_PTR_SET_VALUE(skillGroupIdList_, skillGroupIdList) };
    inline CreateAgentRequest& setSkillGroupIdList(vector<int64_t> && skillGroupIdList) { DARABONBA_PTR_SET_RVALUE(skillGroupIdList_, skillGroupIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<int64_t>> skillGroupId_ = nullptr;
    std::shared_ptr<vector<int64_t>> skillGroupIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
