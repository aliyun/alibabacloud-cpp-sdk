// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVESNAPSHOTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVESNAPSHOTTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveSnapshotTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveSnapshotTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(OverwriteFormat, overwriteFormat_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SequenceFormat, sequenceFormat_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveSnapshotTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(OverwriteFormat, overwriteFormat_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SequenceFormat, sequenceFormat_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetLiveSnapshotTemplateResponseBody() = default ;
    GetLiveSnapshotTemplateResponseBody(const GetLiveSnapshotTemplateResponseBody &) = default ;
    GetLiveSnapshotTemplateResponseBody(GetLiveSnapshotTemplateResponseBody &&) = default ;
    GetLiveSnapshotTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveSnapshotTemplateResponseBody() = default ;
    GetLiveSnapshotTemplateResponseBody& operator=(const GetLiveSnapshotTemplateResponseBody &) = default ;
    GetLiveSnapshotTemplateResponseBody& operator=(GetLiveSnapshotTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->lastModified_ == nullptr && this->overwriteFormat_ == nullptr && this->requestId_ == nullptr && this->sequenceFormat_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->timeInterval_ == nullptr && this->type_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLiveSnapshotTemplateResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline GetLiveSnapshotTemplateResponseBody& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // overwriteFormat Field Functions 
    bool hasOverwriteFormat() const { return this->overwriteFormat_ != nullptr;};
    void deleteOverwriteFormat() { this->overwriteFormat_ = nullptr;};
    inline string getOverwriteFormat() const { DARABONBA_PTR_GET_DEFAULT(overwriteFormat_, "") };
    inline GetLiveSnapshotTemplateResponseBody& setOverwriteFormat(string overwriteFormat) { DARABONBA_PTR_SET_VALUE(overwriteFormat_, overwriteFormat) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveSnapshotTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sequenceFormat Field Functions 
    bool hasSequenceFormat() const { return this->sequenceFormat_ != nullptr;};
    void deleteSequenceFormat() { this->sequenceFormat_ = nullptr;};
    inline string getSequenceFormat() const { DARABONBA_PTR_GET_DEFAULT(sequenceFormat_, "") };
    inline GetLiveSnapshotTemplateResponseBody& setSequenceFormat(string sequenceFormat) { DARABONBA_PTR_SET_VALUE(sequenceFormat_, sequenceFormat) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLiveSnapshotTemplateResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetLiveSnapshotTemplateResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t getTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline GetLiveSnapshotTemplateResponseBody& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetLiveSnapshotTemplateResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the configuration was modified.
    shared_ptr<string> createTime_ {};
    // The time when the template was created.
    shared_ptr<string> lastModified_ {};
    // The naming format of the snapshot captured in overwrite mode.
    shared_ptr<string> overwriteFormat_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The naming format of the snapshot captured in time series mode.
    shared_ptr<string> sequenceFormat_ {};
    // The template ID.
    shared_ptr<string> templateId_ {};
    // The template name.
    shared_ptr<string> templateName_ {};
    // The interval between two adjacent snapshots.
    shared_ptr<int32_t> timeInterval_ {};
    // The type of the template.
    // 
    // Valid values:
    // 
    // *   system
    // *   custom
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
