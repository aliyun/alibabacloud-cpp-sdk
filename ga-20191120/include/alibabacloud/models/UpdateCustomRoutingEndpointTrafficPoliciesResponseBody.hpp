// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMROUTINGENDPOINTTRAFFICPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMROUTINGENDPOINTTRAFFICPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateCustomRoutingEndpointTrafficPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomRoutingEndpointTrafficPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomRoutingEndpointTrafficPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateCustomRoutingEndpointTrafficPoliciesResponseBody() = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesResponseBody(const UpdateCustomRoutingEndpointTrafficPoliciesResponseBody &) = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesResponseBody(UpdateCustomRoutingEndpointTrafficPoliciesResponseBody &&) = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomRoutingEndpointTrafficPoliciesResponseBody() = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesResponseBody& operator=(const UpdateCustomRoutingEndpointTrafficPoliciesResponseBody &) = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesResponseBody& operator=(UpdateCustomRoutingEndpointTrafficPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyIds_ == nullptr
        && this->requestId_ == nullptr; };
    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline UpdateCustomRoutingEndpointTrafficPoliciesResponseBody& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline UpdateCustomRoutingEndpointTrafficPoliciesResponseBody& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCustomRoutingEndpointTrafficPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the traffic destinations.
    shared_ptr<vector<string>> policyIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
