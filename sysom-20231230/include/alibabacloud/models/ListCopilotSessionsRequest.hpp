// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOPILOTSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOPILOTSESSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListCopilotSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCopilotSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(scheduledTaskId, scheduledTaskId_);
      DARABONBA_PTR_TO_JSON(sessionType, sessionType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCopilotSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(scheduledTaskId, scheduledTaskId_);
      DARABONBA_PTR_FROM_JSON(sessionType, sessionType_);
    };
    ListCopilotSessionsRequest() = default ;
    ListCopilotSessionsRequest(const ListCopilotSessionsRequest &) = default ;
    ListCopilotSessionsRequest(ListCopilotSessionsRequest &&) = default ;
    ListCopilotSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCopilotSessionsRequest() = default ;
    ListCopilotSessionsRequest& operator=(const ListCopilotSessionsRequest &) = default ;
    ListCopilotSessionsRequest& operator=(ListCopilotSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->scheduledTaskId_ == nullptr && this->sessionType_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListCopilotSessionsRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCopilotSessionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCopilotSessionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // scheduledTaskId Field Functions 
    bool hasScheduledTaskId() const { return this->scheduledTaskId_ != nullptr;};
    void deleteScheduledTaskId() { this->scheduledTaskId_ = nullptr;};
    inline int64_t getScheduledTaskId() const { DARABONBA_PTR_GET_DEFAULT(scheduledTaskId_, 0L) };
    inline ListCopilotSessionsRequest& setScheduledTaskId(int64_t scheduledTaskId) { DARABONBA_PTR_SET_VALUE(scheduledTaskId_, scheduledTaskId) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline ListCopilotSessionsRequest& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


  protected:
    // The Agent ID. If this parameter is not specified, all Agent sessions of the current user are queried.
    shared_ptr<string> agentId_ {};
    // The maximum number of entries per page. Default value: 50. Valid values: 1 to 1000.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. Do not specify this parameter for the first query.
    shared_ptr<string> nextToken_ {};
    // The scheduled task ID, which must be a positive integer. If this parameter is specified, sessionType must be omitted or set to cron.
    shared_ptr<int64_t> scheduledTaskId_ {};
    // The session source. If this parameter is not specified, sessions are not filtered by source.
    shared_ptr<string> sessionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
