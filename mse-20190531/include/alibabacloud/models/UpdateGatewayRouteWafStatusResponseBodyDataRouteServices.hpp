// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAROUTESERVICES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAROUTESERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteWafStatusResponseBodyDataRouteServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpdateGatewayRouteWafStatusResponseBodyDataRouteServices() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRouteServices(const UpdateGatewayRouteWafStatusResponseBodyDataRouteServices &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRouteServices(UpdateGatewayRouteWafStatusResponseBodyDataRouteServices &&) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRouteServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBodyDataRouteServices() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& operator=(const UpdateGatewayRouteWafStatusResponseBodyDataRouteServices &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& operator=(UpdateGatewayRouteWafStatusResponseBodyDataRouteServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->percent_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr
        && return this->sourceType_ == nullptr && return this->version_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int32_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRouteServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the group to which the service belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The weight.
    std::shared_ptr<int32_t> percent_ = nullptr;
    // The ID of the service.
    std::shared_ptr<int64_t> serviceId_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The source type of the service.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The version of the service.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
