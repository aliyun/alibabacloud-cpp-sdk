// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ScanRegionId, scanRegionId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ScanRegionId, scanRegionId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListAgentlessAssetRequest() = default ;
    ListAgentlessAssetRequest(const ListAgentlessAssetRequest &) = default ;
    ListAgentlessAssetRequest(ListAgentlessAssetRequest &&) = default ;
    ListAgentlessAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessAssetRequest() = default ;
    ListAgentlessAssetRequest& operator=(const ListAgentlessAssetRequest &) = default ;
    ListAgentlessAssetRequest& operator=(ListAgentlessAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->diskType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->pageSize_ == nullptr && return this->platform_ == nullptr
        && return this->scanRegionId_ == nullptr && return this->targetType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAgentlessAssetRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline ListAgentlessAssetRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAgentlessAssetRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListAgentlessAssetRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentlessAssetRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListAgentlessAssetRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // scanRegionId Field Functions 
    bool hasScanRegionId() const { return this->scanRegionId_ != nullptr;};
    void deleteScanRegionId() { this->scanRegionId_ = nullptr;};
    inline string scanRegionId() const { DARABONBA_PTR_GET_DEFAULT(scanRegionId_, "") };
    inline ListAgentlessAssetRequest& setScanRegionId(string scanRegionId) { DARABONBA_PTR_SET_VALUE(scanRegionId_, scanRegionId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline ListAgentlessAssetRequest& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The page number in a paginated query.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The type of the cloud disk. Values:
    // 
    // - **system**: System disk
    // 
    // - **data**: Data disk
    std::shared_ptr<string> diskType_ = nullptr;
    // The ID of the asset instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the asset instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The maximum number of items to return per page in a paginated query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the operating system.
    std::shared_ptr<string> platform_ = nullptr;
    // The region ID.
    std::shared_ptr<string> scanRegionId_ = nullptr;
    // The type of the detection target. Values:
    // 
    // - **3**: User snapshot
    // 
    // - **4**: User-defined image
    std::shared_ptr<int32_t> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
