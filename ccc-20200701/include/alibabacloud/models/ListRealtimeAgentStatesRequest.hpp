// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMEAGENTSTATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMEAGENTSTATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListRealtimeAgentStatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeAgentStatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIdList, agentIdList_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(CallTypeList, callTypeList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(StateList, stateList_);
      DARABONBA_PTR_TO_JSON(WorkModeList, workModeList_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeAgentStatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIdList, agentIdList_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(CallTypeList, callTypeList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(StateList, stateList_);
      DARABONBA_PTR_FROM_JSON(WorkModeList, workModeList_);
    };
    ListRealtimeAgentStatesRequest() = default ;
    ListRealtimeAgentStatesRequest(const ListRealtimeAgentStatesRequest &) = default ;
    ListRealtimeAgentStatesRequest(ListRealtimeAgentStatesRequest &&) = default ;
    ListRealtimeAgentStatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeAgentStatesRequest() = default ;
    ListRealtimeAgentStatesRequest& operator=(const ListRealtimeAgentStatesRequest &) = default ;
    ListRealtimeAgentStatesRequest& operator=(ListRealtimeAgentStatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIdList_ == nullptr
        && return this->agentName_ == nullptr && return this->callTypeList_ == nullptr && return this->instanceId_ == nullptr && return this->mediaType_ == nullptr && return this->outboundScenario_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->query_ == nullptr && return this->skillGroupId_ == nullptr && return this->stateList_ == nullptr
        && return this->workModeList_ == nullptr; };
    // agentIdList Field Functions 
    bool hasAgentIdList() const { return this->agentIdList_ != nullptr;};
    void deleteAgentIdList() { this->agentIdList_ = nullptr;};
    inline string agentIdList() const { DARABONBA_PTR_GET_DEFAULT(agentIdList_, "") };
    inline ListRealtimeAgentStatesRequest& setAgentIdList(string agentIdList) { DARABONBA_PTR_SET_VALUE(agentIdList_, agentIdList) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListRealtimeAgentStatesRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // callTypeList Field Functions 
    bool hasCallTypeList() const { return this->callTypeList_ != nullptr;};
    void deleteCallTypeList() { this->callTypeList_ = nullptr;};
    inline string callTypeList() const { DARABONBA_PTR_GET_DEFAULT(callTypeList_, "") };
    inline ListRealtimeAgentStatesRequest& setCallTypeList(string callTypeList) { DARABONBA_PTR_SET_VALUE(callTypeList_, callTypeList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRealtimeAgentStatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListRealtimeAgentStatesRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // outboundScenario Field Functions 
    bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
    void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
    inline bool outboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
    inline ListRealtimeAgentStatesRequest& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRealtimeAgentStatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRealtimeAgentStatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListRealtimeAgentStatesRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListRealtimeAgentStatesRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // stateList Field Functions 
    bool hasStateList() const { return this->stateList_ != nullptr;};
    void deleteStateList() { this->stateList_ = nullptr;};
    inline string stateList() const { DARABONBA_PTR_GET_DEFAULT(stateList_, "") };
    inline ListRealtimeAgentStatesRequest& setStateList(string stateList) { DARABONBA_PTR_SET_VALUE(stateList_, stateList) };


    // workModeList Field Functions 
    bool hasWorkModeList() const { return this->workModeList_ != nullptr;};
    void deleteWorkModeList() { this->workModeList_ = nullptr;};
    inline string workModeList() const { DARABONBA_PTR_GET_DEFAULT(workModeList_, "") };
    inline ListRealtimeAgentStatesRequest& setWorkModeList(string workModeList) { DARABONBA_PTR_SET_VALUE(workModeList_, workModeList) };


  protected:
    std::shared_ptr<string> agentIdList_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<string> callTypeList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<bool> outboundScenario_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> stateList_ = nullptr;
    std::shared_ptr<string> workModeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
