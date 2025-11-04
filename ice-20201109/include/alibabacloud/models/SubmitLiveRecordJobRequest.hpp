// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitLiveRecordJobRequestRecordOutput.hpp>
#include <alibabacloud/models/SubmitLiveRecordJobRequestStreamInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveRecordJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveRecordJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveRecordJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitLiveRecordJobRequest() = default ;
    SubmitLiveRecordJobRequest(const SubmitLiveRecordJobRequest &) = default ;
    SubmitLiveRecordJobRequest(SubmitLiveRecordJobRequest &&) = default ;
    SubmitLiveRecordJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveRecordJobRequest() = default ;
    SubmitLiveRecordJobRequest& operator=(const SubmitLiveRecordJobRequest &) = default ;
    SubmitLiveRecordJobRequest& operator=(SubmitLiveRecordJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->notifyUrl_ == nullptr && return this->recordOutput_ == nullptr && return this->streamInput_ == nullptr && return this->templateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitLiveRecordJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SubmitLiveRecordJobRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // recordOutput Field Functions 
    bool hasRecordOutput() const { return this->recordOutput_ != nullptr;};
    void deleteRecordOutput() { this->recordOutput_ = nullptr;};
    inline const SubmitLiveRecordJobRequestRecordOutput & recordOutput() const { DARABONBA_PTR_GET_CONST(recordOutput_, SubmitLiveRecordJobRequestRecordOutput) };
    inline SubmitLiveRecordJobRequestRecordOutput recordOutput() { DARABONBA_PTR_GET(recordOutput_, SubmitLiveRecordJobRequestRecordOutput) };
    inline SubmitLiveRecordJobRequest& setRecordOutput(const SubmitLiveRecordJobRequestRecordOutput & recordOutput) { DARABONBA_PTR_SET_VALUE(recordOutput_, recordOutput) };
    inline SubmitLiveRecordJobRequest& setRecordOutput(SubmitLiveRecordJobRequestRecordOutput && recordOutput) { DARABONBA_PTR_SET_RVALUE(recordOutput_, recordOutput) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const SubmitLiveRecordJobRequestStreamInput & streamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, SubmitLiveRecordJobRequestStreamInput) };
    inline SubmitLiveRecordJobRequestStreamInput streamInput() { DARABONBA_PTR_GET(streamInput_, SubmitLiveRecordJobRequestStreamInput) };
    inline SubmitLiveRecordJobRequest& setStreamInput(const SubmitLiveRecordJobRequestStreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline SubmitLiveRecordJobRequest& setStreamInput(SubmitLiveRecordJobRequestStreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitLiveRecordJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


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
    std::shared_ptr<SubmitLiveRecordJobRequestRecordOutput> recordOutput_ = nullptr;
    // The URL of the live stream.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitLiveRecordJobRequestStreamInput> streamInput_ = nullptr;
    // The ID of the recording template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
