// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDESKTOPAGENTRUNTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDESKTOPAGENTRUNTIMERESPONSEBODY_HPP_
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
  class ListDesktopAgentRuntimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDesktopAgentRuntimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDesktopAgentRuntimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDesktopAgentRuntimeResponseBody() = default ;
    ListDesktopAgentRuntimeResponseBody(const ListDesktopAgentRuntimeResponseBody &) = default ;
    ListDesktopAgentRuntimeResponseBody(ListDesktopAgentRuntimeResponseBody &&) = default ;
    ListDesktopAgentRuntimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDesktopAgentRuntimeResponseBody() = default ;
    ListDesktopAgentRuntimeResponseBody& operator=(const ListDesktopAgentRuntimeResponseBody &) = default ;
    ListDesktopAgentRuntimeResponseBody& operator=(ListDesktopAgentRuntimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentImInfo, agentImInfo_);
        DARABONBA_PTR_TO_JSON(AgentInstanceInfoList, agentInstanceInfoList_);
        DARABONBA_PTR_TO_JSON(AuthUsers, authUsers_);
        DARABONBA_PTR_TO_JSON(ChannelConfigure, channelConfigure_);
        DARABONBA_PTR_TO_JSON(ChannelConfiguredList, channelConfiguredList_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_TO_JSON(HasAuthUser, hasAuthUser_);
        DARABONBA_PTR_TO_JSON(ModelConfigure, modelConfigure_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(RiskInfo, riskInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentImInfo, agentImInfo_);
        DARABONBA_PTR_FROM_JSON(AgentInstanceInfoList, agentInstanceInfoList_);
        DARABONBA_PTR_FROM_JSON(AuthUsers, authUsers_);
        DARABONBA_PTR_FROM_JSON(ChannelConfigure, channelConfigure_);
        DARABONBA_PTR_FROM_JSON(ChannelConfiguredList, channelConfiguredList_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_FROM_JSON(HasAuthUser, hasAuthUser_);
        DARABONBA_PTR_FROM_JSON(ModelConfigure, modelConfigure_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(RiskInfo, riskInfo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RiskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AgentUninstalled, agentUninstalled_);
          DARABONBA_PTR_TO_JSON(ChannelModified, channelModified_);
          DARABONBA_PTR_TO_JSON(ModelModified, modelModified_);
        };
        friend void from_json(const Darabonba::Json& j, RiskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentUninstalled, agentUninstalled_);
          DARABONBA_PTR_FROM_JSON(ChannelModified, channelModified_);
          DARABONBA_PTR_FROM_JSON(ModelModified, modelModified_);
        };
        RiskInfo() = default ;
        RiskInfo(const RiskInfo &) = default ;
        RiskInfo(RiskInfo &&) = default ;
        RiskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskInfo() = default ;
        RiskInfo& operator=(const RiskInfo &) = default ;
        RiskInfo& operator=(RiskInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentUninstalled_ == nullptr
        && this->channelModified_ == nullptr && this->modelModified_ == nullptr; };
        // agentUninstalled Field Functions 
        bool hasAgentUninstalled() const { return this->agentUninstalled_ != nullptr;};
        void deleteAgentUninstalled() { this->agentUninstalled_ = nullptr;};
        inline bool getAgentUninstalled() const { DARABONBA_PTR_GET_DEFAULT(agentUninstalled_, false) };
        inline RiskInfo& setAgentUninstalled(bool agentUninstalled) { DARABONBA_PTR_SET_VALUE(agentUninstalled_, agentUninstalled) };


        // channelModified Field Functions 
        bool hasChannelModified() const { return this->channelModified_ != nullptr;};
        void deleteChannelModified() { this->channelModified_ = nullptr;};
        inline bool getChannelModified() const { DARABONBA_PTR_GET_DEFAULT(channelModified_, false) };
        inline RiskInfo& setChannelModified(bool channelModified) { DARABONBA_PTR_SET_VALUE(channelModified_, channelModified) };


        // modelModified Field Functions 
        bool hasModelModified() const { return this->modelModified_ != nullptr;};
        void deleteModelModified() { this->modelModified_ = nullptr;};
        inline bool getModelModified() const { DARABONBA_PTR_GET_DEFAULT(modelModified_, false) };
        inline RiskInfo& setModelModified(bool modelModified) { DARABONBA_PTR_SET_VALUE(modelModified_, modelModified) };


      protected:
        shared_ptr<bool> agentUninstalled_ {};
        shared_ptr<bool> channelModified_ {};
        shared_ptr<bool> modelModified_ {};
      };

      class ResourceGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceGroup& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        };
        ResourceGroup() = default ;
        ResourceGroup(const ResourceGroup &) = default ;
        ResourceGroup(ResourceGroup &&) = default ;
        ResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceGroup() = default ;
        ResourceGroup& operator=(const ResourceGroup &) = default ;
        ResourceGroup& operator=(ResourceGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceGroupId_ == nullptr
        && this->resourceGroupName_ == nullptr; };
        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ResourceGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceGroupName Field Functions 
        bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
        void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
        inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
        inline ResourceGroup& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      protected:
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> resourceGroupName_ {};
      };

      class AgentInstanceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentInstanceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(AgentInstanceStatus, agentInstanceStatus_);
          DARABONBA_PTR_TO_JSON(AgentInstanceVersion, agentInstanceVersion_);
          DARABONBA_PTR_TO_JSON(ChannelConfigure, channelConfigure_);
          DARABONBA_PTR_TO_JSON(ChannelConfiguredList, channelConfiguredList_);
          DARABONBA_PTR_TO_JSON(DeploymentSource, deploymentSource_);
          DARABONBA_PTR_TO_JSON(ModelConfigure, modelConfigure_);
          DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
        };
        friend void from_json(const Darabonba::Json& j, AgentInstanceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentInstanceStatus, agentInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(AgentInstanceVersion, agentInstanceVersion_);
          DARABONBA_PTR_FROM_JSON(ChannelConfigure, channelConfigure_);
          DARABONBA_PTR_FROM_JSON(ChannelConfiguredList, channelConfiguredList_);
          DARABONBA_PTR_FROM_JSON(DeploymentSource, deploymentSource_);
          DARABONBA_PTR_FROM_JSON(ModelConfigure, modelConfigure_);
          DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
        };
        AgentInstanceInfoList() = default ;
        AgentInstanceInfoList(const AgentInstanceInfoList &) = default ;
        AgentInstanceInfoList(AgentInstanceInfoList &&) = default ;
        AgentInstanceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentInstanceInfoList() = default ;
        AgentInstanceInfoList& operator=(const AgentInstanceInfoList &) = default ;
        AgentInstanceInfoList& operator=(AgentInstanceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentInstanceStatus_ == nullptr
        && this->agentInstanceVersion_ == nullptr && this->channelConfigure_ == nullptr && this->channelConfiguredList_ == nullptr && this->deploymentSource_ == nullptr && this->modelConfigure_ == nullptr
        && this->modelTemplateId_ == nullptr; };
        // agentInstanceStatus Field Functions 
        bool hasAgentInstanceStatus() const { return this->agentInstanceStatus_ != nullptr;};
        void deleteAgentInstanceStatus() { this->agentInstanceStatus_ = nullptr;};
        inline string getAgentInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(agentInstanceStatus_, "") };
        inline AgentInstanceInfoList& setAgentInstanceStatus(string agentInstanceStatus) { DARABONBA_PTR_SET_VALUE(agentInstanceStatus_, agentInstanceStatus) };


        // agentInstanceVersion Field Functions 
        bool hasAgentInstanceVersion() const { return this->agentInstanceVersion_ != nullptr;};
        void deleteAgentInstanceVersion() { this->agentInstanceVersion_ = nullptr;};
        inline string getAgentInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(agentInstanceVersion_, "") };
        inline AgentInstanceInfoList& setAgentInstanceVersion(string agentInstanceVersion) { DARABONBA_PTR_SET_VALUE(agentInstanceVersion_, agentInstanceVersion) };


        // channelConfigure Field Functions 
        bool hasChannelConfigure() const { return this->channelConfigure_ != nullptr;};
        void deleteChannelConfigure() { this->channelConfigure_ = nullptr;};
        inline bool getChannelConfigure() const { DARABONBA_PTR_GET_DEFAULT(channelConfigure_, false) };
        inline AgentInstanceInfoList& setChannelConfigure(bool channelConfigure) { DARABONBA_PTR_SET_VALUE(channelConfigure_, channelConfigure) };


        // channelConfiguredList Field Functions 
        bool hasChannelConfiguredList() const { return this->channelConfiguredList_ != nullptr;};
        void deleteChannelConfiguredList() { this->channelConfiguredList_ = nullptr;};
        inline const vector<string> & getChannelConfiguredList() const { DARABONBA_PTR_GET_CONST(channelConfiguredList_, vector<string>) };
        inline vector<string> getChannelConfiguredList() { DARABONBA_PTR_GET(channelConfiguredList_, vector<string>) };
        inline AgentInstanceInfoList& setChannelConfiguredList(const vector<string> & channelConfiguredList) { DARABONBA_PTR_SET_VALUE(channelConfiguredList_, channelConfiguredList) };
        inline AgentInstanceInfoList& setChannelConfiguredList(vector<string> && channelConfiguredList) { DARABONBA_PTR_SET_RVALUE(channelConfiguredList_, channelConfiguredList) };


        // deploymentSource Field Functions 
        bool hasDeploymentSource() const { return this->deploymentSource_ != nullptr;};
        void deleteDeploymentSource() { this->deploymentSource_ = nullptr;};
        inline string getDeploymentSource() const { DARABONBA_PTR_GET_DEFAULT(deploymentSource_, "") };
        inline AgentInstanceInfoList& setDeploymentSource(string deploymentSource) { DARABONBA_PTR_SET_VALUE(deploymentSource_, deploymentSource) };


        // modelConfigure Field Functions 
        bool hasModelConfigure() const { return this->modelConfigure_ != nullptr;};
        void deleteModelConfigure() { this->modelConfigure_ = nullptr;};
        inline bool getModelConfigure() const { DARABONBA_PTR_GET_DEFAULT(modelConfigure_, false) };
        inline AgentInstanceInfoList& setModelConfigure(bool modelConfigure) { DARABONBA_PTR_SET_VALUE(modelConfigure_, modelConfigure) };


        // modelTemplateId Field Functions 
        bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
        void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
        inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
        inline AgentInstanceInfoList& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


      protected:
        shared_ptr<string> agentInstanceStatus_ {};
        shared_ptr<string> agentInstanceVersion_ {};
        shared_ptr<bool> channelConfigure_ {};
        shared_ptr<vector<string>> channelConfiguredList_ {};
        shared_ptr<string> deploymentSource_ {};
        shared_ptr<bool> modelConfigure_ {};
        shared_ptr<string> modelTemplateId_ {};
      };

      class AgentImInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentImInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AgentImStatus, agentImStatus_);
          DARABONBA_PTR_TO_JSON(CloudSpaceStatus, cloudSpaceStatus_);
        };
        friend void from_json(const Darabonba::Json& j, AgentImInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentImStatus, agentImStatus_);
          DARABONBA_PTR_FROM_JSON(CloudSpaceStatus, cloudSpaceStatus_);
        };
        AgentImInfo() = default ;
        AgentImInfo(const AgentImInfo &) = default ;
        AgentImInfo(AgentImInfo &&) = default ;
        AgentImInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentImInfo() = default ;
        AgentImInfo& operator=(const AgentImInfo &) = default ;
        AgentImInfo& operator=(AgentImInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentImStatus_ == nullptr
        && this->cloudSpaceStatus_ == nullptr; };
        // agentImStatus Field Functions 
        bool hasAgentImStatus() const { return this->agentImStatus_ != nullptr;};
        void deleteAgentImStatus() { this->agentImStatus_ = nullptr;};
        inline string getAgentImStatus() const { DARABONBA_PTR_GET_DEFAULT(agentImStatus_, "") };
        inline AgentImInfo& setAgentImStatus(string agentImStatus) { DARABONBA_PTR_SET_VALUE(agentImStatus_, agentImStatus) };


        // cloudSpaceStatus Field Functions 
        bool hasCloudSpaceStatus() const { return this->cloudSpaceStatus_ != nullptr;};
        void deleteCloudSpaceStatus() { this->cloudSpaceStatus_ = nullptr;};
        inline string getCloudSpaceStatus() const { DARABONBA_PTR_GET_DEFAULT(cloudSpaceStatus_, "") };
        inline AgentImInfo& setCloudSpaceStatus(string cloudSpaceStatus) { DARABONBA_PTR_SET_VALUE(cloudSpaceStatus_, cloudSpaceStatus) };


      protected:
        shared_ptr<string> agentImStatus_ {};
        shared_ptr<string> cloudSpaceStatus_ {};
      };

      virtual bool empty() const override { return this->agentImInfo_ == nullptr
        && this->agentInstanceInfoList_ == nullptr && this->authUsers_ == nullptr && this->channelConfigure_ == nullptr && this->channelConfiguredList_ == nullptr && this->desktopId_ == nullptr
        && this->desktopName_ == nullptr && this->desktopStatus_ == nullptr && this->hasAuthUser_ == nullptr && this->modelConfigure_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroup_ == nullptr && this->resourceId_ == nullptr && this->riskInfo_ == nullptr; };
      // agentImInfo Field Functions 
      bool hasAgentImInfo() const { return this->agentImInfo_ != nullptr;};
      void deleteAgentImInfo() { this->agentImInfo_ = nullptr;};
      inline const Data::AgentImInfo & getAgentImInfo() const { DARABONBA_PTR_GET_CONST(agentImInfo_, Data::AgentImInfo) };
      inline Data::AgentImInfo getAgentImInfo() { DARABONBA_PTR_GET(agentImInfo_, Data::AgentImInfo) };
      inline Data& setAgentImInfo(const Data::AgentImInfo & agentImInfo) { DARABONBA_PTR_SET_VALUE(agentImInfo_, agentImInfo) };
      inline Data& setAgentImInfo(Data::AgentImInfo && agentImInfo) { DARABONBA_PTR_SET_RVALUE(agentImInfo_, agentImInfo) };


      // agentInstanceInfoList Field Functions 
      bool hasAgentInstanceInfoList() const { return this->agentInstanceInfoList_ != nullptr;};
      void deleteAgentInstanceInfoList() { this->agentInstanceInfoList_ = nullptr;};
      inline const vector<Data::AgentInstanceInfoList> & getAgentInstanceInfoList() const { DARABONBA_PTR_GET_CONST(agentInstanceInfoList_, vector<Data::AgentInstanceInfoList>) };
      inline vector<Data::AgentInstanceInfoList> getAgentInstanceInfoList() { DARABONBA_PTR_GET(agentInstanceInfoList_, vector<Data::AgentInstanceInfoList>) };
      inline Data& setAgentInstanceInfoList(const vector<Data::AgentInstanceInfoList> & agentInstanceInfoList) { DARABONBA_PTR_SET_VALUE(agentInstanceInfoList_, agentInstanceInfoList) };
      inline Data& setAgentInstanceInfoList(vector<Data::AgentInstanceInfoList> && agentInstanceInfoList) { DARABONBA_PTR_SET_RVALUE(agentInstanceInfoList_, agentInstanceInfoList) };


      // authUsers Field Functions 
      bool hasAuthUsers() const { return this->authUsers_ != nullptr;};
      void deleteAuthUsers() { this->authUsers_ = nullptr;};
      inline const vector<string> & getAuthUsers() const { DARABONBA_PTR_GET_CONST(authUsers_, vector<string>) };
      inline vector<string> getAuthUsers() { DARABONBA_PTR_GET(authUsers_, vector<string>) };
      inline Data& setAuthUsers(const vector<string> & authUsers) { DARABONBA_PTR_SET_VALUE(authUsers_, authUsers) };
      inline Data& setAuthUsers(vector<string> && authUsers) { DARABONBA_PTR_SET_RVALUE(authUsers_, authUsers) };


      // channelConfigure Field Functions 
      bool hasChannelConfigure() const { return this->channelConfigure_ != nullptr;};
      void deleteChannelConfigure() { this->channelConfigure_ = nullptr;};
      inline bool getChannelConfigure() const { DARABONBA_PTR_GET_DEFAULT(channelConfigure_, false) };
      inline Data& setChannelConfigure(bool channelConfigure) { DARABONBA_PTR_SET_VALUE(channelConfigure_, channelConfigure) };


      // channelConfiguredList Field Functions 
      bool hasChannelConfiguredList() const { return this->channelConfiguredList_ != nullptr;};
      void deleteChannelConfiguredList() { this->channelConfiguredList_ = nullptr;};
      inline const vector<string> & getChannelConfiguredList() const { DARABONBA_PTR_GET_CONST(channelConfiguredList_, vector<string>) };
      inline vector<string> getChannelConfiguredList() { DARABONBA_PTR_GET(channelConfiguredList_, vector<string>) };
      inline Data& setChannelConfiguredList(const vector<string> & channelConfiguredList) { DARABONBA_PTR_SET_VALUE(channelConfiguredList_, channelConfiguredList) };
      inline Data& setChannelConfiguredList(vector<string> && channelConfiguredList) { DARABONBA_PTR_SET_RVALUE(channelConfiguredList_, channelConfiguredList) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Data& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Data& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline Data& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // hasAuthUser Field Functions 
      bool hasHasAuthUser() const { return this->hasAuthUser_ != nullptr;};
      void deleteHasAuthUser() { this->hasAuthUser_ = nullptr;};
      inline bool getHasAuthUser() const { DARABONBA_PTR_GET_DEFAULT(hasAuthUser_, false) };
      inline Data& setHasAuthUser(bool hasAuthUser) { DARABONBA_PTR_SET_VALUE(hasAuthUser_, hasAuthUser) };


      // modelConfigure Field Functions 
      bool hasModelConfigure() const { return this->modelConfigure_ != nullptr;};
      void deleteModelConfigure() { this->modelConfigure_ = nullptr;};
      inline bool getModelConfigure() const { DARABONBA_PTR_GET_DEFAULT(modelConfigure_, false) };
      inline Data& setModelConfigure(bool modelConfigure) { DARABONBA_PTR_SET_VALUE(modelConfigure_, modelConfigure) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline const Data::ResourceGroup & getResourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, Data::ResourceGroup) };
      inline Data::ResourceGroup getResourceGroup() { DARABONBA_PTR_GET(resourceGroup_, Data::ResourceGroup) };
      inline Data& setResourceGroup(const Data::ResourceGroup & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
      inline Data& setResourceGroup(Data::ResourceGroup && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Data& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // riskInfo Field Functions 
      bool hasRiskInfo() const { return this->riskInfo_ != nullptr;};
      void deleteRiskInfo() { this->riskInfo_ = nullptr;};
      inline const Data::RiskInfo & getRiskInfo() const { DARABONBA_PTR_GET_CONST(riskInfo_, Data::RiskInfo) };
      inline Data::RiskInfo getRiskInfo() { DARABONBA_PTR_GET(riskInfo_, Data::RiskInfo) };
      inline Data& setRiskInfo(const Data::RiskInfo & riskInfo) { DARABONBA_PTR_SET_VALUE(riskInfo_, riskInfo) };
      inline Data& setRiskInfo(Data::RiskInfo && riskInfo) { DARABONBA_PTR_SET_RVALUE(riskInfo_, riskInfo) };


    protected:
      shared_ptr<Data::AgentImInfo> agentImInfo_ {};
      shared_ptr<vector<Data::AgentInstanceInfoList>> agentInstanceInfoList_ {};
      shared_ptr<vector<string>> authUsers_ {};
      shared_ptr<bool> channelConfigure_ {};
      shared_ptr<vector<string>> channelConfiguredList_ {};
      shared_ptr<string> desktopId_ {};
      shared_ptr<string> desktopName_ {};
      shared_ptr<string> desktopStatus_ {};
      shared_ptr<bool> hasAuthUser_ {};
      shared_ptr<bool> modelConfigure_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<Data::ResourceGroup> resourceGroup_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<Data::RiskInfo> riskInfo_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDesktopAgentRuntimeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDesktopAgentRuntimeResponseBody::Data>) };
    inline vector<ListDesktopAgentRuntimeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDesktopAgentRuntimeResponseBody::Data>) };
    inline ListDesktopAgentRuntimeResponseBody& setData(const vector<ListDesktopAgentRuntimeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDesktopAgentRuntimeResponseBody& setData(vector<ListDesktopAgentRuntimeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDesktopAgentRuntimeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDesktopAgentRuntimeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDesktopAgentRuntimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDesktopAgentRuntimeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDesktopAgentRuntimeResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
