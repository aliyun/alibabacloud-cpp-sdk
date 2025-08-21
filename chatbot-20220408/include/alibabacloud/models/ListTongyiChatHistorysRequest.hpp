// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTONGYICHATHISTORYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTONGYICHATHISTORYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListTongyiChatHistorysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTongyiChatHistorysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(RobotInstanceId, robotInstanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListTongyiChatHistorysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(RobotInstanceId, robotInstanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListTongyiChatHistorysRequest() = default ;
    ListTongyiChatHistorysRequest(const ListTongyiChatHistorysRequest &) = default ;
    ListTongyiChatHistorysRequest(ListTongyiChatHistorysRequest &&) = default ;
    ListTongyiChatHistorysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTongyiChatHistorysRequest() = default ;
    ListTongyiChatHistorysRequest& operator=(const ListTongyiChatHistorysRequest &) = default ;
    ListTongyiChatHistorysRequest& operator=(ListTongyiChatHistorysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->endTime_ != nullptr && this->limit_ != nullptr && this->robotInstanceId_ != nullptr && this->startTime_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListTongyiChatHistorysRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTongyiChatHistorysRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListTongyiChatHistorysRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // robotInstanceId Field Functions 
    bool hasRobotInstanceId() const { return this->robotInstanceId_ != nullptr;};
    void deleteRobotInstanceId() { this->robotInstanceId_ = nullptr;};
    inline string robotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(robotInstanceId_, "") };
    inline ListTongyiChatHistorysRequest& setRobotInstanceId(string robotInstanceId) { DARABONBA_PTR_SET_VALUE(robotInstanceId_, robotInstanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTongyiChatHistorysRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> limit_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> robotInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
