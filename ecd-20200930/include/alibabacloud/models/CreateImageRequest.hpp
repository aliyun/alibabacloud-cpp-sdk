// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCleanUserdata, autoCleanUserdata_);
      DARABONBA_PTR_TO_JSON(DataSnapshotIds, dataSnapshotIds_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageResourceType, imageResourceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotIds, snapshotIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCleanUserdata, autoCleanUserdata_);
      DARABONBA_PTR_FROM_JSON(DataSnapshotIds, dataSnapshotIds_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageResourceType, imageResourceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotIds, snapshotIds_);
    };
    CreateImageRequest() = default ;
    CreateImageRequest(const CreateImageRequest &) = default ;
    CreateImageRequest(CreateImageRequest &&) = default ;
    CreateImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageRequest() = default ;
    CreateImageRequest& operator=(const CreateImageRequest &) = default ;
    CreateImageRequest& operator=(CreateImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCleanUserdata_ == nullptr
        && return this->dataSnapshotIds_ == nullptr && return this->description_ == nullptr && return this->desktopId_ == nullptr && return this->diskType_ == nullptr && return this->imageName_ == nullptr
        && return this->imageResourceType_ == nullptr && return this->regionId_ == nullptr && return this->snapshotId_ == nullptr && return this->snapshotIds_ == nullptr; };
    // autoCleanUserdata Field Functions 
    bool hasAutoCleanUserdata() const { return this->autoCleanUserdata_ != nullptr;};
    void deleteAutoCleanUserdata() { this->autoCleanUserdata_ = nullptr;};
    inline bool autoCleanUserdata() const { DARABONBA_PTR_GET_DEFAULT(autoCleanUserdata_, false) };
    inline CreateImageRequest& setAutoCleanUserdata(bool autoCleanUserdata) { DARABONBA_PTR_SET_VALUE(autoCleanUserdata_, autoCleanUserdata) };


    // dataSnapshotIds Field Functions 
    bool hasDataSnapshotIds() const { return this->dataSnapshotIds_ != nullptr;};
    void deleteDataSnapshotIds() { this->dataSnapshotIds_ = nullptr;};
    inline const vector<string> & dataSnapshotIds() const { DARABONBA_PTR_GET_CONST(dataSnapshotIds_, vector<string>) };
    inline vector<string> dataSnapshotIds() { DARABONBA_PTR_GET(dataSnapshotIds_, vector<string>) };
    inline CreateImageRequest& setDataSnapshotIds(const vector<string> & dataSnapshotIds) { DARABONBA_PTR_SET_VALUE(dataSnapshotIds_, dataSnapshotIds) };
    inline CreateImageRequest& setDataSnapshotIds(vector<string> && dataSnapshotIds) { DARABONBA_PTR_SET_RVALUE(dataSnapshotIds_, dataSnapshotIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline CreateImageRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateImageRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageResourceType Field Functions 
    bool hasImageResourceType() const { return this->imageResourceType_ != nullptr;};
    void deleteImageResourceType() { this->imageResourceType_ = nullptr;};
    inline string imageResourceType() const { DARABONBA_PTR_GET_DEFAULT(imageResourceType_, "") };
    inline CreateImageRequest& setImageResourceType(string imageResourceType) { DARABONBA_PTR_SET_VALUE(imageResourceType_, imageResourceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateImageRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotIds Field Functions 
    bool hasSnapshotIds() const { return this->snapshotIds_ != nullptr;};
    void deleteSnapshotIds() { this->snapshotIds_ = nullptr;};
    inline const vector<string> & snapshotIds() const { DARABONBA_PTR_GET_CONST(snapshotIds_, vector<string>) };
    inline vector<string> snapshotIds() { DARABONBA_PTR_GET(snapshotIds_, vector<string>) };
    inline CreateImageRequest& setSnapshotIds(const vector<string> & snapshotIds) { DARABONBA_PTR_SET_VALUE(snapshotIds_, snapshotIds) };
    inline CreateImageRequest& setSnapshotIds(vector<string> && snapshotIds) { DARABONBA_PTR_SET_RVALUE(snapshotIds_, snapshotIds) };


  protected:
    // Specifies whether to clear private data of users. If you set AutoCleanUserdata to `true`, the custom image clears the data directories, excluding the `Administrator` and `Public` directories, in the `C:\\Users` directory.
    std::shared_ptr<bool> autoCleanUserdata_ = nullptr;
    std::shared_ptr<vector<string>> dataSnapshotIds_ = nullptr;
    // The description of the custom image. The description must be 2 to 256 characters in length. It cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The disk data that is contained in the custom image.
    // 
    // Valid values:
    // 
    // - SYSTEM: only contain data from system disks.
    // - ALL: contain data from system disks and user disks. [default]
    std::shared_ptr<string> diskType_ = nullptr;
    // The name of the image. The name must be 2 to 128 characters in length. The name must start with a letter but cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> imageName_ = nullptr;
    // This parameter is not publicly available.
    std::shared_ptr<string> imageResourceType_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The IDs of the snapshots.
    std::shared_ptr<vector<string>> snapshotIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
