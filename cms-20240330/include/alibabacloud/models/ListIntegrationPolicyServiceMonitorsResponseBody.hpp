// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSERVICEMONITORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSERVICEMONITORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyServiceMonitorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyServiceMonitorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(serviceMonitors, serviceMonitors_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyServiceMonitorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(serviceMonitors, serviceMonitors_);
    };
    ListIntegrationPolicyServiceMonitorsResponseBody() = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody(const ListIntegrationPolicyServiceMonitorsResponseBody &) = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody(ListIntegrationPolicyServiceMonitorsResponseBody &&) = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyServiceMonitorsResponseBody() = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody& operator=(const ListIntegrationPolicyServiceMonitorsResponseBody &) = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody& operator=(ListIntegrationPolicyServiceMonitorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->policyId_ == nullptr && return this->requestId_ == nullptr && return this->serviceMonitors_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceMonitors Field Functions 
    bool hasServiceMonitors() const { return this->serviceMonitors_ != nullptr;};
    void deleteServiceMonitors() { this->serviceMonitors_ = nullptr;};
    inline const vector<ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors> & serviceMonitors() const { DARABONBA_PTR_GET_CONST(serviceMonitors_, vector<ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors>) };
    inline vector<ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors> serviceMonitors() { DARABONBA_PTR_GET(serviceMonitors_, vector<ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors>) };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setServiceMonitors(const vector<ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors> & serviceMonitors) { DARABONBA_PTR_SET_VALUE(serviceMonitors_, serviceMonitors) };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setServiceMonitors(vector<ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors> && serviceMonitors) { DARABONBA_PTR_SET_RVALUE(serviceMonitors_, serviceMonitors) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors>> serviceMonitors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
