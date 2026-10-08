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
        && this->clusterId_ == nullptr && this->disableForceOverride_ == nullptr && this->port_ == nullptr && this->scheduler_ == nullptr && this->servicePortInfos_ == nullptr
        && this->slbName_ == nullptr && this->slbProtocol_ == nullptr && this->specification_ == nullptr && this->targetPort_ == nullptr && this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateK8sSlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateK8sSlbRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // disableForceOverride Field Functions 
    bool hasDisableForceOverride() const { return this->disableForceOverride_ != nullptr;};
    void deleteDisableForceOverride() { this->disableForceOverride_ = nullptr;};
    inline bool getDisableForceOverride() const { DARABONBA_PTR_GET_DEFAULT(disableForceOverride_, false) };
    inline UpdateK8sSlbRequest& setDisableForceOverride(bool disableForceOverride) { DARABONBA_PTR_SET_VALUE(disableForceOverride_, disableForceOverride) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline UpdateK8sSlbRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline UpdateK8sSlbRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // servicePortInfos Field Functions 
    bool hasServicePortInfos() const { return this->servicePortInfos_ != nullptr;};
    void deleteServicePortInfos() { this->servicePortInfos_ = nullptr;};
    inline string getServicePortInfos() const { DARABONBA_PTR_GET_DEFAULT(servicePortInfos_, "") };
    inline UpdateK8sSlbRequest& setServicePortInfos(string servicePortInfos) { DARABONBA_PTR_SET_VALUE(servicePortInfos_, servicePortInfos) };


    // slbName Field Functions 
    bool hasSlbName() const { return this->slbName_ != nullptr;};
    void deleteSlbName() { this->slbName_ = nullptr;};
    inline string getSlbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
    inline UpdateK8sSlbRequest& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


    // slbProtocol Field Functions 
    bool hasSlbProtocol() const { return this->slbProtocol_ != nullptr;};
    void deleteSlbProtocol() { this->slbProtocol_ = nullptr;};
    inline string getSlbProtocol() const { DARABONBA_PTR_GET_DEFAULT(slbProtocol_, "") };
    inline UpdateK8sSlbRequest& setSlbProtocol(string slbProtocol) { DARABONBA_PTR_SET_VALUE(slbProtocol_, slbProtocol) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline UpdateK8sSlbRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline string getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
    inline UpdateK8sSlbRequest& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateK8sSlbRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the application. Call [ListApplication](https://help.aliyun.com/document_detail/149390.html) to get this ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The ID of the cluster. Call [GetK8sCluster](https://help.aliyun.com/document_detail/181437.html) to get this ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to disable overwriting the SLB listener configuration.
    // 
    // - true: Disables overwriting.
    // 
    // - false: Allows overwriting.
    shared_ptr<bool> disableForceOverride_ {};
    // The frontend port. The value ranges from 1 to 65535.
    shared_ptr<string> port_ {};
    // The scheduling algorithm of the SLB instance. If you do not set this parameter, rr is used. The supported algorithms are round-robin (rr) and weighted round-robin (wrr).
    // 
    // - Weighted round-robin (wrr): Backend servers with higher weights receive more requests.
    // 
    // - Round-robin (rr): Requests are distributed to backend servers in sequence.
    shared_ptr<string> scheduler_ {};
    // This parameter is used for scenarios that involve multiple ports or protocols other than TCP. The value must be a JSON array. For example:
    // [{"targetPort":8080,"port":82,"loadBalancerProtocol":"TCP"},{"port":81,"certId":"1362469756373809_16c185d6fa2_1914500329_-xxxxxxx","targetPort":8181,"loadBalancerProtocol":"HTTPS"}]
    // 
    // - port: Required. The frontend port. The value ranges from 1 to 65535. Each port number must be unique.
    // 
    // - targetPort: Required. The backend port. The value ranges from 1 to 65535.
    // 
    // - loadBalancerProtocol: Required. Only TCP and HTTPS are supported. For HTTP listeners, set this parameter to TCP.
    // 
    // - certId: This parameter is required for HTTPS listeners. It specifies the ID of a certificate that you can purchase in the SLB console.
    // 
    // - Note: This parameter is used to support multiple ports and must be used with the appId, clusterId, type, and slbId parameters.
    shared_ptr<string> servicePortInfos_ {};
    // The name of the SLB instance.
    shared_ptr<string> slbName_ {};
    // The protocol of the SLB instance. Currently, only TCP is supported.
    shared_ptr<string> slbProtocol_ {};
    // The specification of the SLB instance. The following specifications are supported:
    // 
    // - slb.s1.small
    // 
    // - slb.s2.small
    // 
    // - slb.s2.medium
    // 
    // - slb.s3.small
    // 
    // - slb.s3.medium
    // 
    // - slb.s3.large
    // 
    // If you do not set this parameter, the default value is slb.s1.small.
    shared_ptr<string> specification_ {};
    // The backend port, which is the service port of the application. The value ranges from 1 to 65535.
    shared_ptr<string> targetPort_ {};
    // The type of the SLB instance.
    // 
    // - Internet: An Internet-facing instance.
    // 
    // - Intranet: An internal-facing instance.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
