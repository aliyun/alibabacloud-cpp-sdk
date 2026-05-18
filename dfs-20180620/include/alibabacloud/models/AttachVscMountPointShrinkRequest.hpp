// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHVSCMOUNTPOINTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHVSCMOUNTPOINTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class AttachVscMountPointShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachVscMountPointShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_TO_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
      DARABONBA_PTR_TO_JSON(VscIds, vscIdsShrink_);
      DARABONBA_PTR_TO_JSON(VscName, vscName_);
      DARABONBA_PTR_TO_JSON(VscType, vscType_);
    };
    friend void from_json(const Darabonba::Json& j, AttachVscMountPointShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_FROM_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
      DARABONBA_PTR_FROM_JSON(VscIds, vscIdsShrink_);
      DARABONBA_PTR_FROM_JSON(VscName, vscName_);
      DARABONBA_PTR_FROM_JSON(VscType, vscType_);
    };
    AttachVscMountPointShrinkRequest() = default ;
    AttachVscMountPointShrinkRequest(const AttachVscMountPointShrinkRequest &) = default ;
    AttachVscMountPointShrinkRequest(AttachVscMountPointShrinkRequest &&) = default ;
    AttachVscMountPointShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachVscMountPointShrinkRequest() = default ;
    AttachVscMountPointShrinkRequest& operator=(const AttachVscMountPointShrinkRequest &) = default ;
    AttachVscMountPointShrinkRequest& operator=(AttachVscMountPointShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->fileSystemId_ == nullptr && this->inputRegionId_ == nullptr && this->instanceIdsShrink_ == nullptr && this->mountPointId_ == nullptr && this->useAssumeRoleChkServerPerm_ == nullptr
        && this->vscIdsShrink_ == nullptr && this->vscName_ == nullptr && this->vscType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AttachVscMountPointShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline AttachVscMountPointShrinkRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string getInputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline AttachVscMountPointShrinkRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline AttachVscMountPointShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string getMountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline AttachVscMountPointShrinkRequest& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool getUseAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline AttachVscMountPointShrinkRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


    // vscIdsShrink Field Functions 
    bool hasVscIdsShrink() const { return this->vscIdsShrink_ != nullptr;};
    void deleteVscIdsShrink() { this->vscIdsShrink_ = nullptr;};
    inline string getVscIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vscIdsShrink_, "") };
    inline AttachVscMountPointShrinkRequest& setVscIdsShrink(string vscIdsShrink) { DARABONBA_PTR_SET_VALUE(vscIdsShrink_, vscIdsShrink) };


    // vscName Field Functions 
    bool hasVscName() const { return this->vscName_ != nullptr;};
    void deleteVscName() { this->vscName_ = nullptr;};
    inline string getVscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
    inline AttachVscMountPointShrinkRequest& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


    // vscType Field Functions 
    bool hasVscType() const { return this->vscType_ != nullptr;};
    void deleteVscType() { this->vscType_ = nullptr;};
    inline string getVscType() const { DARABONBA_PTR_GET_DEFAULT(vscType_, "") };
    inline AttachVscMountPointShrinkRequest& setVscType(string vscType) { DARABONBA_PTR_SET_VALUE(vscType_, vscType) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // This parameter is required.
    shared_ptr<string> inputRegionId_ {};
    shared_ptr<string> instanceIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> mountPointId_ {};
    shared_ptr<bool> useAssumeRoleChkServerPerm_ {};
    shared_ptr<string> vscIdsShrink_ {};
    shared_ptr<string> vscName_ {};
    shared_ptr<string> vscType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
