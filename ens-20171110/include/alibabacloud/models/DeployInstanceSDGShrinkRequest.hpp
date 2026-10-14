// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYINSTANCESDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYINSTANCESDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeployInstanceSDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployInstanceSDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_TO_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployInstanceSDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_FROM_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    DeployInstanceSDGShrinkRequest() = default ;
    DeployInstanceSDGShrinkRequest(const DeployInstanceSDGShrinkRequest &) = default ;
    DeployInstanceSDGShrinkRequest(DeployInstanceSDGShrinkRequest &&) = default ;
    DeployInstanceSDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployInstanceSDGShrinkRequest() = default ;
    DeployInstanceSDGShrinkRequest& operator=(const DeployInstanceSDGShrinkRequest &) = default ;
    DeployInstanceSDGShrinkRequest& operator=(DeployInstanceSDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentType_ == nullptr
        && this->diskAccessProtocol_ == nullptr && this->diskType_ == nullptr && this->instanceIdsShrink_ == nullptr && this->SDGId_ == nullptr; };
    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string getDeploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline DeployInstanceSDGShrinkRequest& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // diskAccessProtocol Field Functions 
    bool hasDiskAccessProtocol() const { return this->diskAccessProtocol_ != nullptr;};
    void deleteDiskAccessProtocol() { this->diskAccessProtocol_ = nullptr;};
    inline string getDiskAccessProtocol() const { DARABONBA_PTR_GET_DEFAULT(diskAccessProtocol_, "") };
    inline DeployInstanceSDGShrinkRequest& setDiskAccessProtocol(string diskAccessProtocol) { DARABONBA_PTR_SET_VALUE(diskAccessProtocol_, diskAccessProtocol) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DeployInstanceSDGShrinkRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DeployInstanceSDGShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DeployInstanceSDGShrinkRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The SDG deployment type. Set the value to shared, which indicates read/write splitting shared deployment. In this mode, the SDG content is read-only, and data updates are written to the local storage of the instance.
    // 
    // This parameter is required. Currently, only the value shared is supported. If this parameter is not specified, the service returns a Parameter.Invalid error.
    shared_ptr<string> deploymentType_ {};
    // The access protocol type of the cloud disk. Valid values:
    // 
    // - iscsi: the default protocol for standard cloud disks. Both RBD cloud disks and standard cloud disks support this protocol.
    // 
    // - rbd: the default protocol for RBD cloud disks. Only RBD cloud disks support this mount protocol.
    shared_ptr<string> diskAccessProtocol_ {};
    // The type of the shared cloud disk to be created. Valid values:
    // 
    // - standard: standard cloud disk.
    // - rbd: RBD cloud disk.
    // 
    // > 
    // > - If this parameter is not specified, a standard cloud disk is created by default.
    // > - An RBD shared cloud disk can be created only when the source disk type is RBD.
    shared_ptr<string> diskType_ {};
    // The list of instance IDs. The value is a JSON array. A maximum of 100 IDs can be specified.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdsShrink_ {};
    // The ID of the SDG.
    // 
    // This parameter is required.
    shared_ptr<string> SDGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
