// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ClusterConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateClusterConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(ConfigValues, configValues_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(ConfigValues, configValues_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    UpdateClusterConfigsRequest() = default ;
    UpdateClusterConfigsRequest(const UpdateClusterConfigsRequest &) = default ;
    UpdateClusterConfigsRequest(UpdateClusterConfigsRequest &&) = default ;
    UpdateClusterConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterConfigsRequest() = default ;
    UpdateClusterConfigsRequest& operator=(const UpdateClusterConfigsRequest &) = default ;
    UpdateClusterConfigsRequest& operator=(UpdateClusterConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->configType_ != nullptr && this->configValues_ != nullptr && this->projectId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline int64_t clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
    inline UpdateClusterConfigsRequest& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline UpdateClusterConfigsRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // configValues Field Functions 
    bool hasConfigValues() const { return this->configValues_ != nullptr;};
    void deleteConfigValues() { this->configValues_ = nullptr;};
    inline const vector<ClusterConfig> & configValues() const { DARABONBA_PTR_GET_CONST(configValues_, vector<ClusterConfig>) };
    inline vector<ClusterConfig> configValues() { DARABONBA_PTR_GET(configValues_, vector<ClusterConfig>) };
    inline UpdateClusterConfigsRequest& setConfigValues(const vector<ClusterConfig> & configValues) { DARABONBA_PTR_SET_VALUE(configValues_, configValues) };
    inline UpdateClusterConfigsRequest& setConfigValues(vector<ClusterConfig> && configValues) { DARABONBA_PTR_SET_RVALUE(configValues_, configValues) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateClusterConfigsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the cluster associated with DataWorks.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> clusterId_ = nullptr;
    // The configuration type of the cluster. Valid values:
    // 
    // *   SPARK_CONF: SPARK parameters
    // 
    // This parameter is required.
    std::shared_ptr<string> configType_ = nullptr;
    // The configuration information of the cluster submodule.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ClusterConfig>> configValues_ = nullptr;
    // The ID of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
