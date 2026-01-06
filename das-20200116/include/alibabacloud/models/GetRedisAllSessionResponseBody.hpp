// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREDISALLSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREDISALLSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRedisAllSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRedisAllSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRedisAllSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRedisAllSessionResponseBody() = default ;
    GetRedisAllSessionResponseBody(const GetRedisAllSessionResponseBody &) = default ;
    GetRedisAllSessionResponseBody(GetRedisAllSessionResponseBody &&) = default ;
    GetRedisAllSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRedisAllSessionResponseBody() = default ;
    GetRedisAllSessionResponseBody& operator=(const GetRedisAllSessionResponseBody &) = default ;
    GetRedisAllSessionResponseBody& operator=(GetRedisAllSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Sessions, sessions_);
        DARABONBA_PTR_TO_JSON(SourceStats, sourceStats_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
        DARABONBA_PTR_FROM_JSON(SourceStats, sourceStats_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class SourceStats : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceStats& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Ids, ids_);
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, SourceStats& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Ids, ids_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        SourceStats() = default ;
        SourceStats(const SourceStats &) = default ;
        SourceStats(SourceStats &&) = default ;
        SourceStats(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceStats() = default ;
        SourceStats& operator=(const SourceStats &) = default ;
        SourceStats& operator=(SourceStats &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->ids_ == nullptr && this->key_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
        inline SourceStats& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // ids Field Functions 
        bool hasIds() const { return this->ids_ != nullptr;};
        void deleteIds() { this->ids_ = nullptr;};
        inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
        inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
        inline SourceStats& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
        inline SourceStats& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline SourceStats& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // The total number of sessions from the access source.
        shared_ptr<string> count_ {};
        // The client IDs.
        shared_ptr<vector<int64_t>> ids_ {};
        // The access source.
        shared_ptr<string> key_ {};
      };

      class Sessions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
          DARABONBA_PTR_TO_JSON(Addr, addr_);
          DARABONBA_PTR_TO_JSON(Age, age_);
          DARABONBA_PTR_TO_JSON(Client, client_);
          DARABONBA_PTR_TO_JSON(ClientDesc, clientDesc_);
          DARABONBA_PTR_TO_JSON(Cmd, cmd_);
          DARABONBA_PTR_TO_JSON(Db, db_);
          DARABONBA_PTR_TO_JSON(Events, events_);
          DARABONBA_PTR_TO_JSON(Fd, fd_);
          DARABONBA_PTR_TO_JSON(Flags, flags_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Idle, idle_);
          DARABONBA_PTR_TO_JSON(Multi, multi_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Obl, obl_);
          DARABONBA_PTR_TO_JSON(Oll, oll_);
          DARABONBA_PTR_TO_JSON(Omem, omem_);
          DARABONBA_PTR_TO_JSON(Psub, psub_);
          DARABONBA_PTR_TO_JSON(Qbuf, qbuf_);
          DARABONBA_PTR_TO_JSON(QbufFree, qbufFree_);
          DARABONBA_PTR_TO_JSON(Sub, sub_);
        };
        friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
          DARABONBA_PTR_FROM_JSON(Addr, addr_);
          DARABONBA_PTR_FROM_JSON(Age, age_);
          DARABONBA_PTR_FROM_JSON(Client, client_);
          DARABONBA_PTR_FROM_JSON(ClientDesc, clientDesc_);
          DARABONBA_PTR_FROM_JSON(Cmd, cmd_);
          DARABONBA_PTR_FROM_JSON(Db, db_);
          DARABONBA_PTR_FROM_JSON(Events, events_);
          DARABONBA_PTR_FROM_JSON(Fd, fd_);
          DARABONBA_PTR_FROM_JSON(Flags, flags_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Idle, idle_);
          DARABONBA_PTR_FROM_JSON(Multi, multi_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Obl, obl_);
          DARABONBA_PTR_FROM_JSON(Oll, oll_);
          DARABONBA_PTR_FROM_JSON(Omem, omem_);
          DARABONBA_PTR_FROM_JSON(Psub, psub_);
          DARABONBA_PTR_FROM_JSON(Qbuf, qbuf_);
          DARABONBA_PTR_FROM_JSON(QbufFree, qbufFree_);
          DARABONBA_PTR_FROM_JSON(Sub, sub_);
        };
        Sessions() = default ;
        Sessions(const Sessions &) = default ;
        Sessions(Sessions &&) = default ;
        Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sessions() = default ;
        Sessions& operator=(const Sessions &) = default ;
        Sessions& operator=(Sessions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addr_ == nullptr
        && this->age_ == nullptr && this->client_ == nullptr && this->clientDesc_ == nullptr && this->cmd_ == nullptr && this->db_ == nullptr
        && this->events_ == nullptr && this->fd_ == nullptr && this->flags_ == nullptr && this->id_ == nullptr && this->idle_ == nullptr
        && this->multi_ == nullptr && this->name_ == nullptr && this->nodeId_ == nullptr && this->obl_ == nullptr && this->oll_ == nullptr
        && this->omem_ == nullptr && this->psub_ == nullptr && this->qbuf_ == nullptr && this->qbufFree_ == nullptr && this->sub_ == nullptr; };
        // addr Field Functions 
        bool hasAddr() const { return this->addr_ != nullptr;};
        void deleteAddr() { this->addr_ = nullptr;};
        inline string getAddr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
        inline Sessions& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


        // age Field Functions 
        bool hasAge() const { return this->age_ != nullptr;};
        void deleteAge() { this->age_ = nullptr;};
        inline string getAge() const { DARABONBA_PTR_GET_DEFAULT(age_, "") };
        inline Sessions& setAge(string age) { DARABONBA_PTR_SET_VALUE(age_, age) };


        // client Field Functions 
        bool hasClient() const { return this->client_ != nullptr;};
        void deleteClient() { this->client_ = nullptr;};
        inline string getClient() const { DARABONBA_PTR_GET_DEFAULT(client_, "") };
        inline Sessions& setClient(string client) { DARABONBA_PTR_SET_VALUE(client_, client) };


        // clientDesc Field Functions 
        bool hasClientDesc() const { return this->clientDesc_ != nullptr;};
        void deleteClientDesc() { this->clientDesc_ = nullptr;};
        inline string getClientDesc() const { DARABONBA_PTR_GET_DEFAULT(clientDesc_, "") };
        inline Sessions& setClientDesc(string clientDesc) { DARABONBA_PTR_SET_VALUE(clientDesc_, clientDesc) };


        // cmd Field Functions 
        bool hasCmd() const { return this->cmd_ != nullptr;};
        void deleteCmd() { this->cmd_ = nullptr;};
        inline string getCmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
        inline Sessions& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


        // db Field Functions 
        bool hasDb() const { return this->db_ != nullptr;};
        void deleteDb() { this->db_ = nullptr;};
        inline int64_t getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, 0L) };
        inline Sessions& setDb(int64_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


        // events Field Functions 
        bool hasEvents() const { return this->events_ != nullptr;};
        void deleteEvents() { this->events_ = nullptr;};
        inline string getEvents() const { DARABONBA_PTR_GET_DEFAULT(events_, "") };
        inline Sessions& setEvents(string events) { DARABONBA_PTR_SET_VALUE(events_, events) };


        // fd Field Functions 
        bool hasFd() const { return this->fd_ != nullptr;};
        void deleteFd() { this->fd_ = nullptr;};
        inline int64_t getFd() const { DARABONBA_PTR_GET_DEFAULT(fd_, 0L) };
        inline Sessions& setFd(int64_t fd) { DARABONBA_PTR_SET_VALUE(fd_, fd) };


        // flags Field Functions 
        bool hasFlags() const { return this->flags_ != nullptr;};
        void deleteFlags() { this->flags_ = nullptr;};
        inline string getFlags() const { DARABONBA_PTR_GET_DEFAULT(flags_, "") };
        inline Sessions& setFlags(string flags) { DARABONBA_PTR_SET_VALUE(flags_, flags) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Sessions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idle Field Functions 
        bool hasIdle() const { return this->idle_ != nullptr;};
        void deleteIdle() { this->idle_ = nullptr;};
        inline int64_t getIdle() const { DARABONBA_PTR_GET_DEFAULT(idle_, 0L) };
        inline Sessions& setIdle(int64_t idle) { DARABONBA_PTR_SET_VALUE(idle_, idle) };


        // multi Field Functions 
        bool hasMulti() const { return this->multi_ != nullptr;};
        void deleteMulti() { this->multi_ = nullptr;};
        inline int64_t getMulti() const { DARABONBA_PTR_GET_DEFAULT(multi_, 0L) };
        inline Sessions& setMulti(int64_t multi) { DARABONBA_PTR_SET_VALUE(multi_, multi) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Sessions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Sessions& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // obl Field Functions 
        bool hasObl() const { return this->obl_ != nullptr;};
        void deleteObl() { this->obl_ = nullptr;};
        inline int64_t getObl() const { DARABONBA_PTR_GET_DEFAULT(obl_, 0L) };
        inline Sessions& setObl(int64_t obl) { DARABONBA_PTR_SET_VALUE(obl_, obl) };


        // oll Field Functions 
        bool hasOll() const { return this->oll_ != nullptr;};
        void deleteOll() { this->oll_ = nullptr;};
        inline int64_t getOll() const { DARABONBA_PTR_GET_DEFAULT(oll_, 0L) };
        inline Sessions& setOll(int64_t oll) { DARABONBA_PTR_SET_VALUE(oll_, oll) };


        // omem Field Functions 
        bool hasOmem() const { return this->omem_ != nullptr;};
        void deleteOmem() { this->omem_ = nullptr;};
        inline int64_t getOmem() const { DARABONBA_PTR_GET_DEFAULT(omem_, 0L) };
        inline Sessions& setOmem(int64_t omem) { DARABONBA_PTR_SET_VALUE(omem_, omem) };


        // psub Field Functions 
        bool hasPsub() const { return this->psub_ != nullptr;};
        void deletePsub() { this->psub_ = nullptr;};
        inline int64_t getPsub() const { DARABONBA_PTR_GET_DEFAULT(psub_, 0L) };
        inline Sessions& setPsub(int64_t psub) { DARABONBA_PTR_SET_VALUE(psub_, psub) };


        // qbuf Field Functions 
        bool hasQbuf() const { return this->qbuf_ != nullptr;};
        void deleteQbuf() { this->qbuf_ = nullptr;};
        inline int64_t getQbuf() const { DARABONBA_PTR_GET_DEFAULT(qbuf_, 0L) };
        inline Sessions& setQbuf(int64_t qbuf) { DARABONBA_PTR_SET_VALUE(qbuf_, qbuf) };


        // qbufFree Field Functions 
        bool hasQbufFree() const { return this->qbufFree_ != nullptr;};
        void deleteQbufFree() { this->qbufFree_ = nullptr;};
        inline int64_t getQbufFree() const { DARABONBA_PTR_GET_DEFAULT(qbufFree_, 0L) };
        inline Sessions& setQbufFree(int64_t qbufFree) { DARABONBA_PTR_SET_VALUE(qbufFree_, qbufFree) };


        // sub Field Functions 
        bool hasSub() const { return this->sub_ != nullptr;};
        void deleteSub() { this->sub_ = nullptr;};
        inline int64_t getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, 0L) };
        inline Sessions& setSub(int64_t sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


      protected:
        // The IP address and port number of the client.
        shared_ptr<string> addr_ {};
        // The connection duration of the session. Unit: seconds.
        shared_ptr<string> age_ {};
        // The IP address of the client.
        shared_ptr<string> client_ {};
        // The alias of the client.
        shared_ptr<string> clientDesc_ {};
        // The command that was last run.
        shared_ptr<string> cmd_ {};
        // The ID of the database that the client is using.
        shared_ptr<int64_t> db_ {};
        // The file descriptor event. Valid values:
        // 
        // *   **r**: Client sockets are readable in the event loop.
        // *   **w**: Client sockets are writable in the event loop.
        shared_ptr<string> events_ {};
        // The file descriptor that is used by sockets.
        shared_ptr<int64_t> fd_ {};
        // The client flag. Valid values:
        // 
        // *   **A**: The connection needs to be closed at the earliest opportunity.
        // *   **b**: The client is waiting for blocked events.
        // *   **c**: The connection is closed after all replies are written.
        // *   **d**: The monitored keys have been modified, and the `EXEC` command is about to fail.
        // *   **i**: The client is waiting for VM I/O operations. This value is no longer used.
        // *   **M**: The client is the primary node.
        // *   **N**: No special flags are configured.
        // *   **O**: The client is in monitor mode.
        // *   **r**: The client is a cluster node in read-only mode.
        // *   **S**: The client is a replica node in normal mode.
        // *   **u**: The client is not blocked.
        // *   **U**: The client is connected by using UNIX domain sockets.
        // *   **x**: The client is executing a transaction.
        shared_ptr<string> flags_ {};
        // The client ID.
        shared_ptr<int64_t> id_ {};
        // The duration during which the session is in the idle state. Unit: seconds.
        shared_ptr<int64_t> idle_ {};
        // The number of commands in `MULTI` or `EXEC`.
        shared_ptr<int64_t> multi_ {};
        // The name of the client.
        shared_ptr<string> name_ {};
        // The node ID.
        shared_ptr<string> nodeId_ {};
        // The size of the fixed output buffer. Unit: bytes.
        shared_ptr<int64_t> obl_ {};
        // The number of objects contained in the output list.
        shared_ptr<int64_t> oll_ {};
        // The size of the output buffer. Unit: bytes.
        shared_ptr<int64_t> omem_ {};
        // The number of subscriptions that match the pattern.
        shared_ptr<int64_t> psub_ {};
        // The size of the input buffer. Unit: bytes.
        shared_ptr<int64_t> qbuf_ {};
        // The remaining size of the input buffer. Unit: bytes.
        shared_ptr<int64_t> qbufFree_ {};
        // The number of subscribed channels.
        shared_ptr<int64_t> sub_ {};
      };

      virtual bool empty() const override { return this->sessions_ == nullptr
        && this->sourceStats_ == nullptr && this->timestamp_ == nullptr && this->total_ == nullptr; };
      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline const vector<Data::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Data::Sessions>) };
      inline vector<Data::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<Data::Sessions>) };
      inline Data& setSessions(const vector<Data::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
      inline Data& setSessions(vector<Data::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


      // sourceStats Field Functions 
      bool hasSourceStats() const { return this->sourceStats_ != nullptr;};
      void deleteSourceStats() { this->sourceStats_ = nullptr;};
      inline const vector<Data::SourceStats> & getSourceStats() const { DARABONBA_PTR_GET_CONST(sourceStats_, vector<Data::SourceStats>) };
      inline vector<Data::SourceStats> getSourceStats() { DARABONBA_PTR_GET(sourceStats_, vector<Data::SourceStats>) };
      inline Data& setSourceStats(const vector<Data::SourceStats> & sourceStats) { DARABONBA_PTR_SET_VALUE(sourceStats_, sourceStats) };
      inline Data& setSourceStats(vector<Data::SourceStats> && sourceStats) { DARABONBA_PTR_SET_RVALUE(sourceStats_, sourceStats) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The information about the sessions.
      shared_ptr<vector<Data::Sessions>> sessions_ {};
      // The statistics on the access source.
      shared_ptr<vector<Data::SourceStats>> sourceStats_ {};
      // The time when the instance sessions were returned. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
      // The total number of sessions.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetRedisAllSessionResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRedisAllSessionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRedisAllSessionResponseBody::Data) };
    inline GetRedisAllSessionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRedisAllSessionResponseBody::Data) };
    inline GetRedisAllSessionResponseBody& setData(const GetRedisAllSessionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRedisAllSessionResponseBody& setData(GetRedisAllSessionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRedisAllSessionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRedisAllSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRedisAllSessionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The session data.
    shared_ptr<GetRedisAllSessionResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
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
