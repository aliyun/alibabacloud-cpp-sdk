// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERUMFILESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERUMFILESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateRumFileStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRumFileStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRumFileStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    UpdateRumFileStatusRequest() = default ;
    UpdateRumFileStatusRequest(const UpdateRumFileStatusRequest &) = default ;
    UpdateRumFileStatusRequest(UpdateRumFileStatusRequest &&) = default ;
    UpdateRumFileStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRumFileStatusRequest() = default ;
    UpdateRumFileStatusRequest& operator=(const UpdateRumFileStatusRequest &) = default ;
    UpdateRumFileStatusRequest& operator=(UpdateRumFileStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->pid_ != nullptr && this->regionId_ != nullptr && this->size_ != nullptr && this->status_ != nullptr && this->uuid_ != nullptr
        && this->versionId_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UpdateRumFileStatusRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline UpdateRumFileStatusRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateRumFileStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline UpdateRumFileStatusRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateRumFileStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UpdateRumFileStatusRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UpdateRumFileStatusRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The file name.
    std::shared_ptr<string> fileName_ = nullptr;
    // The application ID.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The size of the file. Unit: bytes.
    std::shared_ptr<string> size_ = nullptr;
    // The status of the file. Valid values: SUCCESS and INIT.
    std::shared_ptr<string> status_ = nullptr;
    // The unique ID of the file. If you do not set this parameter, the system automatically sets a UUID for you.
    std::shared_ptr<string> uuid_ = nullptr;
    // The version number of the file.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
