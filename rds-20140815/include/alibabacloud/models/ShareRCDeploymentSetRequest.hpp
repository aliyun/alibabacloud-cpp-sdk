// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHARERCDEPLOYMENTSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHARERCDEPLOYMENTSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ShareRCDeploymentSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShareRCDeploymentSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ShareRCDeploymentSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ShareRCDeploymentSetRequest() = default ;
    ShareRCDeploymentSetRequest(const ShareRCDeploymentSetRequest &) = default ;
    ShareRCDeploymentSetRequest(ShareRCDeploymentSetRequest &&) = default ;
    ShareRCDeploymentSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShareRCDeploymentSetRequest() = default ;
    ShareRCDeploymentSetRequest& operator=(const ShareRCDeploymentSetRequest &) = default ;
    ShareRCDeploymentSetRequest& operator=(ShareRCDeploymentSetRequest &&) = default ;
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
    inline ShareRCDeploymentSetRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ShareRCDeploymentSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> deploymentSetId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
