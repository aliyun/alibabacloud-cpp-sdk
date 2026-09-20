// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEMULTIZONECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEMULTIZONECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class UpgradeMultiZoneClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeMultiZoneClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(RestartComponents, restartComponents_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(UpgradeInsName, upgradeInsName_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeMultiZoneClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(RestartComponents, restartComponents_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(UpgradeInsName, upgradeInsName_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    UpgradeMultiZoneClusterRequest() = default ;
    UpgradeMultiZoneClusterRequest(const UpgradeMultiZoneClusterRequest &) = default ;
    UpgradeMultiZoneClusterRequest(UpgradeMultiZoneClusterRequest &&) = default ;
    UpgradeMultiZoneClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeMultiZoneClusterRequest() = default ;
    UpgradeMultiZoneClusterRequest& operator=(const UpgradeMultiZoneClusterRequest &) = default ;
    UpgradeMultiZoneClusterRequest& operator=(UpgradeMultiZoneClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->components_ == nullptr && this->restartComponents_ == nullptr && this->runMode_ == nullptr && this->upgradeInsName_ == nullptr && this->versions_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpgradeMultiZoneClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline string getComponents() const { DARABONBA_PTR_GET_DEFAULT(components_, "") };
    inline UpgradeMultiZoneClusterRequest& setComponents(string components) { DARABONBA_PTR_SET_VALUE(components_, components) };


    // restartComponents Field Functions 
    bool hasRestartComponents() const { return this->restartComponents_ != nullptr;};
    void deleteRestartComponents() { this->restartComponents_ = nullptr;};
    inline string getRestartComponents() const { DARABONBA_PTR_GET_DEFAULT(restartComponents_, "") };
    inline UpgradeMultiZoneClusterRequest& setRestartComponents(string restartComponents) { DARABONBA_PTR_SET_VALUE(restartComponents_, restartComponents) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline UpgradeMultiZoneClusterRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // upgradeInsName Field Functions 
    bool hasUpgradeInsName() const { return this->upgradeInsName_ != nullptr;};
    void deleteUpgradeInsName() { this->upgradeInsName_ = nullptr;};
    inline string getUpgradeInsName() const { DARABONBA_PTR_GET_DEFAULT(upgradeInsName_, "") };
    inline UpgradeMultiZoneClusterRequest& setUpgradeInsName(string upgradeInsName) { DARABONBA_PTR_SET_VALUE(upgradeInsName_, upgradeInsName) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline string getVersions() const { DARABONBA_PTR_GET_DEFAULT(versions_, "") };
    inline UpgradeMultiZoneClusterRequest& setVersions(string versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };


  protected:
    // The ID of the multi-zone instance.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The component names. You can specify multiple component names separated by commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> components_ {};
    // The names of the components that need to be restarted after the upgrade. You can specify multiple component names separated by commas (,).
    shared_ptr<string> restartComponents_ {};
    // The execution mode. If UpgradeInsName is not empty, the mode is forcibly set to single. If UpgradeInsName is empty and RunMode is not specified, the default value is serial. Valid values:
    // 
    // - serial: all sub-instances are upgraded.
    // - single: only the specified sub-instance is upgraded.
    shared_ptr<string> runMode_ {};
    // The name of the sub-instance to upgrade. You can obtain this value from the MultiZoneInstanceModels field in the response of the [DescribeMultiZoneCluster](~~DescribeMultiZoneCluster~~) operation. This parameter is optional. If you do not specify this parameter, all sub-instances are upgraded.
    shared_ptr<string> upgradeInsName_ {};
    // The RPM version to upgrade to. If you do not specify this parameter, the components are upgraded to the latest version. If you specify multiple values for Components, you must also specify the same number of values for Versions, separated by commas (,).
    shared_ptr<string> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
