// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYSDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYSDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeploySDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploySDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, DeploySDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    DeploySDGShrinkRequest() = default ;
    DeploySDGShrinkRequest(const DeploySDGShrinkRequest &) = default ;
    DeploySDGShrinkRequest(DeploySDGShrinkRequest &&) = default ;
    DeploySDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploySDGShrinkRequest() = default ;
    DeploySDGShrinkRequest& operator=(const DeploySDGShrinkRequest &) = default ;
    DeploySDGShrinkRequest& operator=(DeploySDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentType_ == nullptr
        && this->instanceIdsShrink_ == nullptr && this->SDGId_ == nullptr; };
    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string getDeploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline DeploySDGShrinkRequest& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DeploySDGShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DeploySDGShrinkRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The SDG deployment type. Valid values:
    // 
    // *   common (default): read/write deployment. Data updates are written to disks.
    // *   overlay: read/write splitting deployment. Content in SDGs is read-only. Data updates are written to the local storage of the instance.
    shared_ptr<string> deploymentType_ {};
    // The IDs of instances on which you want to deploy SDGs. You can deploy SDGs on a maximum of 100 instances at a time.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdsShrink_ {};
    // The SDG ID. This parameter is used to create a disk, which is attached to an instance.
    // 
    // This parameter is required.
    shared_ptr<string> SDGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
