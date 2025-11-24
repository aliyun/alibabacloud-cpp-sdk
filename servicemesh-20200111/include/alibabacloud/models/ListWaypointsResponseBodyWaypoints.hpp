// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAYPOINTSRESPONSEBODYWAYPOINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTWAYPOINTSRESPONSEBODYWAYPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ListWaypointsResponseBodyWaypoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaypointsResponseBodyWaypoints& obj) { 
      DARABONBA_PTR_TO_JSON(HPAEnabled, HPAEnabled_);
      DARABONBA_PTR_TO_JSON(HPAMaxReplicas, HPAMaxReplicas_);
      DARABONBA_PTR_TO_JSON(HPAMinReplicas, HPAMinReplicas_);
      DARABONBA_PTR_TO_JSON(HPATargetCPU, HPATargetCPU_);
      DARABONBA_PTR_TO_JSON(HPATargetMemory, HPATargetMemory_);
      DARABONBA_PTR_TO_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_TO_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PreferECI, preferECI_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_TO_JSON(ServiceAccount, serviceAccount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaypointsResponseBodyWaypoints& obj) { 
      DARABONBA_PTR_FROM_JSON(HPAEnabled, HPAEnabled_);
      DARABONBA_PTR_FROM_JSON(HPAMaxReplicas, HPAMaxReplicas_);
      DARABONBA_PTR_FROM_JSON(HPAMinReplicas, HPAMinReplicas_);
      DARABONBA_PTR_FROM_JSON(HPATargetCPU, HPATargetCPU_);
      DARABONBA_PTR_FROM_JSON(HPATargetMemory, HPATargetMemory_);
      DARABONBA_PTR_FROM_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_FROM_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PreferECI, preferECI_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_FROM_JSON(ServiceAccount, serviceAccount_);
    };
    ListWaypointsResponseBodyWaypoints() = default ;
    ListWaypointsResponseBodyWaypoints(const ListWaypointsResponseBodyWaypoints &) = default ;
    ListWaypointsResponseBodyWaypoints(ListWaypointsResponseBodyWaypoints &&) = default ;
    ListWaypointsResponseBodyWaypoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaypointsResponseBodyWaypoints() = default ;
    ListWaypointsResponseBodyWaypoints& operator=(const ListWaypointsResponseBodyWaypoints &) = default ;
    ListWaypointsResponseBodyWaypoints& operator=(ListWaypointsResponseBodyWaypoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->HPAEnabled_ == nullptr
        && return this->HPAMaxReplicas_ == nullptr && return this->HPAMinReplicas_ == nullptr && return this->HPATargetCPU_ == nullptr && return this->HPATargetMemory_ == nullptr && return this->limitCPU_ == nullptr
        && return this->limitMemory_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->preferECI_ == nullptr && return this->replicas_ == nullptr
        && return this->requestCPU_ == nullptr && return this->requestMemory_ == nullptr && return this->serviceAccount_ == nullptr; };
    // HPAEnabled Field Functions 
    bool hasHPAEnabled() const { return this->HPAEnabled_ != nullptr;};
    void deleteHPAEnabled() { this->HPAEnabled_ = nullptr;};
    inline string HPAEnabled() const { DARABONBA_PTR_GET_DEFAULT(HPAEnabled_, "") };
    inline ListWaypointsResponseBodyWaypoints& setHPAEnabled(string HPAEnabled) { DARABONBA_PTR_SET_VALUE(HPAEnabled_, HPAEnabled) };


    // HPAMaxReplicas Field Functions 
    bool hasHPAMaxReplicas() const { return this->HPAMaxReplicas_ != nullptr;};
    void deleteHPAMaxReplicas() { this->HPAMaxReplicas_ = nullptr;};
    inline string HPAMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(HPAMaxReplicas_, "") };
    inline ListWaypointsResponseBodyWaypoints& setHPAMaxReplicas(string HPAMaxReplicas) { DARABONBA_PTR_SET_VALUE(HPAMaxReplicas_, HPAMaxReplicas) };


    // HPAMinReplicas Field Functions 
    bool hasHPAMinReplicas() const { return this->HPAMinReplicas_ != nullptr;};
    void deleteHPAMinReplicas() { this->HPAMinReplicas_ = nullptr;};
    inline string HPAMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(HPAMinReplicas_, "") };
    inline ListWaypointsResponseBodyWaypoints& setHPAMinReplicas(string HPAMinReplicas) { DARABONBA_PTR_SET_VALUE(HPAMinReplicas_, HPAMinReplicas) };


    // HPATargetCPU Field Functions 
    bool hasHPATargetCPU() const { return this->HPATargetCPU_ != nullptr;};
    void deleteHPATargetCPU() { this->HPATargetCPU_ = nullptr;};
    inline string HPATargetCPU() const { DARABONBA_PTR_GET_DEFAULT(HPATargetCPU_, "") };
    inline ListWaypointsResponseBodyWaypoints& setHPATargetCPU(string HPATargetCPU) { DARABONBA_PTR_SET_VALUE(HPATargetCPU_, HPATargetCPU) };


    // HPATargetMemory Field Functions 
    bool hasHPATargetMemory() const { return this->HPATargetMemory_ != nullptr;};
    void deleteHPATargetMemory() { this->HPATargetMemory_ = nullptr;};
    inline string HPATargetMemory() const { DARABONBA_PTR_GET_DEFAULT(HPATargetMemory_, "") };
    inline ListWaypointsResponseBodyWaypoints& setHPATargetMemory(string HPATargetMemory) { DARABONBA_PTR_SET_VALUE(HPATargetMemory_, HPATargetMemory) };


    // limitCPU Field Functions 
    bool hasLimitCPU() const { return this->limitCPU_ != nullptr;};
    void deleteLimitCPU() { this->limitCPU_ = nullptr;};
    inline string limitCPU() const { DARABONBA_PTR_GET_DEFAULT(limitCPU_, "") };
    inline ListWaypointsResponseBodyWaypoints& setLimitCPU(string limitCPU) { DARABONBA_PTR_SET_VALUE(limitCPU_, limitCPU) };


    // limitMemory Field Functions 
    bool hasLimitMemory() const { return this->limitMemory_ != nullptr;};
    void deleteLimitMemory() { this->limitMemory_ = nullptr;};
    inline string limitMemory() const { DARABONBA_PTR_GET_DEFAULT(limitMemory_, "") };
    inline ListWaypointsResponseBodyWaypoints& setLimitMemory(string limitMemory) { DARABONBA_PTR_SET_VALUE(limitMemory_, limitMemory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWaypointsResponseBodyWaypoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListWaypointsResponseBodyWaypoints& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // preferECI Field Functions 
    bool hasPreferECI() const { return this->preferECI_ != nullptr;};
    void deletePreferECI() { this->preferECI_ = nullptr;};
    inline string preferECI() const { DARABONBA_PTR_GET_DEFAULT(preferECI_, "") };
    inline ListWaypointsResponseBodyWaypoints& setPreferECI(string preferECI) { DARABONBA_PTR_SET_VALUE(preferECI_, preferECI) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline string replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, "") };
    inline ListWaypointsResponseBodyWaypoints& setReplicas(string replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline string requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, "") };
    inline ListWaypointsResponseBodyWaypoints& setRequestCPU(string requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline ListWaypointsResponseBodyWaypoints& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // serviceAccount Field Functions 
    bool hasServiceAccount() const { return this->serviceAccount_ != nullptr;};
    void deleteServiceAccount() { this->serviceAccount_ = nullptr;};
    inline string serviceAccount() const { DARABONBA_PTR_GET_DEFAULT(serviceAccount_, "") };
    inline ListWaypointsResponseBodyWaypoints& setServiceAccount(string serviceAccount) { DARABONBA_PTR_SET_VALUE(serviceAccount_, serviceAccount) };


  protected:
    // Indicates whether Horizontal Pod Autoscaling (HPA) is enabled.
    std::shared_ptr<string> HPAEnabled_ = nullptr;
    // The maximum number of waypoint proxy pods when HPA is enabled.
    std::shared_ptr<string> HPAMaxReplicas_ = nullptr;
    // The minimum number of waypoint proxy pods when HPA is enabled.
    std::shared_ptr<string> HPAMinReplicas_ = nullptr;
    // The expected CPU utilization when HPA is enabled.
    std::shared_ptr<string> HPATargetCPU_ = nullptr;
    // The expected memory usage when HPA is enabled.
    std::shared_ptr<string> HPATargetMemory_ = nullptr;
    // The maximum amount of CPU resources that are available to the waypoint proxy pods.
    std::shared_ptr<string> limitCPU_ = nullptr;
    // The maximum amount of memory resources that are available to the waypoint proxy pods.
    std::shared_ptr<string> limitMemory_ = nullptr;
    // The name of the gateway resource for the waypoint proxy. If the waypoint proxy applies to a service account, the name is the service account name. If the waypoint proxy applies to the entire namespace, the name is `namespace`.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // Indicates whether waypoint proxy pods are preferentially scheduled to elastic container instances.
    std::shared_ptr<string> preferECI_ = nullptr;
    // The number of waypoint proxy pods.
    std::shared_ptr<string> replicas_ = nullptr;
    // The amount of CPU resources requested by the waypoint proxy pods.
    std::shared_ptr<string> requestCPU_ = nullptr;
    // The amount of memory resources requested by the waypoint proxy pods.
    std::shared_ptr<string> requestMemory_ = nullptr;
    // The service account to which the waypoint proxy applies. If no value is returned for this parameter, the waypoint proxy applies to the entire namespace.
    std::shared_ptr<string> serviceAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
