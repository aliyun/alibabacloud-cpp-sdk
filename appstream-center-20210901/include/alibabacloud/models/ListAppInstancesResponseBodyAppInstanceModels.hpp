// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCESRESPONSEBODYAPPINSTANCEMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCESRESPONSEBODYAPPINSTANCEMODELS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAppInstancesResponseBodyAppInstanceModelsBindInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstancesResponseBodyAppInstanceModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstancesResponseBodyAppInstanceModels& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(BindInfo, bindInfo_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MainEthPublicIp, mainEthPublicIp_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstancesResponseBodyAppInstanceModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(BindInfo, bindInfo_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MainEthPublicIp, mainEthPublicIp_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAppInstancesResponseBodyAppInstanceModels() = default ;
    ListAppInstancesResponseBodyAppInstanceModels(const ListAppInstancesResponseBodyAppInstanceModels &) = default ;
    ListAppInstancesResponseBodyAppInstanceModels(ListAppInstancesResponseBodyAppInstanceModels &&) = default ;
    ListAppInstancesResponseBodyAppInstanceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstancesResponseBodyAppInstanceModels() = default ;
    ListAppInstancesResponseBodyAppInstanceModels& operator=(const ListAppInstancesResponseBodyAppInstanceModels &) = default ;
    ListAppInstancesResponseBodyAppInstanceModels& operator=(ListAppInstancesResponseBodyAppInstanceModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && return this->appInstanceId_ == nullptr && return this->bindInfo_ == nullptr && return this->chargeType_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->mainEthPublicIp_ == nullptr && return this->networkInterfaceIp_ == nullptr && return this->nodeId_ == nullptr && return this->sessionStatus_ == nullptr && return this->status_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string appInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // bindInfo Field Functions 
    bool hasBindInfo() const { return this->bindInfo_ != nullptr;};
    void deleteBindInfo() { this->bindInfo_ = nullptr;};
    inline const Models::ListAppInstancesResponseBodyAppInstanceModelsBindInfo & bindInfo() const { DARABONBA_PTR_GET_CONST(bindInfo_, Models::ListAppInstancesResponseBodyAppInstanceModelsBindInfo) };
    inline Models::ListAppInstancesResponseBodyAppInstanceModelsBindInfo bindInfo() { DARABONBA_PTR_GET(bindInfo_, Models::ListAppInstancesResponseBodyAppInstanceModelsBindInfo) };
    inline ListAppInstancesResponseBodyAppInstanceModels& setBindInfo(const Models::ListAppInstancesResponseBodyAppInstanceModelsBindInfo & bindInfo) { DARABONBA_PTR_SET_VALUE(bindInfo_, bindInfo) };
    inline ListAppInstancesResponseBodyAppInstanceModels& setBindInfo(Models::ListAppInstancesResponseBodyAppInstanceModelsBindInfo && bindInfo) { DARABONBA_PTR_SET_RVALUE(bindInfo_, bindInfo) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // mainEthPublicIp Field Functions 
    bool hasMainEthPublicIp() const { return this->mainEthPublicIp_ != nullptr;};
    void deleteMainEthPublicIp() { this->mainEthPublicIp_ = nullptr;};
    inline string mainEthPublicIp() const { DARABONBA_PTR_GET_DEFAULT(mainEthPublicIp_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setMainEthPublicIp(string mainEthPublicIp) { DARABONBA_PTR_SET_VALUE(mainEthPublicIp_, mainEthPublicIp) };


    // networkInterfaceIp Field Functions 
    bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
    void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
    inline string networkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string sessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAppInstancesResponseBodyAppInstanceModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the delivery group.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The ID of the application instance.
    std::shared_ptr<string> appInstanceId_ = nullptr;
    // The information about the binding between the application instance and end users.
    std::shared_ptr<Models::ListAppInstancesResponseBodyAppInstanceModelsBindInfo> bindInfo_ = nullptr;
    // The billing method of the app instance. Valid values:
    // 
    // *   **PrePaid**: subscription.
    // *   **PostPaid**: pay-as-you-go
    // 
    // >  This parameter is returned only if the ChargeResourceMode parameter of the delivery group to which the app instance belongs is set to Node.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the application instance was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the application instance was updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The public IP address associated with the primary NIC. This value is returned only if `StrategyType` is set to `Mixed`.
    std::shared_ptr<string> mainEthPublicIp_ = nullptr;
    std::shared_ptr<string> networkInterfaceIp_ = nullptr;
    // The ID of the node on which the app instance runs.
    // 
    // >  This parameter is returned only if the ChargeResourceMode parameter of the delivery group to which the app instance belongs is set to Node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The session status. This parameter is returned only if the application instance is in the `RUNNING` state.
    // 
    // Valid values:
    // 
    // *   disconnect: disconnected
    // *   connect: connected
    std::shared_ptr<string> sessionStatus_ = nullptr;
    // The status of the application instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
