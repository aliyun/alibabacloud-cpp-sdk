// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERCSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRCSnapshotRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateRCSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRCSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_TO_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRCSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_FROM_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateRCSnapshotRequest() = default ;
    CreateRCSnapshotRequest(const CreateRCSnapshotRequest &) = default ;
    CreateRCSnapshotRequest(CreateRCSnapshotRequest &&) = default ;
    CreateRCSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRCSnapshotRequest() = default ;
    CreateRCSnapshotRequest& operator=(const CreateRCSnapshotRequest &) = default ;
    CreateRCSnapshotRequest& operator=(CreateRCSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->diskId_ == nullptr && return this->instantAccess_ == nullptr && return this->instantAccessRetentionDays_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->retentionDays_ == nullptr && return this->tag_ == nullptr && return this->zoneId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRCSnapshotRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline CreateRCSnapshotRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // instantAccess Field Functions 
    bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
    void deleteInstantAccess() { this->instantAccess_ = nullptr;};
    inline bool instantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
    inline CreateRCSnapshotRequest& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


    // instantAccessRetentionDays Field Functions 
    bool hasInstantAccessRetentionDays() const { return this->instantAccessRetentionDays_ != nullptr;};
    void deleteInstantAccessRetentionDays() { this->instantAccessRetentionDays_ = nullptr;};
    inline int32_t instantAccessRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(instantAccessRetentionDays_, 0) };
    inline CreateRCSnapshotRequest& setInstantAccessRetentionDays(int32_t instantAccessRetentionDays) { DARABONBA_PTR_SET_VALUE(instantAccessRetentionDays_, instantAccessRetentionDays) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRCSnapshotRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRCSnapshotRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline CreateRCSnapshotRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateRCSnapshotRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateRCSnapshotRequestTag>) };
    inline vector<CreateRCSnapshotRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateRCSnapshotRequestTag>) };
    inline CreateRCSnapshotRequest& setTag(const vector<CreateRCSnapshotRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRCSnapshotRequest& setTag(vector<CreateRCSnapshotRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateRCSnapshotRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The snapshot description. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    // 
    // By default, this parameter is left empty.
    std::shared_ptr<string> description_ = nullptr;
    // The cloud disk ID.
    std::shared_ptr<string> diskId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<bool> instantAccess_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> instantAccessRetentionDays_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The retention period of the snapshot. Valid values: 1 to 65536. Unit: days. The snapshot is automatically released when its retention period expires.
    // 
    // By default, this parameter is left empty, which specifies that the snapshot is not automatically released.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
    std::shared_ptr<vector<CreateRCSnapshotRequestTag>> tag_ = nullptr;
    // This parameter has been deprecated.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
