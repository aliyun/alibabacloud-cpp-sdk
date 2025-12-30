// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIACENSORJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIACENSORJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaCensorJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaCensorJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Barrages, barrages_);
      DARABONBA_PTR_TO_JSON(CoverImages, coverImages_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaCensorJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Barrages, barrages_);
      DARABONBA_PTR_FROM_JSON(CoverImages, coverImages_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitMediaCensorJobShrinkRequest() = default ;
    SubmitMediaCensorJobShrinkRequest(const SubmitMediaCensorJobShrinkRequest &) = default ;
    SubmitMediaCensorJobShrinkRequest(SubmitMediaCensorJobShrinkRequest &&) = default ;
    SubmitMediaCensorJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaCensorJobShrinkRequest() = default ;
    SubmitMediaCensorJobShrinkRequest& operator=(const SubmitMediaCensorJobShrinkRequest &) = default ;
    SubmitMediaCensorJobShrinkRequest& operator=(SubmitMediaCensorJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->barrages_ == nullptr
        && this->coverImages_ == nullptr && this->description_ == nullptr && this->inputShrink_ == nullptr && this->notifyUrl_ == nullptr && this->output_ == nullptr
        && this->scheduleConfigShrink_ == nullptr && this->templateId_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr; };
    // barrages Field Functions 
    bool hasBarrages() const { return this->barrages_ != nullptr;};
    void deleteBarrages() { this->barrages_ = nullptr;};
    inline string getBarrages() const { DARABONBA_PTR_GET_DEFAULT(barrages_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setBarrages(string barrages) { DARABONBA_PTR_SET_VALUE(barrages_, barrages) };


    // coverImages Field Functions 
    bool hasCoverImages() const { return this->coverImages_ != nullptr;};
    void deleteCoverImages() { this->coverImages_ = nullptr;};
    inline string getCoverImages() const { DARABONBA_PTR_GET_DEFAULT(coverImages_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setCoverImages(string coverImages) { DARABONBA_PTR_SET_VALUE(coverImages_, coverImages) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string getScheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaCensorJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The live comments of the video.
    // 
    // >  If this parameter is specified, the system checks the live comments specified by this parameter instead of the live comments of the input file specified by Media.
    shared_ptr<string> barrages_ {};
    // The Object Storage Service (OSS) objects that are used as the thumbnails. Specify the thumbnails in a JSON array. A maximum of five thumbnails are supported.
    // 
    // >  If this parameter is specified, the system checks the thumbnails specified by this parameter instead of the thumbnails of the input file specified by **Media**.
    shared_ptr<string> coverImages_ {};
    // The video description, which can be up to 128 bytes in length.
    // 
    // >  If this parameter is specified, the system checks the description specified by this parameter instead of the description of the input file specified by Media.
    shared_ptr<string> description_ {};
    // The information about the file to be moderated.
    shared_ptr<string> inputShrink_ {};
    // The callback URL. Simple Message Queue (SMQ, formerly MNS) and HTTP callbacks are supported.
    shared_ptr<string> notifyUrl_ {};
    // The output snapshots. The moderation job generates output snapshots and the result JSON file in the path corresponding to the input file.
    // 
    // *   File name format of output snapshots: oss://bucket/snapshot-{Count}.jpg. In the path, bucket indicates an OSS bucket that resides in the same region as the current project, and {Count} is the sequence number of the snapshot.
    // *   The detailed moderation results are stored in the {jobId}.output file in the same OSS folder as the output snapshots. For more information about the parameters in the output file, see [Output parameters of media moderation jobs](https://help.aliyun.com/document_detail/609211.html).
    shared_ptr<string> output_ {};
    // The scheduling configurations.
    shared_ptr<string> scheduleConfigShrink_ {};
    // The template ID. If this parameter is not specified, the default template is used for moderation.
    shared_ptr<string> templateId_ {};
    // The video title, which can be up to 64 bytes in length.
    // 
    // >  If this parameter is specified, the system checks the title specified by this parameter instead of the title of the input file specified by Media.
    shared_ptr<string> title_ {};
    // The user-defined data, which can be up to 128 bytes in length.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
