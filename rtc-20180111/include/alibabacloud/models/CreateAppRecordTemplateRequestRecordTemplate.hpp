// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRECORDTEMPLATEREQUESTRECORDTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRECORDTEMPLATEREQUESTRECORDTEMPLATE_HPP_
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
  class CreateAppRecordTemplateRequestRecordTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRecordTemplateRequestRecordTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(DelayStopTime, delayStopTime_);
      DARABONBA_PTR_TO_JSON(FilePrefix, filePrefix_);
      DARABONBA_PTR_TO_JSON(FileSplitInterval, fileSplitInterval_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRecordTemplateRequestRecordTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayStopTime, delayStopTime_);
      DARABONBA_PTR_FROM_JSON(FilePrefix, filePrefix_);
      DARABONBA_PTR_FROM_JSON(FileSplitInterval, fileSplitInterval_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateAppRecordTemplateRequestRecordTemplate() = default ;
    CreateAppRecordTemplateRequestRecordTemplate(const CreateAppRecordTemplateRequestRecordTemplate &) = default ;
    CreateAppRecordTemplateRequestRecordTemplate(CreateAppRecordTemplateRequestRecordTemplate &&) = default ;
    CreateAppRecordTemplateRequestRecordTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRecordTemplateRequestRecordTemplate() = default ;
    CreateAppRecordTemplateRequestRecordTemplate& operator=(const CreateAppRecordTemplateRequestRecordTemplate &) = default ;
    CreateAppRecordTemplateRequestRecordTemplate& operator=(CreateAppRecordTemplateRequestRecordTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delayStopTime_ == nullptr
        && return this->filePrefix_ == nullptr && return this->fileSplitInterval_ == nullptr && return this->formats_ == nullptr && return this->layoutIds_ == nullptr && return this->mediaEncode_ == nullptr
        && return this->name_ == nullptr; };
    // delayStopTime Field Functions 
    bool hasDelayStopTime() const { return this->delayStopTime_ != nullptr;};
    void deleteDelayStopTime() { this->delayStopTime_ = nullptr;};
    inline int32_t delayStopTime() const { DARABONBA_PTR_GET_DEFAULT(delayStopTime_, 0) };
    inline CreateAppRecordTemplateRequestRecordTemplate& setDelayStopTime(int32_t delayStopTime) { DARABONBA_PTR_SET_VALUE(delayStopTime_, delayStopTime) };


    // filePrefix Field Functions 
    bool hasFilePrefix() const { return this->filePrefix_ != nullptr;};
    void deleteFilePrefix() { this->filePrefix_ = nullptr;};
    inline string filePrefix() const { DARABONBA_PTR_GET_DEFAULT(filePrefix_, "") };
    inline CreateAppRecordTemplateRequestRecordTemplate& setFilePrefix(string filePrefix) { DARABONBA_PTR_SET_VALUE(filePrefix_, filePrefix) };


    // fileSplitInterval Field Functions 
    bool hasFileSplitInterval() const { return this->fileSplitInterval_ != nullptr;};
    void deleteFileSplitInterval() { this->fileSplitInterval_ = nullptr;};
    inline int32_t fileSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(fileSplitInterval_, 0) };
    inline CreateAppRecordTemplateRequestRecordTemplate& setFileSplitInterval(int32_t fileSplitInterval) { DARABONBA_PTR_SET_VALUE(fileSplitInterval_, fileSplitInterval) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<string> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<string>) };
    inline vector<string> formats() { DARABONBA_PTR_GET(formats_, vector<string>) };
    inline CreateAppRecordTemplateRequestRecordTemplate& setFormats(const vector<string> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline CreateAppRecordTemplateRequestRecordTemplate& setFormats(vector<string> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<string> & layoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<string>) };
    inline vector<string> layoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<string>) };
    inline CreateAppRecordTemplateRequestRecordTemplate& setLayoutIds(const vector<string> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline CreateAppRecordTemplateRequestRecordTemplate& setLayoutIds(vector<string> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t mediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline CreateAppRecordTemplateRequestRecordTemplate& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppRecordTemplateRequestRecordTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int32_t> delayStopTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> filePrefix_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> fileSplitInterval_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> formats_ = nullptr;
    std::shared_ptr<vector<string>> layoutIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> mediaEncode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
