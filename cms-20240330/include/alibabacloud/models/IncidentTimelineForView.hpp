// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTTIMELINEFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTTIMELINEFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ContactForIncidentView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentTimelineForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentTimelineForView& obj) { 
      DARABONBA_PTR_TO_JSON(changeType, changeType_);
      DARABONBA_ANY_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(incidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(timelineUuid, timelineUuid_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentTimelineForView& obj) { 
      DARABONBA_PTR_FROM_JSON(changeType, changeType_);
      DARABONBA_ANY_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(incidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(timelineUuid, timelineUuid_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    IncidentTimelineForView() = default ;
    IncidentTimelineForView(const IncidentTimelineForView &) = default ;
    IncidentTimelineForView(IncidentTimelineForView &&) = default ;
    IncidentTimelineForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentTimelineForView() = default ;
    IncidentTimelineForView& operator=(const IncidentTimelineForView &) = default ;
    IncidentTimelineForView& operator=(IncidentTimelineForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeType_ == nullptr
        && return this->content_ == nullptr && return this->incidentUuid_ == nullptr && return this->operator_ == nullptr && return this->time_ == nullptr && return this->timelineUuid_ == nullptr
        && return this->title_ == nullptr && return this->type_ == nullptr && return this->userId_ == nullptr && return this->workspace_ == nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline IncidentTimelineForView& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & content() const { DARABONBA_GET(content_) };
    Darabonba::Json & content() { DARABONBA_GET(content_) };
    inline IncidentTimelineForView& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline IncidentTimelineForView& setContent(Darabonba::Json & content) { DARABONBA_SET_RVALUE(content_, content) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline IncidentTimelineForView& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline const ContactForIncidentView & _operator() const { DARABONBA_PTR_GET_CONST(operator_, ContactForIncidentView) };
    inline ContactForIncidentView _operator() { DARABONBA_PTR_GET(operator_, ContactForIncidentView) };
    inline IncidentTimelineForView& setOperator(const ContactForIncidentView & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
    inline IncidentTimelineForView& setOperator(ContactForIncidentView && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentTimelineForView& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // timelineUuid Field Functions 
    bool hasTimelineUuid() const { return this->timelineUuid_ != nullptr;};
    void deleteTimelineUuid() { this->timelineUuid_ = nullptr;};
    inline string timelineUuid() const { DARABONBA_PTR_GET_DEFAULT(timelineUuid_, "") };
    inline IncidentTimelineForView& setTimelineUuid(string timelineUuid) { DARABONBA_PTR_SET_VALUE(timelineUuid_, timelineUuid) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline IncidentTimelineForView& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IncidentTimelineForView& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IncidentTimelineForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline IncidentTimelineForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> changeType_ = nullptr;
    Darabonba::Json content_ = nullptr;
    std::shared_ptr<string> incidentUuid_ = nullptr;
    std::shared_ptr<ContactForIncidentView> operator_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<string> timelineUuid_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
