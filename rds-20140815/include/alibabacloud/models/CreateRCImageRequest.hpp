// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERCIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateRCImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRCImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRCImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    CreateRCImageRequest() = default ;
    CreateRCImageRequest(const CreateRCImageRequest &) = default ;
    CreateRCImageRequest(CreateRCImageRequest &&) = default ;
    CreateRCImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRCImageRequest() = default ;
    CreateRCImageRequest& operator=(const CreateRCImageRequest &) = default ;
    CreateRCImageRequest& operator=(CreateRCImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageName_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->snapshotId_ == nullptr; };
    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateRCImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRCImageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRCImageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateRCImageRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The name of the custom image.
    shared_ptr<string> imageName_ {};
    // The ID of the RDS Custom instance.
    shared_ptr<string> instanceId_ {};
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The ID of the snapshot from which to create the custom image. You can call the DescribeRCSnapshots operation to query the snapshot ID.
    shared_ptr<string> snapshotId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
