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
      DARABONBA_PTR_TO_JSON(AgentImOnlineStatus, agentImOnlineStatus_);
      DARABONBA_PTR_TO_JSON(AgentInstanceStatuses, agentInstanceStatuses_);
      DARABONBA_PTR_TO_JSON(AgentInstanceVersions, agentInstanceVersions_);
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentPlatformList, agentPlatformList_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(AgentProviderList, agentProviderList_);
      DARABONBA_PTR_TO_JSON(AgentTemplateIds, agentTemplateIds_);
      DARABONBA_PTR_TO_JSON(AuthUsers, authUsers_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ChannelConfigure, channelConfigure_);
      DARABONBA_PTR_TO_JSON(DeploymentSource, deploymentSource_);
      DARABONBA_PTR_TO_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_TO_JSON(DesktopNames, desktopNames_);
      DARABONBA_PTR_TO_JSON(DesktopStatuses, desktopStatuses_);
      DARABONBA_PTR_TO_JSON(HasAuthUser, hasAuthUser_);
      DARABONBA_PTR_TO_JSON(HasRisk, hasRisk_);
      DARABONBA_PTR_TO_JSON(IncludeRiskInfo, includeRiskInfo_);
      DARABONBA_PTR_TO_JSON(ManagementStatus, managementStatus_);
      DARABONBA_PTR_TO_JSON(ModelConfigure, modelConfigure_);
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListDesktopAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentImOnlineStatus, agentImOnlineStatus_);
      DARABONBA_PTR_FROM_JSON(AgentInstanceStatuses, agentInstanceStatuses_);
      DARABONBA_PTR_FROM_JSON(AgentInstanceVersions, agentInstanceVersions_);
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentPlatformList, agentPlatformList_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(AgentProviderList, agentProviderList_);
      DARABONBA_PTR_FROM_JSON(AgentTemplateIds, agentTemplateIds_);
      DARABONBA_PTR_FROM_JSON(AuthUsers, authUsers_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ChannelConfigure, channelConfigure_);
      DARABONBA_PTR_FROM_JSON(DeploymentSource, deploymentSource_);
      DARABONBA_PTR_FROM_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_FROM_JSON(DesktopNames, desktopNames_);
      DARABONBA_PTR_FROM_JSON(DesktopStatuses, desktopStatuses_);
      DARABONBA_PTR_FROM_JSON(HasAuthUser, hasAuthUser_);
      DARABONBA_PTR_FROM_JSON(HasRisk, hasRisk_);
      DARABONBA_PTR_FROM_JSON(IncludeRiskInfo, includeRiskInfo_);
      DARABONBA_PTR_FROM_JSON(ManagementStatus, managementStatus_);
      DARABONBA_PTR_FROM_JSON(ModelConfigure, modelConfigure_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
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
    virtual bool empty() const override { return this->agentImOnlineStatus_ == nullptr
        && this->agentInstanceStatuses_ == nullptr && this->agentInstanceVersions_ == nullptr && this->agentPlatform_ == nullptr && this->agentPlatformList_ == nullptr && this->agentProvider_ == nullptr
        && this->agentProviderList_ == nullptr && this->agentTemplateIds_ == nullptr && this->authUsers_ == nullptr && this->bizRegionId_ == nullptr && this->bizType_ == nullptr
        && this->channelConfigure_ == nullptr && this->deploymentSource_ == nullptr && this->desktopIds_ == nullptr && this->desktopNames_ == nullptr && this->desktopStatuses_ == nullptr
        && this->hasAuthUser_ == nullptr && this->hasRisk_ == nullptr && this->includeRiskInfo_ == nullptr && this->managementStatus_ == nullptr && this->modelConfigure_ == nullptr
        && this->modelTemplateId_ == nullptr && this->officeSiteId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceIds_ == nullptr; };
    // agentImOnlineStatus Field Functions 
    bool hasAgentImOnlineStatus() const { return this->agentImOnlineStatus_ != nullptr;};
    void deleteAgentImOnlineStatus() { this->agentImOnlineStatus_ = nullptr;};
    inline string getAgentImOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(agentImOnlineStatus_, "") };
    inline ListDesktopAgentRuntimeRequest& setAgentImOnlineStatus(string agentImOnlineStatus) { DARABONBA_PTR_SET_VALUE(agentImOnlineStatus_, agentImOnlineStatus) };


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


    // agentPlatformList Field Functions 
    bool hasAgentPlatformList() const { return this->agentPlatformList_ != nullptr;};
    void deleteAgentPlatformList() { this->agentPlatformList_ = nullptr;};
    inline const vector<string> & getAgentPlatformList() const { DARABONBA_PTR_GET_CONST(agentPlatformList_, vector<string>) };
    inline vector<string> getAgentPlatformList() { DARABONBA_PTR_GET(agentPlatformList_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setAgentPlatformList(const vector<string> & agentPlatformList) { DARABONBA_PTR_SET_VALUE(agentPlatformList_, agentPlatformList) };
    inline ListDesktopAgentRuntimeRequest& setAgentPlatformList(vector<string> && agentPlatformList) { DARABONBA_PTR_SET_RVALUE(agentPlatformList_, agentPlatformList) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline ListDesktopAgentRuntimeRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // agentProviderList Field Functions 
    bool hasAgentProviderList() const { return this->agentProviderList_ != nullptr;};
    void deleteAgentProviderList() { this->agentProviderList_ = nullptr;};
    inline const vector<string> & getAgentProviderList() const { DARABONBA_PTR_GET_CONST(agentProviderList_, vector<string>) };
    inline vector<string> getAgentProviderList() { DARABONBA_PTR_GET(agentProviderList_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setAgentProviderList(const vector<string> & agentProviderList) { DARABONBA_PTR_SET_VALUE(agentProviderList_, agentProviderList) };
    inline ListDesktopAgentRuntimeRequest& setAgentProviderList(vector<string> && agentProviderList) { DARABONBA_PTR_SET_RVALUE(agentProviderList_, agentProviderList) };


    // agentTemplateIds Field Functions 
    bool hasAgentTemplateIds() const { return this->agentTemplateIds_ != nullptr;};
    void deleteAgentTemplateIds() { this->agentTemplateIds_ = nullptr;};
    inline const vector<string> & getAgentTemplateIds() const { DARABONBA_PTR_GET_CONST(agentTemplateIds_, vector<string>) };
    inline vector<string> getAgentTemplateIds() { DARABONBA_PTR_GET(agentTemplateIds_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setAgentTemplateIds(const vector<string> & agentTemplateIds) { DARABONBA_PTR_SET_VALUE(agentTemplateIds_, agentTemplateIds) };
    inline ListDesktopAgentRuntimeRequest& setAgentTemplateIds(vector<string> && agentTemplateIds) { DARABONBA_PTR_SET_RVALUE(agentTemplateIds_, agentTemplateIds) };


    // authUsers Field Functions 
    bool hasAuthUsers() const { return this->authUsers_ != nullptr;};
    void deleteAuthUsers() { this->authUsers_ = nullptr;};
    inline const vector<string> & getAuthUsers() const { DARABONBA_PTR_GET_CONST(authUsers_, vector<string>) };
    inline vector<string> getAuthUsers() { DARABONBA_PTR_GET(authUsers_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setAuthUsers(const vector<string> & authUsers) { DARABONBA_PTR_SET_VALUE(authUsers_, authUsers) };
    inline ListDesktopAgentRuntimeRequest& setAuthUsers(vector<string> && authUsers) { DARABONBA_PTR_SET_RVALUE(authUsers_, authUsers) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ListDesktopAgentRuntimeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


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


    // managementStatus Field Functions 
    bool hasManagementStatus() const { return this->managementStatus_ != nullptr;};
    void deleteManagementStatus() { this->managementStatus_ = nullptr;};
    inline string getManagementStatus() const { DARABONBA_PTR_GET_DEFAULT(managementStatus_, "") };
    inline ListDesktopAgentRuntimeRequest& setManagementStatus(string managementStatus) { DARABONBA_PTR_SET_VALUE(managementStatus_, managementStatus) };


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


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListDesktopAgentRuntimeRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


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


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline ListDesktopAgentRuntimeRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline ListDesktopAgentRuntimeRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


  protected:
    // The agent IM online status filter.
    shared_ptr<string> agentImOnlineStatus_ {};
    // The list of agent instance statuses.
    shared_ptr<vector<string>> agentInstanceStatuses_ {};
    // The list of agent instance versions.
    shared_ptr<vector<string>> agentInstanceVersions_ {};
    // The agent platform.
    shared_ptr<string> agentPlatform_ {};
    // The list of agent platforms. If AgentPlatform is also specified, AgentPlatform takes precedence and this list is ignored.
    shared_ptr<vector<string>> agentPlatformList_ {};
    // The agent provider name.
    shared_ptr<string> agentProvider_ {};
    // The list of agent providers. If AgentProvider is also specified, AgentProvider takes precedence and this list is ignored.
    shared_ptr<vector<string>> agentProviderList_ {};
    // The list of agent template IDs. A match occurs only when all valid templates are assigned.
    shared_ptr<vector<string>> agentTemplateIds_ {};
    // The list of authorized users.
    shared_ptr<vector<string>> authUsers_ {};
    // The business region ID.
    shared_ptr<string> bizRegionId_ {};
    // The business type.
    shared_ptr<int32_t> bizType_ {};
    // Specifies whether a third-party channel is configured.
    shared_ptr<bool> channelConfigure_ {};
    // The deployment source.
    shared_ptr<string> deploymentSource_ {};
    // The list of agent runtime IDs.
    shared_ptr<vector<string>> desktopIds_ {};
    // The list of agent runtime names.
    shared_ptr<vector<string>> desktopNames_ {};
    // The list of Cloud Desktop statuses.
    shared_ptr<vector<string>> desktopStatuses_ {};
    // Indicates whether an authorized user exists for authorization.
    shared_ptr<bool> hasAuthUser_ {};
    // Specifies whether a risk exists. This parameter is used to filter Cloud Desktops with or without risks and takes effect only when IncludeRiskInfo is set to true.
    // 
    // Set this parameter to true to return only records with risks. Set this parameter to false to return only records without risks. If you do not specify this parameter, no filtering is applied.
    shared_ptr<bool> hasRisk_ {};
    // Specifies whether to query and return risk information. Default value: false. If set to true, the response includes the RiskInfo field, and the HasRisk filter takes effect.
    shared_ptr<bool> includeRiskInfo_ {};
    // The management status filter, such as Hibernated.
    shared_ptr<string> managementStatus_ {};
    // Specifies whether a model is configured.
    shared_ptr<bool> modelConfigure_ {};
    // The model group ID.
    shared_ptr<string> modelTemplateId_ {};
    // The office network ID.
    shared_ptr<string> officeSiteId_ {};
    // The page number. Starts from 1. Values 0 and 1 return the same result.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The list of resource IDs (underlying actual resource IDs).
    shared_ptr<vector<string>> resourceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
