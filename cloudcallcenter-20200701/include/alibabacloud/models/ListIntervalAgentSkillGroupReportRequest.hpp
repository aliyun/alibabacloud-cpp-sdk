// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALAGENTSKILLGROUPREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALAGENTSKILLGROUPREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class ListIntervalAgentSkillGroupReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalAgentSkillGroupReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(ShowDefaultIfEmpty, showDefaultIfEmpty_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervalAgentSkillGroupReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(ShowDefaultIfEmpty, showDefaultIfEmpty_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListIntervalAgentSkillGroupReportRequest() = default ;
    ListIntervalAgentSkillGroupReportRequest(const ListIntervalAgentSkillGroupReportRequest &) = default ;
    ListIntervalAgentSkillGroupReportRequest(ListIntervalAgentSkillGroupReportRequest &&) = default ;
    ListIntervalAgentSkillGroupReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalAgentSkillGroupReportRequest() = default ;
    ListIntervalAgentSkillGroupReportRequest& operator=(const ListIntervalAgentSkillGroupReportRequest &) = default ;
    ListIntervalAgentSkillGroupReportRequest& operator=(ListIntervalAgentSkillGroupReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->interval_ == nullptr && this->mediaType_ == nullptr && this->showDefaultIfEmpty_ == nullptr
        && this->skillGroupId_ == nullptr && this->startTime_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListIntervalAgentSkillGroupReportRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListIntervalAgentSkillGroupReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline ListIntervalAgentSkillGroupReportRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListIntervalAgentSkillGroupReportRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // showDefaultIfEmpty Field Functions 
    bool hasShowDefaultIfEmpty() const { return this->showDefaultIfEmpty_ != nullptr;};
    void deleteShowDefaultIfEmpty() { this->showDefaultIfEmpty_ = nullptr;};
    inline bool getShowDefaultIfEmpty() const { DARABONBA_PTR_GET_DEFAULT(showDefaultIfEmpty_, false) };
    inline ListIntervalAgentSkillGroupReportRequest& setShowDefaultIfEmpty(bool showDefaultIfEmpty) { DARABONBA_PTR_SET_VALUE(showDefaultIfEmpty_, showDefaultIfEmpty) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListIntervalAgentSkillGroupReportRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    shared_ptr<int64_t> endTime_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> interval_ {};
    shared_ptr<string> mediaType_ {};
    shared_ptr<bool> showDefaultIfEmpty_ {};
    // This parameter is required.
    shared_ptr<string> skillGroupId_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
