// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSHIFTLOADBALANCERZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSHIFTLOADBALANCERZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CancelShiftLoadBalancerZonesRequestZoneMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CancelShiftLoadBalancerZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelShiftLoadBalancerZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, CancelShiftLoadBalancerZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    CancelShiftLoadBalancerZonesRequest() = default ;
    CancelShiftLoadBalancerZonesRequest(const CancelShiftLoadBalancerZonesRequest &) = default ;
    CancelShiftLoadBalancerZonesRequest(CancelShiftLoadBalancerZonesRequest &&) = default ;
    CancelShiftLoadBalancerZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelShiftLoadBalancerZonesRequest() = default ;
    CancelShiftLoadBalancerZonesRequest& operator=(const CancelShiftLoadBalancerZonesRequest &) = default ;
    CancelShiftLoadBalancerZonesRequest& operator=(CancelShiftLoadBalancerZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->loadBalancerId_ != nullptr && this->zoneMappings_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelShiftLoadBalancerZonesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CancelShiftLoadBalancerZonesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CancelShiftLoadBalancerZonesRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<CancelShiftLoadBalancerZonesRequestZoneMappings> & zoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<CancelShiftLoadBalancerZonesRequestZoneMappings>) };
    inline vector<CancelShiftLoadBalancerZonesRequestZoneMappings> zoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<CancelShiftLoadBalancerZonesRequestZoneMappings>) };
    inline CancelShiftLoadBalancerZonesRequest& setZoneMappings(const vector<CancelShiftLoadBalancerZonesRequestZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline CancelShiftLoadBalancerZonesRequest& setZoneMappings(vector<CancelShiftLoadBalancerZonesRequestZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a `2xx HTTP` status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the ALB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The mappings between zones and vSwitches.
    // 
    // >  You can add only one zone in each call.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CancelShiftLoadBalancerZonesRequestZoneMappings>> zoneMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
