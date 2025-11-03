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
      DARABONBA_PTR_TO_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMountTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
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
        && return this->dualStackMountTargetDomain_ == nullptr && return this->fileSystemId_ == nullptr && return this->mountTargetDomain_ == nullptr && return this->status_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline ModifyMountTargetRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // dualStackMountTargetDomain Field Functions 
    bool hasDualStackMountTargetDomain() const { return this->dualStackMountTargetDomain_ != nullptr;};
    void deleteDualStackMountTargetDomain() { this->dualStackMountTargetDomain_ = nullptr;};
    inline string dualStackMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(dualStackMountTargetDomain_, "") };
    inline ModifyMountTargetRequest& setDualStackMountTargetDomain(string dualStackMountTargetDomain) { DARABONBA_PTR_SET_VALUE(dualStackMountTargetDomain_, dualStackMountTargetDomain) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyMountTargetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string mountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline ModifyMountTargetRequest& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyMountTargetRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the permission group that is attached to the mount target.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    // The dual-stack (IPv4 and IPv6) domain name of the mount target.
    // 
    // >  Only Extreme NAS file systems that reside in the Chinese mainland support IPv6.
    std::shared_ptr<string> dualStackMountTargetDomain_ = nullptr;
    // The ID of the file system.
    // 
    // *   Sample ID of a General-purpose NAS file system: `31a8e4****`.
    // *   The IDs of Extreme NAS file systems must start with `extreme-`, for example, `extreme-0015****`.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The IPv4 domain name of the mount target.
    std::shared_ptr<string> mountTargetDomain_ = nullptr;
    // The status of the mount target.
    // 
    // Valid values:
    // 
    // *   Active: The mount target is available.
    // *   Inactive: The mount target is unavailable.
    // 
    // >  Only General-purpose File Storage NAS (NAS) file systems support changing the mount target status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
