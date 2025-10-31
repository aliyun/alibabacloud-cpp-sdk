// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ListImagesResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(CopyTime, copyTime_);
      DARABONBA_PTR_TO_JSON(ExportTime, exportTime_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceBackupUid, sourceBackupUid_);
      DARABONBA_PTR_TO_JSON(SourceImageUid, sourceImageUid_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VsmDigest, vsmDigest_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(CopyTime, copyTime_);
      DARABONBA_PTR_FROM_JSON(ExportTime, exportTime_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceBackupUid, sourceBackupUid_);
      DARABONBA_PTR_FROM_JSON(SourceImageUid, sourceImageUid_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VsmDigest, vsmDigest_);
    };
    ListImagesResponseBodyImages() = default ;
    ListImagesResponseBodyImages(const ListImagesResponseBodyImages &) = default ;
    ListImagesResponseBodyImages(ListImagesResponseBodyImages &&) = default ;
    ListImagesResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesResponseBodyImages() = default ;
    ListImagesResponseBodyImages& operator=(const ListImagesResponseBodyImages &) = default ;
    ListImagesResponseBodyImages& operator=(ListImagesResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && return this->copyTime_ == nullptr && return this->exportTime_ == nullptr && return this->imageId_ == nullptr && return this->instanceId_ == nullptr && return this->mode_ == nullptr
        && return this->regionId_ == nullptr && return this->remark_ == nullptr && return this->sourceBackupUid_ == nullptr && return this->sourceImageUid_ == nullptr && return this->sourceInstanceId_ == nullptr
        && return this->sourceRegionId_ == nullptr && return this->status_ == nullptr && return this->vsmDigest_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ListImagesResponseBodyImages& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // copyTime Field Functions 
    bool hasCopyTime() const { return this->copyTime_ != nullptr;};
    void deleteCopyTime() { this->copyTime_ = nullptr;};
    inline string copyTime() const { DARABONBA_PTR_GET_DEFAULT(copyTime_, "") };
    inline ListImagesResponseBodyImages& setCopyTime(string copyTime) { DARABONBA_PTR_SET_VALUE(copyTime_, copyTime) };


    // exportTime Field Functions 
    bool hasExportTime() const { return this->exportTime_ != nullptr;};
    void deleteExportTime() { this->exportTime_ = nullptr;};
    inline int64_t exportTime() const { DARABONBA_PTR_GET_DEFAULT(exportTime_, 0L) };
    inline ListImagesResponseBodyImages& setExportTime(int64_t exportTime) { DARABONBA_PTR_SET_VALUE(exportTime_, exportTime) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImagesResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListImagesResponseBodyImages& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListImagesResponseBodyImages& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListImagesResponseBodyImages& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListImagesResponseBodyImages& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sourceBackupUid Field Functions 
    bool hasSourceBackupUid() const { return this->sourceBackupUid_ != nullptr;};
    void deleteSourceBackupUid() { this->sourceBackupUid_ = nullptr;};
    inline string sourceBackupUid() const { DARABONBA_PTR_GET_DEFAULT(sourceBackupUid_, "") };
    inline ListImagesResponseBodyImages& setSourceBackupUid(string sourceBackupUid) { DARABONBA_PTR_SET_VALUE(sourceBackupUid_, sourceBackupUid) };


    // sourceImageUid Field Functions 
    bool hasSourceImageUid() const { return this->sourceImageUid_ != nullptr;};
    void deleteSourceImageUid() { this->sourceImageUid_ = nullptr;};
    inline string sourceImageUid() const { DARABONBA_PTR_GET_DEFAULT(sourceImageUid_, "") };
    inline ListImagesResponseBodyImages& setSourceImageUid(string sourceImageUid) { DARABONBA_PTR_SET_VALUE(sourceImageUid_, sourceImageUid) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string sourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline ListImagesResponseBodyImages& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string sourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline ListImagesResponseBodyImages& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListImagesResponseBodyImages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vsmDigest Field Functions 
    bool hasVsmDigest() const { return this->vsmDigest_ != nullptr;};
    void deleteVsmDigest() { this->vsmDigest_ = nullptr;};
    inline string vsmDigest() const { DARABONBA_PTR_GET_DEFAULT(vsmDigest_, "") };
    inline ListImagesResponseBodyImages& setVsmDigest(string vsmDigest) { DARABONBA_PTR_SET_VALUE(vsmDigest_, vsmDigest) };


  protected:
    // The ID of the backup.
    std::shared_ptr<string> backupId_ = nullptr;
    // The time when the image was copied. Unit: milliseconds. The value is a UNIX timestamp.
    std::shared_ptr<string> copyTime_ = nullptr;
    // The time when the image was generated. Unit: milliseconds. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> exportTime_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the hardware security module (HSM).
    std::shared_ptr<string> instanceId_ = nullptr;
    // The image generation mode. Valid values:
    // 
    // *   PERIODIC: It is automatically generated.
    // *   MANUAL: It is manually generated.
    std::shared_ptr<string> mode_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The description of the backup.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the source backup.
    std::shared_ptr<string> sourceBackupUid_ = nullptr;
    // The ID of the source image.
    std::shared_ptr<string> sourceImageUid_ = nullptr;
    // The ID of the source HSM.
    std::shared_ptr<string> sourceInstanceId_ = nullptr;
    // The ID of the region in which the source image resides.
    std::shared_ptr<string> sourceRegionId_ = nullptr;
    // The status of the image. Valid values:
    // 
    // *   NEW: It is disabled.
    // *   DELETED: It is deleted.
    // *   CREATING: It is being created.
    // *   NORMAL: It is created.
    std::shared_ptr<string> status_ = nullptr;
    // The digest of the HSM.
    std::shared_ptr<string> vsmDigest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
