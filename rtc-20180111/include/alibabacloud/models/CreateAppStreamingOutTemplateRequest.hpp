// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPSTREAMINGOUTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPSTREAMINGOUTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppStreamingOutTemplateRequestStreamingOutTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppStreamingOutTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppStreamingOutTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(StreamingOutTemplate, streamingOutTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppStreamingOutTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(StreamingOutTemplate, streamingOutTemplate_);
    };
    CreateAppStreamingOutTemplateRequest() = default ;
    CreateAppStreamingOutTemplateRequest(const CreateAppStreamingOutTemplateRequest &) = default ;
    CreateAppStreamingOutTemplateRequest(CreateAppStreamingOutTemplateRequest &&) = default ;
    CreateAppStreamingOutTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppStreamingOutTemplateRequest() = default ;
    CreateAppStreamingOutTemplateRequest& operator=(const CreateAppStreamingOutTemplateRequest &) = default ;
    CreateAppStreamingOutTemplateRequest& operator=(CreateAppStreamingOutTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->streamingOutTemplate_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppStreamingOutTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // streamingOutTemplate Field Functions 
    bool hasStreamingOutTemplate() const { return this->streamingOutTemplate_ != nullptr;};
    void deleteStreamingOutTemplate() { this->streamingOutTemplate_ = nullptr;};
    inline const CreateAppStreamingOutTemplateRequestStreamingOutTemplate & streamingOutTemplate() const { DARABONBA_PTR_GET_CONST(streamingOutTemplate_, CreateAppStreamingOutTemplateRequestStreamingOutTemplate) };
    inline CreateAppStreamingOutTemplateRequestStreamingOutTemplate streamingOutTemplate() { DARABONBA_PTR_GET(streamingOutTemplate_, CreateAppStreamingOutTemplateRequestStreamingOutTemplate) };
    inline CreateAppStreamingOutTemplateRequest& setStreamingOutTemplate(const CreateAppStreamingOutTemplateRequestStreamingOutTemplate & streamingOutTemplate) { DARABONBA_PTR_SET_VALUE(streamingOutTemplate_, streamingOutTemplate) };
    inline CreateAppStreamingOutTemplateRequest& setStreamingOutTemplate(CreateAppStreamingOutTemplateRequestStreamingOutTemplate && streamingOutTemplate) { DARABONBA_PTR_SET_RVALUE(streamingOutTemplate_, streamingOutTemplate) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateAppStreamingOutTemplateRequestStreamingOutTemplate> streamingOutTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
