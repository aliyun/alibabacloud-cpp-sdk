// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEAMSRESPONSEBODY_HPP_
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
  class ListTeamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTeamsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTeamsResponseBody& obj) { 
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
    ListTeamsResponseBody() = default ;
    ListTeamsResponseBody(const ListTeamsResponseBody &) = default ;
    ListTeamsResponseBody(ListTeamsResponseBody &&) = default ;
    ListTeamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTeamsResponseBody() = default ;
    ListTeamsResponseBody& operator=(const ListTeamsResponseBody &) = default ;
    ListTeamsResponseBody& operator=(ListTeamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AdminName, adminName_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LeaderName, leaderName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TeamMembers, teamMembers_);
        DARABONBA_PTR_TO_JSON(WorkerNames, workerNames_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AdminName, adminName_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LeaderName, leaderName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TeamMembers, teamMembers_);
        DARABONBA_PTR_FROM_JSON(WorkerNames, workerNames_);
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
      class TeamMembers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TeamMembers& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, TeamMembers& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        TeamMembers() = default ;
        TeamMembers(const TeamMembers &) = default ;
        TeamMembers(TeamMembers &&) = default ;
        TeamMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TeamMembers() = default ;
        TeamMembers& operator=(const TeamMembers &) = default ;
        TeamMembers& operator=(TeamMembers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TeamMembers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->adminName_ == nullptr
        && this->createdAt_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->leaderName_ == nullptr && this->name_ == nullptr
        && this->status_ == nullptr && this->teamMembers_ == nullptr && this->workerNames_ == nullptr; };
      // adminName Field Functions 
      bool hasAdminName() const { return this->adminName_ != nullptr;};
      void deleteAdminName() { this->adminName_ = nullptr;};
      inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
      inline Items& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // leaderName Field Functions 
      bool hasLeaderName() const { return this->leaderName_ != nullptr;};
      void deleteLeaderName() { this->leaderName_ = nullptr;};
      inline string getLeaderName() const { DARABONBA_PTR_GET_DEFAULT(leaderName_, "") };
      inline Items& setLeaderName(string leaderName) { DARABONBA_PTR_SET_VALUE(leaderName_, leaderName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // teamMembers Field Functions 
      bool hasTeamMembers() const { return this->teamMembers_ != nullptr;};
      void deleteTeamMembers() { this->teamMembers_ = nullptr;};
      inline const vector<Items::TeamMembers> & getTeamMembers() const { DARABONBA_PTR_GET_CONST(teamMembers_, vector<Items::TeamMembers>) };
      inline vector<Items::TeamMembers> getTeamMembers() { DARABONBA_PTR_GET(teamMembers_, vector<Items::TeamMembers>) };
      inline Items& setTeamMembers(const vector<Items::TeamMembers> & teamMembers) { DARABONBA_PTR_SET_VALUE(teamMembers_, teamMembers) };
      inline Items& setTeamMembers(vector<Items::TeamMembers> && teamMembers) { DARABONBA_PTR_SET_RVALUE(teamMembers_, teamMembers) };


      // workerNames Field Functions 
      bool hasWorkerNames() const { return this->workerNames_ != nullptr;};
      void deleteWorkerNames() { this->workerNames_ = nullptr;};
      inline const vector<string> & getWorkerNames() const { DARABONBA_PTR_GET_CONST(workerNames_, vector<string>) };
      inline vector<string> getWorkerNames() { DARABONBA_PTR_GET(workerNames_, vector<string>) };
      inline Items& setWorkerNames(const vector<string> & workerNames) { DARABONBA_PTR_SET_VALUE(workerNames_, workerNames) };
      inline Items& setWorkerNames(vector<string> && workerNames) { DARABONBA_PTR_SET_RVALUE(workerNames_, workerNames) };


    protected:
      shared_ptr<string> adminName_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> leaderName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Items::TeamMembers>> teamMembers_ {};
      shared_ptr<vector<string>> workerNames_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTeamsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTeamsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListTeamsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListTeamsResponseBody::Items>) };
    inline vector<ListTeamsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListTeamsResponseBody::Items>) };
    inline ListTeamsResponseBody& setItems(const vector<ListTeamsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListTeamsResponseBody& setItems(vector<ListTeamsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTeamsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTeamsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTeamsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTeamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTeamsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTeamsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<vector<ListTeamsResponseBody::Items>> items_ {};
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
