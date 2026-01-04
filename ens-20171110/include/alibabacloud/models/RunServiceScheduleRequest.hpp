// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSERVICESCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSERVICESCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RunServiceScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunServiceScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(Directorys, directorys_);
      DARABONBA_PTR_TO_JSON(PodConfigName, podConfigName_);
      DARABONBA_PTR_TO_JSON(PreLockedTimeout, preLockedTimeout_);
      DARABONBA_PTR_TO_JSON(ScheduleStrategy, scheduleStrategy_);
      DARABONBA_PTR_TO_JSON(ServiceAction, serviceAction_);
      DARABONBA_PTR_TO_JSON(ServiceCommands, serviceCommands_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, RunServiceScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(Directorys, directorys_);
      DARABONBA_PTR_FROM_JSON(PodConfigName, podConfigName_);
      DARABONBA_PTR_FROM_JSON(PreLockedTimeout, preLockedTimeout_);
      DARABONBA_PTR_FROM_JSON(ScheduleStrategy, scheduleStrategy_);
      DARABONBA_PTR_FROM_JSON(ServiceAction, serviceAction_);
      DARABONBA_PTR_FROM_JSON(ServiceCommands, serviceCommands_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    RunServiceScheduleRequest() = default ;
    RunServiceScheduleRequest(const RunServiceScheduleRequest &) = default ;
    RunServiceScheduleRequest(RunServiceScheduleRequest &&) = default ;
    RunServiceScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunServiceScheduleRequest() = default ;
    RunServiceScheduleRequest& operator=(const RunServiceScheduleRequest &) = default ;
    RunServiceScheduleRequest& operator=(RunServiceScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientIp_ == nullptr && this->directorys_ == nullptr && this->podConfigName_ == nullptr && this->preLockedTimeout_ == nullptr && this->scheduleStrategy_ == nullptr
        && this->serviceAction_ == nullptr && this->serviceCommands_ == nullptr && this->uuid_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunServiceScheduleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline RunServiceScheduleRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // directorys Field Functions 
    bool hasDirectorys() const { return this->directorys_ != nullptr;};
    void deleteDirectorys() { this->directorys_ = nullptr;};
    inline string getDirectorys() const { DARABONBA_PTR_GET_DEFAULT(directorys_, "") };
    inline RunServiceScheduleRequest& setDirectorys(string directorys) { DARABONBA_PTR_SET_VALUE(directorys_, directorys) };


    // podConfigName Field Functions 
    bool hasPodConfigName() const { return this->podConfigName_ != nullptr;};
    void deletePodConfigName() { this->podConfigName_ = nullptr;};
    inline string getPodConfigName() const { DARABONBA_PTR_GET_DEFAULT(podConfigName_, "") };
    inline RunServiceScheduleRequest& setPodConfigName(string podConfigName) { DARABONBA_PTR_SET_VALUE(podConfigName_, podConfigName) };


    // preLockedTimeout Field Functions 
    bool hasPreLockedTimeout() const { return this->preLockedTimeout_ != nullptr;};
    void deletePreLockedTimeout() { this->preLockedTimeout_ = nullptr;};
    inline int32_t getPreLockedTimeout() const { DARABONBA_PTR_GET_DEFAULT(preLockedTimeout_, 0) };
    inline RunServiceScheduleRequest& setPreLockedTimeout(int32_t preLockedTimeout) { DARABONBA_PTR_SET_VALUE(preLockedTimeout_, preLockedTimeout) };


    // scheduleStrategy Field Functions 
    bool hasScheduleStrategy() const { return this->scheduleStrategy_ != nullptr;};
    void deleteScheduleStrategy() { this->scheduleStrategy_ = nullptr;};
    inline string getScheduleStrategy() const { DARABONBA_PTR_GET_DEFAULT(scheduleStrategy_, "") };
    inline RunServiceScheduleRequest& setScheduleStrategy(string scheduleStrategy) { DARABONBA_PTR_SET_VALUE(scheduleStrategy_, scheduleStrategy) };


    // serviceAction Field Functions 
    bool hasServiceAction() const { return this->serviceAction_ != nullptr;};
    void deleteServiceAction() { this->serviceAction_ = nullptr;};
    inline string getServiceAction() const { DARABONBA_PTR_GET_DEFAULT(serviceAction_, "") };
    inline RunServiceScheduleRequest& setServiceAction(string serviceAction) { DARABONBA_PTR_SET_VALUE(serviceAction_, serviceAction) };


    // serviceCommands Field Functions 
    bool hasServiceCommands() const { return this->serviceCommands_ != nullptr;};
    void deleteServiceCommands() { this->serviceCommands_ = nullptr;};
    inline string getServiceCommands() const { DARABONBA_PTR_GET_DEFAULT(serviceCommands_, "") };
    inline RunServiceScheduleRequest& setServiceCommands(string serviceCommands) { DARABONBA_PTR_SET_VALUE(serviceCommands_, serviceCommands) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline RunServiceScheduleRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The IP address of the client.
    // 
    // This parameter is required.
    shared_ptr<string> clientIp_ {};
    // The directory to which the data file is mounted. The value must be a full path and cannot be \\"/../\\". Example: ["/data/app01", "/data/user"]. Specify the relative path of the virtual device for this parameter. For example, specify /data for this parameter when the actual path of the virtual device is /data/{input path}.
    shared_ptr<string> directorys_ {};
    // The parameter does not take effect.
    shared_ptr<string> podConfigName_ {};
    // The maximum duration for locking an idle device. Unit: seconds. This parameter takes effect only if you set ServiceAction to PreSchedule. Default value: 300.
    shared_ptr<int32_t> preLockedTimeout_ {};
    // The scheduling policy of the device. The value must be a JSON string.
    shared_ptr<string> scheduleStrategy_ {};
    // The scheduling operation. The value must be of the enumeration type. Valid values:
    // 
    // Container scenario:
    // 
    // *   Start: selects and activates an idle cloud device.
    // *   Stop: stops and releases the cloud device.
    // *   Console: performs the scheduling operation when the device is in the scheduling state.
    // 
    // Bare metal instance or virtual machine scenario:
    // 
    // *   PreSchedule: locks a virtual machine instance for scheduling.
    // *   Confirm: confirms the scheduling operation.
    // *   Cancel: cancels the scheduling operation.
    // *   Console: performs the scheduling operation when the device is in the scheduling state.
    // 
    // This parameter is required.
    shared_ptr<string> serviceAction_ {};
    // The service commands. The value must be a JSON string.
    shared_ptr<string> serviceCommands_ {};
    // The UUID of the device.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
