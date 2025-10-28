// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEK8SSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEK8SSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateK8sSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateK8sSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DisableForceOverride, disableForceOverride_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServicePortInfos, servicePortInfos_);
      DARABONBA_PTR_TO_JSON(SlbName, slbName_);
      DARABONBA_PTR_TO_JSON(SlbProtocol, slbProtocol_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateK8sSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DisableForceOverride, disableForceOverride_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServicePortInfos, servicePortInfos_);
      DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
      DARABONBA_PTR_FROM_JSON(SlbProtocol, slbProtocol_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateK8sSlbRequest() = default ;
    UpdateK8sSlbRequest(const UpdateK8sSlbRequest &) = default ;
    UpdateK8sSlbRequest(UpdateK8sSlbRequest &&) = default ;
    UpdateK8sSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateK8sSlbRequest() = default ;
    UpdateK8sSlbRequest& operator=(const UpdateK8sSlbRequest &) = default ;
    UpdateK8sSlbRequest& operator=(UpdateK8sSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->clusterId_ == nullptr && return this->disableForceOverride_ == nullptr && return this->port_ == nullptr && return this->scheduler_ == nullptr && return this->servicePortInfos_ == nullptr
        && return this->slbName_ == nullptr && return this->slbProtocol_ == nullptr && return this->specification_ == nullptr && return this->targetPort_ == nullptr && return this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateK8sSlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateK8sSlbRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // disableForceOverride Field Functions 
    bool hasDisableForceOverride() const { return this->disableForceOverride_ != nullptr;};
    void deleteDisableForceOverride() { this->disableForceOverride_ = nullptr;};
    inline bool disableForceOverride() const { DARABONBA_PTR_GET_DEFAULT(disableForceOverride_, false) };
    inline UpdateK8sSlbRequest& setDisableForceOverride(bool disableForceOverride) { DARABONBA_PTR_SET_VALUE(disableForceOverride_, disableForceOverride) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline UpdateK8sSlbRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline UpdateK8sSlbRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // servicePortInfos Field Functions 
    bool hasServicePortInfos() const { return this->servicePortInfos_ != nullptr;};
    void deleteServicePortInfos() { this->servicePortInfos_ = nullptr;};
    inline string servicePortInfos() const { DARABONBA_PTR_GET_DEFAULT(servicePortInfos_, "") };
    inline UpdateK8sSlbRequest& setServicePortInfos(string servicePortInfos) { DARABONBA_PTR_SET_VALUE(servicePortInfos_, servicePortInfos) };


    // slbName Field Functions 
    bool hasSlbName() const { return this->slbName_ != nullptr;};
    void deleteSlbName() { this->slbName_ = nullptr;};
    inline string slbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
    inline UpdateK8sSlbRequest& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


    // slbProtocol Field Functions 
    bool hasSlbProtocol() const { return this->slbProtocol_ != nullptr;};
    void deleteSlbProtocol() { this->slbProtocol_ = nullptr;};
    inline string slbProtocol() const { DARABONBA_PTR_GET_DEFAULT(slbProtocol_, "") };
    inline UpdateK8sSlbRequest& setSlbProtocol(string slbProtocol) { DARABONBA_PTR_SET_VALUE(slbProtocol_, slbProtocol) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline UpdateK8sSlbRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline string targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
    inline UpdateK8sSlbRequest& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateK8sSlbRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the application. You can query the application ID by calling the ListApplication operation. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the cluster. You can query the cluster ID by calling the GetK8sCluster operation. For more information, see [GetK8sCluster](https://help.aliyun.com/document_detail/181437.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to disable listener configuration overriding.
    // 
    // *   true: disables listener configuration overriding.
    // *   false: enables listener configuration overriding.
    std::shared_ptr<bool> disableForceOverride_ = nullptr;
    // The frontend port. Valid values: 1 to 65535.
    std::shared_ptr<string> port_ = nullptr;
    // The scheduling algorithm for the SLB instance. If you do not specify this parameter, the default value rr is used. SLB supports the following scheduling algorithms: round-robin and weighted round-robin. Valid values:
    // 
    // *   wrr: weighted round-robin scheduling. Backend servers that have higher weights receive more requests than those that have lower weights.
    // *   rr: round-robin scheduling. Requests are sequentially distributed to backend servers.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The information about the ports. This parameter is required if you want to configure multi-port mappings or use a protocol other than TCP. You must set this parameter to a JSON array. Example: [{"targetPort":8080,"port":82,"loadBalancerProtocol":"TCP"},{"port":81,"certId":"1362469756373809_16c185d6fa2_1914500329_-xxxxxxx","targetPort":8181,"lo adBalancerProtocol":"HTTPS"}]
    // 
    // *   port: required. The frontend port. Valid values: 1 to 65535. Each port must be unique.
    // *   targetPort: required. The backend port. Valid values: 1 to 65535.
    // *   loadBalancerProtocol: required. Valid values: TCP and HTTPS. If the HTTP protocol is used, set this parameter to TCP.
    // *   certId: the ID of the certificate. This parameter is required if the HTTPS protocol is used. You can purchase an SLB instance in the SLB console.
    // *   Note: The ServicePortInfos parameter is specified to support multi-port mappings. If you want this parameter to take effect, make sure that you specify the AppId, ClusterId, Type, and SlbId parameters.
    std::shared_ptr<string> servicePortInfos_ = nullptr;
    // The name of the SLB instance.
    std::shared_ptr<string> slbName_ = nullptr;
    // The protocol used by the SLB instance. Set the value to TCP.
    std::shared_ptr<string> slbProtocol_ = nullptr;
    // The specifications of the SLB instance.
    // 
    // *   slb.s1.small
    // *   slb.s2.small
    // *   slb.s2.medium
    // *   slb.s3.small
    // *   slb.s3.medium
    // *   slb.s3.large
    // 
    // If you do not specify this parameter, the default value slb.s1.small is used.
    std::shared_ptr<string> specification_ = nullptr;
    // The backend port, which is also the service port of the application. Valid values: 1 to 65535.
    std::shared_ptr<string> targetPort_ = nullptr;
    // The type of the SLB instance. Valid values:
    // 
    // *   Internet: an Internet-facing SLB instance
    // *   Intranet: an internal-facing SLB instance
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
