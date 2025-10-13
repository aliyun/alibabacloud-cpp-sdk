// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTTIMELINE_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTTIMELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentTimeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentTimeline& obj) { 
      DARABONBA_PTR_TO_JSON(childType, childType_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(incidentTimelineId, incidentTimelineId_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(timelineId, timelineId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentTimeline& obj) { 
      DARABONBA_PTR_FROM_JSON(childType, childType_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(incidentTimelineId, incidentTimelineId_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(timelineId, timelineId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    IncidentTimeline() = default ;
    IncidentTimeline(const IncidentTimeline &) = default ;
    IncidentTimeline(IncidentTimeline &&) = default ;
    IncidentTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentTimeline() = default ;
    IncidentTimeline& operator=(const IncidentTimeline &) = default ;
    IncidentTimeline& operator=(IncidentTimeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childType_ == nullptr
        && return this->content_ == nullptr && return this->incidentId_ == nullptr && return this->incidentTimelineId_ == nullptr && return this->time_ == nullptr && return this->timelineId_ == nullptr
        && return this->title_ == nullptr && return this->type_ == nullptr && return this->userId_ == nullptr; };
    // childType Field Functions 
    bool hasChildType() const { return this->childType_ != nullptr;};
    void deleteChildType() { this->childType_ = nullptr;};
    inline string childType() const { DARABONBA_PTR_GET_DEFAULT(childType_, "") };
    inline IncidentTimeline& setChildType(string childType) { DARABONBA_PTR_SET_VALUE(childType_, childType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline IncidentTimeline& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string incidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline IncidentTimeline& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // incidentTimelineId Field Functions 
    bool hasIncidentTimelineId() const { return this->incidentTimelineId_ != nullptr;};
    void deleteIncidentTimelineId() { this->incidentTimelineId_ = nullptr;};
    inline string incidentTimelineId() const { DARABONBA_PTR_GET_DEFAULT(incidentTimelineId_, "") };
    inline IncidentTimeline& setIncidentTimelineId(string incidentTimelineId) { DARABONBA_PTR_SET_VALUE(incidentTimelineId_, incidentTimelineId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentTimeline& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // timelineId Field Functions 
    bool hasTimelineId() const { return this->timelineId_ != nullptr;};
    void deleteTimelineId() { this->timelineId_ = nullptr;};
    inline string timelineId() const { DARABONBA_PTR_GET_DEFAULT(timelineId_, "") };
    inline IncidentTimeline& setTimelineId(string timelineId) { DARABONBA_PTR_SET_VALUE(timelineId_, timelineId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline IncidentTimeline& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IncidentTimeline& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IncidentTimeline& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> childType_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> incidentId_ = nullptr;
    std::shared_ptr<string> incidentTimelineId_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<string> timelineId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
