// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVESNAPSHOTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVESNAPSHOTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLiveSnapshotTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveSnapshotTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OverwriteFormat, overwriteFormat_);
      DARABONBA_PTR_TO_JSON(SequenceFormat, sequenceFormat_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveSnapshotTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OverwriteFormat, overwriteFormat_);
      DARABONBA_PTR_FROM_JSON(SequenceFormat, sequenceFormat_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
    };
    CreateLiveSnapshotTemplateRequest() = default ;
    CreateLiveSnapshotTemplateRequest(const CreateLiveSnapshotTemplateRequest &) = default ;
    CreateLiveSnapshotTemplateRequest(CreateLiveSnapshotTemplateRequest &&) = default ;
    CreateLiveSnapshotTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveSnapshotTemplateRequest() = default ;
    CreateLiveSnapshotTemplateRequest& operator=(const CreateLiveSnapshotTemplateRequest &) = default ;
    CreateLiveSnapshotTemplateRequest& operator=(CreateLiveSnapshotTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->overwriteFormat_ != nullptr
        && this->sequenceFormat_ != nullptr && this->templateName_ != nullptr && this->timeInterval_ != nullptr; };
    // overwriteFormat Field Functions 
    bool hasOverwriteFormat() const { return this->overwriteFormat_ != nullptr;};
    void deleteOverwriteFormat() { this->overwriteFormat_ = nullptr;};
    inline string overwriteFormat() const { DARABONBA_PTR_GET_DEFAULT(overwriteFormat_, "") };
    inline CreateLiveSnapshotTemplateRequest& setOverwriteFormat(string overwriteFormat) { DARABONBA_PTR_SET_VALUE(overwriteFormat_, overwriteFormat) };


    // sequenceFormat Field Functions 
    bool hasSequenceFormat() const { return this->sequenceFormat_ != nullptr;};
    void deleteSequenceFormat() { this->sequenceFormat_ = nullptr;};
    inline string sequenceFormat() const { DARABONBA_PTR_GET_DEFAULT(sequenceFormat_, "") };
    inline CreateLiveSnapshotTemplateRequest& setSequenceFormat(string sequenceFormat) { DARABONBA_PTR_SET_VALUE(sequenceFormat_, sequenceFormat) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateLiveSnapshotTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t timeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline CreateLiveSnapshotTemplateRequest& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


  protected:
    // The naming format of the snapshot captured in overwrite mode.
    // 
    // *   The value cannot start with a forward slash (/). Only the suffix .jpg is supported.
    // *   It cannot exceed 255 characters in length.
    // *   The {JobId} placeholder is supported. It specifies the ID of the snapshot job.
    // *   Placeholders such as {UnixTimestamp}, {Sequence}, and {Date} are not allowed.
    // *   You must specify at least one of the OverwriteFormat and SequenceFormat parameters.
    std::shared_ptr<string> overwriteFormat_ = nullptr;
    // The naming format of the snapshot captured in time series mode.
    // 
    // *   The value cannot start with a forward slash (/). Only the suffix .jpg is supported.
    // *   It cannot exceed 255 characters in length.
    // *   The {JobId}, {Date}, {UnixTimestamp}, and {Sequence} placeholders are supported. {JobId} specifies the ID of the snapshot job. {Date} specifies the date on which the snapshot is captured. {UnixTimestamp} specifies the timestamp of the snapshot. {Sequence} specifies the sequence number of the snapshot. You must specify at least one of the {UnixTimestamp} and {Sequence} placeholders.
    // *   You must specify at least one of the OverwriteFormat and SequenceFormat parameters.
    std::shared_ptr<string> sequenceFormat_ = nullptr;
    // The name of the template.
    // 
    // *   It cannot exceed 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    // The interval between two adjacent snapshots. Unit: seconds.
    // 
    // *   Valid values: [5,3600].
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> timeInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
