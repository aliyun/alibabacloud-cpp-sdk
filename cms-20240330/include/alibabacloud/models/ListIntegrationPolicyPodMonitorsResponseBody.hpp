// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYPODMONITORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYPODMONITORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyPodMonitorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyPodMonitorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(podMonitors, podMonitors_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyPodMonitorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(podMonitors, podMonitors_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListIntegrationPolicyPodMonitorsResponseBody() = default ;
    ListIntegrationPolicyPodMonitorsResponseBody(const ListIntegrationPolicyPodMonitorsResponseBody &) = default ;
    ListIntegrationPolicyPodMonitorsResponseBody(ListIntegrationPolicyPodMonitorsResponseBody &&) = default ;
    ListIntegrationPolicyPodMonitorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyPodMonitorsResponseBody() = default ;
    ListIntegrationPolicyPodMonitorsResponseBody& operator=(const ListIntegrationPolicyPodMonitorsResponseBody &) = default ;
    ListIntegrationPolicyPodMonitorsResponseBody& operator=(ListIntegrationPolicyPodMonitorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->podMonitors_ == nullptr && return this->policyId_ == nullptr && return this->requestId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // podMonitors Field Functions 
    bool hasPodMonitors() const { return this->podMonitors_ != nullptr;};
    void deletePodMonitors() { this->podMonitors_ = nullptr;};
    inline const vector<ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors> & podMonitors() const { DARABONBA_PTR_GET_CONST(podMonitors_, vector<ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors>) };
    inline vector<ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors> podMonitors() { DARABONBA_PTR_GET(podMonitors_, vector<ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors>) };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setPodMonitors(const vector<ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors> & podMonitors) { DARABONBA_PTR_SET_VALUE(podMonitors_, podMonitors) };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setPodMonitors(vector<ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors> && podMonitors) { DARABONBA_PTR_SET_RVALUE(podMonitors_, podMonitors) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // PodMonitor list
    std::shared_ptr<vector<ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors>> podMonitors_ = nullptr;
    // Policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
