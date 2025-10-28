// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOECCLISTECC_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOECCLISTECC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBodyAppInfoEccListEcc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBodyAppInfoEccListEcc& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppState, appState_);
      DARABONBA_PTR_TO_JSON(ContainerStatus, containerStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EccId, eccId_);
      DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBodyAppInfoEccListEcc& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppState, appState_);
      DARABONBA_PTR_FROM_JSON(ContainerStatus, containerStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EccId, eccId_);
      DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    QueryApplicationStatusResponseBodyAppInfoEccListEcc() = default ;
    QueryApplicationStatusResponseBodyAppInfoEccListEcc(const QueryApplicationStatusResponseBodyAppInfoEccListEcc &) = default ;
    QueryApplicationStatusResponseBodyAppInfoEccListEcc(QueryApplicationStatusResponseBodyAppInfoEccListEcc &&) = default ;
    QueryApplicationStatusResponseBodyAppInfoEccListEcc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBodyAppInfoEccListEcc() = default ;
    QueryApplicationStatusResponseBodyAppInfoEccListEcc& operator=(const QueryApplicationStatusResponseBodyAppInfoEccListEcc &) = default ;
    QueryApplicationStatusResponseBodyAppInfoEccListEcc& operator=(QueryApplicationStatusResponseBodyAppInfoEccListEcc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appState_ == nullptr && return this->containerStatus_ == nullptr && return this->createTime_ == nullptr && return this->eccId_ == nullptr && return this->ecuId_ == nullptr
        && return this->groupId_ == nullptr && return this->ip_ == nullptr && return this->taskState_ == nullptr && return this->updateTime_ == nullptr && return this->vpcId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appState Field Functions 
    bool hasAppState() const { return this->appState_ != nullptr;};
    void deleteAppState() { this->appState_ = nullptr;};
    inline int32_t appState() const { DARABONBA_PTR_GET_DEFAULT(appState_, 0) };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setAppState(int32_t appState) { DARABONBA_PTR_SET_VALUE(appState_, appState) };


    // containerStatus Field Functions 
    bool hasContainerStatus() const { return this->containerStatus_ != nullptr;};
    void deleteContainerStatus() { this->containerStatus_ = nullptr;};
    inline string containerStatus() const { DARABONBA_PTR_GET_DEFAULT(containerStatus_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setContainerStatus(string containerStatus) { DARABONBA_PTR_SET_VALUE(containerStatus_, containerStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // eccId Field Functions 
    bool hasEccId() const { return this->eccId_ != nullptr;};
    void deleteEccId() { this->eccId_ = nullptr;};
    inline string eccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


    // ecuId Field Functions 
    bool hasEcuId() const { return this->ecuId_ != nullptr;};
    void deleteEcuId() { this->ecuId_ = nullptr;};
    inline string ecuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline int32_t taskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, 0) };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setTaskState(int32_t taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline QueryApplicationStatusResponseBodyAppInfoEccListEcc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The status of the application instance. Valid values:
    // 
    // *   0: AGENT_OFF: indicates that the agent is offline.
    // *   1: STOPPED: indicates that the application is stopped.
    // *   3: RUNNING_BUT_URL_FAILED: indicates that the health check failed.
    // *   7: RUNNING: indicates that the application is running.
    std::shared_ptr<int32_t> appState_ = nullptr;
    // The status of the container.
    std::shared_ptr<string> containerStatus_ = nullptr;
    // The time when the ECC was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The unique ID of the ECC.
    std::shared_ptr<string> eccId_ = nullptr;
    // The unique ID of the ECU.
    std::shared_ptr<string> ecuId_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The private IP address of the ECU.
    std::shared_ptr<string> ip_ = nullptr;
    // The state of the latest task initiated on the application instance. Valid values:
    // 
    // *   0: UNKNOWN: indicates that the state of the latest task is unknown.
    // *   1: PROCESSING: indicates that the latest task is being processed.
    // *   2: SUCCESS: indicates that the latest task is executed.
    // *   3: FAILED: indicates that the latest task failed.
    std::shared_ptr<int32_t> taskState_ = nullptr;
    // The time when the ECC was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
