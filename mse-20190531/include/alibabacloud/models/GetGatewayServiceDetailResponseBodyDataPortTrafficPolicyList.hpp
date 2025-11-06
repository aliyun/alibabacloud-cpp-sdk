// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATAPORTTRAFFICPOLICYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATAPORTTRAFFICPOLICYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrafficPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(TrafficPolicy, trafficPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(TrafficPolicy, trafficPolicy_);
    };
    GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList() = default ;
    GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList(const GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList &) = default ;
    GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList(GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList &&) = default ;
    GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList() = default ;
    GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& operator=(const GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList &) = default ;
    GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& operator=(GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayUniqueId_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->serviceId_ == nullptr && return this->servicePort_ == nullptr
        && return this->trafficPolicy_ == nullptr; };
    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int32_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
    inline GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // trafficPolicy Field Functions 
    bool hasTrafficPolicy() const { return this->trafficPolicy_ != nullptr;};
    void deleteTrafficPolicy() { this->trafficPolicy_ = nullptr;};
    inline const Models::TrafficPolicy & trafficPolicy() const { DARABONBA_PTR_GET_CONST(trafficPolicy_, Models::TrafficPolicy) };
    inline Models::TrafficPolicy trafficPolicy() { DARABONBA_PTR_GET(trafficPolicy_, Models::TrafficPolicy) };
    inline GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& setTrafficPolicy(const Models::TrafficPolicy & trafficPolicy) { DARABONBA_PTR_SET_VALUE(trafficPolicy_, trafficPolicy) };
    inline GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList& setTrafficPolicy(Models::TrafficPolicy && trafficPolicy) { DARABONBA_PTR_SET_RVALUE(trafficPolicy_, trafficPolicy) };


  protected:
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The port ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The service ID.
    std::shared_ptr<int64_t> serviceId_ = nullptr;
    // The service port number.
    std::shared_ptr<int32_t> servicePort_ = nullptr;
    // The traffic policy.
    std::shared_ptr<Models::TrafficPolicy> trafficPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
