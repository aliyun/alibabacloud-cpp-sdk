// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTFALLBACKSERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTFALLBACKSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteResponseBodyDataResultFallbackServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteResponseBodyDataResultFallbackServices& obj) { 
      DARABONBA_PTR_TO_JSON(AgreementType, agreementType_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteResponseBodyDataResultFallbackServices& obj) { 
      DARABONBA_PTR_FROM_JSON(AgreementType, agreementType_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListGatewayRouteResponseBodyDataResultFallbackServices() = default ;
    ListGatewayRouteResponseBodyDataResultFallbackServices(const ListGatewayRouteResponseBodyDataResultFallbackServices &) = default ;
    ListGatewayRouteResponseBodyDataResultFallbackServices(ListGatewayRouteResponseBodyDataResultFallbackServices &&) = default ;
    ListGatewayRouteResponseBodyDataResultFallbackServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteResponseBodyDataResultFallbackServices() = default ;
    ListGatewayRouteResponseBodyDataResultFallbackServices& operator=(const ListGatewayRouteResponseBodyDataResultFallbackServices &) = default ;
    ListGatewayRouteResponseBodyDataResultFallbackServices& operator=(ListGatewayRouteResponseBodyDataResultFallbackServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agreementType_ != nullptr
        && this->groupName_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->percent_ != nullptr && this->serviceId_ != nullptr
        && this->serviceName_ != nullptr && this->servicePort_ != nullptr && this->sourceType_ != nullptr && this->version_ != nullptr; };
    // agreementType Field Functions 
    bool hasAgreementType() const { return this->agreementType_ != nullptr;};
    void deleteAgreementType() { this->agreementType_ = nullptr;};
    inline string agreementType() const { DARABONBA_PTR_GET_DEFAULT(agreementType_, "") };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setAgreementType(string agreementType) { DARABONBA_PTR_SET_VALUE(agreementType_, agreementType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int32_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int32_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListGatewayRouteResponseBodyDataResultFallbackServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The type of the protocol.
    std::shared_ptr<string> agreementType_ = nullptr;
    // The name of the group to which the service belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace to which the service belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The weight in the form of a percentage value.
    std::shared_ptr<int32_t> percent_ = nullptr;
    // The ID of the service.
    std::shared_ptr<int64_t> serviceId_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The service port number.
    std::shared_ptr<int32_t> servicePort_ = nullptr;
    // The source type.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The version of the service.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
