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
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseAfterScan, releaseAfterScan_);
      DARABONBA_PTR_TO_JSON(ScanDataDisk, scanDataDisk_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentlessScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSelectionType, assetSelectionType_);
      DARABONBA_PTR_FROM_JSON(AutoDeleteDays, autoDeleteDays_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseAfterScan, releaseAfterScan_);
      DARABONBA_PTR_FROM_JSON(ScanDataDisk, scanDataDisk_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
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
    virtual bool empty() const override { return this->assetSelectionType_ == nullptr
        && this->autoDeleteDays_ == nullptr && this->clientToken_ == nullptr && this->regionId_ == nullptr && this->releaseAfterScan_ == nullptr && this->scanDataDisk_ == nullptr
        && this->targetType_ == nullptr && this->uuidList_ == nullptr; };
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
    // The image retention period, in days. This parameter takes effect only for host detection and does not take effect for user snapshot detection or user custom image detection.
    shared_ptr<int32_t> autoDeleteDays_ {};
    // The idempotency key.
    shared_ptr<string> clientToken_ {};
    // The region ID of the instance to query. Valid values:
    // 
    // - **cn-hangzhou** (default): China.
    // - **ap-southeast-1**: outside China.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable the cost-saving mode. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> releaseAfterScan_ {};
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
    // The UUIDs of the assets to be detected.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to obtain the UUIDs of servers.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
