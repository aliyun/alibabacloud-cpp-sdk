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
        && return this->applicationName_ == nullptr && return this->clusterId_ == nullptr && return this->configAction_ == nullptr && return this->configScope_ == nullptr && return this->description_ == nullptr
        && return this->nodeGroupId_ == nullptr && return this->nodeId_ == nullptr && return this->refreshConfig_ == nullptr && return this->regionId_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<UpdateApplicationConfig> & applicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<UpdateApplicationConfig>) };
    inline vector<UpdateApplicationConfig> applicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<UpdateApplicationConfig>) };
    inline UpdateApplicationConfigsRequest& setApplicationConfigs(const vector<UpdateApplicationConfig> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline UpdateApplicationConfigsRequest& setApplicationConfigs(vector<UpdateApplicationConfig> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline UpdateApplicationConfigsRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateApplicationConfigsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configAction Field Functions 
    bool hasConfigAction() const { return this->configAction_ != nullptr;};
    void deleteConfigAction() { this->configAction_ = nullptr;};
    inline string configAction() const { DARABONBA_PTR_GET_DEFAULT(configAction_, "") };
    inline UpdateApplicationConfigsRequest& setConfigAction(string configAction) { DARABONBA_PTR_SET_VALUE(configAction_, configAction) };


    // configScope Field Functions 
    bool hasConfigScope() const { return this->configScope_ != nullptr;};
    void deleteConfigScope() { this->configScope_ = nullptr;};
    inline string configScope() const { DARABONBA_PTR_GET_DEFAULT(configScope_, "") };
    inline UpdateApplicationConfigsRequest& setConfigScope(string configScope) { DARABONBA_PTR_SET_VALUE(configScope_, configScope) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApplicationConfigsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline UpdateApplicationConfigsRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateApplicationConfigsRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // refreshConfig Field Functions 
    bool hasRefreshConfig() const { return this->refreshConfig_ != nullptr;};
    void deleteRefreshConfig() { this->refreshConfig_ = nullptr;};
    inline bool refreshConfig() const { DARABONBA_PTR_GET_DEFAULT(refreshConfig_, false) };
    inline UpdateApplicationConfigsRequest& setRefreshConfig(bool refreshConfig) { DARABONBA_PTR_SET_VALUE(refreshConfig_, refreshConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApplicationConfigsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // 应用配置列表。
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateApplicationConfig>> applicationConfigs_ = nullptr;
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The operation performed on configuration items. Valid values:
    // 
    // *   ADD
    // *   UPDATE
    // *   DELETE
    std::shared_ptr<string> configAction_ = nullptr;
    // The operation scope. Valid values:
    // 
    // *   CLUSTER
    // *   NODE_GROUP
    std::shared_ptr<string> configScope_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The node group ID.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // Specifies whether to refresh the configurations. Default value: True.
    std::shared_ptr<bool> refreshConfig_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
