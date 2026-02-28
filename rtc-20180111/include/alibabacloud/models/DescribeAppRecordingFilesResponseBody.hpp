// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPRECORDINGFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPRECORDINGFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppRecordingFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppRecordingFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppRecordingFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeAppRecordingFilesResponseBody() = default ;
    DescribeAppRecordingFilesResponseBody(const DescribeAppRecordingFilesResponseBody &) = default ;
    DescribeAppRecordingFilesResponseBody(DescribeAppRecordingFilesResponseBody &&) = default ;
    DescribeAppRecordingFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppRecordingFilesResponseBody() = default ;
    DescribeAppRecordingFilesResponseBody& operator=(const DescribeAppRecordingFilesResponseBody &) = default ;
    DescribeAppRecordingFilesResponseBody& operator=(DescribeAppRecordingFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->channelId_ == nullptr && this->fileCreateTs_ == nullptr && this->fileDuration_ == nullptr && this->filePath_ == nullptr && this->fileSize_ == nullptr
        && this->region_ == nullptr && this->startTs_ == nullptr && this->taskId_ == nullptr && this->vendor_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline Items& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline Items& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // fileCreateTs Field Functions 
      bool hasFileCreateTs() const { return this->fileCreateTs_ != nullptr;};
      void deleteFileCreateTs() { this->fileCreateTs_ = nullptr;};
      inline int64_t getFileCreateTs() const { DARABONBA_PTR_GET_DEFAULT(fileCreateTs_, 0L) };
      inline Items& setFileCreateTs(int64_t fileCreateTs) { DARABONBA_PTR_SET_VALUE(fileCreateTs_, fileCreateTs) };


      // fileDuration Field Functions 
      bool hasFileDuration() const { return this->fileDuration_ != nullptr;};
      void deleteFileDuration() { this->fileDuration_ = nullptr;};
      inline int32_t getFileDuration() const { DARABONBA_PTR_GET_DEFAULT(fileDuration_, 0) };
      inline Items& setFileDuration(int32_t fileDuration) { DARABONBA_PTR_SET_VALUE(fileDuration_, fileDuration) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Items& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int32_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
      inline Items& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline int32_t getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
      inline Items& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // startTs Field Functions 
      bool hasStartTs() const { return this->startTs_ != nullptr;};
      void deleteStartTs() { this->startTs_ = nullptr;};
      inline int64_t getStartTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
      inline Items& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline Items& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      shared_ptr<string> bucket_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<int64_t> fileCreateTs_ {};
      shared_ptr<int32_t> fileDuration_ {};
      shared_ptr<string> filePath_ {};
      shared_ptr<int32_t> fileSize_ {};
      shared_ptr<int32_t> region_ {};
      shared_ptr<int64_t> startTs_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCnt_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAppRecordingFilesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAppRecordingFilesResponseBody::Items>) };
    inline vector<DescribeAppRecordingFilesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAppRecordingFilesResponseBody::Items>) };
    inline DescribeAppRecordingFilesResponseBody& setItems(const vector<DescribeAppRecordingFilesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAppRecordingFilesResponseBody& setItems(vector<DescribeAppRecordingFilesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeAppRecordingFilesResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAppRecordingFilesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppRecordingFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int32_t getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0) };
    inline DescribeAppRecordingFilesResponseBody& setTotalCnt(int32_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    shared_ptr<vector<DescribeAppRecordingFilesResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCnt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
