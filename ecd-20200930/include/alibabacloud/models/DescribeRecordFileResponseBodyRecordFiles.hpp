// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDFILERESPONSEBODYRECORDFILES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDFILERESPONSEBODYRECORDFILES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecordFileResponseBodyRecordFilesEventDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRecordFileResponseBodyRecordFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordFileResponseBodyRecordFiles& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EventDetails, eventDetails_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RecordEndTime, recordEndTime_);
      DARABONBA_PTR_TO_JSON(RecordExpire, recordExpire_);
      DARABONBA_PTR_TO_JSON(RecordStartTime, recordStartTime_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordFileResponseBodyRecordFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EventDetails, eventDetails_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RecordEndTime, recordEndTime_);
      DARABONBA_PTR_FROM_JSON(RecordExpire, recordExpire_);
      DARABONBA_PTR_FROM_JSON(RecordStartTime, recordStartTime_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeRecordFileResponseBodyRecordFiles() = default ;
    DescribeRecordFileResponseBodyRecordFiles(const DescribeRecordFileResponseBodyRecordFiles &) = default ;
    DescribeRecordFileResponseBodyRecordFiles(DescribeRecordFileResponseBodyRecordFiles &&) = default ;
    DescribeRecordFileResponseBodyRecordFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordFileResponseBodyRecordFiles() = default ;
    DescribeRecordFileResponseBodyRecordFiles& operator=(const DescribeRecordFileResponseBodyRecordFiles &) = default ;
    DescribeRecordFileResponseBodyRecordFiles& operator=(DescribeRecordFileResponseBodyRecordFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->desktopName_ == nullptr && return this->endUserId_ == nullptr && return this->eventDetails_ == nullptr && return this->fileName_ == nullptr && return this->fileSize_ == nullptr
        && return this->policyId_ == nullptr && return this->recordEndTime_ == nullptr && return this->recordExpire_ == nullptr && return this->recordStartTime_ == nullptr && return this->recordType_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceGroupName_ == nullptr && return this->status_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // eventDetails Field Functions 
    bool hasEventDetails() const { return this->eventDetails_ != nullptr;};
    void deleteEventDetails() { this->eventDetails_ = nullptr;};
    inline const vector<Models::DescribeRecordFileResponseBodyRecordFilesEventDetails> & eventDetails() const { DARABONBA_PTR_GET_CONST(eventDetails_, vector<Models::DescribeRecordFileResponseBodyRecordFilesEventDetails>) };
    inline vector<Models::DescribeRecordFileResponseBodyRecordFilesEventDetails> eventDetails() { DARABONBA_PTR_GET(eventDetails_, vector<Models::DescribeRecordFileResponseBodyRecordFilesEventDetails>) };
    inline DescribeRecordFileResponseBodyRecordFiles& setEventDetails(const vector<Models::DescribeRecordFileResponseBodyRecordFilesEventDetails> & eventDetails) { DARABONBA_PTR_SET_VALUE(eventDetails_, eventDetails) };
    inline DescribeRecordFileResponseBodyRecordFiles& setEventDetails(vector<Models::DescribeRecordFileResponseBodyRecordFilesEventDetails> && eventDetails) { DARABONBA_PTR_SET_RVALUE(eventDetails_, eventDetails) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DescribeRecordFileResponseBodyRecordFiles& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // recordEndTime Field Functions 
    bool hasRecordEndTime() const { return this->recordEndTime_ != nullptr;};
    void deleteRecordEndTime() { this->recordEndTime_ = nullptr;};
    inline string recordEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordEndTime_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setRecordEndTime(string recordEndTime) { DARABONBA_PTR_SET_VALUE(recordEndTime_, recordEndTime) };


    // recordExpire Field Functions 
    bool hasRecordExpire() const { return this->recordExpire_ != nullptr;};
    void deleteRecordExpire() { this->recordExpire_ = nullptr;};
    inline int64_t recordExpire() const { DARABONBA_PTR_GET_DEFAULT(recordExpire_, 0L) };
    inline DescribeRecordFileResponseBodyRecordFiles& setRecordExpire(int64_t recordExpire) { DARABONBA_PTR_SET_VALUE(recordExpire_, recordExpire) };


    // recordStartTime Field Functions 
    bool hasRecordStartTime() const { return this->recordStartTime_ != nullptr;};
    void deleteRecordStartTime() { this->recordStartTime_ = nullptr;};
    inline string recordStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordStartTime_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setRecordStartTime(string recordStartTime) { DARABONBA_PTR_SET_VALUE(recordStartTime_, recordStartTime) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline int32_t recordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, 0) };
    inline DescribeRecordFileResponseBodyRecordFiles& setRecordType(int32_t recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeRecordFileResponseBodyRecordFiles& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeRecordFileResponseBodyRecordFiles& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> desktopId_ = nullptr;
    std::shared_ptr<string> desktopName_ = nullptr;
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRecordFileResponseBodyRecordFilesEventDetails>> eventDetails_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> recordEndTime_ = nullptr;
    std::shared_ptr<int64_t> recordExpire_ = nullptr;
    std::shared_ptr<string> recordStartTime_ = nullptr;
    std::shared_ptr<int32_t> recordType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
