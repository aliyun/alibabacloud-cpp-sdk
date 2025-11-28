// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEDEPLOYMENTMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEDEPLOYMENTMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyDBInstanceDeploymentModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceDeploymentModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceDeploymentModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
    };
    ModifyDBInstanceDeploymentModeRequest() = default ;
    ModifyDBInstanceDeploymentModeRequest(const ModifyDBInstanceDeploymentModeRequest &) = default ;
    ModifyDBInstanceDeploymentModeRequest(ModifyDBInstanceDeploymentModeRequest &&) = default ;
    ModifyDBInstanceDeploymentModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceDeploymentModeRequest() = default ;
    ModifyDBInstanceDeploymentModeRequest& operator=(const ModifyDBInstanceDeploymentModeRequest &) = default ;
    ModifyDBInstanceDeploymentModeRequest& operator=(ModifyDBInstanceDeploymentModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->deployMode_ == nullptr && return this->standbyVSwitchId_ == nullptr && return this->standbyZoneId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceDeploymentModeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string deployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline ModifyDBInstanceDeploymentModeRequest& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string standbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline ModifyDBInstanceDeploymentModeRequest& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string standbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline ModifyDBInstanceDeploymentModeRequest& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


  protected:
    // The cluster ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the IDs of all AnalyticDB for PostgreSQL instances in the specified region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The deployment mode. Valid values:
    // 
    // *   multiple: Multi-zone development.
    // *   single: Single-zone deployment.
    // 
    // This parameter is required.
    std::shared_ptr<string> deployMode_ = nullptr;
    // The vSwitch ID of the secondary zone.
    // 
    // > 
    // 
    // *   This parameter must be specified only when DeployMode is set to multiple.
    // 
    // *   The vSwitch must be deployed in the zone that is specified by the StandbyZoneId parameter.
    std::shared_ptr<string> standbyVSwitchId_ = nullptr;
    // The ID of the secondary zone.
    // 
    // > 
    // 
    // *   This parameter must be specified only when DeployMode is set to multiple.
    // 
    // *   You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the available zone list.
    // 
    // *   The ID of the secondary zone must be different from the ID of the primary zone.
    std::shared_ptr<string> standbyZoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
