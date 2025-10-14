// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEVOLUMERESPONSEBODYSTORAGEVOLUMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEVOLUMERESPONSEBODYSTORAGEVOLUMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeStorageVolumeResponseBodyStorageVolumes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageVolumeResponseBodyStorageVolumes& obj) { 
      DARABONBA_PTR_TO_JSON(AuthProtocol, authProtocol_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageGatewayId, storageGatewayId_);
      DARABONBA_PTR_TO_JSON(StorageId, storageId_);
      DARABONBA_PTR_TO_JSON(StorageVolumeId, storageVolumeId_);
      DARABONBA_PTR_TO_JSON(StorageVolumeName, storageVolumeName_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageVolumeResponseBodyStorageVolumes& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthProtocol, authProtocol_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageGatewayId, storageGatewayId_);
      DARABONBA_PTR_FROM_JSON(StorageId, storageId_);
      DARABONBA_PTR_FROM_JSON(StorageVolumeId, storageVolumeId_);
      DARABONBA_PTR_FROM_JSON(StorageVolumeName, storageVolumeName_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
    };
    DescribeStorageVolumeResponseBodyStorageVolumes() = default ;
    DescribeStorageVolumeResponseBodyStorageVolumes(const DescribeStorageVolumeResponseBodyStorageVolumes &) = default ;
    DescribeStorageVolumeResponseBodyStorageVolumes(DescribeStorageVolumeResponseBodyStorageVolumes &&) = default ;
    DescribeStorageVolumeResponseBodyStorageVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageVolumeResponseBodyStorageVolumes() = default ;
    DescribeStorageVolumeResponseBodyStorageVolumes& operator=(const DescribeStorageVolumeResponseBodyStorageVolumes &) = default ;
    DescribeStorageVolumeResponseBodyStorageVolumes& operator=(DescribeStorageVolumeResponseBodyStorageVolumes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authProtocol_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->ensRegionId_ == nullptr && return this->isAuth_ == nullptr && return this->isEnable_ == nullptr
        && return this->status_ == nullptr && return this->storageGatewayId_ == nullptr && return this->storageId_ == nullptr && return this->storageVolumeId_ == nullptr && return this->storageVolumeName_ == nullptr
        && return this->targetName_ == nullptr; };
    // authProtocol Field Functions 
    bool hasAuthProtocol() const { return this->authProtocol_ != nullptr;};
    void deleteAuthProtocol() { this->authProtocol_ = nullptr;};
    inline string authProtocol() const { DARABONBA_PTR_GET_DEFAULT(authProtocol_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setAuthProtocol(string authProtocol) { DARABONBA_PTR_SET_VALUE(authProtocol_, authProtocol) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // isAuth Field Functions 
    bool hasIsAuth() const { return this->isAuth_ != nullptr;};
    void deleteIsAuth() { this->isAuth_ = nullptr;};
    inline int32_t isAuth() const { DARABONBA_PTR_GET_DEFAULT(isAuth_, 0) };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setIsAuth(int32_t isAuth) { DARABONBA_PTR_SET_VALUE(isAuth_, isAuth) };


    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline int32_t isEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, 0) };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setIsEnable(int32_t isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageGatewayId Field Functions 
    bool hasStorageGatewayId() const { return this->storageGatewayId_ != nullptr;};
    void deleteStorageGatewayId() { this->storageGatewayId_ = nullptr;};
    inline string storageGatewayId() const { DARABONBA_PTR_GET_DEFAULT(storageGatewayId_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setStorageGatewayId(string storageGatewayId) { DARABONBA_PTR_SET_VALUE(storageGatewayId_, storageGatewayId) };


    // storageId Field Functions 
    bool hasStorageId() const { return this->storageId_ != nullptr;};
    void deleteStorageId() { this->storageId_ = nullptr;};
    inline string storageId() const { DARABONBA_PTR_GET_DEFAULT(storageId_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setStorageId(string storageId) { DARABONBA_PTR_SET_VALUE(storageId_, storageId) };


    // storageVolumeId Field Functions 
    bool hasStorageVolumeId() const { return this->storageVolumeId_ != nullptr;};
    void deleteStorageVolumeId() { this->storageVolumeId_ = nullptr;};
    inline string storageVolumeId() const { DARABONBA_PTR_GET_DEFAULT(storageVolumeId_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setStorageVolumeId(string storageVolumeId) { DARABONBA_PTR_SET_VALUE(storageVolumeId_, storageVolumeId) };


    // storageVolumeName Field Functions 
    bool hasStorageVolumeName() const { return this->storageVolumeName_ != nullptr;};
    void deleteStorageVolumeName() { this->storageVolumeName_ = nullptr;};
    inline string storageVolumeName() const { DARABONBA_PTR_GET_DEFAULT(storageVolumeName_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setStorageVolumeName(string storageVolumeName) { DARABONBA_PTR_SET_VALUE(storageVolumeName_, storageVolumeName) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline DescribeStorageVolumeResponseBodyStorageVolumes& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


  protected:
    // The authentication protocol. The value is set to **CHAP**.
    std::shared_ptr<string> authProtocol_ = nullptr;
    // The time when the volume was created. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the volume.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // Indicates whether authentication is enabled. Valid values:
    // 
    // *   **1**: Authentication is enabled.
    // *   **0** (default): Authentication is disabled.
    std::shared_ptr<int32_t> isAuth_ = nullptr;
    // Indicates whether the volume is enabled. Valid values:
    // 
    // *   **1** (default): The volume is enabled.
    // *   **0**: The volume is disabled.
    std::shared_ptr<int32_t> isEnable_ = nullptr;
    // The status of the volume. Valid values:
    // 
    // *   creating
    // *   available
    // *   deleting
    // *   deleted
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the storage gateway.
    std::shared_ptr<string> storageGatewayId_ = nullptr;
    // The ID of the storage medium.
    std::shared_ptr<string> storageId_ = nullptr;
    // The ID of the volume.
    std::shared_ptr<string> storageVolumeId_ = nullptr;
    // The name of the volume.
    std::shared_ptr<string> storageVolumeName_ = nullptr;
    // The destination of the volume.
    std::shared_ptr<string> targetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
