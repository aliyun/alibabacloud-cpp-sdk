// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDK8SSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDK8SSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class BindK8sSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindK8sSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServicePortInfos, servicePortInfos_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbProtocol, slbProtocol_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, BindK8sSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServicePortInfos, servicePortInfos_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbProtocol, slbProtocol_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    BindK8sSlbRequest() = default ;
    BindK8sSlbRequest(const BindK8sSlbRequest &) = default ;
    BindK8sSlbRequest(BindK8sSlbRequest &&) = default ;
    BindK8sSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindK8sSlbRequest() = default ;
    BindK8sSlbRequest& operator=(const BindK8sSlbRequest &) = default ;
    BindK8sSlbRequest& operator=(BindK8sSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->clusterId_ == nullptr && this->port_ == nullptr && this->scheduler_ == nullptr && this->servicePortInfos_ == nullptr && this->slbId_ == nullptr
        && this->slbProtocol_ == nullptr && this->specification_ == nullptr && this->targetPort_ == nullptr && this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BindK8sSlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline BindK8sSlbRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline BindK8sSlbRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline BindK8sSlbRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // servicePortInfos Field Functions 
    bool hasServicePortInfos() const { return this->servicePortInfos_ != nullptr;};
    void deleteServicePortInfos() { this->servicePortInfos_ = nullptr;};
    inline string getServicePortInfos() const { DARABONBA_PTR_GET_DEFAULT(servicePortInfos_, "") };
    inline BindK8sSlbRequest& setServicePortInfos(string servicePortInfos) { DARABONBA_PTR_SET_VALUE(servicePortInfos_, servicePortInfos) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline BindK8sSlbRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbProtocol Field Functions 
    bool hasSlbProtocol() const { return this->slbProtocol_ != nullptr;};
    void deleteSlbProtocol() { this->slbProtocol_ = nullptr;};
    inline string getSlbProtocol() const { DARABONBA_PTR_GET_DEFAULT(slbProtocol_, "") };
    inline BindK8sSlbRequest& setSlbProtocol(string slbProtocol) { DARABONBA_PTR_SET_VALUE(slbProtocol_, slbProtocol) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline BindK8sSlbRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline string getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
    inline BindK8sSlbRequest& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BindK8sSlbRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The ID of the cluster.
    shared_ptr<string> clusterId_ {};
    // The frontend port. The value must be an integer from 1 to 65,535.
    shared_ptr<string> port_ {};
    // The scheduling algorithm. If you do not specify this parameter, \\`rr\\` is used. Valid values:
    // 
    // - wrr: weighted round-robin. Backend servers with higher weights receive more requests.
    // 
    // - rr: round-robin. Requests are distributed to backend servers in sequence.
    shared_ptr<string> scheduler_ {};
    // The information about the service ports. Use this parameter to configure multiple listeners or use protocols other than TCP.
    // This parameter must be a JSON array. Example:
    // [{"targetPort":8080,"port":82,"loadBalancerProtocol":"TCP"},{"port":81,"certId":"1362469756373809_16c185d6fa2_1914500329_-xxxxxxx","targetPort":8181,"loadBalancerProtocol":"HTTPS"}]
    // 
    // - port: Required. The frontend port. The value must be an integer from 1 to 65,535. Each port number must be unique.
    // 
    // - targetPort: Required. The backend port. The value must be an integer from 1 to 65,535.
    // 
    // - loadBalancerProtocol: Required. The frontend protocol. Valid values: TCP and HTTPS. For HTTP, use TCP.
    // 
    // - certId: Required if you use the HTTPS protocol. You can purchase a certificate in the SLB console.
    // 
    // > This parameter is used to configure multiple listeners. You must use it with the appId, clusterId, type, and slbId parameters.
    shared_ptr<string> servicePortInfos_ {};
    // The ID of the SLB instance. If you do not specify this parameter, EDAS automatically purchases a new SLB instance.
    shared_ptr<string> slbId_ {};
    // The frontend protocol for the SLB instance. Valid values: TCP, HTTP, and HTTPS.
    shared_ptr<string> slbProtocol_ {};
    // The specification of the SLB instance.
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
    shared_ptr<string> specification_ {};
    // The backend port. This port is also the service port of the application. The value must be an integer from 1 to 65,535.
    shared_ptr<string> targetPort_ {};
    // The type of the SLB instance.
    // 
    // - internet: an internet-facing SLB instance.
    // 
    // - intranet: an internal-facing SLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
