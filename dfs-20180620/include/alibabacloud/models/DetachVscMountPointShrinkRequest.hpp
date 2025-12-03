// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHVSCMOUNTPOINTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHVSCMOUNTPOINTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DetachVscMountPointShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachVscMountPointShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_TO_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
      DARABONBA_PTR_TO_JSON(VscIds, vscIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DetachVscMountPointShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_FROM_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
      DARABONBA_PTR_FROM_JSON(VscIds, vscIdsShrink_);
    };
    DetachVscMountPointShrinkRequest() = default ;
    DetachVscMountPointShrinkRequest(const DetachVscMountPointShrinkRequest &) = default ;
    DetachVscMountPointShrinkRequest(DetachVscMountPointShrinkRequest &&) = default ;
    DetachVscMountPointShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachVscMountPointShrinkRequest() = default ;
    DetachVscMountPointShrinkRequest& operator=(const DetachVscMountPointShrinkRequest &) = default ;
    DetachVscMountPointShrinkRequest& operator=(DetachVscMountPointShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->inputRegionId_ == nullptr && return this->instanceIdsShrink_ == nullptr && return this->mountPointId_ == nullptr && return this->useAssumeRoleChkServerPerm_ == nullptr
        && return this->vscIdsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DetachVscMountPointShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DetachVscMountPointShrinkRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DetachVscMountPointShrinkRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DetachVscMountPointShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string mountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline DetachVscMountPointShrinkRequest& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool useAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline DetachVscMountPointShrinkRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


    // vscIdsShrink Field Functions 
    bool hasVscIdsShrink() const { return this->vscIdsShrink_ != nullptr;};
    void deleteVscIdsShrink() { this->vscIdsShrink_ = nullptr;};
    inline string vscIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vscIdsShrink_, "") };
    inline DetachVscMountPointShrinkRequest& setVscIdsShrink(string vscIdsShrink) { DARABONBA_PTR_SET_VALUE(vscIdsShrink_, vscIdsShrink) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mountPointId_ = nullptr;
    std::shared_ptr<bool> useAssumeRoleChkServerPerm_ = nullptr;
    std::shared_ptr<string> vscIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
