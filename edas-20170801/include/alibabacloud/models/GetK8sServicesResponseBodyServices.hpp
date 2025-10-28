// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SSERVICESRESPONSEBODYSERVICES_HPP_
#define ALIBABACLOUD_MODELS_GETK8SSERVICESRESPONSEBODYSERVICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetK8sServicesResponseBodyServicesServicePorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sServicesResponseBodyServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sServicesResponseBodyServices& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIP, clusterIP_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServicePorts, servicePorts_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sServicesResponseBodyServices& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIP, clusterIP_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServicePorts, servicePorts_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetK8sServicesResponseBodyServices() = default ;
    GetK8sServicesResponseBodyServices(const GetK8sServicesResponseBodyServices &) = default ;
    GetK8sServicesResponseBodyServices(GetK8sServicesResponseBodyServices &&) = default ;
    GetK8sServicesResponseBodyServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sServicesResponseBodyServices() = default ;
    GetK8sServicesResponseBodyServices& operator=(const GetK8sServicesResponseBodyServices &) = default ;
    GetK8sServicesResponseBodyServices& operator=(GetK8sServicesResponseBodyServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIP_ == nullptr
        && return this->name_ == nullptr && return this->servicePorts_ == nullptr && return this->type_ == nullptr; };
    // clusterIP Field Functions 
    bool hasClusterIP() const { return this->clusterIP_ != nullptr;};
    void deleteClusterIP() { this->clusterIP_ = nullptr;};
    inline string clusterIP() const { DARABONBA_PTR_GET_DEFAULT(clusterIP_, "") };
    inline GetK8sServicesResponseBodyServices& setClusterIP(string clusterIP) { DARABONBA_PTR_SET_VALUE(clusterIP_, clusterIP) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetK8sServicesResponseBodyServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // servicePorts Field Functions 
    bool hasServicePorts() const { return this->servicePorts_ != nullptr;};
    void deleteServicePorts() { this->servicePorts_ = nullptr;};
    inline const vector<Models::GetK8sServicesResponseBodyServicesServicePorts> & servicePorts() const { DARABONBA_PTR_GET_CONST(servicePorts_, vector<Models::GetK8sServicesResponseBodyServicesServicePorts>) };
    inline vector<Models::GetK8sServicesResponseBodyServicesServicePorts> servicePorts() { DARABONBA_PTR_GET(servicePorts_, vector<Models::GetK8sServicesResponseBodyServicesServicePorts>) };
    inline GetK8sServicesResponseBodyServices& setServicePorts(const vector<Models::GetK8sServicesResponseBodyServicesServicePorts> & servicePorts) { DARABONBA_PTR_SET_VALUE(servicePorts_, servicePorts) };
    inline GetK8sServicesResponseBodyServices& setServicePorts(vector<Models::GetK8sServicesResponseBodyServicesServicePorts> && servicePorts) { DARABONBA_PTR_SET_RVALUE(servicePorts_, servicePorts) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetK8sServicesResponseBodyServices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IP address of the service in the Kubernetes cluster.
    std::shared_ptr<string> clusterIP_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The mapping of service ports.
    std::shared_ptr<vector<Models::GetK8sServicesResponseBodyServicesServicePorts>> servicePorts_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
