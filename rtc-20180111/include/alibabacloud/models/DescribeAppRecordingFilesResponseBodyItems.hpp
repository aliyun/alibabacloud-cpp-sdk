// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPRECORDINGFILESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPRECORDINGFILESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppRecordingFilesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppRecordingFilesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(FileCreateTs, fileCreateTs_);
      DARABONBA_PTR_TO_JSON(FileDuration, fileDuration_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppRecordingFilesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(FileCreateTs, fileCreateTs_);
      DARABONBA_PTR_FROM_JSON(FileDuration, fileDuration_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    DescribeAppRecordingFilesResponseBodyItems() = default ;
    DescribeAppRecordingFilesResponseBodyItems(const DescribeAppRecordingFilesResponseBodyItems &) = default ;
    DescribeAppRecordingFilesResponseBodyItems(DescribeAppRecordingFilesResponseBodyItems &&) = default ;
    DescribeAppRecordingFilesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppRecordingFilesResponseBodyItems() = default ;
    DescribeAppRecordingFilesResponseBodyItems& operator=(const DescribeAppRecordingFilesResponseBodyItems &) = default ;
    DescribeAppRecordingFilesResponseBodyItems& operator=(DescribeAppRecordingFilesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->channelId_ == nullptr && return this->fileCreateTs_ == nullptr && return this->fileDuration_ == nullptr && return this->filePath_ == nullptr && return this->fileSize_ == nullptr
        && return this->region_ == nullptr && return this->startTs_ == nullptr && return this->taskId_ == nullptr && return this->vendor_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline DescribeAppRecordingFilesResponseBodyItems& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeAppRecordingFilesResponseBodyItems& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // fileCreateTs Field Functions 
    bool hasFileCreateTs() const { return this->fileCreateTs_ != nullptr;};
    void deleteFileCreateTs() { this->fileCreateTs_ = nullptr;};
    inline int64_t fileCreateTs() const { DARABONBA_PTR_GET_DEFAULT(fileCreateTs_, 0L) };
    inline DescribeAppRecordingFilesResponseBodyItems& setFileCreateTs(int64_t fileCreateTs) { DARABONBA_PTR_SET_VALUE(fileCreateTs_, fileCreateTs) };


    // fileDuration Field Functions 
    bool hasFileDuration() const { return this->fileDuration_ != nullptr;};
    void deleteFileDuration() { this->fileDuration_ = nullptr;};
    inline int32_t fileDuration() const { DARABONBA_PTR_GET_DEFAULT(fileDuration_, 0) };
    inline DescribeAppRecordingFilesResponseBodyItems& setFileDuration(int32_t fileDuration) { DARABONBA_PTR_SET_VALUE(fileDuration_, fileDuration) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DescribeAppRecordingFilesResponseBodyItems& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int32_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
    inline DescribeAppRecordingFilesResponseBodyItems& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline int32_t region() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
    inline DescribeAppRecordingFilesResponseBodyItems& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeAppRecordingFilesResponseBodyItems& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeAppRecordingFilesResponseBodyItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline DescribeAppRecordingFilesResponseBodyItems& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> fileCreateTs_ = nullptr;
    std::shared_ptr<int32_t> fileDuration_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<int32_t> fileSize_ = nullptr;
    std::shared_ptr<int32_t> region_ = nullptr;
    std::shared_ptr<int64_t> startTs_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
