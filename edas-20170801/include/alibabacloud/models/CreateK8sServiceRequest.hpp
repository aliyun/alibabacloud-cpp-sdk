// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEK8SSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEK8SSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class CreateK8sServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateK8sServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ExternalTrafficPolicy, externalTrafficPolicy_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServicePorts, servicePorts_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateK8sServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ExternalTrafficPolicy, externalTrafficPolicy_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServicePorts, servicePorts_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateK8sServiceRequest() = default ;
    CreateK8sServiceRequest(const CreateK8sServiceRequest &) = default ;
    CreateK8sServiceRequest(CreateK8sServiceRequest &&) = default ;
    CreateK8sServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateK8sServiceRequest() = default ;
    CreateK8sServiceRequest& operator=(const CreateK8sServiceRequest &) = default ;
    CreateK8sServiceRequest& operator=(CreateK8sServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->externalTrafficPolicy_ == nullptr && return this->name_ == nullptr && return this->servicePorts_ == nullptr && return this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateK8sServiceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // externalTrafficPolicy Field Functions 
    bool hasExternalTrafficPolicy() const { return this->externalTrafficPolicy_ != nullptr;};
    void deleteExternalTrafficPolicy() { this->externalTrafficPolicy_ = nullptr;};
    inline string externalTrafficPolicy() const { DARABONBA_PTR_GET_DEFAULT(externalTrafficPolicy_, "") };
    inline CreateK8sServiceRequest& setExternalTrafficPolicy(string externalTrafficPolicy) { DARABONBA_PTR_SET_VALUE(externalTrafficPolicy_, externalTrafficPolicy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateK8sServiceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // servicePorts Field Functions 
    bool hasServicePorts() const { return this->servicePorts_ != nullptr;};
    void deleteServicePorts() { this->servicePorts_ = nullptr;};
    inline string servicePorts() const { DARABONBA_PTR_GET_DEFAULT(servicePorts_, "") };
    inline CreateK8sServiceRequest& setServicePorts(string servicePorts) { DARABONBA_PTR_SET_VALUE(servicePorts_, servicePorts) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateK8sServiceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The policy used for external traffic management. Valid values:
    // 
    // *   Local: The network traffic can be routed to pods on the node where the Service is deployed.
    // *   Cluster: The network traffic can be routed to pods on other nodes in the cluster.
    // 
    // Default value: Local.
    std::shared_ptr<string> externalTrafficPolicy_ = nullptr;
    // The name of the Kubernetes Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The port mapping of the Kubernetes Service. Set this parameter to a JSON array. The following parameters are included in the configurations:
    // 
    // *   **protocol**: the protocol used by the Service. Valid values: TCP and UDP. This parameter is mandatory.
    // *   **port**: the frontend service port. Valid values: 1 to 65535. This parameter is mandatory.
    // *   **targetPort**: the backend container port. Valid values: 1 to 65535. This parameter is mandatory.
    // 
    // Example: `[{"protocol": "TCP", "port": 80, "targetPort": 8080},{"protocol": "TCP", "port": 81, "targetPort": 8081}]`
    // 
    // This parameter is required.
    std::shared_ptr<string> servicePorts_ = nullptr;
    // The type of the Kubernetes Service. Set the value to ClusterIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
