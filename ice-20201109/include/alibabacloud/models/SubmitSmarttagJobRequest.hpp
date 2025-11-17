// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTTAGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTTAGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSmarttagJobRequestInput.hpp>
#include <alibabacloud/models/SubmitSmarttagJobRequestScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSmarttagJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmarttagJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentAddr, contentAddr_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmarttagJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentAddr, contentAddr_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSmarttagJobRequest() = default ;
    SubmitSmarttagJobRequest(const SubmitSmarttagJobRequest &) = default ;
    SubmitSmarttagJobRequest(SubmitSmarttagJobRequest &&) = default ;
    SubmitSmarttagJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmarttagJobRequest() = default ;
    SubmitSmarttagJobRequest& operator=(const SubmitSmarttagJobRequest &) = default ;
    SubmitSmarttagJobRequest& operator=(SubmitSmarttagJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->contentAddr_ == nullptr && return this->contentType_ == nullptr && return this->input_ == nullptr && return this->notifyUrl_ == nullptr && return this->params_ == nullptr
        && return this->scheduleConfig_ == nullptr && return this->templateConfig_ == nullptr && return this->templateId_ == nullptr && return this->title_ == nullptr && return this->userData_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SubmitSmarttagJobRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentAddr Field Functions 
    bool hasContentAddr() const { return this->contentAddr_ != nullptr;};
    void deleteContentAddr() { this->contentAddr_ = nullptr;};
    inline string contentAddr() const { DARABONBA_PTR_GET_DEFAULT(contentAddr_, "") };
    inline SubmitSmarttagJobRequest& setContentAddr(string contentAddr) { DARABONBA_PTR_SET_VALUE(contentAddr_, contentAddr) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline SubmitSmarttagJobRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitSmarttagJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitSmarttagJobRequestInput) };
    inline SubmitSmarttagJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitSmarttagJobRequestInput) };
    inline SubmitSmarttagJobRequest& setInput(const SubmitSmarttagJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitSmarttagJobRequest& setInput(SubmitSmarttagJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SubmitSmarttagJobRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitSmarttagJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitSmarttagJobRequestScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitSmarttagJobRequestScheduleConfig) };
    inline SubmitSmarttagJobRequestScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitSmarttagJobRequestScheduleConfig) };
    inline SubmitSmarttagJobRequest& setScheduleConfig(const SubmitSmarttagJobRequestScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitSmarttagJobRequest& setScheduleConfig(SubmitSmarttagJobRequestScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline SubmitSmarttagJobRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitSmarttagJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitSmarttagJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSmarttagJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The video description. The description can contain letters, digits, and hyphens (-) and cannot start with a special character. The description can be up to 1 KB in length.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is discontinued.
    std::shared_ptr<string> contentAddr_ = nullptr;
    // This parameter is discontinued.
    std::shared_ptr<string> contentType_ = nullptr;
    // The job input.
    std::shared_ptr<SubmitSmarttagJobRequestInput> input_ = nullptr;
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
    std::shared_ptr<SubmitSmarttagJobRequestScheduleConfig> scheduleConfig_ = nullptr;
    std::shared_ptr<string> templateConfig_ = nullptr;
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
