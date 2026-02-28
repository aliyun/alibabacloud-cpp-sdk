// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPSTREAMINGOUTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPSTREAMINGOUTTEMPLATEREQUEST_HPP_
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
  class ModifyAppStreamingOutTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppStreamingOutTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(StreamingOutTemplate, streamingOutTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppStreamingOutTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(StreamingOutTemplate, streamingOutTemplate_);
    };
    ModifyAppStreamingOutTemplateRequest() = default ;
    ModifyAppStreamingOutTemplateRequest(const ModifyAppStreamingOutTemplateRequest &) = default ;
    ModifyAppStreamingOutTemplateRequest(ModifyAppStreamingOutTemplateRequest &&) = default ;
    ModifyAppStreamingOutTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppStreamingOutTemplateRequest() = default ;
    ModifyAppStreamingOutTemplateRequest& operator=(const ModifyAppStreamingOutTemplateRequest &) = default ;
    ModifyAppStreamingOutTemplateRequest& operator=(ModifyAppStreamingOutTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamingOutTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamingOutTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
        DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, StreamingOutTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
        DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      StreamingOutTemplate() = default ;
      StreamingOutTemplate(const StreamingOutTemplate &) = default ;
      StreamingOutTemplate(StreamingOutTemplate &&) = default ;
      StreamingOutTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamingOutTemplate() = default ;
      StreamingOutTemplate& operator=(const StreamingOutTemplate &) = default ;
      StreamingOutTemplate& operator=(StreamingOutTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->layoutIds_ == nullptr
        && this->mediaEncode_ == nullptr && this->name_ == nullptr && this->templateId_ == nullptr; };
      // layoutIds Field Functions 
      bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
      void deleteLayoutIds() { this->layoutIds_ = nullptr;};
      inline const vector<string> & getLayoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<string>) };
      inline vector<string> getLayoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<string>) };
      inline StreamingOutTemplate& setLayoutIds(const vector<string> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
      inline StreamingOutTemplate& setLayoutIds(vector<string> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


      // mediaEncode Field Functions 
      bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
      void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
      inline int32_t getMediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
      inline StreamingOutTemplate& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline StreamingOutTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline StreamingOutTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
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
        && this->streamingOutTemplate_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyAppStreamingOutTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // streamingOutTemplate Field Functions 
    bool hasStreamingOutTemplate() const { return this->streamingOutTemplate_ != nullptr;};
    void deleteStreamingOutTemplate() { this->streamingOutTemplate_ = nullptr;};
    inline const ModifyAppStreamingOutTemplateRequest::StreamingOutTemplate & getStreamingOutTemplate() const { DARABONBA_PTR_GET_CONST(streamingOutTemplate_, ModifyAppStreamingOutTemplateRequest::StreamingOutTemplate) };
    inline ModifyAppStreamingOutTemplateRequest::StreamingOutTemplate getStreamingOutTemplate() { DARABONBA_PTR_GET(streamingOutTemplate_, ModifyAppStreamingOutTemplateRequest::StreamingOutTemplate) };
    inline ModifyAppStreamingOutTemplateRequest& setStreamingOutTemplate(const ModifyAppStreamingOutTemplateRequest::StreamingOutTemplate & streamingOutTemplate) { DARABONBA_PTR_SET_VALUE(streamingOutTemplate_, streamingOutTemplate) };
    inline ModifyAppStreamingOutTemplateRequest& setStreamingOutTemplate(ModifyAppStreamingOutTemplateRequest::StreamingOutTemplate && streamingOutTemplate) { DARABONBA_PTR_SET_RVALUE(streamingOutTemplate_, streamingOutTemplate) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<ModifyAppStreamingOutTemplateRequest::StreamingOutTemplate> streamingOutTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
