// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERINFORESPONSEBODYDATAINSTANCEMODELS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERINFORESPONSEBODYDATAINSTANCEMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryClusterInfoResponseBodyDataInstanceModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterInfoResponseBodyDataInstanceModels& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SingleTunnelVip, singleTunnelVip_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterInfoResponseBodyDataInstanceModels& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SingleTunnelVip, singleTunnelVip_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    QueryClusterInfoResponseBodyDataInstanceModels() = default ;
    QueryClusterInfoResponseBodyDataInstanceModels(const QueryClusterInfoResponseBodyDataInstanceModels &) = default ;
    QueryClusterInfoResponseBodyDataInstanceModels(QueryClusterInfoResponseBodyDataInstanceModels &&) = default ;
    QueryClusterInfoResponseBodyDataInstanceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterInfoResponseBodyDataInstanceModels() = default ;
    QueryClusterInfoResponseBodyDataInstanceModels& operator=(const QueryClusterInfoResponseBodyDataInstanceModels &) = default ;
    QueryClusterInfoResponseBodyDataInstanceModels& operator=(QueryClusterInfoResponseBodyDataInstanceModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTimestamp_ == nullptr
        && return this->healthStatus_ == nullptr && return this->internetIp_ == nullptr && return this->ip_ == nullptr && return this->podName_ == nullptr && return this->role_ == nullptr
        && return this->singleTunnelVip_ == nullptr && return this->zone_ == nullptr; };
    // creationTimestamp Field Functions 
    bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
    void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
    inline string creationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
    inline QueryClusterInfoResponseBodyDataInstanceModels& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline QueryClusterInfoResponseBodyDataInstanceModels& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline QueryClusterInfoResponseBodyDataInstanceModels& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline QueryClusterInfoResponseBodyDataInstanceModels& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline QueryClusterInfoResponseBodyDataInstanceModels& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline QueryClusterInfoResponseBodyDataInstanceModels& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // singleTunnelVip Field Functions 
    bool hasSingleTunnelVip() const { return this->singleTunnelVip_ != nullptr;};
    void deleteSingleTunnelVip() { this->singleTunnelVip_ = nullptr;};
    inline string singleTunnelVip() const { DARABONBA_PTR_GET_DEFAULT(singleTunnelVip_, "") };
    inline QueryClusterInfoResponseBodyDataInstanceModels& setSingleTunnelVip(string singleTunnelVip) { DARABONBA_PTR_SET_VALUE(singleTunnelVip_, singleTunnelVip) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline QueryClusterInfoResponseBodyDataInstanceModels& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // A reserved parameter.
    std::shared_ptr<string> creationTimestamp_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> internetIp_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> ip_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> podName_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> role_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> singleTunnelVip_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
