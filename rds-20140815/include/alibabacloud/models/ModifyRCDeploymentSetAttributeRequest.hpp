// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCDEPLOYMENTSETATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCDEPLOYMENTSETATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCDeploymentSetAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCDeploymentSetAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(DeploymentSetName, deploymentSetName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCDeploymentSetAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetName, deploymentSetName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyRCDeploymentSetAttributeRequest() = default ;
    ModifyRCDeploymentSetAttributeRequest(const ModifyRCDeploymentSetAttributeRequest &) = default ;
    ModifyRCDeploymentSetAttributeRequest(ModifyRCDeploymentSetAttributeRequest &&) = default ;
    ModifyRCDeploymentSetAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCDeploymentSetAttributeRequest() = default ;
    ModifyRCDeploymentSetAttributeRequest& operator=(const ModifyRCDeploymentSetAttributeRequest &) = default ;
    ModifyRCDeploymentSetAttributeRequest& operator=(ModifyRCDeploymentSetAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentSetId_ == nullptr
        && this->deploymentSetName_ == nullptr && this->description_ == nullptr && this->regionId_ == nullptr; };
    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline ModifyRCDeploymentSetAttributeRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // deploymentSetName Field Functions 
    bool hasDeploymentSetName() const { return this->deploymentSetName_ != nullptr;};
    void deleteDeploymentSetName() { this->deploymentSetName_ = nullptr;};
    inline string getDeploymentSetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetName_, "") };
    inline ModifyRCDeploymentSetAttributeRequest& setDeploymentSetName(string deploymentSetName) { DARABONBA_PTR_SET_VALUE(deploymentSetName_, deploymentSetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyRCDeploymentSetAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCDeploymentSetAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> deploymentSetId_ {};
    shared_ptr<string> deploymentSetName_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
