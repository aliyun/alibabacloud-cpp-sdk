// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTTAGJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTTAGJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSmarttagJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmarttagJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentAddr, contentAddr_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmarttagJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentAddr, contentAddr_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSmarttagJobShrinkRequest() = default ;
    SubmitSmarttagJobShrinkRequest(const SubmitSmarttagJobShrinkRequest &) = default ;
    SubmitSmarttagJobShrinkRequest(SubmitSmarttagJobShrinkRequest &&) = default ;
    SubmitSmarttagJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmarttagJobShrinkRequest() = default ;
    SubmitSmarttagJobShrinkRequest& operator=(const SubmitSmarttagJobShrinkRequest &) = default ;
    SubmitSmarttagJobShrinkRequest& operator=(SubmitSmarttagJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentAddr_ != nullptr && this->contentType_ != nullptr && this->inputShrink_ != nullptr && this->notifyUrl_ != nullptr && this->params_ != nullptr
        && this->scheduleConfigShrink_ != nullptr && this->templateId_ != nullptr && this->title_ != nullptr && this->userData_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SubmitSmarttagJobShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentAddr Field Functions 
    bool hasContentAddr() const { return this->contentAddr_ != nullptr;};
    void deleteContentAddr() { this->contentAddr_ = nullptr;};
    inline string contentAddr() const { DARABONBA_PTR_GET_DEFAULT(contentAddr_, "") };
    inline SubmitSmarttagJobShrinkRequest& setContentAddr(string contentAddr) { DARABONBA_PTR_SET_VALUE(contentAddr_, contentAddr) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline SubmitSmarttagJobShrinkRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string inputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitSmarttagJobShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SubmitSmarttagJobShrinkRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitSmarttagJobShrinkRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string scheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline SubmitSmarttagJobShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitSmarttagJobShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitSmarttagJobShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSmarttagJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The video description. The description can contain letters, digits, and hyphens (-) and cannot start with a special character. The description can be up to 1 KB in length.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is discontinued.
    std::shared_ptr<string> contentAddr_ = nullptr;
    // This parameter is discontinued.
    std::shared_ptr<string> contentType_ = nullptr;
    // The job input.
    std::shared_ptr<string> inputShrink_ = nullptr;
    // The URL for receiving callbacks. Set the value to an HTTP URL or an HTTPS URL.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    // The additional request parameters. The value is a JSON string. Example: {"needAsrData":true, "needOcrData":false}. The following parameters are supported:
    // 
    // *   needAsrData: specifies whether to query the automatic speech recognition (ASR) data. The value is of the BOOLEAN type. Default value: false. Valid values: true and false.
    // *   needOcrData: specifies whether to query the optical character recognition (OCR) data. The value is of the BOOLEAN type. Default value: false. Valid values: true and false.
    // *   needMetaData: specifies whether to query the metadata. The value is of the BOOLEAN type. Default value: false. Valid values: true and false.
    // *   nlpParams: the input parameters of the natural language processing (NLP) operator. The value is a JSON object. This parameter is empty by default, which indicates that the NLP operator is not used. For more information, see the "nlpParams" section of this topic.
    std::shared_ptr<string> params_ = nullptr;
    // The scheduling configurations.
    std::shared_ptr<string> scheduleConfigShrink_ = nullptr;
    // The ID of the template that specifies the analysis algorithms. For more information about template operations, see [Configure templates](https://help.aliyun.com/document_detail/445702.html).
    std::shared_ptr<string> templateId_ = nullptr;
    // The video title. The title can contain letters, digits, and hyphens (-) and cannot start with a special character. The title can be up to 256 bytes in length.
    std::shared_ptr<string> title_ = nullptr;
    // The data to be passed through Simple Message Queue (SMQ, formerly MNS) during callbacks. The data can be up to 1 KB in length. For more information about how to specify an SMQ queue for receiving callbacks, see UpdatePipeline.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
