// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERUMUPLOADFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERUMUPLOADFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteRumUploadFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRumUploadFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchItems, batchItems_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(Workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRumUploadFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchItems, batchItems_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
    };
    DeleteRumUploadFileRequest() = default ;
    DeleteRumUploadFileRequest(const DeleteRumUploadFileRequest &) = default ;
    DeleteRumUploadFileRequest(DeleteRumUploadFileRequest &&) = default ;
    DeleteRumUploadFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRumUploadFileRequest() = default ;
    DeleteRumUploadFileRequest& operator=(const DeleteRumUploadFileRequest &) = default ;
    DeleteRumUploadFileRequest& operator=(DeleteRumUploadFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchItems_ != nullptr
        && this->fileName_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr && this->serviceId_ != nullptr && this->uuid_ != nullptr
        && this->versionId_ != nullptr && this->workspace_ != nullptr; };
    // batchItems Field Functions 
    bool hasBatchItems() const { return this->batchItems_ != nullptr;};
    void deleteBatchItems() { this->batchItems_ = nullptr;};
    inline string batchItems() const { DARABONBA_PTR_GET_DEFAULT(batchItems_, "") };
    inline DeleteRumUploadFileRequest& setBatchItems(string batchItems) { DARABONBA_PTR_SET_VALUE(batchItems_, batchItems) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DeleteRumUploadFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DeleteRumUploadFileRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRumUploadFileRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DeleteRumUploadFileRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DeleteRumUploadFileRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline DeleteRumUploadFileRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline DeleteRumUploadFileRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Information of files to be deleted in JSON array format. If a single file needs to be deleted, this field should be left empty. If multiple files need to be deleted, just fill in this field.
    std::shared_ptr<string> batchItems_ = nullptr;
    // The file name, with the extension.
    std::shared_ptr<string> fileName_ = nullptr;
    // The application ID.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    // The file ID.
    std::shared_ptr<string> uuid_ = nullptr;
    // The version number of the file.
    std::shared_ptr<string> versionId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
