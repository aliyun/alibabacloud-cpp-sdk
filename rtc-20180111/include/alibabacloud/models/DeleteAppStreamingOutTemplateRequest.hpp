// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPSTREAMINGOUTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPSTREAMINGOUTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteAppStreamingOutTemplateRequestStreamingOutTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DeleteAppStreamingOutTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppStreamingOutTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(StreamingOutTemplate, streamingOutTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppStreamingOutTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(StreamingOutTemplate, streamingOutTemplate_);
    };
    DeleteAppStreamingOutTemplateRequest() = default ;
    DeleteAppStreamingOutTemplateRequest(const DeleteAppStreamingOutTemplateRequest &) = default ;
    DeleteAppStreamingOutTemplateRequest(DeleteAppStreamingOutTemplateRequest &&) = default ;
    DeleteAppStreamingOutTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppStreamingOutTemplateRequest() = default ;
    DeleteAppStreamingOutTemplateRequest& operator=(const DeleteAppStreamingOutTemplateRequest &) = default ;
    DeleteAppStreamingOutTemplateRequest& operator=(DeleteAppStreamingOutTemplateRequest &&) = default ;
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
    inline DeleteAppStreamingOutTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // streamingOutTemplate Field Functions 
    bool hasStreamingOutTemplate() const { return this->streamingOutTemplate_ != nullptr;};
    void deleteStreamingOutTemplate() { this->streamingOutTemplate_ = nullptr;};
    inline const DeleteAppStreamingOutTemplateRequestStreamingOutTemplate & streamingOutTemplate() const { DARABONBA_PTR_GET_CONST(streamingOutTemplate_, DeleteAppStreamingOutTemplateRequestStreamingOutTemplate) };
    inline DeleteAppStreamingOutTemplateRequestStreamingOutTemplate streamingOutTemplate() { DARABONBA_PTR_GET(streamingOutTemplate_, DeleteAppStreamingOutTemplateRequestStreamingOutTemplate) };
    inline DeleteAppStreamingOutTemplateRequest& setStreamingOutTemplate(const DeleteAppStreamingOutTemplateRequestStreamingOutTemplate & streamingOutTemplate) { DARABONBA_PTR_SET_VALUE(streamingOutTemplate_, streamingOutTemplate) };
    inline DeleteAppStreamingOutTemplateRequest& setStreamingOutTemplate(DeleteAppStreamingOutTemplateRequestStreamingOutTemplate && streamingOutTemplate) { DARABONBA_PTR_SET_RVALUE(streamingOutTemplate_, streamingOutTemplate) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DeleteAppStreamingOutTemplateRequestStreamingOutTemplate> streamingOutTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
