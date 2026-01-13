// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERCDEPLOYMENTSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERCDEPLOYMENTSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteRCDeploymentSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRCDeploymentSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRCDeploymentSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteRCDeploymentSetRequest() = default ;
    DeleteRCDeploymentSetRequest(const DeleteRCDeploymentSetRequest &) = default ;
    DeleteRCDeploymentSetRequest(DeleteRCDeploymentSetRequest &&) = default ;
    DeleteRCDeploymentSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRCDeploymentSetRequest() = default ;
    DeleteRCDeploymentSetRequest& operator=(const DeleteRCDeploymentSetRequest &) = default ;
    DeleteRCDeploymentSetRequest& operator=(DeleteRCDeploymentSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentSetId_ == nullptr
        && this->regionId_ == nullptr; };
    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline DeleteRCDeploymentSetRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRCDeploymentSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The deployment set ID.
    // 
    // This parameter is required.
    shared_ptr<string> deploymentSetId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
