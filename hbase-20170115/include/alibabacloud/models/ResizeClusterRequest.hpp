// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class ResizeClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudType, cloudType_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_TO_JSON(CoreDiskQuantity, coreDiskQuantity_);
      DARABONBA_PTR_TO_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_TO_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_TO_JSON(CoreInstanceQuantity, coreInstanceQuantity_);
      DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(IsColdStorage, isColdStorage_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudType, cloudType_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_FROM_JSON(CoreDiskQuantity, coreDiskQuantity_);
      DARABONBA_PTR_FROM_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_FROM_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceQuantity, coreInstanceQuantity_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(IsColdStorage, isColdStorage_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ResizeClusterRequest() = default ;
    ResizeClusterRequest(const ResizeClusterRequest &) = default ;
    ResizeClusterRequest(ResizeClusterRequest &&) = default ;
    ResizeClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeClusterRequest() = default ;
    ResizeClusterRequest& operator=(const ResizeClusterRequest &) = default ;
    ResizeClusterRequest& operator=(ResizeClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->cloudType_ == nullptr && return this->clusterId_ == nullptr && return this->coldStorageSize_ == nullptr && return this->coreDiskQuantity_ == nullptr && return this->coreDiskSize_ == nullptr
        && return this->coreDiskType_ == nullptr && return this->coreInstanceQuantity_ == nullptr && return this->coreInstanceType_ == nullptr && return this->engine_ == nullptr && return this->isColdStorage_ == nullptr
        && return this->payType_ == nullptr && return this->regionId_ == nullptr && return this->upgradeType_ == nullptr && return this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ResizeClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudType Field Functions 
    bool hasCloudType() const { return this->cloudType_ != nullptr;};
    void deleteCloudType() { this->cloudType_ = nullptr;};
    inline string cloudType() const { DARABONBA_PTR_GET_DEFAULT(cloudType_, "") };
    inline ResizeClusterRequest& setCloudType(string cloudType) { DARABONBA_PTR_SET_VALUE(cloudType_, cloudType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ResizeClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline string coldStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, "") };
    inline ResizeClusterRequest& setColdStorageSize(string coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


    // coreDiskQuantity Field Functions 
    bool hasCoreDiskQuantity() const { return this->coreDiskQuantity_ != nullptr;};
    void deleteCoreDiskQuantity() { this->coreDiskQuantity_ = nullptr;};
    inline string coreDiskQuantity() const { DARABONBA_PTR_GET_DEFAULT(coreDiskQuantity_, "") };
    inline ResizeClusterRequest& setCoreDiskQuantity(string coreDiskQuantity) { DARABONBA_PTR_SET_VALUE(coreDiskQuantity_, coreDiskQuantity) };


    // coreDiskSize Field Functions 
    bool hasCoreDiskSize() const { return this->coreDiskSize_ != nullptr;};
    void deleteCoreDiskSize() { this->coreDiskSize_ = nullptr;};
    inline string coreDiskSize() const { DARABONBA_PTR_GET_DEFAULT(coreDiskSize_, "") };
    inline ResizeClusterRequest& setCoreDiskSize(string coreDiskSize) { DARABONBA_PTR_SET_VALUE(coreDiskSize_, coreDiskSize) };


    // coreDiskType Field Functions 
    bool hasCoreDiskType() const { return this->coreDiskType_ != nullptr;};
    void deleteCoreDiskType() { this->coreDiskType_ = nullptr;};
    inline string coreDiskType() const { DARABONBA_PTR_GET_DEFAULT(coreDiskType_, "") };
    inline ResizeClusterRequest& setCoreDiskType(string coreDiskType) { DARABONBA_PTR_SET_VALUE(coreDiskType_, coreDiskType) };


    // coreInstanceQuantity Field Functions 
    bool hasCoreInstanceQuantity() const { return this->coreInstanceQuantity_ != nullptr;};
    void deleteCoreInstanceQuantity() { this->coreInstanceQuantity_ = nullptr;};
    inline string coreInstanceQuantity() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceQuantity_, "") };
    inline ResizeClusterRequest& setCoreInstanceQuantity(string coreInstanceQuantity) { DARABONBA_PTR_SET_VALUE(coreInstanceQuantity_, coreInstanceQuantity) };


    // coreInstanceType Field Functions 
    bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
    void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
    inline string coreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
    inline ResizeClusterRequest& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ResizeClusterRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // isColdStorage Field Functions 
    bool hasIsColdStorage() const { return this->isColdStorage_ != nullptr;};
    void deleteIsColdStorage() { this->isColdStorage_ = nullptr;};
    inline string isColdStorage() const { DARABONBA_PTR_GET_DEFAULT(isColdStorage_, "") };
    inline ResizeClusterRequest& setIsColdStorage(string isColdStorage) { DARABONBA_PTR_SET_VALUE(isColdStorage_, isColdStorage) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ResizeClusterRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResizeClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline string upgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, "") };
    inline ResizeClusterRequest& setUpgradeType(string upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ResizeClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cloudType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> coldStorageSize_ = nullptr;
    std::shared_ptr<string> coreDiskQuantity_ = nullptr;
    std::shared_ptr<string> coreDiskSize_ = nullptr;
    std::shared_ptr<string> coreDiskType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> coreInstanceQuantity_ = nullptr;
    std::shared_ptr<string> coreInstanceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> isColdStorage_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> upgradeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
