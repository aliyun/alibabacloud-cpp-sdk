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
      DARABONBA_PTR_TO_JSON(ReleaseAfterScan, releaseAfterScan_);
      DARABONBA_PTR_TO_JSON(ScanDataDisk, scanDataDisk_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentlessScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSelectionType, assetSelectionType_);
      DARABONBA_PTR_FROM_JSON(AutoDeleteDays, autoDeleteDays_);
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
        && return this->autoDeleteDays_ == nullptr && return this->releaseAfterScan_ == nullptr && return this->scanDataDisk_ == nullptr && return this->targetType_ == nullptr && return this->uuidList_ == nullptr; };
    // assetSelectionType Field Functions 
    bool hasAssetSelectionType() const { return this->assetSelectionType_ != nullptr;};
    void deleteAssetSelectionType() { this->assetSelectionType_ = nullptr;};
    inline string assetSelectionType() const { DARABONBA_PTR_GET_DEFAULT(assetSelectionType_, "") };
    inline CreateAgentlessScanTaskRequest& setAssetSelectionType(string assetSelectionType) { DARABONBA_PTR_SET_VALUE(assetSelectionType_, assetSelectionType) };


    // autoDeleteDays Field Functions 
    bool hasAutoDeleteDays() const { return this->autoDeleteDays_ != nullptr;};
    void deleteAutoDeleteDays() { this->autoDeleteDays_ = nullptr;};
    inline int32_t autoDeleteDays() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteDays_, 0) };
    inline CreateAgentlessScanTaskRequest& setAutoDeleteDays(int32_t autoDeleteDays) { DARABONBA_PTR_SET_VALUE(autoDeleteDays_, autoDeleteDays) };


    // releaseAfterScan Field Functions 
    bool hasReleaseAfterScan() const { return this->releaseAfterScan_ != nullptr;};
    void deleteReleaseAfterScan() { this->releaseAfterScan_ = nullptr;};
    inline bool releaseAfterScan() const { DARABONBA_PTR_GET_DEFAULT(releaseAfterScan_, false) };
    inline CreateAgentlessScanTaskRequest& setReleaseAfterScan(bool releaseAfterScan) { DARABONBA_PTR_SET_VALUE(releaseAfterScan_, releaseAfterScan) };


    // scanDataDisk Field Functions 
    bool hasScanDataDisk() const { return this->scanDataDisk_ != nullptr;};
    void deleteScanDataDisk() { this->scanDataDisk_ = nullptr;};
    inline bool scanDataDisk() const { DARABONBA_PTR_GET_DEFAULT(scanDataDisk_, false) };
    inline CreateAgentlessScanTaskRequest& setScanDataDisk(bool scanDataDisk) { DARABONBA_PTR_SET_VALUE(scanDataDisk_, scanDataDisk) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline CreateAgentlessScanTaskRequest& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline CreateAgentlessScanTaskRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline CreateAgentlessScanTaskRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // Identification of asset selection.
    std::shared_ptr<string> assetSelectionType_ = nullptr;
    // The retention period of images. Unit: days.
    std::shared_ptr<int32_t> autoDeleteDays_ = nullptr;
    // Specifies whether to enable the cost-saving mode. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> releaseAfterScan_ = nullptr;
    // Specifies whether to check data disks. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> scanDataDisk_ = nullptr;
    // The type of the detection object. Valid values:
    // 
    // *   **2**: image
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> targetType_ = nullptr;
    // The UUIDs of the assets on which you want to run the detection task.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
