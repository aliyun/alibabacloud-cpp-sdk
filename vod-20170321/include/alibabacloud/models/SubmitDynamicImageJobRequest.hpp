// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitDynamicImageJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicImageTemplateId, dynamicImageTemplateId_);
      DARABONBA_PTR_TO_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicImageTemplateId, dynamicImageTemplateId_);
      DARABONBA_PTR_FROM_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    SubmitDynamicImageJobRequest() = default ;
    SubmitDynamicImageJobRequest(const SubmitDynamicImageJobRequest &) = default ;
    SubmitDynamicImageJobRequest(SubmitDynamicImageJobRequest &&) = default ;
    SubmitDynamicImageJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobRequest() = default ;
    SubmitDynamicImageJobRequest& operator=(const SubmitDynamicImageJobRequest &) = default ;
    SubmitDynamicImageJobRequest& operator=(SubmitDynamicImageJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicImageTemplateId_ != nullptr
        && this->overrideParams_ != nullptr && this->videoId_ != nullptr; };
    // dynamicImageTemplateId Field Functions 
    bool hasDynamicImageTemplateId() const { return this->dynamicImageTemplateId_ != nullptr;};
    void deleteDynamicImageTemplateId() { this->dynamicImageTemplateId_ = nullptr;};
    inline string dynamicImageTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dynamicImageTemplateId_, "") };
    inline SubmitDynamicImageJobRequest& setDynamicImageTemplateId(string dynamicImageTemplateId) { DARABONBA_PTR_SET_VALUE(dynamicImageTemplateId_, dynamicImageTemplateId) };


    // overrideParams Field Functions 
    bool hasOverrideParams() const { return this->overrideParams_ != nullptr;};
    void deleteOverrideParams() { this->overrideParams_ = nullptr;};
    inline string overrideParams() const { DARABONBA_PTR_GET_DEFAULT(overrideParams_, "") };
    inline SubmitDynamicImageJobRequest& setOverrideParams(string overrideParams) { DARABONBA_PTR_SET_VALUE(overrideParams_, overrideParams) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitDynamicImageJobRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The ID of the frame animation template.
    // 
    // This parameter is required.
    std::shared_ptr<string> dynamicImageTemplateId_ = nullptr;
    // The override parameter. Specify the value in the JSON format. For more information, see [Parameters for media processing](https://help.aliyun.com/document_detail/98618.html). You can use this parameter to override configurations in the animated image template. For more information, see the "DynamicImageTemplateConfig: the configurations of an animated sticker template" section of the [Basic data types](https://help.aliyun.com/document_detail/52839.html) topic.
    std::shared_ptr<string> overrideParams_ = nullptr;
    // The ID of the video. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD](https://vod.console.aliyun.com) console. In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the Video and Audio page, view the ID of the media file. This method is applicable to files that are uploaded by using the ApsaraVideo VOD console.
    // *   Obtain the value of VideoId from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you call to upload media files.
    // *   Obtain the value of VideoId from the response to the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation after you upload media files.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
