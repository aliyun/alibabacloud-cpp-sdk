// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTESRESPONSEBODY_HPP_
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
  class DescribeCloudNotesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudNotesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudNotesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeCloudNotesResponseBody() = default ;
    DescribeCloudNotesResponseBody(const DescribeCloudNotesResponseBody &) = default ;
    DescribeCloudNotesResponseBody(DescribeCloudNotesResponseBody &&) = default ;
    DescribeCloudNotesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudNotesResponseBody() = default ;
    DescribeCloudNotesResponseBody& operator=(const DescribeCloudNotesResponseBody &) = default ;
    DescribeCloudNotesResponseBody& operator=(DescribeCloudNotesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AutoChaptersFilePath, autoChaptersFilePath_);
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(CustomPromptFilePath, customPromptFilePath_);
        DARABONBA_PTR_TO_JSON(MeetingAssistanceFilePath, meetingAssistanceFilePath_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ServiceInspectionFilePath, serviceInspectionFilePath_);
        DARABONBA_PTR_TO_JSON(StartTs, startTs_);
        DARABONBA_PTR_TO_JSON(SummarizationFilePath, summarizationFilePath_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TextPolishFilePath, textPolishFilePath_);
        DARABONBA_PTR_TO_JSON(TranscriptionFilePath, transcriptionFilePath_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoChaptersFilePath, autoChaptersFilePath_);
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(CustomPromptFilePath, customPromptFilePath_);
        DARABONBA_PTR_FROM_JSON(MeetingAssistanceFilePath, meetingAssistanceFilePath_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ServiceInspectionFilePath, serviceInspectionFilePath_);
        DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
        DARABONBA_PTR_FROM_JSON(SummarizationFilePath, summarizationFilePath_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TextPolishFilePath, textPolishFilePath_);
        DARABONBA_PTR_FROM_JSON(TranscriptionFilePath, transcriptionFilePath_);
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
      virtual bool empty() const override { return this->autoChaptersFilePath_ == nullptr
        && this->bucket_ == nullptr && this->channelId_ == nullptr && this->customPromptFilePath_ == nullptr && this->meetingAssistanceFilePath_ == nullptr && this->region_ == nullptr
        && this->serviceInspectionFilePath_ == nullptr && this->startTs_ == nullptr && this->summarizationFilePath_ == nullptr && this->taskId_ == nullptr && this->textPolishFilePath_ == nullptr
        && this->transcriptionFilePath_ == nullptr && this->vendor_ == nullptr; };
      // autoChaptersFilePath Field Functions 
      bool hasAutoChaptersFilePath() const { return this->autoChaptersFilePath_ != nullptr;};
      void deleteAutoChaptersFilePath() { this->autoChaptersFilePath_ = nullptr;};
      inline string getAutoChaptersFilePath() const { DARABONBA_PTR_GET_DEFAULT(autoChaptersFilePath_, "") };
      inline Items& setAutoChaptersFilePath(string autoChaptersFilePath) { DARABONBA_PTR_SET_VALUE(autoChaptersFilePath_, autoChaptersFilePath) };


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


      // customPromptFilePath Field Functions 
      bool hasCustomPromptFilePath() const { return this->customPromptFilePath_ != nullptr;};
      void deleteCustomPromptFilePath() { this->customPromptFilePath_ = nullptr;};
      inline string getCustomPromptFilePath() const { DARABONBA_PTR_GET_DEFAULT(customPromptFilePath_, "") };
      inline Items& setCustomPromptFilePath(string customPromptFilePath) { DARABONBA_PTR_SET_VALUE(customPromptFilePath_, customPromptFilePath) };


      // meetingAssistanceFilePath Field Functions 
      bool hasMeetingAssistanceFilePath() const { return this->meetingAssistanceFilePath_ != nullptr;};
      void deleteMeetingAssistanceFilePath() { this->meetingAssistanceFilePath_ = nullptr;};
      inline string getMeetingAssistanceFilePath() const { DARABONBA_PTR_GET_DEFAULT(meetingAssistanceFilePath_, "") };
      inline Items& setMeetingAssistanceFilePath(string meetingAssistanceFilePath) { DARABONBA_PTR_SET_VALUE(meetingAssistanceFilePath_, meetingAssistanceFilePath) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline int32_t getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
      inline Items& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // serviceInspectionFilePath Field Functions 
      bool hasServiceInspectionFilePath() const { return this->serviceInspectionFilePath_ != nullptr;};
      void deleteServiceInspectionFilePath() { this->serviceInspectionFilePath_ = nullptr;};
      inline string getServiceInspectionFilePath() const { DARABONBA_PTR_GET_DEFAULT(serviceInspectionFilePath_, "") };
      inline Items& setServiceInspectionFilePath(string serviceInspectionFilePath) { DARABONBA_PTR_SET_VALUE(serviceInspectionFilePath_, serviceInspectionFilePath) };


      // startTs Field Functions 
      bool hasStartTs() const { return this->startTs_ != nullptr;};
      void deleteStartTs() { this->startTs_ = nullptr;};
      inline int64_t getStartTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
      inline Items& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


      // summarizationFilePath Field Functions 
      bool hasSummarizationFilePath() const { return this->summarizationFilePath_ != nullptr;};
      void deleteSummarizationFilePath() { this->summarizationFilePath_ = nullptr;};
      inline string getSummarizationFilePath() const { DARABONBA_PTR_GET_DEFAULT(summarizationFilePath_, "") };
      inline Items& setSummarizationFilePath(string summarizationFilePath) { DARABONBA_PTR_SET_VALUE(summarizationFilePath_, summarizationFilePath) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // textPolishFilePath Field Functions 
      bool hasTextPolishFilePath() const { return this->textPolishFilePath_ != nullptr;};
      void deleteTextPolishFilePath() { this->textPolishFilePath_ = nullptr;};
      inline string getTextPolishFilePath() const { DARABONBA_PTR_GET_DEFAULT(textPolishFilePath_, "") };
      inline Items& setTextPolishFilePath(string textPolishFilePath) { DARABONBA_PTR_SET_VALUE(textPolishFilePath_, textPolishFilePath) };


      // transcriptionFilePath Field Functions 
      bool hasTranscriptionFilePath() const { return this->transcriptionFilePath_ != nullptr;};
      void deleteTranscriptionFilePath() { this->transcriptionFilePath_ = nullptr;};
      inline string getTranscriptionFilePath() const { DARABONBA_PTR_GET_DEFAULT(transcriptionFilePath_, "") };
      inline Items& setTranscriptionFilePath(string transcriptionFilePath) { DARABONBA_PTR_SET_VALUE(transcriptionFilePath_, transcriptionFilePath) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline Items& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      shared_ptr<string> autoChaptersFilePath_ {};
      shared_ptr<string> bucket_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<string> customPromptFilePath_ {};
      shared_ptr<string> meetingAssistanceFilePath_ {};
      shared_ptr<int32_t> region_ {};
      shared_ptr<string> serviceInspectionFilePath_ {};
      shared_ptr<int64_t> startTs_ {};
      shared_ptr<string> summarizationFilePath_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> textPolishFilePath_ {};
      shared_ptr<string> transcriptionFilePath_ {};
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCnt_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeCloudNotesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeCloudNotesResponseBody::Items>) };
    inline vector<DescribeCloudNotesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeCloudNotesResponseBody::Items>) };
    inline DescribeCloudNotesResponseBody& setItems(const vector<DescribeCloudNotesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCloudNotesResponseBody& setItems(vector<DescribeCloudNotesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeCloudNotesResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCloudNotesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudNotesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int32_t getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0) };
    inline DescribeCloudNotesResponseBody& setTotalCnt(int32_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    shared_ptr<vector<DescribeCloudNotesResponseBody::Items>> items_ {};
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
