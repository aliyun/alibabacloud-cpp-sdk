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
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(teamId, teamId_);
      DARABONBA_PTR_TO_JSON(types, types_);
      DARABONBA_PTR_TO_JSON(updatedAtFrom, updatedAtFrom_);
      DARABONBA_PTR_TO_JSON(updatedAtTo, updatedAtTo_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(teamId, teamId_);
      DARABONBA_PTR_FROM_JSON(types, types_);
      DARABONBA_PTR_FROM_JSON(updatedAtFrom, updatedAtFrom_);
      DARABONBA_PTR_FROM_JSON(updatedAtTo, updatedAtTo_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(valid, valid_);
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
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->sessionId_ == nullptr && this->source_ == nullptr && this->teamId_ == nullptr
        && this->types_ == nullptr && this->updatedAtFrom_ == nullptr && this->updatedAtTo_ == nullptr && this->userId_ == nullptr && this->valid_ == nullptr; };
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


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListMemoriesRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // teamId Field Functions 
    bool hasTeamId() const { return this->teamId_ != nullptr;};
    void deleteTeamId() { this->teamId_ = nullptr;};
    inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
    inline ListMemoriesRequest& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string getTypes() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline ListMemoriesRequest& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


    // updatedAtFrom Field Functions 
    bool hasUpdatedAtFrom() const { return this->updatedAtFrom_ != nullptr;};
    void deleteUpdatedAtFrom() { this->updatedAtFrom_ = nullptr;};
    inline string getUpdatedAtFrom() const { DARABONBA_PTR_GET_DEFAULT(updatedAtFrom_, "") };
    inline ListMemoriesRequest& setUpdatedAtFrom(string updatedAtFrom) { DARABONBA_PTR_SET_VALUE(updatedAtFrom_, updatedAtFrom) };


    // updatedAtTo Field Functions 
    bool hasUpdatedAtTo() const { return this->updatedAtTo_ != nullptr;};
    void deleteUpdatedAtTo() { this->updatedAtTo_ = nullptr;};
    inline string getUpdatedAtTo() const { DARABONBA_PTR_GET_DEFAULT(updatedAtTo_, "") };
    inline ListMemoriesRequest& setUpdatedAtTo(string updatedAtTo) { DARABONBA_PTR_SET_VALUE(updatedAtTo_, updatedAtTo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListMemoriesRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline bool getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
    inline ListMemoriesRequest& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    // The agent ID. If not specified, all agents are matched. The length is limited to 1 to 128 UTF-8 bytes. The value cannot contain a forward slash (/) or an asterisk (*).
    shared_ptr<string> agentId_ {};
    // The maximum number of records per page. Default value: 50. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // The session ID. If not specified, all sessions are matched. The length is limited to 1 to 128 UTF-8 bytes. The value cannot contain a forward slash (/) or an asterisk (*).
    shared_ptr<string> sessionId_ {};
    // The source of the memory. Valid values:
    // - session_extraction: Extracted from session events.
    // - content_extraction: Extracted from text or messages.
    // - direct: Written directly.
    shared_ptr<string> source_ {};
    // The business team ID defined by the caller.
    shared_ptr<string> teamId_ {};
    // The memory content types. Specify the value as a JSON array string, such as ["skill"]. Valid values: semantic, skill, user_profile, and session_summary. If this parameter is omitted or set to [], all types are queried. The value auto is not supported. Keep the filter conditions consistent when you retrieve subsequent pages.
    shared_ptr<string> types_ {};
    // The start time for filtering by update time. The time must be in RFC 3339 format with a time zone.
    shared_ptr<string> updatedAtFrom_ {};
    // The end time for filtering by update time. The time must be in RFC 3339 format with a time zone.
    shared_ptr<string> updatedAtTo_ {};
    // The user ID. If not specified, all users are matched. The length is limited to 1 to 128 UTF-8 bytes. The value cannot contain a forward slash (/) or an asterisk (*).
    shared_ptr<string> userId_ {};
    // Specifies whether the memory is valid. Default value: true. If this parameter is omitted, only valid records are returned. If set to false, revoked records are returned.
    shared_ptr<bool> valid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
