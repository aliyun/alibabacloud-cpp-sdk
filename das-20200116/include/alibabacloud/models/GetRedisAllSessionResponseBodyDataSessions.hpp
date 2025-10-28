// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREDISALLSESSIONRESPONSEBODYDATASESSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETREDISALLSESSIONRESPONSEBODYDATASESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRedisAllSessionResponseBodyDataSessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRedisAllSessionResponseBodyDataSessions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetRedisAllSessionResponseBodyDataSessions& obj) { 
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
    GetRedisAllSessionResponseBodyDataSessions() = default ;
    GetRedisAllSessionResponseBodyDataSessions(const GetRedisAllSessionResponseBodyDataSessions &) = default ;
    GetRedisAllSessionResponseBodyDataSessions(GetRedisAllSessionResponseBodyDataSessions &&) = default ;
    GetRedisAllSessionResponseBodyDataSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRedisAllSessionResponseBodyDataSessions() = default ;
    GetRedisAllSessionResponseBodyDataSessions& operator=(const GetRedisAllSessionResponseBodyDataSessions &) = default ;
    GetRedisAllSessionResponseBodyDataSessions& operator=(GetRedisAllSessionResponseBodyDataSessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addr_ == nullptr
        && return this->age_ == nullptr && return this->client_ == nullptr && return this->clientDesc_ == nullptr && return this->cmd_ == nullptr && return this->db_ == nullptr
        && return this->events_ == nullptr && return this->fd_ == nullptr && return this->flags_ == nullptr && return this->id_ == nullptr && return this->idle_ == nullptr
        && return this->multi_ == nullptr && return this->name_ == nullptr && return this->nodeId_ == nullptr && return this->obl_ == nullptr && return this->oll_ == nullptr
        && return this->omem_ == nullptr && return this->psub_ == nullptr && return this->qbuf_ == nullptr && return this->qbufFree_ == nullptr && return this->sub_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline string addr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
    inline GetRedisAllSessionResponseBodyDataSessions& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


    // age Field Functions 
    bool hasAge() const { return this->age_ != nullptr;};
    void deleteAge() { this->age_ = nullptr;};
    inline string age() const { DARABONBA_PTR_GET_DEFAULT(age_, "") };
    inline GetRedisAllSessionResponseBodyDataSessions& setAge(string age) { DARABONBA_PTR_SET_VALUE(age_, age) };


    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline string client() const { DARABONBA_PTR_GET_DEFAULT(client_, "") };
    inline GetRedisAllSessionResponseBodyDataSessions& setClient(string client) { DARABONBA_PTR_SET_VALUE(client_, client) };


    // clientDesc Field Functions 
    bool hasClientDesc() const { return this->clientDesc_ != nullptr;};
    void deleteClientDesc() { this->clientDesc_ = nullptr;};
    inline string clientDesc() const { DARABONBA_PTR_GET_DEFAULT(clientDesc_, "") };
    inline GetRedisAllSessionResponseBodyDataSessions& setClientDesc(string clientDesc) { DARABONBA_PTR_SET_VALUE(clientDesc_, clientDesc) };


    // cmd Field Functions 
    bool hasCmd() const { return this->cmd_ != nullptr;};
    void deleteCmd() { this->cmd_ = nullptr;};
    inline string cmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
    inline GetRedisAllSessionResponseBodyDataSessions& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline int64_t db() const { DARABONBA_PTR_GET_DEFAULT(db_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setDb(int64_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline string events() const { DARABONBA_PTR_GET_DEFAULT(events_, "") };
    inline GetRedisAllSessionResponseBodyDataSessions& setEvents(string events) { DARABONBA_PTR_SET_VALUE(events_, events) };


    // fd Field Functions 
    bool hasFd() const { return this->fd_ != nullptr;};
    void deleteFd() { this->fd_ = nullptr;};
    inline int64_t fd() const { DARABONBA_PTR_GET_DEFAULT(fd_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setFd(int64_t fd) { DARABONBA_PTR_SET_VALUE(fd_, fd) };


    // flags Field Functions 
    bool hasFlags() const { return this->flags_ != nullptr;};
    void deleteFlags() { this->flags_ = nullptr;};
    inline string flags() const { DARABONBA_PTR_GET_DEFAULT(flags_, "") };
    inline GetRedisAllSessionResponseBodyDataSessions& setFlags(string flags) { DARABONBA_PTR_SET_VALUE(flags_, flags) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idle Field Functions 
    bool hasIdle() const { return this->idle_ != nullptr;};
    void deleteIdle() { this->idle_ = nullptr;};
    inline int64_t idle() const { DARABONBA_PTR_GET_DEFAULT(idle_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setIdle(int64_t idle) { DARABONBA_PTR_SET_VALUE(idle_, idle) };


    // multi Field Functions 
    bool hasMulti() const { return this->multi_ != nullptr;};
    void deleteMulti() { this->multi_ = nullptr;};
    inline int64_t multi() const { DARABONBA_PTR_GET_DEFAULT(multi_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setMulti(int64_t multi) { DARABONBA_PTR_SET_VALUE(multi_, multi) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRedisAllSessionResponseBodyDataSessions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetRedisAllSessionResponseBodyDataSessions& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // obl Field Functions 
    bool hasObl() const { return this->obl_ != nullptr;};
    void deleteObl() { this->obl_ = nullptr;};
    inline int64_t obl() const { DARABONBA_PTR_GET_DEFAULT(obl_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setObl(int64_t obl) { DARABONBA_PTR_SET_VALUE(obl_, obl) };


    // oll Field Functions 
    bool hasOll() const { return this->oll_ != nullptr;};
    void deleteOll() { this->oll_ = nullptr;};
    inline int64_t oll() const { DARABONBA_PTR_GET_DEFAULT(oll_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setOll(int64_t oll) { DARABONBA_PTR_SET_VALUE(oll_, oll) };


    // omem Field Functions 
    bool hasOmem() const { return this->omem_ != nullptr;};
    void deleteOmem() { this->omem_ = nullptr;};
    inline int64_t omem() const { DARABONBA_PTR_GET_DEFAULT(omem_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setOmem(int64_t omem) { DARABONBA_PTR_SET_VALUE(omem_, omem) };


    // psub Field Functions 
    bool hasPsub() const { return this->psub_ != nullptr;};
    void deletePsub() { this->psub_ = nullptr;};
    inline int64_t psub() const { DARABONBA_PTR_GET_DEFAULT(psub_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setPsub(int64_t psub) { DARABONBA_PTR_SET_VALUE(psub_, psub) };


    // qbuf Field Functions 
    bool hasQbuf() const { return this->qbuf_ != nullptr;};
    void deleteQbuf() { this->qbuf_ = nullptr;};
    inline int64_t qbuf() const { DARABONBA_PTR_GET_DEFAULT(qbuf_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setQbuf(int64_t qbuf) { DARABONBA_PTR_SET_VALUE(qbuf_, qbuf) };


    // qbufFree Field Functions 
    bool hasQbufFree() const { return this->qbufFree_ != nullptr;};
    void deleteQbufFree() { this->qbufFree_ = nullptr;};
    inline int64_t qbufFree() const { DARABONBA_PTR_GET_DEFAULT(qbufFree_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setQbufFree(int64_t qbufFree) { DARABONBA_PTR_SET_VALUE(qbufFree_, qbufFree) };


    // sub Field Functions 
    bool hasSub() const { return this->sub_ != nullptr;};
    void deleteSub() { this->sub_ = nullptr;};
    inline int64_t sub() const { DARABONBA_PTR_GET_DEFAULT(sub_, 0L) };
    inline GetRedisAllSessionResponseBodyDataSessions& setSub(int64_t sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


  protected:
    // The IP address and port number of the client.
    std::shared_ptr<string> addr_ = nullptr;
    // The connection duration of the session. Unit: seconds.
    std::shared_ptr<string> age_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> client_ = nullptr;
    // The alias of the client.
    std::shared_ptr<string> clientDesc_ = nullptr;
    // The command that was last run.
    std::shared_ptr<string> cmd_ = nullptr;
    // The ID of the database that the client is using.
    std::shared_ptr<int64_t> db_ = nullptr;
    // The file descriptor event. Valid values:
    // 
    // *   **r**: Client sockets are readable in the event loop.
    // *   **w**: Client sockets are writable in the event loop.
    std::shared_ptr<string> events_ = nullptr;
    // The file descriptor that is used by sockets.
    std::shared_ptr<int64_t> fd_ = nullptr;
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
    std::shared_ptr<string> flags_ = nullptr;
    // The client ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The duration during which the session is in the idle state. Unit: seconds.
    std::shared_ptr<int64_t> idle_ = nullptr;
    // The number of commands in `MULTI` or `EXEC`.
    std::shared_ptr<int64_t> multi_ = nullptr;
    // The name of the client.
    std::shared_ptr<string> name_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The size of the fixed output buffer. Unit: bytes.
    std::shared_ptr<int64_t> obl_ = nullptr;
    // The number of objects contained in the output list.
    std::shared_ptr<int64_t> oll_ = nullptr;
    // The size of the output buffer. Unit: bytes.
    std::shared_ptr<int64_t> omem_ = nullptr;
    // The number of subscriptions that match the pattern.
    std::shared_ptr<int64_t> psub_ = nullptr;
    // The size of the input buffer. Unit: bytes.
    std::shared_ptr<int64_t> qbuf_ = nullptr;
    // The remaining size of the input buffer. Unit: bytes.
    std::shared_ptr<int64_t> qbufFree_ = nullptr;
    // The number of subscribed channels.
    std::shared_ptr<int64_t> sub_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
