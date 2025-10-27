// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVirusScanMachineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanMachineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanMachineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListVirusScanMachineResponseBodyData() = default ;
    ListVirusScanMachineResponseBodyData(const ListVirusScanMachineResponseBodyData &) = default ;
    ListVirusScanMachineResponseBodyData(ListVirusScanMachineResponseBodyData &&) = default ;
    ListVirusScanMachineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanMachineResponseBodyData() = default ;
    ListVirusScanMachineResponseBodyData& operator=(const ListVirusScanMachineResponseBodyData &) = default ;
    ListVirusScanMachineResponseBodyData& operator=(ListVirusScanMachineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCount_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->uuid_ == nullptr; };
    // eventCount Field Functions 
    bool hasEventCount() const { return this->eventCount_ != nullptr;};
    void deleteEventCount() { this->eventCount_ = nullptr;};
    inline int32_t eventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
    inline ListVirusScanMachineResponseBodyData& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListVirusScanMachineResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListVirusScanMachineResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListVirusScanMachineResponseBodyData& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListVirusScanMachineResponseBodyData& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListVirusScanMachineResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The number of times that the alert is triggered.
    std::shared_ptr<int32_t> eventCount_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the associated server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the associated server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
