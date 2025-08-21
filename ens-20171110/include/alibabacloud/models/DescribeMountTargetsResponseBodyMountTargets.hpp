// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMountTargetsResponseBodyMountTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBodyMountTargets& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(MountTargetName, mountTargetName_);
      DARABONBA_PTR_TO_JSON(NetWorkId, netWorkId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBodyMountTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(MountTargetName, mountTargetName_);
      DARABONBA_PTR_FROM_JSON(NetWorkId, netWorkId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMountTargetsResponseBodyMountTargets() = default ;
    DescribeMountTargetsResponseBodyMountTargets(const DescribeMountTargetsResponseBodyMountTargets &) = default ;
    DescribeMountTargetsResponseBodyMountTargets(DescribeMountTargetsResponseBodyMountTargets &&) = default ;
    DescribeMountTargetsResponseBodyMountTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBodyMountTargets() = default ;
    DescribeMountTargetsResponseBodyMountTargets& operator=(const DescribeMountTargetsResponseBodyMountTargets &) = default ;
    DescribeMountTargetsResponseBodyMountTargets& operator=(DescribeMountTargetsResponseBodyMountTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr
        && this->fileSystemId_ != nullptr && this->mountTargetDomain_ != nullptr && this->mountTargetName_ != nullptr && this->netWorkId_ != nullptr && this->status_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeMountTargetsResponseBodyMountTargets& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeMountTargetsResponseBodyMountTargets& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string mountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline DescribeMountTargetsResponseBodyMountTargets& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // mountTargetName Field Functions 
    bool hasMountTargetName() const { return this->mountTargetName_ != nullptr;};
    void deleteMountTargetName() { this->mountTargetName_ = nullptr;};
    inline string mountTargetName() const { DARABONBA_PTR_GET_DEFAULT(mountTargetName_, "") };
    inline DescribeMountTargetsResponseBodyMountTargets& setMountTargetName(string mountTargetName) { DARABONBA_PTR_SET_VALUE(mountTargetName_, mountTargetName) };


    // netWorkId Field Functions 
    bool hasNetWorkId() const { return this->netWorkId_ != nullptr;};
    void deleteNetWorkId() { this->netWorkId_ = nullptr;};
    inline string netWorkId() const { DARABONBA_PTR_GET_DEFAULT(netWorkId_, "") };
    inline DescribeMountTargetsResponseBodyMountTargets& setNetWorkId(string netWorkId) { DARABONBA_PTR_SET_VALUE(netWorkId_, netWorkId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMountTargetsResponseBodyMountTargets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the region.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The path of the mount target.
    std::shared_ptr<string> mountTargetDomain_ = nullptr;
    // The name of the mount target.
    std::shared_ptr<string> mountTargetName_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> netWorkId_ = nullptr;
    // The state of the mount target. Valid values:
    // 
    // *   active: The mount target is available.
    // *   inactive: The mount target is unavailable.
    // *   pending: A task is being queued for the mount target.
    // *   deleting: The mount target is being deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
