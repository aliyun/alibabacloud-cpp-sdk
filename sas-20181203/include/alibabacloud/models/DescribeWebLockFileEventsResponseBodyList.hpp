// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILEEVENTSRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILEEVENTSRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockFileEventsResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockFileEventsResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Ds, ds_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(GmtEvent, gmtEvent_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockFileEventsResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Ds, ds_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(GmtEvent, gmtEvent_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeWebLockFileEventsResponseBodyList() = default ;
    DescribeWebLockFileEventsResponseBodyList(const DescribeWebLockFileEventsResponseBodyList &) = default ;
    DescribeWebLockFileEventsResponseBodyList(DescribeWebLockFileEventsResponseBodyList &&) = default ;
    DescribeWebLockFileEventsResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockFileEventsResponseBodyList() = default ;
    DescribeWebLockFileEventsResponseBodyList& operator=(const DescribeWebLockFileEventsResponseBodyList &) = default ;
    DescribeWebLockFileEventsResponseBodyList& operator=(DescribeWebLockFileEventsResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->ds_ != nullptr && this->eventName_ != nullptr && this->eventStatus_ != nullptr && this->eventType_ != nullptr && this->gmtEvent_ != nullptr
        && this->id_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr && this->ip_ != nullptr
        && this->level_ != nullptr && this->path_ != nullptr && this->processName_ != nullptr && this->processPath_ != nullptr && this->status_ != nullptr
        && this->uuid_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeWebLockFileEventsResponseBodyList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ds Field Functions 
    bool hasDs() const { return this->ds_ != nullptr;};
    void deleteDs() { this->ds_ = nullptr;};
    inline int64_t ds() const { DARABONBA_PTR_GET_DEFAULT(ds_, 0L) };
    inline DescribeWebLockFileEventsResponseBodyList& setDs(int64_t ds) { DARABONBA_PTR_SET_VALUE(ds_, ds) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline string eventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // gmtEvent Field Functions 
    bool hasGmtEvent() const { return this->gmtEvent_ != nullptr;};
    void deleteGmtEvent() { this->gmtEvent_ = nullptr;};
    inline int64_t gmtEvent() const { DARABONBA_PTR_GET_DEFAULT(gmtEvent_, 0L) };
    inline DescribeWebLockFileEventsResponseBodyList& setGmtEvent(int64_t gmtEvent) { DARABONBA_PTR_SET_VALUE(gmtEvent_, gmtEvent) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeWebLockFileEventsResponseBodyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processPath Field Functions 
    bool hasProcessPath() const { return this->processPath_ != nullptr;};
    void deleteProcessPath() { this->processPath_ = nullptr;};
    inline string processPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeWebLockFileEventsResponseBodyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The number of attempts.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The timestamp at which the event on web tamper proofing was first detected.
    std::shared_ptr<int64_t> ds_ = nullptr;
    // The name of the event on web tamper proofing.
    std::shared_ptr<string> eventName_ = nullptr;
    // The status of the event on web tamper proofing. Valid values:
    // 
    // *   **1**: unhandled
    // *   **2**: ignored
    // *   **4**: deprecated
    // *   **8**: marked as false positive
    // *   **10**: added to the whitelist
    // *   **16**: handling
    // *   **32**: defended
    // *   **64**: invalid
    // *   **128**: deleted
    // *   **512**: automatically handled
    std::shared_ptr<string> eventStatus_ = nullptr;
    // The prevention mode. Valid values:
    // 
    // *   **audit**: Interception Mode
    // *   **web_lock**: Alert Mode
    std::shared_ptr<string> eventType_ = nullptr;
    // The timestamp at which the event on web tamper proofing was last detected.
    std::shared_ptr<int64_t> gmtEvent_ = nullptr;
    // The ID of the event on web tamper proofing.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the affected asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the asset.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The IP address of the asset.
    std::shared_ptr<string> ip_ = nullptr;
    // The severity of the event on web tamper proofing. Valid values: **medium**
    std::shared_ptr<string> level_ = nullptr;
    // The file path.
    std::shared_ptr<string> path_ = nullptr;
    // The name of the process.
    std::shared_ptr<string> processName_ = nullptr;
    // The path to the process.
    std::shared_ptr<string> processPath_ = nullptr;
    // The status of the event on web tamper proofing. Valid values:
    // 
    // *   **1**: unhandled
    // *   **2**: ignored
    // *   **4**: deprecated
    // *   **8**: marked as false positive
    // *   **10**: added to the whitelist
    // *   **16**: handling
    // *   **32**: defended
    // *   **64**: invalid
    // *   **128**: deleted
    // *   **512**: automatically handled
    std::shared_ptr<string> status_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
