// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVERCINSTANCESFROMDEPLOYMENTSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVERCINSTANCESFROMDEPLOYMENTSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RemoveRCInstancesFromDeploymentSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveRCInstancesFromDeploymentSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(RCInstanceIds, RCInstanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveRCInstancesFromDeploymentSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(RCInstanceIds, RCInstanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RemoveRCInstancesFromDeploymentSetRequest() = default ;
    RemoveRCInstancesFromDeploymentSetRequest(const RemoveRCInstancesFromDeploymentSetRequest &) = default ;
    RemoveRCInstancesFromDeploymentSetRequest(RemoveRCInstancesFromDeploymentSetRequest &&) = default ;
    RemoveRCInstancesFromDeploymentSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveRCInstancesFromDeploymentSetRequest() = default ;
    RemoveRCInstancesFromDeploymentSetRequest& operator=(const RemoveRCInstancesFromDeploymentSetRequest &) = default ;
    RemoveRCInstancesFromDeploymentSetRequest& operator=(RemoveRCInstancesFromDeploymentSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentSetId_ == nullptr
        && this->RCInstanceIds_ == nullptr && this->regionId_ == nullptr; };
    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline RemoveRCInstancesFromDeploymentSetRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // RCInstanceIds Field Functions 
    bool hasRCInstanceIds() const { return this->RCInstanceIds_ != nullptr;};
    void deleteRCInstanceIds() { this->RCInstanceIds_ = nullptr;};
    inline string getRCInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(RCInstanceIds_, "") };
    inline RemoveRCInstancesFromDeploymentSetRequest& setRCInstanceIds(string RCInstanceIds) { DARABONBA_PTR_SET_VALUE(RCInstanceIds_, RCInstanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveRCInstancesFromDeploymentSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The deployment set ID.
    // 
    // This parameter is required.
    shared_ptr<string> deploymentSetId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> RCInstanceIds_ {};
    // The region ID. You can call DescribeRegions to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
