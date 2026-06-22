// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApplicationConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class UpdateApplicationConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigAction, configAction_);
      DARABONBA_PTR_TO_JSON(ConfigScope, configScope_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(RefreshConfig, refreshConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigAction, configAction_);
      DARABONBA_PTR_FROM_JSON(ConfigScope, configScope_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(RefreshConfig, refreshConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateApplicationConfigsRequest() = default ;
    UpdateApplicationConfigsRequest(const UpdateApplicationConfigsRequest &) = default ;
    UpdateApplicationConfigsRequest(UpdateApplicationConfigsRequest &&) = default ;
    UpdateApplicationConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationConfigsRequest() = default ;
    UpdateApplicationConfigsRequest& operator=(const UpdateApplicationConfigsRequest &) = default ;
    UpdateApplicationConfigsRequest& operator=(UpdateApplicationConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && this->applicationName_ == nullptr && this->clusterId_ == nullptr && this->configAction_ == nullptr && this->configScope_ == nullptr && this->description_ == nullptr
        && this->nodeGroupId_ == nullptr && this->nodeId_ == nullptr && this->refreshConfig_ == nullptr && this->regionId_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<UpdateApplicationConfig> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<UpdateApplicationConfig>) };
    inline vector<UpdateApplicationConfig> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<UpdateApplicationConfig>) };
    inline UpdateApplicationConfigsRequest& setApplicationConfigs(const vector<UpdateApplicationConfig> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline UpdateApplicationConfigsRequest& setApplicationConfigs(vector<UpdateApplicationConfig> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline UpdateApplicationConfigsRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateApplicationConfigsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configAction Field Functions 
    bool hasConfigAction() const { return this->configAction_ != nullptr;};
    void deleteConfigAction() { this->configAction_ = nullptr;};
    inline string getConfigAction() const { DARABONBA_PTR_GET_DEFAULT(configAction_, "") };
    inline UpdateApplicationConfigsRequest& setConfigAction(string configAction) { DARABONBA_PTR_SET_VALUE(configAction_, configAction) };


    // configScope Field Functions 
    bool hasConfigScope() const { return this->configScope_ != nullptr;};
    void deleteConfigScope() { this->configScope_ = nullptr;};
    inline string getConfigScope() const { DARABONBA_PTR_GET_DEFAULT(configScope_, "") };
    inline UpdateApplicationConfigsRequest& setConfigScope(string configScope) { DARABONBA_PTR_SET_VALUE(configScope_, configScope) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApplicationConfigsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline UpdateApplicationConfigsRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateApplicationConfigsRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // refreshConfig Field Functions 
    bool hasRefreshConfig() const { return this->refreshConfig_ != nullptr;};
    void deleteRefreshConfig() { this->refreshConfig_ = nullptr;};
    inline bool getRefreshConfig() const { DARABONBA_PTR_GET_DEFAULT(refreshConfig_, false) };
    inline UpdateApplicationConfigsRequest& setRefreshConfig(bool refreshConfig) { DARABONBA_PTR_SET_VALUE(refreshConfig_, refreshConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApplicationConfigsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of application configurations.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateApplicationConfig>> applicationConfigs_ {};
    // The application name.
    // 
    // This parameter is required.
    shared_ptr<string> applicationName_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The operation on the configuration items. Valid values:
    // 
    // - ADD: Adds configuration items.
    // 
    // - UPDATE: Updates configuration items.
    // 
    // - DELETE: Deletes configuration items.
    shared_ptr<string> configAction_ {};
    // The scope of the configuration operation. Valid values:
    // 
    // - CLUSTER: The cluster level.
    // 
    // - NODE_GROUP: The node group level.
    shared_ptr<string> configScope_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The node group ID.
    shared_ptr<string> nodeGroupId_ {};
    // The node ID.
    shared_ptr<string> nodeId_ {};
    // Specifies whether to refresh the configurations.
    // The default value is true.
    shared_ptr<bool> refreshConfig_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
