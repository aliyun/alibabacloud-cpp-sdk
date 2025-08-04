// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecordTemplatesResponseBodyTemplatesBackgrounds.hpp>
#include <alibabacloud/models/DescribeRecordTemplatesResponseBodyTemplatesClockWidgets.hpp>
#include <alibabacloud/models/DescribeRecordTemplatesResponseBodyTemplatesWatermarks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRecordTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DelayStopTime, delayStopTime_);
      DARABONBA_PTR_TO_JSON(EnableM3u8DateTime, enableM3u8DateTime_);
      DARABONBA_PTR_TO_JSON(FileSplitInterval, fileSplitInterval_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(HttpCallbackUrl, httpCallbackUrl_);
      DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(MnsQueue, mnsQueue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssFilePrefix, ossFilePrefix_);
      DARABONBA_PTR_TO_JSON(TaskProfile, taskProfile_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DelayStopTime, delayStopTime_);
      DARABONBA_PTR_FROM_JSON(EnableM3u8DateTime, enableM3u8DateTime_);
      DARABONBA_PTR_FROM_JSON(FileSplitInterval, fileSplitInterval_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(HttpCallbackUrl, httpCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(MnsQueue, mnsQueue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssFilePrefix, ossFilePrefix_);
      DARABONBA_PTR_FROM_JSON(TaskProfile, taskProfile_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
    };
    DescribeRecordTemplatesResponseBodyTemplates() = default ;
    DescribeRecordTemplatesResponseBodyTemplates(const DescribeRecordTemplatesResponseBodyTemplates &) = default ;
    DescribeRecordTemplatesResponseBodyTemplates(DescribeRecordTemplatesResponseBodyTemplates &&) = default ;
    DescribeRecordTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordTemplatesResponseBodyTemplates() = default ;
    DescribeRecordTemplatesResponseBodyTemplates& operator=(const DescribeRecordTemplatesResponseBodyTemplates &) = default ;
    DescribeRecordTemplatesResponseBodyTemplates& operator=(DescribeRecordTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backgroundColor_ != nullptr
        && this->backgrounds_ != nullptr && this->clockWidgets_ != nullptr && this->createTime_ != nullptr && this->delayStopTime_ != nullptr && this->enableM3u8DateTime_ != nullptr
        && this->fileSplitInterval_ != nullptr && this->formats_ != nullptr && this->httpCallbackUrl_ != nullptr && this->layoutIds_ != nullptr && this->mediaEncode_ != nullptr
        && this->mnsQueue_ != nullptr && this->name_ != nullptr && this->ossBucket_ != nullptr && this->ossFilePrefix_ != nullptr && this->taskProfile_ != nullptr
        && this->templateId_ != nullptr && this->watermarks_ != nullptr; };
    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline int32_t backgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setBackgroundColor(int32_t backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<Models::DescribeRecordTemplatesResponseBodyTemplatesBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<Models::DescribeRecordTemplatesResponseBodyTemplatesBackgrounds>) };
    inline vector<Models::DescribeRecordTemplatesResponseBodyTemplatesBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<Models::DescribeRecordTemplatesResponseBodyTemplatesBackgrounds>) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setBackgrounds(const vector<Models::DescribeRecordTemplatesResponseBodyTemplatesBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setBackgrounds(vector<Models::DescribeRecordTemplatesResponseBodyTemplatesBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<Models::DescribeRecordTemplatesResponseBodyTemplatesClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<Models::DescribeRecordTemplatesResponseBodyTemplatesClockWidgets>) };
    inline vector<Models::DescribeRecordTemplatesResponseBodyTemplatesClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<Models::DescribeRecordTemplatesResponseBodyTemplatesClockWidgets>) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setClockWidgets(const vector<Models::DescribeRecordTemplatesResponseBodyTemplatesClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setClockWidgets(vector<Models::DescribeRecordTemplatesResponseBodyTemplatesClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // delayStopTime Field Functions 
    bool hasDelayStopTime() const { return this->delayStopTime_ != nullptr;};
    void deleteDelayStopTime() { this->delayStopTime_ = nullptr;};
    inline int32_t delayStopTime() const { DARABONBA_PTR_GET_DEFAULT(delayStopTime_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setDelayStopTime(int32_t delayStopTime) { DARABONBA_PTR_SET_VALUE(delayStopTime_, delayStopTime) };


    // enableM3u8DateTime Field Functions 
    bool hasEnableM3u8DateTime() const { return this->enableM3u8DateTime_ != nullptr;};
    void deleteEnableM3u8DateTime() { this->enableM3u8DateTime_ = nullptr;};
    inline bool enableM3u8DateTime() const { DARABONBA_PTR_GET_DEFAULT(enableM3u8DateTime_, false) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setEnableM3u8DateTime(bool enableM3u8DateTime) { DARABONBA_PTR_SET_VALUE(enableM3u8DateTime_, enableM3u8DateTime) };


    // fileSplitInterval Field Functions 
    bool hasFileSplitInterval() const { return this->fileSplitInterval_ != nullptr;};
    void deleteFileSplitInterval() { this->fileSplitInterval_ = nullptr;};
    inline int32_t fileSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(fileSplitInterval_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setFileSplitInterval(int32_t fileSplitInterval) { DARABONBA_PTR_SET_VALUE(fileSplitInterval_, fileSplitInterval) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<string> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<string>) };
    inline vector<string> formats() { DARABONBA_PTR_GET(formats_, vector<string>) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setFormats(const vector<string> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setFormats(vector<string> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // httpCallbackUrl Field Functions 
    bool hasHttpCallbackUrl() const { return this->httpCallbackUrl_ != nullptr;};
    void deleteHttpCallbackUrl() { this->httpCallbackUrl_ = nullptr;};
    inline string httpCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(httpCallbackUrl_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplates& setHttpCallbackUrl(string httpCallbackUrl) { DARABONBA_PTR_SET_VALUE(httpCallbackUrl_, httpCallbackUrl) };


    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<int64_t> & layoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<int64_t>) };
    inline vector<int64_t> layoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<int64_t>) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setLayoutIds(const vector<int64_t> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setLayoutIds(vector<int64_t> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t mediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // mnsQueue Field Functions 
    bool hasMnsQueue() const { return this->mnsQueue_ != nullptr;};
    void deleteMnsQueue() { this->mnsQueue_ = nullptr;};
    inline string mnsQueue() const { DARABONBA_PTR_GET_DEFAULT(mnsQueue_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplates& setMnsQueue(string mnsQueue) { DARABONBA_PTR_SET_VALUE(mnsQueue_, mnsQueue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplates& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossFilePrefix Field Functions 
    bool hasOssFilePrefix() const { return this->ossFilePrefix_ != nullptr;};
    void deleteOssFilePrefix() { this->ossFilePrefix_ = nullptr;};
    inline string ossFilePrefix() const { DARABONBA_PTR_GET_DEFAULT(ossFilePrefix_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplates& setOssFilePrefix(string ossFilePrefix) { DARABONBA_PTR_SET_VALUE(ossFilePrefix_, ossFilePrefix) };


    // taskProfile Field Functions 
    bool hasTaskProfile() const { return this->taskProfile_ != nullptr;};
    void deleteTaskProfile() { this->taskProfile_ = nullptr;};
    inline string taskProfile() const { DARABONBA_PTR_GET_DEFAULT(taskProfile_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplates& setTaskProfile(string taskProfile) { DARABONBA_PTR_SET_VALUE(taskProfile_, taskProfile) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeRecordTemplatesResponseBodyTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // watermarks Field Functions 
    bool hasWatermarks() const { return this->watermarks_ != nullptr;};
    void deleteWatermarks() { this->watermarks_ = nullptr;};
    inline const vector<Models::DescribeRecordTemplatesResponseBodyTemplatesWatermarks> & watermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<Models::DescribeRecordTemplatesResponseBodyTemplatesWatermarks>) };
    inline vector<Models::DescribeRecordTemplatesResponseBodyTemplatesWatermarks> watermarks() { DARABONBA_PTR_GET(watermarks_, vector<Models::DescribeRecordTemplatesResponseBodyTemplatesWatermarks>) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setWatermarks(const vector<Models::DescribeRecordTemplatesResponseBodyTemplatesWatermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
    inline DescribeRecordTemplatesResponseBodyTemplates& setWatermarks(vector<Models::DescribeRecordTemplatesResponseBodyTemplatesWatermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


  protected:
    std::shared_ptr<int32_t> backgroundColor_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRecordTemplatesResponseBodyTemplatesBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRecordTemplatesResponseBodyTemplatesClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> delayStopTime_ = nullptr;
    std::shared_ptr<bool> enableM3u8DateTime_ = nullptr;
    std::shared_ptr<int32_t> fileSplitInterval_ = nullptr;
    std::shared_ptr<vector<string>> formats_ = nullptr;
    std::shared_ptr<string> httpCallbackUrl_ = nullptr;
    std::shared_ptr<vector<int64_t>> layoutIds_ = nullptr;
    std::shared_ptr<int32_t> mediaEncode_ = nullptr;
    std::shared_ptr<string> mnsQueue_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossFilePrefix_ = nullptr;
    std::shared_ptr<string> taskProfile_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRecordTemplatesResponseBodyTemplatesWatermarks>> watermarks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
