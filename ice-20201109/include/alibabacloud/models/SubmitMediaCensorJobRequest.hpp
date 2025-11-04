// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIACENSORJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIACENSORJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitMediaCensorJobRequestInput.hpp>
#include <alibabacloud/models/SubmitMediaCensorJobRequestScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaCensorJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaCensorJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Barrages, barrages_);
      DARABONBA_PTR_TO_JSON(CoverImages, coverImages_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaCensorJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Barrages, barrages_);
      DARABONBA_PTR_FROM_JSON(CoverImages, coverImages_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitMediaCensorJobRequest() = default ;
    SubmitMediaCensorJobRequest(const SubmitMediaCensorJobRequest &) = default ;
    SubmitMediaCensorJobRequest(SubmitMediaCensorJobRequest &&) = default ;
    SubmitMediaCensorJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaCensorJobRequest() = default ;
    SubmitMediaCensorJobRequest& operator=(const SubmitMediaCensorJobRequest &) = default ;
    SubmitMediaCensorJobRequest& operator=(SubmitMediaCensorJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->barrages_ == nullptr
        && return this->coverImages_ == nullptr && return this->description_ == nullptr && return this->input_ == nullptr && return this->notifyUrl_ == nullptr && return this->output_ == nullptr
        && return this->scheduleConfig_ == nullptr && return this->templateId_ == nullptr && return this->title_ == nullptr && return this->userData_ == nullptr; };
    // barrages Field Functions 
    bool hasBarrages() const { return this->barrages_ != nullptr;};
    void deleteBarrages() { this->barrages_ = nullptr;};
    inline string barrages() const { DARABONBA_PTR_GET_DEFAULT(barrages_, "") };
    inline SubmitMediaCensorJobRequest& setBarrages(string barrages) { DARABONBA_PTR_SET_VALUE(barrages_, barrages) };


    // coverImages Field Functions 
    bool hasCoverImages() const { return this->coverImages_ != nullptr;};
    void deleteCoverImages() { this->coverImages_ = nullptr;};
    inline string coverImages() const { DARABONBA_PTR_GET_DEFAULT(coverImages_, "") };
    inline SubmitMediaCensorJobRequest& setCoverImages(string coverImages) { DARABONBA_PTR_SET_VALUE(coverImages_, coverImages) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitMediaCensorJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitMediaCensorJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitMediaCensorJobRequestInput) };
    inline SubmitMediaCensorJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitMediaCensorJobRequestInput) };
    inline SubmitMediaCensorJobRequest& setInput(const SubmitMediaCensorJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitMediaCensorJobRequest& setInput(SubmitMediaCensorJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SubmitMediaCensorJobRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline SubmitMediaCensorJobRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitMediaCensorJobRequestScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitMediaCensorJobRequestScheduleConfig) };
    inline SubmitMediaCensorJobRequestScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitMediaCensorJobRequestScheduleConfig) };
    inline SubmitMediaCensorJobRequest& setScheduleConfig(const SubmitMediaCensorJobRequestScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitMediaCensorJobRequest& setScheduleConfig(SubmitMediaCensorJobRequestScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitMediaCensorJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitMediaCensorJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaCensorJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The live comments of the video.
    // 
    // >  If this parameter is specified, the system checks the live comments specified by this parameter instead of the live comments of the input file specified by Media.
    std::shared_ptr<string> barrages_ = nullptr;
    // The Object Storage Service (OSS) objects that are used as the thumbnails. Specify the thumbnails in a JSON array. A maximum of five thumbnails are supported.
    // 
    // >  If this parameter is specified, the system checks the thumbnails specified by this parameter instead of the thumbnails of the input file specified by **Media**.
    std::shared_ptr<string> coverImages_ = nullptr;
    // The video description, which can be up to 128 bytes in length.
    // 
    // >  If this parameter is specified, the system checks the description specified by this parameter instead of the description of the input file specified by Media.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the file to be moderated.
    std::shared_ptr<SubmitMediaCensorJobRequestInput> input_ = nullptr;
    // The callback URL. Simple Message Queue (SMQ, formerly MNS) and HTTP callbacks are supported.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    // The output snapshots. The moderation job generates output snapshots and the result JSON file in the path corresponding to the input file.
    // 
    // *   File name format of output snapshots: oss://bucket/snapshot-{Count}.jpg. In the path, bucket indicates an OSS bucket that resides in the same region as the current project, and {Count} is the sequence number of the snapshot.
    // *   The detailed moderation results are stored in the {jobId}.output file in the same OSS folder as the output snapshots. For more information about the parameters in the output file, see [Output parameters of media moderation jobs](https://help.aliyun.com/document_detail/609211.html).
    std::shared_ptr<string> output_ = nullptr;
    // The scheduling configurations.
    std::shared_ptr<SubmitMediaCensorJobRequestScheduleConfig> scheduleConfig_ = nullptr;
    // The template ID. If this parameter is not specified, the default template is used for moderation.
    std::shared_ptr<string> templateId_ = nullptr;
    // The video title, which can be up to 64 bytes in length.
    // 
    // >  If this parameter is specified, the system checks the title specified by this parameter instead of the title of the input file specified by Media.
    std::shared_ptr<string> title_ = nullptr;
    // The user-defined data, which can be up to 128 bytes in length.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
