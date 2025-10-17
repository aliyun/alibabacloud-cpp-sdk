// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCloudNotesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudNotesResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeCloudNotesResponseBodyItems& obj) { 
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
    DescribeCloudNotesResponseBodyItems() = default ;
    DescribeCloudNotesResponseBodyItems(const DescribeCloudNotesResponseBodyItems &) = default ;
    DescribeCloudNotesResponseBodyItems(DescribeCloudNotesResponseBodyItems &&) = default ;
    DescribeCloudNotesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudNotesResponseBodyItems() = default ;
    DescribeCloudNotesResponseBodyItems& operator=(const DescribeCloudNotesResponseBodyItems &) = default ;
    DescribeCloudNotesResponseBodyItems& operator=(DescribeCloudNotesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoChaptersFilePath_ == nullptr
        && return this->bucket_ == nullptr && return this->channelId_ == nullptr && return this->customPromptFilePath_ == nullptr && return this->meetingAssistanceFilePath_ == nullptr && return this->region_ == nullptr
        && return this->serviceInspectionFilePath_ == nullptr && return this->startTs_ == nullptr && return this->summarizationFilePath_ == nullptr && return this->taskId_ == nullptr && return this->textPolishFilePath_ == nullptr
        && return this->transcriptionFilePath_ == nullptr && return this->vendor_ == nullptr; };
    // autoChaptersFilePath Field Functions 
    bool hasAutoChaptersFilePath() const { return this->autoChaptersFilePath_ != nullptr;};
    void deleteAutoChaptersFilePath() { this->autoChaptersFilePath_ = nullptr;};
    inline string autoChaptersFilePath() const { DARABONBA_PTR_GET_DEFAULT(autoChaptersFilePath_, "") };
    inline DescribeCloudNotesResponseBodyItems& setAutoChaptersFilePath(string autoChaptersFilePath) { DARABONBA_PTR_SET_VALUE(autoChaptersFilePath_, autoChaptersFilePath) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline DescribeCloudNotesResponseBodyItems& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeCloudNotesResponseBodyItems& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // customPromptFilePath Field Functions 
    bool hasCustomPromptFilePath() const { return this->customPromptFilePath_ != nullptr;};
    void deleteCustomPromptFilePath() { this->customPromptFilePath_ = nullptr;};
    inline string customPromptFilePath() const { DARABONBA_PTR_GET_DEFAULT(customPromptFilePath_, "") };
    inline DescribeCloudNotesResponseBodyItems& setCustomPromptFilePath(string customPromptFilePath) { DARABONBA_PTR_SET_VALUE(customPromptFilePath_, customPromptFilePath) };


    // meetingAssistanceFilePath Field Functions 
    bool hasMeetingAssistanceFilePath() const { return this->meetingAssistanceFilePath_ != nullptr;};
    void deleteMeetingAssistanceFilePath() { this->meetingAssistanceFilePath_ = nullptr;};
    inline string meetingAssistanceFilePath() const { DARABONBA_PTR_GET_DEFAULT(meetingAssistanceFilePath_, "") };
    inline DescribeCloudNotesResponseBodyItems& setMeetingAssistanceFilePath(string meetingAssistanceFilePath) { DARABONBA_PTR_SET_VALUE(meetingAssistanceFilePath_, meetingAssistanceFilePath) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline int32_t region() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
    inline DescribeCloudNotesResponseBodyItems& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceInspectionFilePath Field Functions 
    bool hasServiceInspectionFilePath() const { return this->serviceInspectionFilePath_ != nullptr;};
    void deleteServiceInspectionFilePath() { this->serviceInspectionFilePath_ = nullptr;};
    inline string serviceInspectionFilePath() const { DARABONBA_PTR_GET_DEFAULT(serviceInspectionFilePath_, "") };
    inline DescribeCloudNotesResponseBodyItems& setServiceInspectionFilePath(string serviceInspectionFilePath) { DARABONBA_PTR_SET_VALUE(serviceInspectionFilePath_, serviceInspectionFilePath) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeCloudNotesResponseBodyItems& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


    // summarizationFilePath Field Functions 
    bool hasSummarizationFilePath() const { return this->summarizationFilePath_ != nullptr;};
    void deleteSummarizationFilePath() { this->summarizationFilePath_ = nullptr;};
    inline string summarizationFilePath() const { DARABONBA_PTR_GET_DEFAULT(summarizationFilePath_, "") };
    inline DescribeCloudNotesResponseBodyItems& setSummarizationFilePath(string summarizationFilePath) { DARABONBA_PTR_SET_VALUE(summarizationFilePath_, summarizationFilePath) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeCloudNotesResponseBodyItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // textPolishFilePath Field Functions 
    bool hasTextPolishFilePath() const { return this->textPolishFilePath_ != nullptr;};
    void deleteTextPolishFilePath() { this->textPolishFilePath_ = nullptr;};
    inline string textPolishFilePath() const { DARABONBA_PTR_GET_DEFAULT(textPolishFilePath_, "") };
    inline DescribeCloudNotesResponseBodyItems& setTextPolishFilePath(string textPolishFilePath) { DARABONBA_PTR_SET_VALUE(textPolishFilePath_, textPolishFilePath) };


    // transcriptionFilePath Field Functions 
    bool hasTranscriptionFilePath() const { return this->transcriptionFilePath_ != nullptr;};
    void deleteTranscriptionFilePath() { this->transcriptionFilePath_ = nullptr;};
    inline string transcriptionFilePath() const { DARABONBA_PTR_GET_DEFAULT(transcriptionFilePath_, "") };
    inline DescribeCloudNotesResponseBodyItems& setTranscriptionFilePath(string transcriptionFilePath) { DARABONBA_PTR_SET_VALUE(transcriptionFilePath_, transcriptionFilePath) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline DescribeCloudNotesResponseBodyItems& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    std::shared_ptr<string> autoChaptersFilePath_ = nullptr;
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> customPromptFilePath_ = nullptr;
    std::shared_ptr<string> meetingAssistanceFilePath_ = nullptr;
    std::shared_ptr<int32_t> region_ = nullptr;
    std::shared_ptr<string> serviceInspectionFilePath_ = nullptr;
    std::shared_ptr<int64_t> startTs_ = nullptr;
    std::shared_ptr<string> summarizationFilePath_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> textPolishFilePath_ = nullptr;
    std::shared_ptr<string> transcriptionFilePath_ = nullptr;
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
