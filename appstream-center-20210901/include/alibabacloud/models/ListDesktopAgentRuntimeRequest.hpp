// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDESKTOPAGENTRUNTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDESKTOPAGENTRUNTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListDesktopAgentRuntimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDesktopAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentInstanceStatuses, agentInstanceStatuses_);
      DARABONBA_PTR_TO_JSON(AgentInstanceVersions, agentInstanceVersions_);
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(AuthUsers, authUsers_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ChannelConfigure, channelConfigure_);
      DARABONBA_PTR_TO_JSON(DeploymentSource, deploymentSource_);
      DARABONBA_PTR_TO_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_TO_JSON(DesktopNames, desktopNames_);
      DARABONBA_PTR_TO_JSON(DesktopStatuses, desktopStatuses_);
      DARABONBA_PTR_TO_JSON(HasAuthUser, hasAuthUser_);
      DARABONBA_PTR_TO_JSON(HasRisk, hasRisk_);
      DARABONBA_PTR_TO_JSON(IncludeRiskInfo, includeRiskInfo_);
      DARABONBA_PTR_TO_JSON(ModelConfigure, modelConfigure_);
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDesktopAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentInstanceStatuses, agentInstanceStatuses_);
      DARABONBA_PTR_FROM_JSON(AgentInstanceVersions, agentInstanceVersions_);
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(AuthUsers, authUsers_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ChannelConfigure, channelConfigure_);
      DARABONBA_PTR_FROM_JSON(DeploymentSource, deploymentSource_);
      DARABONBA_PTR_FROM_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_FROM_JSON(DesktopNames, desktopNames_);
      DARABONBA_PTR_FROM_JSON(DesktopStatuses, desktopStatuses_);
      DARABONBA_PTR_FROM_JSON(HasAuthUser, hasAuthUser_);
      DARABONBA_PTR_FROM_JSON(HasRisk, hasRisk_);
      DARABONBA_PTR_FROM_JSON(IncludeRiskInfo, includeRiskInfo_);
      DARABONBA_PTR_FROM_JSON(ModelConfigure, modelConfigure_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListDesktopAgentRuntimeRequest() = default ;
    ListDesktopAgentRuntimeRequest(const ListDesktopAgentRuntimeRequest &) = default ;
    ListDesktopAgentRuntimeRequest(ListDesktopAgentRuntimeRequest &&) = default ;
    ListDesktopAgentRuntimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDesktopAgentRuntimeRequest() = default ;
    ListDesktopAgentRuntimeRequest& operator=(const ListDesktopAgentRuntimeRequest &) = default ;
    ListDesktopAgentRuntimeRequest& operator=(ListDesktopAgentRuntimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentInstanceStatuses_ == nullptr
        && this->agentInstanceVersions_ == nullptr && this->agentPlatform_ == nullptr && this->agentProvider_ == nullptr && this->authUsers_ == nullptr && this->bizType_ == nullptr
        && this->channelConfigure_ == nullptr && this->deploymentSource_ == nullptr && this->desktopIds_ == nullptr && this->desktopNames_ == nullptr && this->desktopStatuses_ == nullptr
        && this->hasAuthUser_ == nullptr && this->hasRisk_ == nullptr && this->includeRiskInfo_ == nullptr && this->modelConfigure_ == nullptr && this->modelTemplateId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr; };
    // agentInstanceStatuses Field Functions 
    bool hasAgentInstanceStatuses() const { return this->agentInstanceStatuses_ != nullptr;};
    void deleteAgentInstanceStatuses() { this->agentInstanceStatuses_ = nullptr;};
    inline const vector<string> & getAgentInstanceStatuses() const { DARABONBA_PTR_GET_CONST(agentInstanceStatuses_, vector<string>) };
    inline vector<string> getAgentInstanceStatuses() { DARABONBA_PTR_GET(agentInstanceStatuses_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setAgentInstanceStatuses(const vector<string> & agentInstanceStatuses) { DARABONBA_PTR_SET_VALUE(agentInstanceStatuses_, agentInstanceStatuses) };
    inline ListDesktopAgentRuntimeRequest& setAgentInstanceStatuses(vector<string> && agentInstanceStatuses) { DARABONBA_PTR_SET_RVALUE(agentInstanceStatuses_, agentInstanceStatuses) };


    // agentInstanceVersions Field Functions 
    bool hasAgentInstanceVersions() const { return this->agentInstanceVersions_ != nullptr;};
    void deleteAgentInstanceVersions() { this->agentInstanceVersions_ = nullptr;};
    inline const vector<string> & getAgentInstanceVersions() const { DARABONBA_PTR_GET_CONST(agentInstanceVersions_, vector<string>) };
    inline vector<string> getAgentInstanceVersions() { DARABONBA_PTR_GET(agentInstanceVersions_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setAgentInstanceVersions(const vector<string> & agentInstanceVersions) { DARABONBA_PTR_SET_VALUE(agentInstanceVersions_, agentInstanceVersions) };
    inline ListDesktopAgentRuntimeRequest& setAgentInstanceVersions(vector<string> && agentInstanceVersions) { DARABONBA_PTR_SET_RVALUE(agentInstanceVersions_, agentInstanceVersions) };


    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline ListDesktopAgentRuntimeRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline ListDesktopAgentRuntimeRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // authUsers Field Functions 
    bool hasAuthUsers() const { return this->authUsers_ != nullptr;};
    void deleteAuthUsers() { this->authUsers_ = nullptr;};
    inline const vector<string> & getAuthUsers() const { DARABONBA_PTR_GET_CONST(authUsers_, vector<string>) };
    inline vector<string> getAuthUsers() { DARABONBA_PTR_GET(authUsers_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setAuthUsers(const vector<string> & authUsers) { DARABONBA_PTR_SET_VALUE(authUsers_, authUsers) };
    inline ListDesktopAgentRuntimeRequest& setAuthUsers(vector<string> && authUsers) { DARABONBA_PTR_SET_RVALUE(authUsers_, authUsers) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListDesktopAgentRuntimeRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // channelConfigure Field Functions 
    bool hasChannelConfigure() const { return this->channelConfigure_ != nullptr;};
    void deleteChannelConfigure() { this->channelConfigure_ = nullptr;};
    inline bool getChannelConfigure() const { DARABONBA_PTR_GET_DEFAULT(channelConfigure_, false) };
    inline ListDesktopAgentRuntimeRequest& setChannelConfigure(bool channelConfigure) { DARABONBA_PTR_SET_VALUE(channelConfigure_, channelConfigure) };


    // deploymentSource Field Functions 
    bool hasDeploymentSource() const { return this->deploymentSource_ != nullptr;};
    void deleteDeploymentSource() { this->deploymentSource_ = nullptr;};
    inline string getDeploymentSource() const { DARABONBA_PTR_GET_DEFAULT(deploymentSource_, "") };
    inline ListDesktopAgentRuntimeRequest& setDeploymentSource(string deploymentSource) { DARABONBA_PTR_SET_VALUE(deploymentSource_, deploymentSource) };


    // desktopIds Field Functions 
    bool hasDesktopIds() const { return this->desktopIds_ != nullptr;};
    void deleteDesktopIds() { this->desktopIds_ = nullptr;};
    inline const vector<string> & getDesktopIds() const { DARABONBA_PTR_GET_CONST(desktopIds_, vector<string>) };
    inline vector<string> getDesktopIds() { DARABONBA_PTR_GET(desktopIds_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setDesktopIds(const vector<string> & desktopIds) { DARABONBA_PTR_SET_VALUE(desktopIds_, desktopIds) };
    inline ListDesktopAgentRuntimeRequest& setDesktopIds(vector<string> && desktopIds) { DARABONBA_PTR_SET_RVALUE(desktopIds_, desktopIds) };


    // desktopNames Field Functions 
    bool hasDesktopNames() const { return this->desktopNames_ != nullptr;};
    void deleteDesktopNames() { this->desktopNames_ = nullptr;};
    inline const vector<string> & getDesktopNames() const { DARABONBA_PTR_GET_CONST(desktopNames_, vector<string>) };
    inline vector<string> getDesktopNames() { DARABONBA_PTR_GET(desktopNames_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setDesktopNames(const vector<string> & desktopNames) { DARABONBA_PTR_SET_VALUE(desktopNames_, desktopNames) };
    inline ListDesktopAgentRuntimeRequest& setDesktopNames(vector<string> && desktopNames) { DARABONBA_PTR_SET_RVALUE(desktopNames_, desktopNames) };


    // desktopStatuses Field Functions 
    bool hasDesktopStatuses() const { return this->desktopStatuses_ != nullptr;};
    void deleteDesktopStatuses() { this->desktopStatuses_ = nullptr;};
    inline const vector<string> & getDesktopStatuses() const { DARABONBA_PTR_GET_CONST(desktopStatuses_, vector<string>) };
    inline vector<string> getDesktopStatuses() { DARABONBA_PTR_GET(desktopStatuses_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setDesktopStatuses(const vector<string> & desktopStatuses) { DARABONBA_PTR_SET_VALUE(desktopStatuses_, desktopStatuses) };
    inline ListDesktopAgentRuntimeRequest& setDesktopStatuses(vector<string> && desktopStatuses) { DARABONBA_PTR_SET_RVALUE(desktopStatuses_, desktopStatuses) };


    // hasAuthUser Field Functions 
    bool hasHasAuthUser() const { return this->hasAuthUser_ != nullptr;};
    void deleteHasAuthUser() { this->hasAuthUser_ = nullptr;};
    inline bool getHasAuthUser() const { DARABONBA_PTR_GET_DEFAULT(hasAuthUser_, false) };
    inline ListDesktopAgentRuntimeRequest& setHasAuthUser(bool hasAuthUser) { DARABONBA_PTR_SET_VALUE(hasAuthUser_, hasAuthUser) };


    // hasRisk Field Functions 
    bool hasHasRisk() const { return this->hasRisk_ != nullptr;};
    void deleteHasRisk() { this->hasRisk_ = nullptr;};
    inline bool getHasRisk() const { DARABONBA_PTR_GET_DEFAULT(hasRisk_, false) };
    inline ListDesktopAgentRuntimeRequest& setHasRisk(bool hasRisk) { DARABONBA_PTR_SET_VALUE(hasRisk_, hasRisk) };


    // includeRiskInfo Field Functions 
    bool hasIncludeRiskInfo() const { return this->includeRiskInfo_ != nullptr;};
    void deleteIncludeRiskInfo() { this->includeRiskInfo_ = nullptr;};
    inline bool getIncludeRiskInfo() const { DARABONBA_PTR_GET_DEFAULT(includeRiskInfo_, false) };
    inline ListDesktopAgentRuntimeRequest& setIncludeRiskInfo(bool includeRiskInfo) { DARABONBA_PTR_SET_VALUE(includeRiskInfo_, includeRiskInfo) };


    // modelConfigure Field Functions 
    bool hasModelConfigure() const { return this->modelConfigure_ != nullptr;};
    void deleteModelConfigure() { this->modelConfigure_ = nullptr;};
    inline bool getModelConfigure() const { DARABONBA_PTR_GET_DEFAULT(modelConfigure_, false) };
    inline ListDesktopAgentRuntimeRequest& setModelConfigure(bool modelConfigure) { DARABONBA_PTR_SET_VALUE(modelConfigure_, modelConfigure) };


    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline ListDesktopAgentRuntimeRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDesktopAgentRuntimeRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDesktopAgentRuntimeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListDesktopAgentRuntimeRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    shared_ptr<vector<string>> agentInstanceStatuses_ {};
    shared_ptr<vector<string>> agentInstanceVersions_ {};
    shared_ptr<string> agentPlatform_ {};
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    shared_ptr<vector<string>> authUsers_ {};
    shared_ptr<int32_t> bizType_ {};
    shared_ptr<bool> channelConfigure_ {};
    shared_ptr<string> deploymentSource_ {};
    shared_ptr<vector<string>> desktopIds_ {};
    shared_ptr<vector<string>> desktopNames_ {};
    shared_ptr<vector<string>> desktopStatuses_ {};
    shared_ptr<bool> hasAuthUser_ {};
    shared_ptr<bool> hasRisk_ {};
    shared_ptr<bool> includeRiskInfo_ {};
    shared_ptr<bool> modelConfigure_ {};
    shared_ptr<string> modelTemplateId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
