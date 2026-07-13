// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class ListWorkersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(Group, groupShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Mcp, mcp_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelProvider, modelProvider_);
      DARABONBA_PTR_TO_JSON(NameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Template, templateShrink_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(Group, groupShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Mcp, mcp_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelProvider, modelProvider_);
      DARABONBA_PTR_FROM_JSON(NameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Template, templateShrink_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    ListWorkersShrinkRequest() = default ;
    ListWorkersShrinkRequest(const ListWorkersShrinkRequest &) = default ;
    ListWorkersShrinkRequest(ListWorkersShrinkRequest &&) = default ;
    ListWorkersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkersShrinkRequest() = default ;
    ListWorkersShrinkRequest& operator=(const ListWorkersShrinkRequest &) = default ;
    ListWorkersShrinkRequest& operator=(ListWorkersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentType_ == nullptr
        && this->credential_ == nullptr && this->groupShrink_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->mcp_ == nullptr
        && this->modelName_ == nullptr && this->modelProvider_ == nullptr && this->nameLike_ == nullptr && this->nextToken_ == nullptr && this->templateShrink_ == nullptr
        && this->versionCode_ == nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline ListWorkersShrinkRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline string getCredential() const { DARABONBA_PTR_GET_DEFAULT(credential_, "") };
    inline ListWorkersShrinkRequest& setCredential(string credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };


    // groupShrink Field Functions 
    bool hasGroupShrink() const { return this->groupShrink_ != nullptr;};
    void deleteGroupShrink() { this->groupShrink_ = nullptr;};
    inline string getGroupShrink() const { DARABONBA_PTR_GET_DEFAULT(groupShrink_, "") };
    inline ListWorkersShrinkRequest& setGroupShrink(string groupShrink) { DARABONBA_PTR_SET_VALUE(groupShrink_, groupShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListWorkersShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkersShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mcp Field Functions 
    bool hasMcp() const { return this->mcp_ != nullptr;};
    void deleteMcp() { this->mcp_ = nullptr;};
    inline string getMcp() const { DARABONBA_PTR_GET_DEFAULT(mcp_, "") };
    inline ListWorkersShrinkRequest& setMcp(string mcp) { DARABONBA_PTR_SET_VALUE(mcp_, mcp) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListWorkersShrinkRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelProvider Field Functions 
    bool hasModelProvider() const { return this->modelProvider_ != nullptr;};
    void deleteModelProvider() { this->modelProvider_ = nullptr;};
    inline string getModelProvider() const { DARABONBA_PTR_GET_DEFAULT(modelProvider_, "") };
    inline ListWorkersShrinkRequest& setModelProvider(string modelProvider) { DARABONBA_PTR_SET_VALUE(modelProvider_, modelProvider) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListWorkersShrinkRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkersShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // templateShrink Field Functions 
    bool hasTemplateShrink() const { return this->templateShrink_ != nullptr;};
    void deleteTemplateShrink() { this->templateShrink_ = nullptr;};
    inline string getTemplateShrink() const { DARABONBA_PTR_GET_DEFAULT(templateShrink_, "") };
    inline ListWorkersShrinkRequest& setTemplateShrink(string templateShrink) { DARABONBA_PTR_SET_VALUE(templateShrink_, templateShrink) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline ListWorkersShrinkRequest& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    shared_ptr<string> agentType_ {};
    shared_ptr<string> credential_ {};
    shared_ptr<string> groupShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> mcp_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> modelProvider_ {};
    shared_ptr<string> nameLike_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> templateShrink_ {};
    shared_ptr<string> versionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
