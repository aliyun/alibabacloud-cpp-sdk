// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERCONFIGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERCONFIGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateClusterConfigsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterConfigsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(ConfigValues, configValuesShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterConfigsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(ConfigValues, configValuesShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    UpdateClusterConfigsShrinkRequest() = default ;
    UpdateClusterConfigsShrinkRequest(const UpdateClusterConfigsShrinkRequest &) = default ;
    UpdateClusterConfigsShrinkRequest(UpdateClusterConfigsShrinkRequest &&) = default ;
    UpdateClusterConfigsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterConfigsShrinkRequest() = default ;
    UpdateClusterConfigsShrinkRequest& operator=(const UpdateClusterConfigsShrinkRequest &) = default ;
    UpdateClusterConfigsShrinkRequest& operator=(UpdateClusterConfigsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->configType_ != nullptr && this->configValuesShrink_ != nullptr && this->projectId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline int64_t clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
    inline UpdateClusterConfigsShrinkRequest& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline UpdateClusterConfigsShrinkRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // configValuesShrink Field Functions 
    bool hasConfigValuesShrink() const { return this->configValuesShrink_ != nullptr;};
    void deleteConfigValuesShrink() { this->configValuesShrink_ = nullptr;};
    inline string configValuesShrink() const { DARABONBA_PTR_GET_DEFAULT(configValuesShrink_, "") };
    inline UpdateClusterConfigsShrinkRequest& setConfigValuesShrink(string configValuesShrink) { DARABONBA_PTR_SET_VALUE(configValuesShrink_, configValuesShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateClusterConfigsShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


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
    std::shared_ptr<string> configValuesShrink_ = nullptr;
    // The ID of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
