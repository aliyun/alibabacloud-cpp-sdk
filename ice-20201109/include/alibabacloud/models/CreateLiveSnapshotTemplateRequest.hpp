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
    virtual bool empty() const override { return this->overwriteFormat_ == nullptr
        && this->sequenceFormat_ == nullptr && this->templateName_ == nullptr && this->timeInterval_ == nullptr; };
    // overwriteFormat Field Functions 
    bool hasOverwriteFormat() const { return this->overwriteFormat_ != nullptr;};
    void deleteOverwriteFormat() { this->overwriteFormat_ = nullptr;};
    inline string getOverwriteFormat() const { DARABONBA_PTR_GET_DEFAULT(overwriteFormat_, "") };
    inline CreateLiveSnapshotTemplateRequest& setOverwriteFormat(string overwriteFormat) { DARABONBA_PTR_SET_VALUE(overwriteFormat_, overwriteFormat) };


    // sequenceFormat Field Functions 
    bool hasSequenceFormat() const { return this->sequenceFormat_ != nullptr;};
    void deleteSequenceFormat() { this->sequenceFormat_ = nullptr;};
    inline string getSequenceFormat() const { DARABONBA_PTR_GET_DEFAULT(sequenceFormat_, "") };
    inline CreateLiveSnapshotTemplateRequest& setSequenceFormat(string sequenceFormat) { DARABONBA_PTR_SET_VALUE(sequenceFormat_, sequenceFormat) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateLiveSnapshotTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t getTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline CreateLiveSnapshotTemplateRequest& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


  protected:
    // The overwrite snapshot file format.
    // 
    // - The value cannot start with "/". Only the .jpg suffix is supported.
    // - Maximum length: 255.
    // - Supported placeholder: {JobId}: snapshot task ID.
    // - The placeholders {UnixTimestamp}, {Sequence}, and {Date} are not allowed.
    // - At least one of the overwrite snapshot format or sequence snapshot format must be specified.
    shared_ptr<string> overwriteFormat_ {};
    // The sequence snapshot file format.
    // - The value cannot start with "/". Only the .jpg suffix is supported.
    // - Maximum length: 255.
    // - Supported placeholders: {JobId}: snapshot task ID, {Date}: snapshot date, {UnixTimestamp}: timestamp, {Sequence}: serial number. At least one of {UnixTimestamp} or {Sequence} must be specified.
    // - At least one of the overwrite snapshot format or sequence snapshot format must be specified.
    shared_ptr<string> sequenceFormat_ {};
    // The template name.
    // - Maximum length: 128.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // The snapshot time interval. Unit: seconds.
    // - Valid values: 5 to 3600.
    // 
    // This parameter is required.
    shared_ptr<int32_t> timeInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
