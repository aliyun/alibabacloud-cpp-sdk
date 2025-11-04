// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveRecordJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveRecordJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(RecordOutput, recordOutputShrink_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInputShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveRecordJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(RecordOutput, recordOutputShrink_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInputShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitLiveRecordJobShrinkRequest() = default ;
    SubmitLiveRecordJobShrinkRequest(const SubmitLiveRecordJobShrinkRequest &) = default ;
    SubmitLiveRecordJobShrinkRequest(SubmitLiveRecordJobShrinkRequest &&) = default ;
    SubmitLiveRecordJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveRecordJobShrinkRequest() = default ;
    SubmitLiveRecordJobShrinkRequest& operator=(const SubmitLiveRecordJobShrinkRequest &) = default ;
    SubmitLiveRecordJobShrinkRequest& operator=(SubmitLiveRecordJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->notifyUrl_ == nullptr && return this->recordOutputShrink_ == nullptr && return this->streamInputShrink_ == nullptr && return this->templateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitLiveRecordJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SubmitLiveRecordJobShrinkRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // recordOutputShrink Field Functions 
    bool hasRecordOutputShrink() const { return this->recordOutputShrink_ != nullptr;};
    void deleteRecordOutputShrink() { this->recordOutputShrink_ = nullptr;};
    inline string recordOutputShrink() const { DARABONBA_PTR_GET_DEFAULT(recordOutputShrink_, "") };
    inline SubmitLiveRecordJobShrinkRequest& setRecordOutputShrink(string recordOutputShrink) { DARABONBA_PTR_SET_VALUE(recordOutputShrink_, recordOutputShrink) };


    // streamInputShrink Field Functions 
    bool hasStreamInputShrink() const { return this->streamInputShrink_ != nullptr;};
    void deleteStreamInputShrink() { this->streamInputShrink_ = nullptr;};
    inline string streamInputShrink() const { DARABONBA_PTR_GET_DEFAULT(streamInputShrink_, "") };
    inline SubmitLiveRecordJobShrinkRequest& setStreamInputShrink(string streamInputShrink) { DARABONBA_PTR_SET_VALUE(streamInputShrink_, streamInputShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitLiveRecordJobShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The name of the recording job.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    // The storage address of the recording.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordOutputShrink_ = nullptr;
    // The URL of the live stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamInputShrink_ = nullptr;
    // The ID of the recording template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
