// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTICHANNELRECORDINGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTICHANNELRECORDINGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMultiChannelRecordingsResponseBodyDataHoldTimeSegments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListMultiChannelRecordingsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiChannelRecordingsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentChannelId, agentChannelId_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(HoldTimeSegments, holdTimeSegments_);
      DARABONBA_PTR_TO_JSON(RamId, ramId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiChannelRecordingsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentChannelId, agentChannelId_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(HoldTimeSegments, holdTimeSegments_);
      DARABONBA_PTR_FROM_JSON(RamId, ramId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListMultiChannelRecordingsResponseBodyData() = default ;
    ListMultiChannelRecordingsResponseBodyData(const ListMultiChannelRecordingsResponseBodyData &) = default ;
    ListMultiChannelRecordingsResponseBodyData(ListMultiChannelRecordingsResponseBodyData &&) = default ;
    ListMultiChannelRecordingsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiChannelRecordingsResponseBodyData() = default ;
    ListMultiChannelRecordingsResponseBodyData& operator=(const ListMultiChannelRecordingsResponseBodyData &) = default ;
    ListMultiChannelRecordingsResponseBodyData& operator=(ListMultiChannelRecordingsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentChannelId_ == nullptr
        && return this->agentId_ == nullptr && return this->agentName_ == nullptr && return this->contactId_ == nullptr && return this->duration_ == nullptr && return this->fileName_ == nullptr
        && return this->fileUrl_ == nullptr && return this->holdTimeSegments_ == nullptr && return this->ramId_ == nullptr && return this->skillGroupId_ == nullptr && return this->startTime_ == nullptr; };
    // agentChannelId Field Functions 
    bool hasAgentChannelId() const { return this->agentChannelId_ != nullptr;};
    void deleteAgentChannelId() { this->agentChannelId_ = nullptr;};
    inline string agentChannelId() const { DARABONBA_PTR_GET_DEFAULT(agentChannelId_, "") };
    inline ListMultiChannelRecordingsResponseBodyData& setAgentChannelId(string agentChannelId) { DARABONBA_PTR_SET_VALUE(agentChannelId_, agentChannelId) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListMultiChannelRecordingsResponseBodyData& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListMultiChannelRecordingsResponseBodyData& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListMultiChannelRecordingsResponseBodyData& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ListMultiChannelRecordingsResponseBodyData& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListMultiChannelRecordingsResponseBodyData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline ListMultiChannelRecordingsResponseBodyData& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // holdTimeSegments Field Functions 
    bool hasHoldTimeSegments() const { return this->holdTimeSegments_ != nullptr;};
    void deleteHoldTimeSegments() { this->holdTimeSegments_ = nullptr;};
    inline const vector<Models::ListMultiChannelRecordingsResponseBodyDataHoldTimeSegments> & holdTimeSegments() const { DARABONBA_PTR_GET_CONST(holdTimeSegments_, vector<Models::ListMultiChannelRecordingsResponseBodyDataHoldTimeSegments>) };
    inline vector<Models::ListMultiChannelRecordingsResponseBodyDataHoldTimeSegments> holdTimeSegments() { DARABONBA_PTR_GET(holdTimeSegments_, vector<Models::ListMultiChannelRecordingsResponseBodyDataHoldTimeSegments>) };
    inline ListMultiChannelRecordingsResponseBodyData& setHoldTimeSegments(const vector<Models::ListMultiChannelRecordingsResponseBodyDataHoldTimeSegments> & holdTimeSegments) { DARABONBA_PTR_SET_VALUE(holdTimeSegments_, holdTimeSegments) };
    inline ListMultiChannelRecordingsResponseBodyData& setHoldTimeSegments(vector<Models::ListMultiChannelRecordingsResponseBodyDataHoldTimeSegments> && holdTimeSegments) { DARABONBA_PTR_SET_RVALUE(holdTimeSegments_, holdTimeSegments) };


    // ramId Field Functions 
    bool hasRamId() const { return this->ramId_ != nullptr;};
    void deleteRamId() { this->ramId_ = nullptr;};
    inline string ramId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, "") };
    inline ListMultiChannelRecordingsResponseBodyData& setRamId(string ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListMultiChannelRecordingsResponseBodyData& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListMultiChannelRecordingsResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> agentChannelId_ = nullptr;
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<vector<Models::ListMultiChannelRecordingsResponseBodyDataHoldTimeSegments>> holdTimeSegments_ = nullptr;
    std::shared_ptr<string> ramId_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
