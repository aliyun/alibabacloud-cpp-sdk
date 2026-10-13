// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListMemoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    ListMemoriesRequest() = default ;
    ListMemoriesRequest(const ListMemoriesRequest &) = default ;
    ListMemoriesRequest(ListMemoriesRequest &&) = default ;
    ListMemoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoriesRequest() = default ;
    ListMemoriesRequest& operator=(const ListMemoriesRequest &) = default ;
    ListMemoriesRequest& operator=(ListMemoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->sessionId_ == nullptr && this->userId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListMemoriesRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMemoriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMemoriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListMemoriesRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListMemoriesRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The agent ID. If you do not specify this parameter, all agents are matched. The value must be 1 to 128 bytes in length and encoded in UTF-8. The value cannot contain a forward slash (/) or an asterisk (*).
    shared_ptr<string> agentId_ {};
    // The maximum number of records per page. Default value: 50. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // The session ID. If you do not specify this parameter, all sessions are matched. The value must be 1 to 128 bytes in length and encoded in UTF-8. The value cannot contain a forward slash (/) or an asterisk (*).
    shared_ptr<string> sessionId_ {};
    // The user ID. If you do not specify this parameter, all users are matched. The value must be 1 to 128 bytes in length and encoded in UTF-8. The value cannot contain a forward slash (/) or an asterisk (*).
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
