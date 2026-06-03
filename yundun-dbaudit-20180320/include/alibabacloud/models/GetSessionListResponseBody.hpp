// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class GetSessionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Incomplete, incomplete_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSessionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Incomplete, incomplete_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetSessionListResponseBody() = default ;
    GetSessionListResponseBody(const GetSessionListResponseBody &) = default ;
    GetSessionListResponseBody(GetSessionListResponseBody &&) = default ;
    GetSessionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionListResponseBody() = default ;
    GetSessionListResponseBody& operator=(const GetSessionListResponseBody &) = default ;
    GetSessionListResponseBody& operator=(GetSessionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(CaptureTime, captureTime_);
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(ClientIpAlias, clientIpAlias_);
        DARABONBA_PTR_TO_JSON(ClientMac, clientMac_);
        DARABONBA_PTR_TO_JSON(ClientOsUser, clientOsUser_);
        DARABONBA_PTR_TO_JSON(ClientPort, clientPort_);
        DARABONBA_PTR_TO_JSON(ClientProgram, clientProgram_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(DbUser, dbUser_);
        DARABONBA_PTR_TO_JSON(LoginCode, loginCode_);
        DARABONBA_PTR_TO_JSON(LoginMessage, loginMessage_);
        DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_TO_JSON(ServerMac, serverMac_);
        DARABONBA_PTR_TO_JSON(ServerPort, serverPort_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(CaptureTime, captureTime_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(ClientIpAlias, clientIpAlias_);
        DARABONBA_PTR_FROM_JSON(ClientMac, clientMac_);
        DARABONBA_PTR_FROM_JSON(ClientOsUser, clientOsUser_);
        DARABONBA_PTR_FROM_JSON(ClientPort, clientPort_);
        DARABONBA_PTR_FROM_JSON(ClientProgram, clientProgram_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(DbUser, dbUser_);
        DARABONBA_PTR_FROM_JSON(LoginCode, loginCode_);
        DARABONBA_PTR_FROM_JSON(LoginMessage, loginMessage_);
        DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_FROM_JSON(ServerMac, serverMac_);
        DARABONBA_PTR_FROM_JSON(ServerPort, serverPort_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->captureTime_ == nullptr && this->clientIp_ == nullptr && this->clientIpAlias_ == nullptr && this->clientMac_ == nullptr && this->clientOsUser_ == nullptr
        && this->clientPort_ == nullptr && this->clientProgram_ == nullptr && this->dbId_ == nullptr && this->dbUser_ == nullptr && this->loginCode_ == nullptr
        && this->loginMessage_ == nullptr && this->serverIp_ == nullptr && this->serverMac_ == nullptr && this->serverPort_ == nullptr && this->sessionId_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Results& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // captureTime Field Functions 
      bool hasCaptureTime() const { return this->captureTime_ != nullptr;};
      void deleteCaptureTime() { this->captureTime_ = nullptr;};
      inline string getCaptureTime() const { DARABONBA_PTR_GET_DEFAULT(captureTime_, "") };
      inline Results& setCaptureTime(string captureTime) { DARABONBA_PTR_SET_VALUE(captureTime_, captureTime) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Results& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // clientIpAlias Field Functions 
      bool hasClientIpAlias() const { return this->clientIpAlias_ != nullptr;};
      void deleteClientIpAlias() { this->clientIpAlias_ = nullptr;};
      inline string getClientIpAlias() const { DARABONBA_PTR_GET_DEFAULT(clientIpAlias_, "") };
      inline Results& setClientIpAlias(string clientIpAlias) { DARABONBA_PTR_SET_VALUE(clientIpAlias_, clientIpAlias) };


      // clientMac Field Functions 
      bool hasClientMac() const { return this->clientMac_ != nullptr;};
      void deleteClientMac() { this->clientMac_ = nullptr;};
      inline string getClientMac() const { DARABONBA_PTR_GET_DEFAULT(clientMac_, "") };
      inline Results& setClientMac(string clientMac) { DARABONBA_PTR_SET_VALUE(clientMac_, clientMac) };


      // clientOsUser Field Functions 
      bool hasClientOsUser() const { return this->clientOsUser_ != nullptr;};
      void deleteClientOsUser() { this->clientOsUser_ = nullptr;};
      inline string getClientOsUser() const { DARABONBA_PTR_GET_DEFAULT(clientOsUser_, "") };
      inline Results& setClientOsUser(string clientOsUser) { DARABONBA_PTR_SET_VALUE(clientOsUser_, clientOsUser) };


      // clientPort Field Functions 
      bool hasClientPort() const { return this->clientPort_ != nullptr;};
      void deleteClientPort() { this->clientPort_ = nullptr;};
      inline int32_t getClientPort() const { DARABONBA_PTR_GET_DEFAULT(clientPort_, 0) };
      inline Results& setClientPort(int32_t clientPort) { DARABONBA_PTR_SET_VALUE(clientPort_, clientPort) };


      // clientProgram Field Functions 
      bool hasClientProgram() const { return this->clientProgram_ != nullptr;};
      void deleteClientProgram() { this->clientProgram_ = nullptr;};
      inline string getClientProgram() const { DARABONBA_PTR_GET_DEFAULT(clientProgram_, "") };
      inline Results& setClientProgram(string clientProgram) { DARABONBA_PTR_SET_VALUE(clientProgram_, clientProgram) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
      inline Results& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // dbUser Field Functions 
      bool hasDbUser() const { return this->dbUser_ != nullptr;};
      void deleteDbUser() { this->dbUser_ = nullptr;};
      inline string getDbUser() const { DARABONBA_PTR_GET_DEFAULT(dbUser_, "") };
      inline Results& setDbUser(string dbUser) { DARABONBA_PTR_SET_VALUE(dbUser_, dbUser) };


      // loginCode Field Functions 
      bool hasLoginCode() const { return this->loginCode_ != nullptr;};
      void deleteLoginCode() { this->loginCode_ = nullptr;};
      inline int32_t getLoginCode() const { DARABONBA_PTR_GET_DEFAULT(loginCode_, 0) };
      inline Results& setLoginCode(int32_t loginCode) { DARABONBA_PTR_SET_VALUE(loginCode_, loginCode) };


      // loginMessage Field Functions 
      bool hasLoginMessage() const { return this->loginMessage_ != nullptr;};
      void deleteLoginMessage() { this->loginMessage_ = nullptr;};
      inline string getLoginMessage() const { DARABONBA_PTR_GET_DEFAULT(loginMessage_, "") };
      inline Results& setLoginMessage(string loginMessage) { DARABONBA_PTR_SET_VALUE(loginMessage_, loginMessage) };


      // serverIp Field Functions 
      bool hasServerIp() const { return this->serverIp_ != nullptr;};
      void deleteServerIp() { this->serverIp_ = nullptr;};
      inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
      inline Results& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


      // serverMac Field Functions 
      bool hasServerMac() const { return this->serverMac_ != nullptr;};
      void deleteServerMac() { this->serverMac_ = nullptr;};
      inline string getServerMac() const { DARABONBA_PTR_GET_DEFAULT(serverMac_, "") };
      inline Results& setServerMac(string serverMac) { DARABONBA_PTR_SET_VALUE(serverMac_, serverMac) };


      // serverPort Field Functions 
      bool hasServerPort() const { return this->serverPort_ != nullptr;};
      void deleteServerPort() { this->serverPort_ = nullptr;};
      inline int32_t getServerPort() const { DARABONBA_PTR_GET_DEFAULT(serverPort_, 0) };
      inline Results& setServerPort(int32_t serverPort) { DARABONBA_PTR_SET_VALUE(serverPort_, serverPort) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Results& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> captureTime_ {};
      shared_ptr<string> clientIp_ {};
      shared_ptr<string> clientIpAlias_ {};
      shared_ptr<string> clientMac_ {};
      shared_ptr<string> clientOsUser_ {};
      shared_ptr<int32_t> clientPort_ {};
      shared_ptr<string> clientProgram_ {};
      shared_ptr<int32_t> dbId_ {};
      shared_ptr<string> dbUser_ {};
      shared_ptr<int32_t> loginCode_ {};
      shared_ptr<string> loginMessage_ {};
      shared_ptr<string> serverIp_ {};
      shared_ptr<string> serverMac_ {};
      shared_ptr<int32_t> serverPort_ {};
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->beginDate_ == nullptr
        && this->endDate_ == nullptr && this->incomplete_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->results_ == nullptr && this->totalCount_ == nullptr; };
    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline GetSessionListResponseBody& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetSessionListResponseBody& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // incomplete Field Functions 
    bool hasIncomplete() const { return this->incomplete_ != nullptr;};
    void deleteIncomplete() { this->incomplete_ = nullptr;};
    inline string getIncomplete() const { DARABONBA_PTR_GET_DEFAULT(incomplete_, "") };
    inline GetSessionListResponseBody& setIncomplete(string incomplete) { DARABONBA_PTR_SET_VALUE(incomplete_, incomplete) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetSessionListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSessionListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSessionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<GetSessionListResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<GetSessionListResponseBody::Results>) };
    inline vector<GetSessionListResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<GetSessionListResponseBody::Results>) };
    inline GetSessionListResponseBody& setResults(const vector<GetSessionListResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline GetSessionListResponseBody& setResults(vector<GetSessionListResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetSessionListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> beginDate_ {};
    shared_ptr<string> endDate_ {};
    shared_ptr<string> incomplete_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetSessionListResponseBody::Results>> results_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
