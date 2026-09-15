// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTLESSSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTLESSSCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAgentlessScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentlessScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSelectionType, assetSelectionType_);
      DARABONBA_PTR_TO_JSON(AutoDeleteDays, autoDeleteDays_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseAfterScan, releaseAfterScan_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ScanDataDisk, scanDataDisk_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentlessScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSelectionType, assetSelectionType_);
      DARABONBA_PTR_FROM_JSON(AutoDeleteDays, autoDeleteDays_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseAfterScan, releaseAfterScan_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ScanDataDisk, scanDataDisk_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    CreateAgentlessScanTaskRequest() = default ;
    CreateAgentlessScanTaskRequest(const CreateAgentlessScanTaskRequest &) = default ;
    CreateAgentlessScanTaskRequest(CreateAgentlessScanTaskRequest &&) = default ;
    CreateAgentlessScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentlessScanTaskRequest() = default ;
    CreateAgentlessScanTaskRequest& operator=(const CreateAgentlessScanTaskRequest &) = default ;
    CreateAgentlessScanTaskRequest& operator=(CreateAgentlessScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(OriginImageName, originImageName_);
        DARABONBA_PTR_TO_JSON(OutputImageName, outputImageName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VulnerabilityIds, vulnerabilityIds_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(OriginImageName, originImageName_);
        DARABONBA_PTR_FROM_JSON(OutputImageName, outputImageName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VulnerabilityIds, vulnerabilityIds_);
      };
      Targets() = default ;
      Targets(const Targets &) = default ;
      Targets(Targets &&) = default ;
      Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Targets() = default ;
      Targets& operator=(const Targets &) = default ;
      Targets& operator=(Targets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr
        && this->originImageName_ == nullptr && this->outputImageName_ == nullptr && this->regionId_ == nullptr && this->vulnerabilityIds_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Targets& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // originImageName Field Functions 
      bool hasOriginImageName() const { return this->originImageName_ != nullptr;};
      void deleteOriginImageName() { this->originImageName_ = nullptr;};
      inline string getOriginImageName() const { DARABONBA_PTR_GET_DEFAULT(originImageName_, "") };
      inline Targets& setOriginImageName(string originImageName) { DARABONBA_PTR_SET_VALUE(originImageName_, originImageName) };


      // outputImageName Field Functions 
      bool hasOutputImageName() const { return this->outputImageName_ != nullptr;};
      void deleteOutputImageName() { this->outputImageName_ = nullptr;};
      inline string getOutputImageName() const { DARABONBA_PTR_GET_DEFAULT(outputImageName_, "") };
      inline Targets& setOutputImageName(string outputImageName) { DARABONBA_PTR_SET_VALUE(outputImageName_, outputImageName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Targets& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vulnerabilityIds Field Functions 
      bool hasVulnerabilityIds() const { return this->vulnerabilityIds_ != nullptr;};
      void deleteVulnerabilityIds() { this->vulnerabilityIds_ = nullptr;};
      inline const vector<string> & getVulnerabilityIds() const { DARABONBA_PTR_GET_CONST(vulnerabilityIds_, vector<string>) };
      inline vector<string> getVulnerabilityIds() { DARABONBA_PTR_GET(vulnerabilityIds_, vector<string>) };
      inline Targets& setVulnerabilityIds(const vector<string> & vulnerabilityIds) { DARABONBA_PTR_SET_VALUE(vulnerabilityIds_, vulnerabilityIds) };
      inline Targets& setVulnerabilityIds(vector<string> && vulnerabilityIds) { DARABONBA_PTR_SET_RVALUE(vulnerabilityIds_, vulnerabilityIds) };


    protected:
      // The ID of the source ECS custom image to be remediated. The image must be located in the region specified by RegionId of this target.
      shared_ptr<string> imageId_ {};
      // The name of the source ECS custom image to be remediated.
      shared_ptr<string> originImageName_ {};
      // The name of the ECS image generated after remediation.
      shared_ptr<string> outputImageName_ {};
      // The region ID of the source image to be remediated, such as cn-hangzhou.
      shared_ptr<string> regionId_ {};
      // The list of vulnerability identifiers to be fixed. At least one vulnerability identifier must be specified, and each identifier must be unique and non-empty.
      shared_ptr<vector<string>> vulnerabilityIds_ {};
    };

    virtual bool empty() const override { return this->assetSelectionType_ == nullptr
        && this->autoDeleteDays_ == nullptr && this->clientToken_ == nullptr && this->from_ == nullptr && this->regionId_ == nullptr && this->releaseAfterScan_ == nullptr
        && this->resourceRegionId_ == nullptr && this->scanDataDisk_ == nullptr && this->targetType_ == nullptr && this->targets_ == nullptr && this->uuidList_ == nullptr; };
    // assetSelectionType Field Functions 
    bool hasAssetSelectionType() const { return this->assetSelectionType_ != nullptr;};
    void deleteAssetSelectionType() { this->assetSelectionType_ = nullptr;};
    inline string getAssetSelectionType() const { DARABONBA_PTR_GET_DEFAULT(assetSelectionType_, "") };
    inline CreateAgentlessScanTaskRequest& setAssetSelectionType(string assetSelectionType) { DARABONBA_PTR_SET_VALUE(assetSelectionType_, assetSelectionType) };


    // autoDeleteDays Field Functions 
    bool hasAutoDeleteDays() const { return this->autoDeleteDays_ != nullptr;};
    void deleteAutoDeleteDays() { this->autoDeleteDays_ = nullptr;};
    inline int32_t getAutoDeleteDays() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteDays_, 0) };
    inline CreateAgentlessScanTaskRequest& setAutoDeleteDays(int32_t autoDeleteDays) { DARABONBA_PTR_SET_VALUE(autoDeleteDays_, autoDeleteDays) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAgentlessScanTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline CreateAgentlessScanTaskRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAgentlessScanTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseAfterScan Field Functions 
    bool hasReleaseAfterScan() const { return this->releaseAfterScan_ != nullptr;};
    void deleteReleaseAfterScan() { this->releaseAfterScan_ = nullptr;};
    inline bool getReleaseAfterScan() const { DARABONBA_PTR_GET_DEFAULT(releaseAfterScan_, false) };
    inline CreateAgentlessScanTaskRequest& setReleaseAfterScan(bool releaseAfterScan) { DARABONBA_PTR_SET_VALUE(releaseAfterScan_, releaseAfterScan) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline CreateAgentlessScanTaskRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // scanDataDisk Field Functions 
    bool hasScanDataDisk() const { return this->scanDataDisk_ != nullptr;};
    void deleteScanDataDisk() { this->scanDataDisk_ = nullptr;};
    inline bool getScanDataDisk() const { DARABONBA_PTR_GET_DEFAULT(scanDataDisk_, false) };
    inline CreateAgentlessScanTaskRequest& setScanDataDisk(bool scanDataDisk) { DARABONBA_PTR_SET_VALUE(scanDataDisk_, scanDataDisk) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline CreateAgentlessScanTaskRequest& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<CreateAgentlessScanTaskRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<CreateAgentlessScanTaskRequest::Targets>) };
    inline vector<CreateAgentlessScanTaskRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<CreateAgentlessScanTaskRequest::Targets>) };
    inline CreateAgentlessScanTaskRequest& setTargets(const vector<CreateAgentlessScanTaskRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline CreateAgentlessScanTaskRequest& setTargets(vector<CreateAgentlessScanTaskRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline CreateAgentlessScanTaskRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline CreateAgentlessScanTaskRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The asset selection identifier.
    shared_ptr<string> assetSelectionType_ {};
    // The image retention period, in days. This parameter takes effect only for host detection. It does not take effect for user snapshot detection or user custom image detection.
    shared_ptr<int32_t> autoDeleteDays_ {};
    // The idempotency key.
    shared_ptr<string> clientToken_ {};
    // The source of the API call, which is used to collect statistics on scan task volume and scan data volume by source. If this parameter is not specified, the value is empty.
    shared_ptr<string> from_ {};
    // The region ID, which is usually automatically populated by the gateway.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable the cost-saving mode. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> releaseAfterScan_ {};
    // The region ID of the resource to be detected, such as cn-hangzhou.
    shared_ptr<string> resourceRegionId_ {};
    // Specifies whether to detect data cloud disks. Valid values:
    // 
    // - **true**: Detected.
    // - **false**: Not detected.
    shared_ptr<bool> scanDataDisk_ {};
    // The target type. Valid values:
    // 
    // - **1**: Host detection - detection by snapshot.
    // - **2**: Host detection - detection by image.
    // - **3**: User snapshot detection.
    // - **2**: User custom image detection.
    // 
    // This parameter is required.
    shared_ptr<int32_t> targetType_ {};
    // The list of targets for image security remediation. Each target specifies the source image, the region, the name of the remediated image, and the vulnerability identifiers to be fixed.
    shared_ptr<vector<CreateAgentlessScanTaskRequest::Targets>> targets_ {};
    // The UUIDs of the assets to be detected.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to obtain the UUIDs of servers.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
