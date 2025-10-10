// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUSSERVERGROUPINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUSSERVERGROUPINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
      DARABONBA_PTR_TO_JSON(NonNormalServers, nonNormalServers_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
      DARABONBA_PTR_FROM_JSON(NonNormalServers, nonNormalServers_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
    };
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos(const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos(GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos &&) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& operator=(const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& operator=(GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionType_ != nullptr
        && this->healthCheckEnabled_ != nullptr && this->nonNormalServers_ != nullptr && this->serverGroupId_ != nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // healthCheckEnabled Field Functions 
    bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
    void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
    inline string healthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& setHealthCheckEnabled(string healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


    // nonNormalServers Field Functions 
    bool hasNonNormalServers() const { return this->nonNormalServers_ != nullptr;};
    void deleteNonNormalServers() { this->nonNormalServers_ = nullptr;};
    inline const vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> & nonNormalServers() const { DARABONBA_PTR_GET_CONST(nonNormalServers_, vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>) };
    inline vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> nonNormalServers() { DARABONBA_PTR_GET(nonNormalServers_, vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& setNonNormalServers(const vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> & nonNormalServers) { DARABONBA_PTR_SET_VALUE(nonNormalServers_, nonNormalServers) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& setNonNormalServers(vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> && nonNormalServers) { DARABONBA_PTR_SET_RVALUE(nonNormalServers_, nonNormalServers) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


  protected:
    // The action specified for the server group. Valid values:
    // 
    // *   **ForwardGroup**: distributes requests to server groups.
    // *   **TrafficMirror**: mirrors requests to server groups.
    std::shared_ptr<string> actionType_ = nullptr;
    // Indicates whether health checks are enabled. If **on** is returned, it indicates that health checks are enabled.
    std::shared_ptr<string> healthCheckEnabled_ = nullptr;
    // A list of unhealthy backend servers.
    std::shared_ptr<vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>> nonNormalServers_ = nullptr;
    // The ID of the server group that is associated with the listener.
    std::shared_ptr<string> serverGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
