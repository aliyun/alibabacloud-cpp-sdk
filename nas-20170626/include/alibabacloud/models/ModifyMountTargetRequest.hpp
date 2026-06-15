// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMOUNTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMOUNTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyMountTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMountTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(AccessPointAccessOnly, accessPointAccessOnly_);
      DARABONBA_PTR_TO_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMountTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(AccessPointAccessOnly, accessPointAccessOnly_);
      DARABONBA_PTR_FROM_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyMountTargetRequest() = default ;
    ModifyMountTargetRequest(const ModifyMountTargetRequest &) = default ;
    ModifyMountTargetRequest(ModifyMountTargetRequest &&) = default ;
    ModifyMountTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMountTargetRequest() = default ;
    ModifyMountTargetRequest& operator=(const ModifyMountTargetRequest &) = default ;
    ModifyMountTargetRequest& operator=(ModifyMountTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->accessPointAccessOnly_ == nullptr && this->dualStackMountTargetDomain_ == nullptr && this->fileSystemId_ == nullptr && this->mountTargetDomain_ == nullptr && this->status_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline ModifyMountTargetRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // accessPointAccessOnly Field Functions 
    bool hasAccessPointAccessOnly() const { return this->accessPointAccessOnly_ != nullptr;};
    void deleteAccessPointAccessOnly() { this->accessPointAccessOnly_ = nullptr;};
    inline bool getAccessPointAccessOnly() const { DARABONBA_PTR_GET_DEFAULT(accessPointAccessOnly_, false) };
    inline ModifyMountTargetRequest& setAccessPointAccessOnly(bool accessPointAccessOnly) { DARABONBA_PTR_SET_VALUE(accessPointAccessOnly_, accessPointAccessOnly) };


    // dualStackMountTargetDomain Field Functions 
    bool hasDualStackMountTargetDomain() const { return this->dualStackMountTargetDomain_ != nullptr;};
    void deleteDualStackMountTargetDomain() { this->dualStackMountTargetDomain_ = nullptr;};
    inline string getDualStackMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(dualStackMountTargetDomain_, "") };
    inline ModifyMountTargetRequest& setDualStackMountTargetDomain(string dualStackMountTargetDomain) { DARABONBA_PTR_SET_VALUE(dualStackMountTargetDomain_, dualStackMountTargetDomain) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyMountTargetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline ModifyMountTargetRequest& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyMountTargetRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the access group that is associated with the mount target.
    shared_ptr<string> accessGroupName_ {};
    shared_ptr<bool> accessPointAccessOnly_ {};
    // The domain name of the dual-stack mount target.
    // 
    // > The IPv6 feature is available only for Extreme NAS file systems in the Chinese mainland.
    shared_ptr<string> dualStackMountTargetDomain_ {};
    // The ID of the file system.
    // 
    // - For a General-purpose NAS file system, the ID is similar to `31a8e4****`.
    // 
    // - For an Extreme NAS file system, the ID must start with `extreme-`, for example, `extreme-0015****`.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The domain name of the IPv4 mount target.
    shared_ptr<string> mountTargetDomain_ {};
    // The status of the mount target.
    // 
    // Valid values:
    // 
    // - Active: The mount target is available.
    // 
    // - Inactive: The mount target is unavailable.
    // 
    // > You can change the status of a mount target only if the mount target is attached to a General-purpose NAS file system.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
