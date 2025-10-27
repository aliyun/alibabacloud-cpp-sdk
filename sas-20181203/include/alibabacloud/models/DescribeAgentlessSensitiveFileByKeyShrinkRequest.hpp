// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAgentlessSensitiveFileByKeyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgentlessSensitiveFileByKeyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRangeShrink_);
      DARABONBA_PTR_TO_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgentlessSensitiveFileByKeyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRangeShrink_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileKey, sensitiveFileKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAgentlessSensitiveFileByKeyShrinkRequest() = default ;
    DescribeAgentlessSensitiveFileByKeyShrinkRequest(const DescribeAgentlessSensitiveFileByKeyShrinkRequest &) = default ;
    DescribeAgentlessSensitiveFileByKeyShrinkRequest(DescribeAgentlessSensitiveFileByKeyShrinkRequest &&) = default ;
    DescribeAgentlessSensitiveFileByKeyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgentlessSensitiveFileByKeyShrinkRequest() = default ;
    DescribeAgentlessSensitiveFileByKeyShrinkRequest& operator=(const DescribeAgentlessSensitiveFileByKeyShrinkRequest &) = default ;
    DescribeAgentlessSensitiveFileByKeyShrinkRequest& operator=(DescribeAgentlessSensitiveFileByKeyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->imageUuid_ == nullptr && return this->instanceId_ == nullptr && return this->pageSize_ == nullptr && return this->remark_ == nullptr && return this->scanRangeShrink_ == nullptr
        && return this->sensitiveFileKey_ == nullptr && return this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAgentlessSensitiveFileByKeyShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string imageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeAgentlessSensitiveFileByKeyShrinkRequest& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAgentlessSensitiveFileByKeyShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAgentlessSensitiveFileByKeyShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeAgentlessSensitiveFileByKeyShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // scanRangeShrink Field Functions 
    bool hasScanRangeShrink() const { return this->scanRangeShrink_ != nullptr;};
    void deleteScanRangeShrink() { this->scanRangeShrink_ = nullptr;};
    inline string scanRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(scanRangeShrink_, "") };
    inline DescribeAgentlessSensitiveFileByKeyShrinkRequest& setScanRangeShrink(string scanRangeShrink) { DARABONBA_PTR_SET_VALUE(scanRangeShrink_, scanRangeShrink) };


    // sensitiveFileKey Field Functions 
    bool hasSensitiveFileKey() const { return this->sensitiveFileKey_ != nullptr;};
    void deleteSensitiveFileKey() { this->sensitiveFileKey_ = nullptr;};
    inline string sensitiveFileKey() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileKey_, "") };
    inline DescribeAgentlessSensitiveFileByKeyShrinkRequest& setSensitiveFileKey(string sensitiveFileKey) { DARABONBA_PTR_SET_VALUE(sensitiveFileKey_, sensitiveFileKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAgentlessSensitiveFileByKeyShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The UUID of the asset that is scanned. You can query the UUID on the Host or Cloud Product page. If you scan a host, set this parameter to the UUID of the scanned host. If you scan a snapshot or a custom image, set this parameter to the ID of the scanned snapshot or image.
    std::shared_ptr<string> imageUuid_ = nullptr;
    // The instance ID of the asset that is scanned. To query the instance ID, go to the Task Management page, click Details of a task, and then view the value of Check On.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name or IP address of the asset.
    std::shared_ptr<string> remark_ = nullptr;
    // The types of the assets that are scanned.
    std::shared_ptr<string> scanRangeShrink_ = nullptr;
    // The type of the sensitive file.
    std::shared_ptr<string> sensitiveFileKey_ = nullptr;
    // The status of the baseline risk. Valid values:
    // 
    // *   **0**: unfixed.
    // *   **1**: fixed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
