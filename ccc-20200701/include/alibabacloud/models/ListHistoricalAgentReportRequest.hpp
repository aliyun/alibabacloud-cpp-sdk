// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIdList, agentIdList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIdList, agentIdList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
    };
    ListHistoricalAgentReportRequest() = default ;
    ListHistoricalAgentReportRequest(const ListHistoricalAgentReportRequest &) = default ;
    ListHistoricalAgentReportRequest(ListHistoricalAgentReportRequest &&) = default ;
    ListHistoricalAgentReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentReportRequest() = default ;
    ListHistoricalAgentReportRequest& operator=(const ListHistoricalAgentReportRequest &) = default ;
    ListHistoricalAgentReportRequest& operator=(ListHistoricalAgentReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentIdList_ != nullptr
        && this->instanceId_ != nullptr && this->mediaType_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->skillGroupId_ != nullptr
        && this->startTime_ != nullptr && this->stopTime_ != nullptr; };
    // agentIdList Field Functions 
    bool hasAgentIdList() const { return this->agentIdList_ != nullptr;};
    void deleteAgentIdList() { this->agentIdList_ = nullptr;};
    inline string agentIdList() const { DARABONBA_PTR_GET_DEFAULT(agentIdList_, "") };
    inline ListHistoricalAgentReportRequest& setAgentIdList(string agentIdList) { DARABONBA_PTR_SET_VALUE(agentIdList_, agentIdList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListHistoricalAgentReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListHistoricalAgentReportRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHistoricalAgentReportRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHistoricalAgentReportRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListHistoricalAgentReportRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListHistoricalAgentReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline int64_t stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, 0L) };
    inline ListHistoricalAgentReportRequest& setStopTime(int64_t stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


  protected:
    std::shared_ptr<string> agentIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> stopTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
