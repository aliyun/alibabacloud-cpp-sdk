// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEEVENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEEVENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVirusScanMachineEventResponseBodyDataDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVirusScanMachineEventResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanMachineEventResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LastTimeStamp, lastTimeStamp_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanMachineEventResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LastTimeStamp, lastTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    ListVirusScanMachineEventResponseBodyData() = default ;
    ListVirusScanMachineEventResponseBodyData(const ListVirusScanMachineEventResponseBodyData &) = default ;
    ListVirusScanMachineEventResponseBodyData(ListVirusScanMachineEventResponseBodyData &&) = default ;
    ListVirusScanMachineEventResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanMachineEventResponseBodyData() = default ;
    ListVirusScanMachineEventResponseBodyData& operator=(const ListVirusScanMachineEventResponseBodyData &) = default ;
    ListVirusScanMachineEventResponseBodyData& operator=(ListVirusScanMachineEventResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->details_ == nullptr
        && return this->eventId_ == nullptr && return this->eventName_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr
        && return this->lastTimeStamp_ == nullptr && return this->level_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::ListVirusScanMachineEventResponseBodyDataDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::ListVirusScanMachineEventResponseBodyDataDetails>) };
    inline vector<Models::ListVirusScanMachineEventResponseBodyDataDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::ListVirusScanMachineEventResponseBodyDataDetails>) };
    inline ListVirusScanMachineEventResponseBodyData& setDetails(const vector<Models::ListVirusScanMachineEventResponseBodyDataDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline ListVirusScanMachineEventResponseBodyData& setDetails(vector<Models::ListVirusScanMachineEventResponseBodyDataDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline ListVirusScanMachineEventResponseBodyData& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ListVirusScanMachineEventResponseBodyData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListVirusScanMachineEventResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListVirusScanMachineEventResponseBodyData& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListVirusScanMachineEventResponseBodyData& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lastTimeStamp Field Functions 
    bool hasLastTimeStamp() const { return this->lastTimeStamp_ != nullptr;};
    void deleteLastTimeStamp() { this->lastTimeStamp_ = nullptr;};
    inline int64_t lastTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimeStamp_, 0L) };
    inline ListVirusScanMachineEventResponseBodyData& setLastTimeStamp(int64_t lastTimeStamp) { DARABONBA_PTR_SET_VALUE(lastTimeStamp_, lastTimeStamp) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListVirusScanMachineEventResponseBodyData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The details of the exception.
    std::shared_ptr<vector<Models::ListVirusScanMachineEventResponseBodyDataDetails>> details_ = nullptr;
    // The ID of the alert event.
    std::shared_ptr<int64_t> eventId_ = nullptr;
    // The name of the alert event. The value indicates a subtype.
    std::shared_ptr<string> eventName_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The timestamp when the alert event was last generated. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTimeStamp_ = nullptr;
    // The risk level of the alert event. Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
