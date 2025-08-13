// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUESTFALLBACKSERVICES_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUESTFALLBACKSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayRouteRequestFallbackServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayRouteRequestFallbackServices& obj) { 
      DARABONBA_PTR_TO_JSON(AgreementType, agreementType_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayRouteRequestFallbackServices& obj) { 
      DARABONBA_PTR_FROM_JSON(AgreementType, agreementType_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    AddGatewayRouteRequestFallbackServices() = default ;
    AddGatewayRouteRequestFallbackServices(const AddGatewayRouteRequestFallbackServices &) = default ;
    AddGatewayRouteRequestFallbackServices(AddGatewayRouteRequestFallbackServices &&) = default ;
    AddGatewayRouteRequestFallbackServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayRouteRequestFallbackServices() = default ;
    AddGatewayRouteRequestFallbackServices& operator=(const AddGatewayRouteRequestFallbackServices &) = default ;
    AddGatewayRouteRequestFallbackServices& operator=(AddGatewayRouteRequestFallbackServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agreementType_ != nullptr
        && this->groupName_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->percent_ != nullptr && this->serviceId_ != nullptr
        && this->servicePort_ != nullptr && this->sourceType_ != nullptr && this->version_ != nullptr; };
    // agreementType Field Functions 
    bool hasAgreementType() const { return this->agreementType_ != nullptr;};
    void deleteAgreementType() { this->agreementType_ = nullptr;};
    inline string agreementType() const { DARABONBA_PTR_GET_DEFAULT(agreementType_, "") };
    inline AddGatewayRouteRequestFallbackServices& setAgreementType(string agreementType) { DARABONBA_PTR_SET_VALUE(agreementType_, agreementType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AddGatewayRouteRequestFallbackServices& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGatewayRouteRequestFallbackServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline AddGatewayRouteRequestFallbackServices& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int32_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
    inline AddGatewayRouteRequestFallbackServices& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline AddGatewayRouteRequestFallbackServices& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int32_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
    inline AddGatewayRouteRequestFallbackServices& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline AddGatewayRouteRequestFallbackServices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline AddGatewayRouteRequestFallbackServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


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
