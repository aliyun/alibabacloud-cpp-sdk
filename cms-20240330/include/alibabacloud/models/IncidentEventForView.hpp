// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTEVENTFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTEVENTFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CmsEventForView.hpp>
#include <alibabacloud/models/EventResourceForIncidentView.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentEventForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentEventForView& obj) { 
      DARABONBA_PTR_TO_JSON(autoRecoverTime, autoRecoverTime_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_ANY_TO_JSON(dimension, dimension_);
      DARABONBA_PTR_TO_JSON(eventResource, eventResource_);
      DARABONBA_ANY_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(incidentEventUuid, incidentEventUuid_);
      DARABONBA_PTR_TO_JSON(incidentUuid, incidentUuid_);
      DARABONBA_ANY_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(lastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(recoverTime, recoverTime_);
      DARABONBA_PTR_TO_JSON(searchIndex, searchIndex_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_ANY_TO_JSON(severityCountMap, severityCountMap_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(textIndex, textIndex_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentEventForView& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRecoverTime, autoRecoverTime_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_ANY_FROM_JSON(dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(eventResource, eventResource_);
      DARABONBA_ANY_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(incidentEventUuid, incidentEventUuid_);
      DARABONBA_PTR_FROM_JSON(incidentUuid, incidentUuid_);
      DARABONBA_ANY_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(lastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(recoverTime, recoverTime_);
      DARABONBA_PTR_FROM_JSON(searchIndex, searchIndex_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_ANY_FROM_JSON(severityCountMap, severityCountMap_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(textIndex, textIndex_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    IncidentEventForView() = default ;
    IncidentEventForView(const IncidentEventForView &) = default ;
    IncidentEventForView(IncidentEventForView &&) = default ;
    IncidentEventForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentEventForView() = default ;
    IncidentEventForView& operator=(const IncidentEventForView &) = default ;
    IncidentEventForView& operator=(IncidentEventForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRecoverTime_ == nullptr
        && return this->content_ == nullptr && return this->count_ == nullptr && return this->dimension_ == nullptr && return this->eventResource_ == nullptr && return this->groupBy_ == nullptr
        && return this->incidentEventUuid_ == nullptr && return this->incidentUuid_ == nullptr && return this->labels_ == nullptr && return this->lastTime_ == nullptr && return this->recoverTime_ == nullptr
        && return this->searchIndex_ == nullptr && return this->severity_ == nullptr && return this->severityCountMap_ == nullptr && return this->state_ == nullptr && return this->textIndex_ == nullptr
        && return this->time_ == nullptr && return this->title_ == nullptr && return this->userId_ == nullptr && return this->workspace_ == nullptr; };
    // autoRecoverTime Field Functions 
    bool hasAutoRecoverTime() const { return this->autoRecoverTime_ != nullptr;};
    void deleteAutoRecoverTime() { this->autoRecoverTime_ = nullptr;};
    inline int64_t autoRecoverTime() const { DARABONBA_PTR_GET_DEFAULT(autoRecoverTime_, 0L) };
    inline IncidentEventForView& setAutoRecoverTime(int64_t autoRecoverTime) { DARABONBA_PTR_SET_VALUE(autoRecoverTime_, autoRecoverTime) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const CmsEventForView & content() const { DARABONBA_PTR_GET_CONST(content_, CmsEventForView) };
    inline CmsEventForView content() { DARABONBA_PTR_GET(content_, CmsEventForView) };
    inline IncidentEventForView& setContent(const CmsEventForView & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline IncidentEventForView& setContent(CmsEventForView && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline IncidentEventForView& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline     const Darabonba::Json & dimension() const { DARABONBA_GET(dimension_) };
    Darabonba::Json & dimension() { DARABONBA_GET(dimension_) };
    inline IncidentEventForView& setDimension(const Darabonba::Json & dimension) { DARABONBA_SET_VALUE(dimension_, dimension) };
    inline IncidentEventForView& setDimension(Darabonba::Json & dimension) { DARABONBA_SET_RVALUE(dimension_, dimension) };


    // eventResource Field Functions 
    bool hasEventResource() const { return this->eventResource_ != nullptr;};
    void deleteEventResource() { this->eventResource_ = nullptr;};
    inline const EventResourceForIncidentView & eventResource() const { DARABONBA_PTR_GET_CONST(eventResource_, EventResourceForIncidentView) };
    inline EventResourceForIncidentView eventResource() { DARABONBA_PTR_GET(eventResource_, EventResourceForIncidentView) };
    inline IncidentEventForView& setEventResource(const EventResourceForIncidentView & eventResource) { DARABONBA_PTR_SET_VALUE(eventResource_, eventResource) };
    inline IncidentEventForView& setEventResource(EventResourceForIncidentView && eventResource) { DARABONBA_PTR_SET_RVALUE(eventResource_, eventResource) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline     const Darabonba::Json & groupBy() const { DARABONBA_GET(groupBy_) };
    Darabonba::Json & groupBy() { DARABONBA_GET(groupBy_) };
    inline IncidentEventForView& setGroupBy(const Darabonba::Json & groupBy) { DARABONBA_SET_VALUE(groupBy_, groupBy) };
    inline IncidentEventForView& setGroupBy(Darabonba::Json & groupBy) { DARABONBA_SET_RVALUE(groupBy_, groupBy) };


    // incidentEventUuid Field Functions 
    bool hasIncidentEventUuid() const { return this->incidentEventUuid_ != nullptr;};
    void deleteIncidentEventUuid() { this->incidentEventUuid_ = nullptr;};
    inline string incidentEventUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentEventUuid_, "") };
    inline IncidentEventForView& setIncidentEventUuid(string incidentEventUuid) { DARABONBA_PTR_SET_VALUE(incidentEventUuid_, incidentEventUuid) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline IncidentEventForView& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & labels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & labels() { DARABONBA_GET(labels_) };
    inline IncidentEventForView& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline IncidentEventForView& setLabels(Darabonba::Json & labels) { DARABONBA_SET_RVALUE(labels_, labels) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline IncidentEventForView& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // recoverTime Field Functions 
    bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
    void deleteRecoverTime() { this->recoverTime_ = nullptr;};
    inline int64_t recoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
    inline IncidentEventForView& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


    // searchIndex Field Functions 
    bool hasSearchIndex() const { return this->searchIndex_ != nullptr;};
    void deleteSearchIndex() { this->searchIndex_ = nullptr;};
    inline const vector<string> & searchIndex() const { DARABONBA_PTR_GET_CONST(searchIndex_, vector<string>) };
    inline vector<string> searchIndex() { DARABONBA_PTR_GET(searchIndex_, vector<string>) };
    inline IncidentEventForView& setSearchIndex(const vector<string> & searchIndex) { DARABONBA_PTR_SET_VALUE(searchIndex_, searchIndex) };
    inline IncidentEventForView& setSearchIndex(vector<string> && searchIndex) { DARABONBA_PTR_SET_RVALUE(searchIndex_, searchIndex) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline IncidentEventForView& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // severityCountMap Field Functions 
    bool hasSeverityCountMap() const { return this->severityCountMap_ != nullptr;};
    void deleteSeverityCountMap() { this->severityCountMap_ = nullptr;};
    inline     const Darabonba::Json & severityCountMap() const { DARABONBA_GET(severityCountMap_) };
    Darabonba::Json & severityCountMap() { DARABONBA_GET(severityCountMap_) };
    inline IncidentEventForView& setSeverityCountMap(const Darabonba::Json & severityCountMap) { DARABONBA_SET_VALUE(severityCountMap_, severityCountMap) };
    inline IncidentEventForView& setSeverityCountMap(Darabonba::Json & severityCountMap) { DARABONBA_SET_RVALUE(severityCountMap_, severityCountMap) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline IncidentEventForView& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // textIndex Field Functions 
    bool hasTextIndex() const { return this->textIndex_ != nullptr;};
    void deleteTextIndex() { this->textIndex_ = nullptr;};
    inline string textIndex() const { DARABONBA_PTR_GET_DEFAULT(textIndex_, "") };
    inline IncidentEventForView& setTextIndex(string textIndex) { DARABONBA_PTR_SET_VALUE(textIndex_, textIndex) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentEventForView& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline IncidentEventForView& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IncidentEventForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline IncidentEventForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<int64_t> autoRecoverTime_ = nullptr;
    std::shared_ptr<CmsEventForView> content_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    Darabonba::Json dimension_ = nullptr;
    std::shared_ptr<EventResourceForIncidentView> eventResource_ = nullptr;
    Darabonba::Json groupBy_ = nullptr;
    std::shared_ptr<string> incidentEventUuid_ = nullptr;
    std::shared_ptr<string> incidentUuid_ = nullptr;
    Darabonba::Json labels_ = nullptr;
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    std::shared_ptr<int64_t> recoverTime_ = nullptr;
    std::shared_ptr<vector<string>> searchIndex_ = nullptr;
    std::shared_ptr<string> severity_ = nullptr;
    Darabonba::Json severityCountMap_ = nullptr;
    std::shared_ptr<int32_t> state_ = nullptr;
    std::shared_ptr<string> textIndex_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
