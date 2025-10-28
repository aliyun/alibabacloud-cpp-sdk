// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEK8SSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEK8SSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateK8sServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateK8sServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ExternalTrafficPolicy, externalTrafficPolicy_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServicePorts, servicePorts_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateK8sServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ExternalTrafficPolicy, externalTrafficPolicy_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServicePorts, servicePorts_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateK8sServiceRequest() = default ;
    UpdateK8sServiceRequest(const UpdateK8sServiceRequest &) = default ;
    UpdateK8sServiceRequest(UpdateK8sServiceRequest &&) = default ;
    UpdateK8sServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateK8sServiceRequest() = default ;
    UpdateK8sServiceRequest& operator=(const UpdateK8sServiceRequest &) = default ;
    UpdateK8sServiceRequest& operator=(UpdateK8sServiceRequest &&) = default ;
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
    inline UpdateK8sServiceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // externalTrafficPolicy Field Functions 
    bool hasExternalTrafficPolicy() const { return this->externalTrafficPolicy_ != nullptr;};
    void deleteExternalTrafficPolicy() { this->externalTrafficPolicy_ = nullptr;};
    inline string externalTrafficPolicy() const { DARABONBA_PTR_GET_DEFAULT(externalTrafficPolicy_, "") };
    inline UpdateK8sServiceRequest& setExternalTrafficPolicy(string externalTrafficPolicy) { DARABONBA_PTR_SET_VALUE(externalTrafficPolicy_, externalTrafficPolicy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateK8sServiceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // servicePorts Field Functions 
    bool hasServicePorts() const { return this->servicePorts_ != nullptr;};
    void deleteServicePorts() { this->servicePorts_ = nullptr;};
    inline string servicePorts() const { DARABONBA_PTR_GET_DEFAULT(servicePorts_, "") };
    inline UpdateK8sServiceRequest& setServicePorts(string servicePorts) { DARABONBA_PTR_SET_VALUE(servicePorts_, servicePorts) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateK8sServiceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The policy used for external traffic management. Valid values:
    // 
    // *   Local: local mode
    // *   Cluster: cluster mode
    // 
    // Default value: Local.
    std::shared_ptr<string> externalTrafficPolicy_ = nullptr;
    // The name of the service in a Kubernetes cluster.
    // 
    // *   The name can contain lowercase letters, digits, and hyphens (-).
    // *   It must start with a letter and end with a letter or digit.
    // *   The name can be 2 to 32 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The mappings between service ports. Set this parameter to a JSON array. The following parameters are included in the configurations:
    // 
    // *   **protocol**: the protocol used by the service. Valid values: TCP and UDP. This parameter is required.
    // *   **port**: the frontend service port. Valid values: 1 to 65535. This parameter is required.
    // *   **targetPort**: the backend container port. Valid values: 1 to 65535. This parameter is required.
    // 
    // Example: `[{"protocol": "TCP", "port": 80, "targetPort": 8080},{"protocol": "TCP", "port": 81, "targetPort": 8081}]`
    std::shared_ptr<string> servicePorts_ = nullptr;
    // The type of the service in a Kubernetes cluster. Set the value to ClusterIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
