// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CMSEVENTFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_CMSEVENTFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EventResourceForEventView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CmsEventForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CmsEventForView& obj) { 
      DARABONBA_ANY_TO_JSON(annotations, annotations_);
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(datacontenttype, datacontenttype_);
      DARABONBA_PTR_TO_JSON(dataschema, dataschema_);
      DARABONBA_PTR_TO_JSON(dedupId, dedupId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(integrationUuid, integrationUuid_);
      DARABONBA_ANY_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(receiveTime, receiveTime_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourcetype, sourcetype_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(subtype, subtype_);
      DARABONBA_PTR_TO_JSON(sysId, sysId_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
      DARABONBA_ANY_TO_JSON(workspaceTags, workspaceTags_);
    };
    friend void from_json(const Darabonba::Json& j, CmsEventForView& obj) { 
      DARABONBA_ANY_FROM_JSON(annotations, annotations_);
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(datacontenttype, datacontenttype_);
      DARABONBA_PTR_FROM_JSON(dataschema, dataschema_);
      DARABONBA_PTR_FROM_JSON(dedupId, dedupId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(integrationUuid, integrationUuid_);
      DARABONBA_ANY_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(receiveTime, receiveTime_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourcetype, sourcetype_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(subtype, subtype_);
      DARABONBA_PTR_FROM_JSON(sysId, sysId_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      DARABONBA_ANY_FROM_JSON(workspaceTags, workspaceTags_);
    };
    CmsEventForView() = default ;
    CmsEventForView(const CmsEventForView &) = default ;
    CmsEventForView(CmsEventForView &&) = default ;
    CmsEventForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CmsEventForView() = default ;
    CmsEventForView& operator=(const CmsEventForView &) = default ;
    CmsEventForView& operator=(CmsEventForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && this->data_ == nullptr && this->datacontenttype_ == nullptr && this->dataschema_ == nullptr && this->dedupId_ == nullptr && this->id_ == nullptr
        && this->integrationUuid_ == nullptr && this->labels_ == nullptr && this->receiveTime_ == nullptr && this->resource_ == nullptr && this->severity_ == nullptr
        && this->source_ == nullptr && this->sourcetype_ == nullptr && this->status_ == nullptr && this->subject_ == nullptr && this->subtype_ == nullptr
        && this->sysId_ == nullptr && this->time_ == nullptr && this->timestamp_ == nullptr && this->type_ == nullptr && this->workspace_ == nullptr
        && this->workspaceTags_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline     const Darabonba::Json & getAnnotations() const { DARABONBA_GET(annotations_) };
    Darabonba::Json & getAnnotations() { DARABONBA_GET(annotations_) };
    inline CmsEventForView& setAnnotations(const Darabonba::Json & annotations) { DARABONBA_SET_VALUE(annotations_, annotations) };
    inline CmsEventForView& setAnnotations(Darabonba::Json && annotations) { DARABONBA_SET_RVALUE(annotations_, annotations) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline CmsEventForView& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline CmsEventForView& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // datacontenttype Field Functions 
    bool hasDatacontenttype() const { return this->datacontenttype_ != nullptr;};
    void deleteDatacontenttype() { this->datacontenttype_ = nullptr;};
    inline string getDatacontenttype() const { DARABONBA_PTR_GET_DEFAULT(datacontenttype_, "") };
    inline CmsEventForView& setDatacontenttype(string datacontenttype) { DARABONBA_PTR_SET_VALUE(datacontenttype_, datacontenttype) };


    // dataschema Field Functions 
    bool hasDataschema() const { return this->dataschema_ != nullptr;};
    void deleteDataschema() { this->dataschema_ = nullptr;};
    inline string getDataschema() const { DARABONBA_PTR_GET_DEFAULT(dataschema_, "") };
    inline CmsEventForView& setDataschema(string dataschema) { DARABONBA_PTR_SET_VALUE(dataschema_, dataschema) };


    // dedupId Field Functions 
    bool hasDedupId() const { return this->dedupId_ != nullptr;};
    void deleteDedupId() { this->dedupId_ = nullptr;};
    inline string getDedupId() const { DARABONBA_PTR_GET_DEFAULT(dedupId_, "") };
    inline CmsEventForView& setDedupId(string dedupId) { DARABONBA_PTR_SET_VALUE(dedupId_, dedupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CmsEventForView& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // integrationUuid Field Functions 
    bool hasIntegrationUuid() const { return this->integrationUuid_ != nullptr;};
    void deleteIntegrationUuid() { this->integrationUuid_ = nullptr;};
    inline string getIntegrationUuid() const { DARABONBA_PTR_GET_DEFAULT(integrationUuid_, "") };
    inline CmsEventForView& setIntegrationUuid(string integrationUuid) { DARABONBA_PTR_SET_VALUE(integrationUuid_, integrationUuid) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & getLabels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & getLabels() { DARABONBA_GET(labels_) };
    inline CmsEventForView& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline CmsEventForView& setLabels(Darabonba::Json && labels) { DARABONBA_SET_RVALUE(labels_, labels) };


    // receiveTime Field Functions 
    bool hasReceiveTime() const { return this->receiveTime_ != nullptr;};
    void deleteReceiveTime() { this->receiveTime_ = nullptr;};
    inline int64_t getReceiveTime() const { DARABONBA_PTR_GET_DEFAULT(receiveTime_, 0L) };
    inline CmsEventForView& setReceiveTime(int64_t receiveTime) { DARABONBA_PTR_SET_VALUE(receiveTime_, receiveTime) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const EventResourceForEventView & getResource() const { DARABONBA_PTR_GET_CONST(resource_, EventResourceForEventView) };
    inline EventResourceForEventView getResource() { DARABONBA_PTR_GET(resource_, EventResourceForEventView) };
    inline CmsEventForView& setResource(const EventResourceForEventView & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline CmsEventForView& setResource(EventResourceForEventView && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CmsEventForView& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CmsEventForView& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcetype Field Functions 
    bool hasSourcetype() const { return this->sourcetype_ != nullptr;};
    void deleteSourcetype() { this->sourcetype_ = nullptr;};
    inline string getSourcetype() const { DARABONBA_PTR_GET_DEFAULT(sourcetype_, "") };
    inline CmsEventForView& setSourcetype(string sourcetype) { DARABONBA_PTR_SET_VALUE(sourcetype_, sourcetype) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CmsEventForView& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CmsEventForView& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // subtype Field Functions 
    bool hasSubtype() const { return this->subtype_ != nullptr;};
    void deleteSubtype() { this->subtype_ = nullptr;};
    inline string getSubtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, "") };
    inline CmsEventForView& setSubtype(string subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


    // sysId Field Functions 
    bool hasSysId() const { return this->sysId_ != nullptr;};
    void deleteSysId() { this->sysId_ = nullptr;};
    inline string getSysId() const { DARABONBA_PTR_GET_DEFAULT(sysId_, "") };
    inline CmsEventForView& setSysId(string sysId) { DARABONBA_PTR_SET_VALUE(sysId_, sysId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline CmsEventForView& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline CmsEventForView& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CmsEventForView& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CmsEventForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    // workspaceTags Field Functions 
    bool hasWorkspaceTags() const { return this->workspaceTags_ != nullptr;};
    void deleteWorkspaceTags() { this->workspaceTags_ = nullptr;};
    inline     const Darabonba::Json & getWorkspaceTags() const { DARABONBA_GET(workspaceTags_) };
    Darabonba::Json & getWorkspaceTags() { DARABONBA_GET(workspaceTags_) };
    inline CmsEventForView& setWorkspaceTags(const Darabonba::Json & workspaceTags) { DARABONBA_SET_VALUE(workspaceTags_, workspaceTags) };
    inline CmsEventForView& setWorkspaceTags(Darabonba::Json && workspaceTags) { DARABONBA_SET_RVALUE(workspaceTags_, workspaceTags) };


  protected:
    Darabonba::Json annotations_ {};
    Darabonba::Json data_ {};
    shared_ptr<string> datacontenttype_ {};
    shared_ptr<string> dataschema_ {};
    shared_ptr<string> dedupId_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> integrationUuid_ {};
    Darabonba::Json labels_ {};
    shared_ptr<int64_t> receiveTime_ {};
    shared_ptr<EventResourceForEventView> resource_ {};
    shared_ptr<string> severity_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> sourcetype_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> subject_ {};
    shared_ptr<string> subtype_ {};
    shared_ptr<string> sysId_ {};
    shared_ptr<string> time_ {};
    shared_ptr<int64_t> timestamp_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> workspace_ {};
    Darabonba::Json workspaceTags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
