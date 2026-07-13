// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEAMDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEAMDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class ListTeamDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTeamDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTeamDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTeamDetailsResponseBody() = default ;
    ListTeamDetailsResponseBody(const ListTeamDetailsResponseBody &) = default ;
    ListTeamDetailsResponseBody(ListTeamDetailsResponseBody &&) = default ;
    ListTeamDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTeamDetailsResponseBody() = default ;
    ListTeamDetailsResponseBody& operator=(const ListTeamDetailsResponseBody &) = default ;
    ListTeamDetailsResponseBody& operator=(ListTeamDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SuccessRate, successRate_);
        DARABONBA_PTR_TO_JSON(TaskCount, taskCount_);
        DARABONBA_PTR_TO_JSON(TeamName, teamName_);
        DARABONBA_PTR_TO_JSON(TokenUsage, tokenUsage_);
        DARABONBA_PTR_TO_JSON(WorkerCount, workerCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SuccessRate, successRate_);
        DARABONBA_PTR_FROM_JSON(TaskCount, taskCount_);
        DARABONBA_PTR_FROM_JSON(TeamName, teamName_);
        DARABONBA_PTR_FROM_JSON(TokenUsage, tokenUsage_);
        DARABONBA_PTR_FROM_JSON(WorkerCount, workerCount_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && this->status_ == nullptr && this->successRate_ == nullptr && this->taskCount_ == nullptr && this->teamName_ == nullptr && this->tokenUsage_ == nullptr
        && this->workerCount_ == nullptr; };
      // avatarUrl Field Functions 
      bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
      void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
      inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
      inline Items& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // successRate Field Functions 
      bool hasSuccessRate() const { return this->successRate_ != nullptr;};
      void deleteSuccessRate() { this->successRate_ = nullptr;};
      inline double getSuccessRate() const { DARABONBA_PTR_GET_DEFAULT(successRate_, 0.0) };
      inline Items& setSuccessRate(double successRate) { DARABONBA_PTR_SET_VALUE(successRate_, successRate) };


      // taskCount Field Functions 
      bool hasTaskCount() const { return this->taskCount_ != nullptr;};
      void deleteTaskCount() { this->taskCount_ = nullptr;};
      inline int32_t getTaskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0) };
      inline Items& setTaskCount(int32_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


      // teamName Field Functions 
      bool hasTeamName() const { return this->teamName_ != nullptr;};
      void deleteTeamName() { this->teamName_ = nullptr;};
      inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
      inline Items& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


      // tokenUsage Field Functions 
      bool hasTokenUsage() const { return this->tokenUsage_ != nullptr;};
      void deleteTokenUsage() { this->tokenUsage_ = nullptr;};
      inline int64_t getTokenUsage() const { DARABONBA_PTR_GET_DEFAULT(tokenUsage_, 0L) };
      inline Items& setTokenUsage(int64_t tokenUsage) { DARABONBA_PTR_SET_VALUE(tokenUsage_, tokenUsage) };


      // workerCount Field Functions 
      bool hasWorkerCount() const { return this->workerCount_ != nullptr;};
      void deleteWorkerCount() { this->workerCount_ = nullptr;};
      inline int32_t getWorkerCount() const { DARABONBA_PTR_GET_DEFAULT(workerCount_, 0) };
      inline Items& setWorkerCount(int32_t workerCount) { DARABONBA_PTR_SET_VALUE(workerCount_, workerCount) };


    protected:
      shared_ptr<string> avatarUrl_ {};
      shared_ptr<string> status_ {};
      shared_ptr<double> successRate_ {};
      shared_ptr<int32_t> taskCount_ {};
      shared_ptr<string> teamName_ {};
      shared_ptr<int64_t> tokenUsage_ {};
      shared_ptr<int32_t> workerCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTeamDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTeamDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListTeamDetailsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListTeamDetailsResponseBody::Items>) };
    inline vector<ListTeamDetailsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListTeamDetailsResponseBody::Items>) };
    inline ListTeamDetailsResponseBody& setItems(const vector<ListTeamDetailsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListTeamDetailsResponseBody& setItems(vector<ListTeamDetailsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTeamDetailsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTeamDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTeamDetailsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTeamDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTeamDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTeamDetailsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<vector<ListTeamDetailsResponseBody::Items>> items_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
