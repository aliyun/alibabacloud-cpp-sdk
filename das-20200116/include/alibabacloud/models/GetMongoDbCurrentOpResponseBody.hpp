// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSessionStatClientStatsValue.hpp>
#include <alibabacloud/models/DataSessionStatDbStatsValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMongoDBCurrentOpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMongoDBCurrentOpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMongoDBCurrentOpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMongoDBCurrentOpResponseBody() = default ;
    GetMongoDBCurrentOpResponseBody(const GetMongoDBCurrentOpResponseBody &) = default ;
    GetMongoDBCurrentOpResponseBody(GetMongoDBCurrentOpResponseBody &&) = default ;
    GetMongoDBCurrentOpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMongoDBCurrentOpResponseBody() = default ;
    GetMongoDBCurrentOpResponseBody& operator=(const GetMongoDBCurrentOpResponseBody &) = default ;
    GetMongoDBCurrentOpResponseBody& operator=(GetMongoDBCurrentOpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SessionList, sessionList_);
        DARABONBA_PTR_TO_JSON(SessionStat, sessionStat_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SessionList, sessionList_);
        DARABONBA_PTR_FROM_JSON(SessionStat, sessionStat_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SessionStat : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SessionStat& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
          DARABONBA_PTR_TO_JSON(ClientStats, clientStats_);
          DARABONBA_PTR_TO_JSON(DbStats, dbStats_);
          DARABONBA_PTR_TO_JSON(LongestSecsRunning, longestSecsRunning_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, SessionStat& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
          DARABONBA_PTR_FROM_JSON(ClientStats, clientStats_);
          DARABONBA_PTR_FROM_JSON(DbStats, dbStats_);
          DARABONBA_PTR_FROM_JSON(LongestSecsRunning, longestSecsRunning_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        SessionStat() = default ;
        SessionStat(const SessionStat &) = default ;
        SessionStat(SessionStat &&) = default ;
        SessionStat(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SessionStat() = default ;
        SessionStat& operator=(const SessionStat &) = default ;
        SessionStat& operator=(SessionStat &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeCount_ == nullptr
        && this->clientStats_ == nullptr && this->dbStats_ == nullptr && this->longestSecsRunning_ == nullptr && this->totalCount_ == nullptr; };
        // activeCount Field Functions 
        bool hasActiveCount() const { return this->activeCount_ != nullptr;};
        void deleteActiveCount() { this->activeCount_ = nullptr;};
        inline int64_t getActiveCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
        inline SessionStat& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


        // clientStats Field Functions 
        bool hasClientStats() const { return this->clientStats_ != nullptr;};
        void deleteClientStats() { this->clientStats_ = nullptr;};
        inline const map<string, DataSessionStatClientStatsValue> & getClientStats() const { DARABONBA_PTR_GET_CONST(clientStats_, map<string, DataSessionStatClientStatsValue>) };
        inline map<string, DataSessionStatClientStatsValue> getClientStats() { DARABONBA_PTR_GET(clientStats_, map<string, DataSessionStatClientStatsValue>) };
        inline SessionStat& setClientStats(const map<string, DataSessionStatClientStatsValue> & clientStats) { DARABONBA_PTR_SET_VALUE(clientStats_, clientStats) };
        inline SessionStat& setClientStats(map<string, DataSessionStatClientStatsValue> && clientStats) { DARABONBA_PTR_SET_RVALUE(clientStats_, clientStats) };


        // dbStats Field Functions 
        bool hasDbStats() const { return this->dbStats_ != nullptr;};
        void deleteDbStats() { this->dbStats_ = nullptr;};
        inline const map<string, DataSessionStatDbStatsValue> & getDbStats() const { DARABONBA_PTR_GET_CONST(dbStats_, map<string, DataSessionStatDbStatsValue>) };
        inline map<string, DataSessionStatDbStatsValue> getDbStats() { DARABONBA_PTR_GET(dbStats_, map<string, DataSessionStatDbStatsValue>) };
        inline SessionStat& setDbStats(const map<string, DataSessionStatDbStatsValue> & dbStats) { DARABONBA_PTR_SET_VALUE(dbStats_, dbStats) };
        inline SessionStat& setDbStats(map<string, DataSessionStatDbStatsValue> && dbStats) { DARABONBA_PTR_SET_RVALUE(dbStats_, dbStats) };


        // longestSecsRunning Field Functions 
        bool hasLongestSecsRunning() const { return this->longestSecsRunning_ != nullptr;};
        void deleteLongestSecsRunning() { this->longestSecsRunning_ = nullptr;};
        inline int64_t getLongestSecsRunning() const { DARABONBA_PTR_GET_DEFAULT(longestSecsRunning_, 0L) };
        inline SessionStat& setLongestSecsRunning(int64_t longestSecsRunning) { DARABONBA_PTR_SET_VALUE(longestSecsRunning_, longestSecsRunning) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline SessionStat& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The number of active sessions.
        shared_ptr<int64_t> activeCount_ {};
        // The statistics on the IP addresses of the clients.
        shared_ptr<map<string, DataSessionStatClientStatsValue>> clientStats_ {};
        // The statistics on the namespaces.
        shared_ptr<map<string, DataSessionStatDbStatsValue>> dbStats_ {};
        // The longest duration of a session. Unit: seconds.
        shared_ptr<int64_t> longestSecsRunning_ {};
        // The total number of sessions.
        shared_ptr<int64_t> totalCount_ {};
      };

      class SessionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SessionList& obj) { 
          DARABONBA_PTR_TO_JSON(Active, active_);
          DARABONBA_PTR_TO_JSON(Client, client_);
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(Driver, driver_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(KillPending, killPending_);
          DARABONBA_PTR_TO_JSON(Ns, ns_);
          DARABONBA_PTR_TO_JSON(Op, op_);
          DARABONBA_PTR_TO_JSON(OpId, opId_);
          DARABONBA_PTR_TO_JSON(OsArch, osArch_);
          DARABONBA_PTR_TO_JSON(OsName, osName_);
          DARABONBA_PTR_TO_JSON(OsType, osType_);
          DARABONBA_PTR_TO_JSON(PlanSummary, planSummary_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(SecsRunning, secsRunning_);
          DARABONBA_PTR_TO_JSON(Shard, shard_);
        };
        friend void from_json(const Darabonba::Json& j, SessionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Active, active_);
          DARABONBA_PTR_FROM_JSON(Client, client_);
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(Driver, driver_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(KillPending, killPending_);
          DARABONBA_PTR_FROM_JSON(Ns, ns_);
          DARABONBA_PTR_FROM_JSON(Op, op_);
          DARABONBA_PTR_FROM_JSON(OpId, opId_);
          DARABONBA_PTR_FROM_JSON(OsArch, osArch_);
          DARABONBA_PTR_FROM_JSON(OsName, osName_);
          DARABONBA_PTR_FROM_JSON(OsType, osType_);
          DARABONBA_PTR_FROM_JSON(PlanSummary, planSummary_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(SecsRunning, secsRunning_);
          DARABONBA_PTR_FROM_JSON(Shard, shard_);
        };
        SessionList() = default ;
        SessionList(const SessionList &) = default ;
        SessionList(SessionList &&) = default ;
        SessionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SessionList() = default ;
        SessionList& operator=(const SessionList &) = default ;
        SessionList& operator=(SessionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->active_ == nullptr
        && this->client_ == nullptr && this->command_ == nullptr && this->connectionId_ == nullptr && this->desc_ == nullptr && this->driver_ == nullptr
        && this->host_ == nullptr && this->killPending_ == nullptr && this->ns_ == nullptr && this->op_ == nullptr && this->opId_ == nullptr
        && this->osArch_ == nullptr && this->osName_ == nullptr && this->osType_ == nullptr && this->planSummary_ == nullptr && this->platform_ == nullptr
        && this->secsRunning_ == nullptr && this->shard_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
        inline SessionList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // client Field Functions 
        bool hasClient() const { return this->client_ != nullptr;};
        void deleteClient() { this->client_ = nullptr;};
        inline string getClient() const { DARABONBA_PTR_GET_DEFAULT(client_, "") };
        inline SessionList& setClient(string client) { DARABONBA_PTR_SET_VALUE(client_, client) };


        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline SessionList& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // connectionId Field Functions 
        bool hasConnectionId() const { return this->connectionId_ != nullptr;};
        void deleteConnectionId() { this->connectionId_ = nullptr;};
        inline int64_t getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, 0L) };
        inline SessionList& setConnectionId(int64_t connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline SessionList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // driver Field Functions 
        bool hasDriver() const { return this->driver_ != nullptr;};
        void deleteDriver() { this->driver_ = nullptr;};
        inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
        inline SessionList& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline SessionList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // killPending Field Functions 
        bool hasKillPending() const { return this->killPending_ != nullptr;};
        void deleteKillPending() { this->killPending_ = nullptr;};
        inline bool getKillPending() const { DARABONBA_PTR_GET_DEFAULT(killPending_, false) };
        inline SessionList& setKillPending(bool killPending) { DARABONBA_PTR_SET_VALUE(killPending_, killPending) };


        // ns Field Functions 
        bool hasNs() const { return this->ns_ != nullptr;};
        void deleteNs() { this->ns_ = nullptr;};
        inline string getNs() const { DARABONBA_PTR_GET_DEFAULT(ns_, "") };
        inline SessionList& setNs(string ns) { DARABONBA_PTR_SET_VALUE(ns_, ns) };


        // op Field Functions 
        bool hasOp() const { return this->op_ != nullptr;};
        void deleteOp() { this->op_ = nullptr;};
        inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
        inline SessionList& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


        // opId Field Functions 
        bool hasOpId() const { return this->opId_ != nullptr;};
        void deleteOpId() { this->opId_ = nullptr;};
        inline string getOpId() const { DARABONBA_PTR_GET_DEFAULT(opId_, "") };
        inline SessionList& setOpId(string opId) { DARABONBA_PTR_SET_VALUE(opId_, opId) };


        // osArch Field Functions 
        bool hasOsArch() const { return this->osArch_ != nullptr;};
        void deleteOsArch() { this->osArch_ = nullptr;};
        inline string getOsArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
        inline SessionList& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


        // osName Field Functions 
        bool hasOsName() const { return this->osName_ != nullptr;};
        void deleteOsName() { this->osName_ = nullptr;};
        inline string getOsName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
        inline SessionList& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


        // osType Field Functions 
        bool hasOsType() const { return this->osType_ != nullptr;};
        void deleteOsType() { this->osType_ = nullptr;};
        inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
        inline SessionList& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


        // planSummary Field Functions 
        bool hasPlanSummary() const { return this->planSummary_ != nullptr;};
        void deletePlanSummary() { this->planSummary_ = nullptr;};
        inline string getPlanSummary() const { DARABONBA_PTR_GET_DEFAULT(planSummary_, "") };
        inline SessionList& setPlanSummary(string planSummary) { DARABONBA_PTR_SET_VALUE(planSummary_, planSummary) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline SessionList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // secsRunning Field Functions 
        bool hasSecsRunning() const { return this->secsRunning_ != nullptr;};
        void deleteSecsRunning() { this->secsRunning_ = nullptr;};
        inline int64_t getSecsRunning() const { DARABONBA_PTR_GET_DEFAULT(secsRunning_, 0L) };
        inline SessionList& setSecsRunning(int64_t secsRunning) { DARABONBA_PTR_SET_VALUE(secsRunning_, secsRunning) };


        // shard Field Functions 
        bool hasShard() const { return this->shard_ != nullptr;};
        void deleteShard() { this->shard_ = nullptr;};
        inline string getShard() const { DARABONBA_PTR_GET_DEFAULT(shard_, "") };
        inline SessionList& setShard(string shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };


      protected:
        // Indicates whether the operation is active. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> active_ {};
        // The IP address of the client.
        shared_ptr<string> client_ {};
        // The document that contains the complete command object associated with the operation.
        shared_ptr<string> command_ {};
        // The connection ID.
        shared_ptr<int64_t> connectionId_ {};
        // The description of the connection.
        shared_ptr<string> desc_ {};
        // The driver for MongoDB.
        shared_ptr<string> driver_ {};
        // The host.
        shared_ptr<string> host_ {};
        // Indicates whether the operation is marked as terminated.
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> killPending_ {};
        // The namespace.
        shared_ptr<string> ns_ {};
        // The type of the operation.
        shared_ptr<string> op_ {};
        // The operation ID.
        shared_ptr<string> opId_ {};
        // The architecture of the operating system.
        shared_ptr<string> osArch_ {};
        // The name of the operating system.
        shared_ptr<string> osName_ {};
        // The type of the operating system.
        shared_ptr<string> osType_ {};
        // The description of the execution plan.
        shared_ptr<string> planSummary_ {};
        // The platform.
        shared_ptr<string> platform_ {};
        // The duration of the operation. Unit: seconds.
        shared_ptr<int64_t> secsRunning_ {};
        // The ID of the data shard.
        // 
        // >  This parameter is returned for sharded cluster instances.
        shared_ptr<string> shard_ {};
      };

      virtual bool empty() const override { return this->sessionList_ == nullptr
        && this->sessionStat_ == nullptr && this->timestamp_ == nullptr; };
      // sessionList Field Functions 
      bool hasSessionList() const { return this->sessionList_ != nullptr;};
      void deleteSessionList() { this->sessionList_ = nullptr;};
      inline const vector<Data::SessionList> & getSessionList() const { DARABONBA_PTR_GET_CONST(sessionList_, vector<Data::SessionList>) };
      inline vector<Data::SessionList> getSessionList() { DARABONBA_PTR_GET(sessionList_, vector<Data::SessionList>) };
      inline Data& setSessionList(const vector<Data::SessionList> & sessionList) { DARABONBA_PTR_SET_VALUE(sessionList_, sessionList) };
      inline Data& setSessionList(vector<Data::SessionList> && sessionList) { DARABONBA_PTR_SET_RVALUE(sessionList_, sessionList) };


      // sessionStat Field Functions 
      bool hasSessionStat() const { return this->sessionStat_ != nullptr;};
      void deleteSessionStat() { this->sessionStat_ = nullptr;};
      inline const Data::SessionStat & getSessionStat() const { DARABONBA_PTR_GET_CONST(sessionStat_, Data::SessionStat) };
      inline Data::SessionStat getSessionStat() { DARABONBA_PTR_GET(sessionStat_, Data::SessionStat) };
      inline Data& setSessionStat(const Data::SessionStat & sessionStat) { DARABONBA_PTR_SET_VALUE(sessionStat_, sessionStat) };
      inline Data& setSessionStat(Data::SessionStat && sessionStat) { DARABONBA_PTR_SET_RVALUE(sessionStat_, sessionStat) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The sessions.
      shared_ptr<vector<Data::SessionList>> sessionList_ {};
      // The statistics on the sessions.
      shared_ptr<Data::SessionStat> sessionStat_ {};
      // The time when the database sessions were returned. The value is in the UNIX timestamp format. Unit: milliseconds.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetMongoDBCurrentOpResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMongoDBCurrentOpResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMongoDBCurrentOpResponseBody::Data) };
    inline GetMongoDBCurrentOpResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMongoDBCurrentOpResponseBody::Data) };
    inline GetMongoDBCurrentOpResponseBody& setData(const GetMongoDBCurrentOpResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMongoDBCurrentOpResponseBody& setData(GetMongoDBCurrentOpResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMongoDBCurrentOpResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMongoDBCurrentOpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMongoDBCurrentOpResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int64_t> code_ {};
    // The details of the sessions.
    shared_ptr<GetMongoDBCurrentOpResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. Otherwise, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
