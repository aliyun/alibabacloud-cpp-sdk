// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPSTREAMINGOUTTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPSTREAMINGOUTTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppStreamingOutTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppStreamingOutTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(StreamingOutTemplate, streamingOutTemplateShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppStreamingOutTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(StreamingOutTemplate, streamingOutTemplateShrink_);
    };
    ModifyAppStreamingOutTemplateShrinkRequest() = default ;
    ModifyAppStreamingOutTemplateShrinkRequest(const ModifyAppStreamingOutTemplateShrinkRequest &) = default ;
    ModifyAppStreamingOutTemplateShrinkRequest(ModifyAppStreamingOutTemplateShrinkRequest &&) = default ;
    ModifyAppStreamingOutTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppStreamingOutTemplateShrinkRequest() = default ;
    ModifyAppStreamingOutTemplateShrinkRequest& operator=(const ModifyAppStreamingOutTemplateShrinkRequest &) = default ;
    ModifyAppStreamingOutTemplateShrinkRequest& operator=(ModifyAppStreamingOutTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->streamingOutTemplateShrink_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyAppStreamingOutTemplateShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // streamingOutTemplateShrink Field Functions 
    bool hasStreamingOutTemplateShrink() const { return this->streamingOutTemplateShrink_ != nullptr;};
    void deleteStreamingOutTemplateShrink() { this->streamingOutTemplateShrink_ = nullptr;};
    inline string streamingOutTemplateShrink() const { DARABONBA_PTR_GET_DEFAULT(streamingOutTemplateShrink_, "") };
    inline ModifyAppStreamingOutTemplateShrinkRequest& setStreamingOutTemplateShrink(string streamingOutTemplateShrink) { DARABONBA_PTR_SET_VALUE(streamingOutTemplateShrink_, streamingOutTemplateShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> streamingOutTemplateShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
