// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMOUNTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMOUNTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DeleteMountTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMountTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMountTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
    };
    DeleteMountTargetRequest() = default ;
    DeleteMountTargetRequest(const DeleteMountTargetRequest &) = default ;
    DeleteMountTargetRequest(DeleteMountTargetRequest &&) = default ;
    DeleteMountTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMountTargetRequest() = default ;
    DeleteMountTargetRequest& operator=(const DeleteMountTargetRequest &) = default ;
    DeleteMountTargetRequest& operator=(DeleteMountTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->mountTargetDomain_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DeleteMountTargetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string mountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline DeleteMountTargetRequest& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


  protected:
    // The ID of the file system.
    // 
    // *   Sample ID of a General-purpose NAS file system: 31a8e4\\*\\*\\*\\*.
    // *   The IDs of Extreme NAS file systems must start with `extreme-`, for example, extreme-0015\\*\\*\\*\\*.
    // *   The IDs of Cloud Parallel File Storage (CPFS) file systems must start with `cpfs-`, for example, cpfs-125487\\*\\*\\*\\*.
    // 
    // > CPFS file systems are available only on the China site (aliyun.com).
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The domain name of the mount target.
    // 
    // This parameter is required.
    std::shared_ptr<string> mountTargetDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
