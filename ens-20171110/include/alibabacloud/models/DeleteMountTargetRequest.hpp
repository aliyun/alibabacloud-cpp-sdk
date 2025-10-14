// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMOUNTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMOUNTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteMountTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMountTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MountTargetName, mountTargetName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMountTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MountTargetName, mountTargetName_);
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
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->mountTargetName_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DeleteMountTargetRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DeleteMountTargetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // mountTargetName Field Functions 
    bool hasMountTargetName() const { return this->mountTargetName_ != nullptr;};
    void deleteMountTargetName() { this->mountTargetName_ = nullptr;};
    inline string mountTargetName() const { DARABONBA_PTR_GET_DEFAULT(mountTargetName_, "") };
    inline DeleteMountTargetRequest& setMountTargetName(string mountTargetName) { DARABONBA_PTR_SET_VALUE(mountTargetName_, mountTargetName) };


  protected:
    // The ID of the edge node.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The name of the mount target.
    // 
    // This parameter is required.
    std::shared_ptr<string> mountTargetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
