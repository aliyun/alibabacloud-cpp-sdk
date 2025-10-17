// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPRECORDTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPRECORDTEMPLATESRESPONSEBODYTEMPLATES_HPP_
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
  class DescribeAppRecordTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppRecordTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DelayStopTime, delayStopTime_);
      DARABONBA_PTR_TO_JSON(FilePrefix, filePrefix_);
      DARABONBA_PTR_TO_JSON(FileSplitInterval, fileSplitInterval_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppRecordTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DelayStopTime, delayStopTime_);
      DARABONBA_PTR_FROM_JSON(FilePrefix, filePrefix_);
      DARABONBA_PTR_FROM_JSON(FileSplitInterval, fileSplitInterval_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeAppRecordTemplatesResponseBodyTemplates() = default ;
    DescribeAppRecordTemplatesResponseBodyTemplates(const DescribeAppRecordTemplatesResponseBodyTemplates &) = default ;
    DescribeAppRecordTemplatesResponseBodyTemplates(DescribeAppRecordTemplatesResponseBodyTemplates &&) = default ;
    DescribeAppRecordTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppRecordTemplatesResponseBodyTemplates() = default ;
    DescribeAppRecordTemplatesResponseBodyTemplates& operator=(const DescribeAppRecordTemplatesResponseBodyTemplates &) = default ;
    DescribeAppRecordTemplatesResponseBodyTemplates& operator=(DescribeAppRecordTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->delayStopTime_ == nullptr && return this->filePrefix_ == nullptr && return this->fileSplitInterval_ == nullptr && return this->formats_ == nullptr && return this->layoutIds_ == nullptr
        && return this->mediaEncode_ == nullptr && return this->name_ == nullptr && return this->templateId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // delayStopTime Field Functions 
    bool hasDelayStopTime() const { return this->delayStopTime_ != nullptr;};
    void deleteDelayStopTime() { this->delayStopTime_ = nullptr;};
    inline int64_t delayStopTime() const { DARABONBA_PTR_GET_DEFAULT(delayStopTime_, 0L) };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setDelayStopTime(int64_t delayStopTime) { DARABONBA_PTR_SET_VALUE(delayStopTime_, delayStopTime) };


    // filePrefix Field Functions 
    bool hasFilePrefix() const { return this->filePrefix_ != nullptr;};
    void deleteFilePrefix() { this->filePrefix_ = nullptr;};
    inline string filePrefix() const { DARABONBA_PTR_GET_DEFAULT(filePrefix_, "") };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setFilePrefix(string filePrefix) { DARABONBA_PTR_SET_VALUE(filePrefix_, filePrefix) };


    // fileSplitInterval Field Functions 
    bool hasFileSplitInterval() const { return this->fileSplitInterval_ != nullptr;};
    void deleteFileSplitInterval() { this->fileSplitInterval_ = nullptr;};
    inline int64_t fileSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(fileSplitInterval_, 0L) };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setFileSplitInterval(int64_t fileSplitInterval) { DARABONBA_PTR_SET_VALUE(fileSplitInterval_, fileSplitInterval) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<string> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<string>) };
    inline vector<string> formats() { DARABONBA_PTR_GET(formats_, vector<string>) };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setFormats(const vector<string> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setFormats(vector<string> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<string> & layoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<string>) };
    inline vector<string> layoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<string>) };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setLayoutIds(const vector<string> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setLayoutIds(vector<string> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t mediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeAppRecordTemplatesResponseBodyTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> delayStopTime_ = nullptr;
    std::shared_ptr<string> filePrefix_ = nullptr;
    std::shared_ptr<int64_t> fileSplitInterval_ = nullptr;
    std::shared_ptr<vector<string>> formats_ = nullptr;
    std::shared_ptr<vector<string>> layoutIds_ = nullptr;
    std::shared_ptr<int32_t> mediaEncode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
