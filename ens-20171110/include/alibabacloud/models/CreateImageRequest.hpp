// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteAfterImageUpload, deleteAfterImageUpload_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(TargetOSSRegionId, targetOSSRegionId_);
      DARABONBA_PTR_TO_JSON(WithDataDisks, withDataDisks_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteAfterImageUpload, deleteAfterImageUpload_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(TargetOSSRegionId, targetOSSRegionId_);
      DARABONBA_PTR_FROM_JSON(WithDataDisks, withDataDisks_);
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
    virtual bool empty() const override { return this->deleteAfterImageUpload_ == nullptr
        && return this->imageName_ == nullptr && return this->instanceId_ == nullptr && return this->snapshotId_ == nullptr && return this->targetOSSRegionId_ == nullptr && return this->withDataDisks_ == nullptr; };
    // deleteAfterImageUpload Field Functions 
    bool hasDeleteAfterImageUpload() const { return this->deleteAfterImageUpload_ != nullptr;};
    void deleteDeleteAfterImageUpload() { this->deleteAfterImageUpload_ = nullptr;};
    inline string deleteAfterImageUpload() const { DARABONBA_PTR_GET_DEFAULT(deleteAfterImageUpload_, "") };
    inline CreateImageRequest& setDeleteAfterImageUpload(string deleteAfterImageUpload) { DARABONBA_PTR_SET_VALUE(deleteAfterImageUpload_, deleteAfterImageUpload) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateImageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateImageRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // targetOSSRegionId Field Functions 
    bool hasTargetOSSRegionId() const { return this->targetOSSRegionId_ != nullptr;};
    void deleteTargetOSSRegionId() { this->targetOSSRegionId_ = nullptr;};
    inline string targetOSSRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetOSSRegionId_, "") };
    inline CreateImageRequest& setTargetOSSRegionId(string targetOSSRegionId) { DARABONBA_PTR_SET_VALUE(targetOSSRegionId_, targetOSSRegionId) };


    // withDataDisks Field Functions 
    bool hasWithDataDisks() const { return this->withDataDisks_ != nullptr;};
    void deleteWithDataDisks() { this->withDataDisks_ = nullptr;};
    inline bool withDataDisks() const { DARABONBA_PTR_GET_DEFAULT(withDataDisks_, false) };
    inline CreateImageRequest& setWithDataDisks(bool withDataDisks) { DARABONBA_PTR_SET_VALUE(withDataDisks_, withDataDisks) };


  protected:
    // Specifies whether to automatically release the instance after the image is packaged and uploaded. Only image builders are supported. Default value: false. Valid values:
    // 
    // *   true: The image is released when the instance is released.
    // *   false: The image is retained when the instance is released.
    // *   If you leave this property empty, false is used by default.
    std::shared_ptr<string> deleteAfterImageUpload_ = nullptr;
    // The name of the image. The name must be 2 to 128 characters in length. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-). It must start with a letter but cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> imageName_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The region of the destination OSS bucket where the image is to be stored.
    std::shared_ptr<string> targetOSSRegionId_ = nullptr;
    // Specifies whether to include data disk snapshots in the custom image.
    std::shared_ptr<bool> withDataDisks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
