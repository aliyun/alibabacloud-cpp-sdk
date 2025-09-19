// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTINSTANCELOGININFOOPTIONSCONTAINERINFO_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTINSTANCELOGININFOOPTIONSCONTAINERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(Deployment, deployment_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_ANY_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(Deployment, deployment_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_ANY_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
    };
    LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo() = default ;
    LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo(const LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo &) = default ;
    LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo(LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo &&) = default ;
    LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo() = default ;
    LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& operator=(const LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo &) = default ;
    LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& operator=(LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterName_ != nullptr && this->containerName_ != nullptr && this->deployment_ != nullptr && this->endpoint_ != nullptr && this->headers_ != nullptr
        && this->namespace_ != nullptr && this->podName_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // deployment Field Functions 
    bool hasDeployment() const { return this->deployment_ != nullptr;};
    void deleteDeployment() { this->deployment_ = nullptr;};
    inline string deployment() const { DARABONBA_PTR_GET_DEFAULT(deployment_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& setDeployment(string deployment) { DARABONBA_PTR_SET_VALUE(deployment_, deployment) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline     const Darabonba::Json & headers() const { DARABONBA_GET(headers_) };
    Darabonba::Json & headers() { DARABONBA_GET(headers_) };
    inline LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& setHeaders(const Darabonba::Json & headers) { DARABONBA_SET_VALUE(headers_, headers) };
    inline LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& setHeaders(Darabonba::Json & headers) { DARABONBA_SET_RVALUE(headers_, headers) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> containerName_ = nullptr;
    std::shared_ptr<string> deployment_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    Darabonba::Json headers_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> podName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
