// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPRECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPRECORDTEMPLATEREQUEST_HPP_
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
  class ModifyAppRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RecordTemplate, recordTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RecordTemplate, recordTemplate_);
    };
    ModifyAppRecordTemplateRequest() = default ;
    ModifyAppRecordTemplateRequest(const ModifyAppRecordTemplateRequest &) = default ;
    ModifyAppRecordTemplateRequest(ModifyAppRecordTemplateRequest &&) = default ;
    ModifyAppRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppRecordTemplateRequest() = default ;
    ModifyAppRecordTemplateRequest& operator=(const ModifyAppRecordTemplateRequest &) = default ;
    ModifyAppRecordTemplateRequest& operator=(ModifyAppRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(DelayStopTime, delayStopTime_);
        DARABONBA_PTR_TO_JSON(FilePrefix, filePrefix_);
        DARABONBA_PTR_TO_JSON(FileSplitInterval, fileSplitInterval_);
        DARABONBA_PTR_TO_JSON(Formats, formats_);
        DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
        DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, RecordTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(DelayStopTime, delayStopTime_);
        DARABONBA_PTR_FROM_JSON(FilePrefix, filePrefix_);
        DARABONBA_PTR_FROM_JSON(FileSplitInterval, fileSplitInterval_);
        DARABONBA_PTR_FROM_JSON(Formats, formats_);
        DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
        DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      RecordTemplate() = default ;
      RecordTemplate(const RecordTemplate &) = default ;
      RecordTemplate(RecordTemplate &&) = default ;
      RecordTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordTemplate() = default ;
      RecordTemplate& operator=(const RecordTemplate &) = default ;
      RecordTemplate& operator=(RecordTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->delayStopTime_ == nullptr
        && this->filePrefix_ == nullptr && this->fileSplitInterval_ == nullptr && this->formats_ == nullptr && this->layoutIds_ == nullptr && this->mediaEncode_ == nullptr
        && this->name_ == nullptr && this->templateId_ == nullptr; };
      // delayStopTime Field Functions 
      bool hasDelayStopTime() const { return this->delayStopTime_ != nullptr;};
      void deleteDelayStopTime() { this->delayStopTime_ = nullptr;};
      inline int32_t getDelayStopTime() const { DARABONBA_PTR_GET_DEFAULT(delayStopTime_, 0) };
      inline RecordTemplate& setDelayStopTime(int32_t delayStopTime) { DARABONBA_PTR_SET_VALUE(delayStopTime_, delayStopTime) };


      // filePrefix Field Functions 
      bool hasFilePrefix() const { return this->filePrefix_ != nullptr;};
      void deleteFilePrefix() { this->filePrefix_ = nullptr;};
      inline string getFilePrefix() const { DARABONBA_PTR_GET_DEFAULT(filePrefix_, "") };
      inline RecordTemplate& setFilePrefix(string filePrefix) { DARABONBA_PTR_SET_VALUE(filePrefix_, filePrefix) };


      // fileSplitInterval Field Functions 
      bool hasFileSplitInterval() const { return this->fileSplitInterval_ != nullptr;};
      void deleteFileSplitInterval() { this->fileSplitInterval_ = nullptr;};
      inline int32_t getFileSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(fileSplitInterval_, 0) };
      inline RecordTemplate& setFileSplitInterval(int32_t fileSplitInterval) { DARABONBA_PTR_SET_VALUE(fileSplitInterval_, fileSplitInterval) };


      // formats Field Functions 
      bool hasFormats() const { return this->formats_ != nullptr;};
      void deleteFormats() { this->formats_ = nullptr;};
      inline const vector<string> & getFormats() const { DARABONBA_PTR_GET_CONST(formats_, vector<string>) };
      inline vector<string> getFormats() { DARABONBA_PTR_GET(formats_, vector<string>) };
      inline RecordTemplate& setFormats(const vector<string> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
      inline RecordTemplate& setFormats(vector<string> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


      // layoutIds Field Functions 
      bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
      void deleteLayoutIds() { this->layoutIds_ = nullptr;};
      inline const vector<string> & getLayoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<string>) };
      inline vector<string> getLayoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<string>) };
      inline RecordTemplate& setLayoutIds(const vector<string> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
      inline RecordTemplate& setLayoutIds(vector<string> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


      // mediaEncode Field Functions 
      bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
      void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
      inline int32_t getMediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
      inline RecordTemplate& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RecordTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline RecordTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<int32_t> delayStopTime_ {};
      // This parameter is required.
      shared_ptr<string> filePrefix_ {};
      // This parameter is required.
      shared_ptr<int32_t> fileSplitInterval_ {};
      // This parameter is required.
      shared_ptr<vector<string>> formats_ {};
      // This parameter is required.
      shared_ptr<vector<string>> layoutIds_ {};
      // This parameter is required.
      shared_ptr<int32_t> mediaEncode_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientToken_ == nullptr && this->recordTemplate_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyAppRecordTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAppRecordTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // recordTemplate Field Functions 
    bool hasRecordTemplate() const { return this->recordTemplate_ != nullptr;};
    void deleteRecordTemplate() { this->recordTemplate_ = nullptr;};
    inline const ModifyAppRecordTemplateRequest::RecordTemplate & getRecordTemplate() const { DARABONBA_PTR_GET_CONST(recordTemplate_, ModifyAppRecordTemplateRequest::RecordTemplate) };
    inline ModifyAppRecordTemplateRequest::RecordTemplate getRecordTemplate() { DARABONBA_PTR_GET(recordTemplate_, ModifyAppRecordTemplateRequest::RecordTemplate) };
    inline ModifyAppRecordTemplateRequest& setRecordTemplate(const ModifyAppRecordTemplateRequest::RecordTemplate & recordTemplate) { DARABONBA_PTR_SET_VALUE(recordTemplate_, recordTemplate) };
    inline ModifyAppRecordTemplateRequest& setRecordTemplate(ModifyAppRecordTemplateRequest::RecordTemplate && recordTemplate) { DARABONBA_PTR_SET_RVALUE(recordTemplate_, recordTemplate) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<ModifyAppRecordTemplateRequest::RecordTemplate> recordTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
