// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAROUTESERVICES_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAROUTESERVICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoder.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyDataRouteServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyDataRouteServices& obj) { 
      DARABONBA_PTR_TO_JSON(AgreementType, agreementType_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(HttpDubboTranscoder, httpDubboTranscoder_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(UnhealthyEndpoints, unhealthyEndpoints_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyDataRouteServices& obj) { 
      DARABONBA_PTR_FROM_JSON(AgreementType, agreementType_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(HttpDubboTranscoder, httpDubboTranscoder_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(UnhealthyEndpoints, unhealthyEndpoints_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetGatewayRouteDetailResponseBodyDataRouteServices() = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServices(const GetGatewayRouteDetailResponseBodyDataRouteServices &) = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServices(GetGatewayRouteDetailResponseBodyDataRouteServices &&) = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyDataRouteServices() = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServices& operator=(const GetGatewayRouteDetailResponseBodyDataRouteServices &) = default ;
    GetGatewayRouteDetailResponseBodyDataRouteServices& operator=(GetGatewayRouteDetailResponseBodyDataRouteServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agreementType_ == nullptr
        && return this->groupName_ == nullptr && return this->healthStatus_ == nullptr && return this->httpDubboTranscoder_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr
        && return this->percent_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->servicePort_ == nullptr && return this->sourceType_ == nullptr
        && return this->unhealthyEndpoints_ == nullptr && return this->version_ == nullptr; };
    // agreementType Field Functions 
    bool hasAgreementType() const { return this->agreementType_ != nullptr;};
    void deleteAgreementType() { this->agreementType_ = nullptr;};
    inline string agreementType() const { DARABONBA_PTR_GET_DEFAULT(agreementType_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setAgreementType(string agreementType) { DARABONBA_PTR_SET_VALUE(agreementType_, agreementType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // httpDubboTranscoder Field Functions 
    bool hasHttpDubboTranscoder() const { return this->httpDubboTranscoder_ != nullptr;};
    void deleteHttpDubboTranscoder() { this->httpDubboTranscoder_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoder & httpDubboTranscoder() const { DARABONBA_PTR_GET_CONST(httpDubboTranscoder_, Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoder) };
    inline Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoder httpDubboTranscoder() { DARABONBA_PTR_GET(httpDubboTranscoder_, Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoder) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setHttpDubboTranscoder(const Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoder & httpDubboTranscoder) { DARABONBA_PTR_SET_VALUE(httpDubboTranscoder_, httpDubboTranscoder) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setHttpDubboTranscoder(Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoder && httpDubboTranscoder) { DARABONBA_PTR_SET_RVALUE(httpDubboTranscoder_, httpDubboTranscoder) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int32_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int32_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // unhealthyEndpoints Field Functions 
    bool hasUnhealthyEndpoints() const { return this->unhealthyEndpoints_ != nullptr;};
    void deleteUnhealthyEndpoints() { this->unhealthyEndpoints_ = nullptr;};
    inline const vector<string> & unhealthyEndpoints() const { DARABONBA_PTR_GET_CONST(unhealthyEndpoints_, vector<string>) };
    inline vector<string> unhealthyEndpoints() { DARABONBA_PTR_GET(unhealthyEndpoints_, vector<string>) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setUnhealthyEndpoints(const vector<string> & unhealthyEndpoints) { DARABONBA_PTR_SET_VALUE(unhealthyEndpoints_, unhealthyEndpoints) };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setUnhealthyEndpoints(vector<string> && unhealthyEndpoints) { DARABONBA_PTR_SET_RVALUE(unhealthyEndpoints_, unhealthyEndpoints) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRouteServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The protocol type.
    std::shared_ptr<string> agreementType_ = nullptr;
    // The name of the group to which the service belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> healthStatus_ = nullptr;
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataRouteServicesHttpDubboTranscoder> httpDubboTranscoder_ = nullptr;
    // The service name.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The weight.
    std::shared_ptr<int32_t> percent_ = nullptr;
    // The service ID.
    std::shared_ptr<int64_t> serviceId_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The port number of the service.
    std::shared_ptr<int32_t> servicePort_ = nullptr;
    // The source type of the service.
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<vector<string>> unhealthyEndpoints_ = nullptr;
    // The service version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
