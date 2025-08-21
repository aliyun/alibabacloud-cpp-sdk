// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPRESPONSEBODYDATASESSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPRESPONSEBODYDATASESSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMongoDBCurrentOpResponseBodyDataSessionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMongoDBCurrentOpResponseBodyDataSessionList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMongoDBCurrentOpResponseBodyDataSessionList& obj) { 
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
    GetMongoDBCurrentOpResponseBodyDataSessionList() = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionList(const GetMongoDBCurrentOpResponseBodyDataSessionList &) = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionList(GetMongoDBCurrentOpResponseBodyDataSessionList &&) = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMongoDBCurrentOpResponseBodyDataSessionList() = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionList& operator=(const GetMongoDBCurrentOpResponseBodyDataSessionList &) = default ;
    GetMongoDBCurrentOpResponseBodyDataSessionList& operator=(GetMongoDBCurrentOpResponseBodyDataSessionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->client_ != nullptr && this->command_ != nullptr && this->connectionId_ != nullptr && this->desc_ != nullptr && this->driver_ != nullptr
        && this->host_ != nullptr && this->killPending_ != nullptr && this->ns_ != nullptr && this->op_ != nullptr && this->opId_ != nullptr
        && this->osArch_ != nullptr && this->osName_ != nullptr && this->osType_ != nullptr && this->planSummary_ != nullptr && this->platform_ != nullptr
        && this->secsRunning_ != nullptr && this->shard_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline string client() const { DARABONBA_PTR_GET_DEFAULT(client_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setClient(string client) { DARABONBA_PTR_SET_VALUE(client_, client) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline int64_t connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, 0L) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setConnectionId(int64_t connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string driver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // killPending Field Functions 
    bool hasKillPending() const { return this->killPending_ != nullptr;};
    void deleteKillPending() { this->killPending_ = nullptr;};
    inline bool killPending() const { DARABONBA_PTR_GET_DEFAULT(killPending_, false) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setKillPending(bool killPending) { DARABONBA_PTR_SET_VALUE(killPending_, killPending) };


    // ns Field Functions 
    bool hasNs() const { return this->ns_ != nullptr;};
    void deleteNs() { this->ns_ = nullptr;};
    inline string ns() const { DARABONBA_PTR_GET_DEFAULT(ns_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setNs(string ns) { DARABONBA_PTR_SET_VALUE(ns_, ns) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // opId Field Functions 
    bool hasOpId() const { return this->opId_ != nullptr;};
    void deleteOpId() { this->opId_ = nullptr;};
    inline string opId() const { DARABONBA_PTR_GET_DEFAULT(opId_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setOpId(string opId) { DARABONBA_PTR_SET_VALUE(opId_, opId) };


    // osArch Field Functions 
    bool hasOsArch() const { return this->osArch_ != nullptr;};
    void deleteOsArch() { this->osArch_ = nullptr;};
    inline string osArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // planSummary Field Functions 
    bool hasPlanSummary() const { return this->planSummary_ != nullptr;};
    void deletePlanSummary() { this->planSummary_ = nullptr;};
    inline string planSummary() const { DARABONBA_PTR_GET_DEFAULT(planSummary_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setPlanSummary(string planSummary) { DARABONBA_PTR_SET_VALUE(planSummary_, planSummary) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // secsRunning Field Functions 
    bool hasSecsRunning() const { return this->secsRunning_ != nullptr;};
    void deleteSecsRunning() { this->secsRunning_ = nullptr;};
    inline int64_t secsRunning() const { DARABONBA_PTR_GET_DEFAULT(secsRunning_, 0L) };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setSecsRunning(int64_t secsRunning) { DARABONBA_PTR_SET_VALUE(secsRunning_, secsRunning) };


    // shard Field Functions 
    bool hasShard() const { return this->shard_ != nullptr;};
    void deleteShard() { this->shard_ = nullptr;};
    inline string shard() const { DARABONBA_PTR_GET_DEFAULT(shard_, "") };
    inline GetMongoDBCurrentOpResponseBodyDataSessionList& setShard(string shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };


  protected:
    // Indicates whether the operation is active. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> active_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> client_ = nullptr;
    // The document that contains the complete command object associated with the operation.
    std::shared_ptr<string> command_ = nullptr;
    // The connection ID.
    std::shared_ptr<int64_t> connectionId_ = nullptr;
    // The description of the connection.
    std::shared_ptr<string> desc_ = nullptr;
    // The driver for MongoDB.
    std::shared_ptr<string> driver_ = nullptr;
    // The host.
    std::shared_ptr<string> host_ = nullptr;
    // Indicates whether the operation is marked as terminated.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> killPending_ = nullptr;
    // The namespace.
    std::shared_ptr<string> ns_ = nullptr;
    // The type of the operation.
    std::shared_ptr<string> op_ = nullptr;
    // The operation ID.
    std::shared_ptr<string> opId_ = nullptr;
    // The architecture of the operating system.
    std::shared_ptr<string> osArch_ = nullptr;
    // The name of the operating system.
    std::shared_ptr<string> osName_ = nullptr;
    // The type of the operating system.
    std::shared_ptr<string> osType_ = nullptr;
    // The description of the execution plan.
    std::shared_ptr<string> planSummary_ = nullptr;
    // The platform.
    std::shared_ptr<string> platform_ = nullptr;
    // The duration of the operation. Unit: seconds.
    std::shared_ptr<int64_t> secsRunning_ = nullptr;
    // The ID of the data shard.
    // 
    // >  This parameter is returned for sharded cluster instances.
    std::shared_ptr<string> shard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
