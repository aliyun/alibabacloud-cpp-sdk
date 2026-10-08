// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRCINSTANCESTODEPLOYMENTSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRCINSTANCESTODEPLOYMENTSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AddRCInstancesToDeploymentSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRCInstancesToDeploymentSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(RCInstanceIds, RCInstanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddRCInstancesToDeploymentSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(RCInstanceIds, RCInstanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddRCInstancesToDeploymentSetRequest() = default ;
    AddRCInstancesToDeploymentSetRequest(const AddRCInstancesToDeploymentSetRequest &) = default ;
    AddRCInstancesToDeploymentSetRequest(AddRCInstancesToDeploymentSetRequest &&) = default ;
    AddRCInstancesToDeploymentSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRCInstancesToDeploymentSetRequest() = default ;
    AddRCInstancesToDeploymentSetRequest& operator=(const AddRCInstancesToDeploymentSetRequest &) = default ;
    AddRCInstancesToDeploymentSetRequest& operator=(AddRCInstancesToDeploymentSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentSetGroupNo_ == nullptr
        && this->deploymentSetId_ == nullptr && this->force_ == nullptr && this->RCInstanceIds_ == nullptr && this->regionId_ == nullptr; };
    // deploymentSetGroupNo Field Functions 
    bool hasDeploymentSetGroupNo() const { return this->deploymentSetGroupNo_ != nullptr;};
    void deleteDeploymentSetGroupNo() { this->deploymentSetGroupNo_ = nullptr;};
    inline string getDeploymentSetGroupNo() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetGroupNo_, "") };
    inline AddRCInstancesToDeploymentSetRequest& setDeploymentSetGroupNo(string deploymentSetGroupNo) { DARABONBA_PTR_SET_VALUE(deploymentSetGroupNo_, deploymentSetGroupNo) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline AddRCInstancesToDeploymentSetRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline AddRCInstancesToDeploymentSetRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // RCInstanceIds Field Functions 
    bool hasRCInstanceIds() const { return this->RCInstanceIds_ != nullptr;};
    void deleteRCInstanceIds() { this->RCInstanceIds_ = nullptr;};
    inline string getRCInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(RCInstanceIds_, "") };
    inline AddRCInstancesToDeploymentSetRequest& setRCInstanceIds(string RCInstanceIds) { DARABONBA_PTR_SET_VALUE(RCInstanceIds_, RCInstanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddRCInstancesToDeploymentSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The group number of the ECS instance in the deployment set when the deployment set policy is high availability group (AvailabilityGroup). You can use this parameter to specify the group number. Valid values: 1 to 7. If no value is specified, the system automatically assigns an active group.
    shared_ptr<string> deploymentSetGroupNo_ {};
    // The deployment set ID.
    // 
    // This parameter is required.
    shared_ptr<string> deploymentSetId_ {};
    // Specifies whether to forcibly release running instances. Valid values:
    // 
    // * **true**: Forcibly release.
    // * **false** (default): Do not forcibly release.
    shared_ptr<bool> force_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> RCInstanceIds_ {};
    // The region ID. You can call DescribeRegions to query available regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
