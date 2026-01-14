// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTTRAFFICPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTTRAFFICPOLICIESRESPONSEBODY_HPP_
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
  class CreateCustomRoutingEndpointTrafficPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomRoutingEndpointTrafficPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomRoutingEndpointTrafficPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomRoutingEndpointTrafficPoliciesResponseBody() = default ;
    CreateCustomRoutingEndpointTrafficPoliciesResponseBody(const CreateCustomRoutingEndpointTrafficPoliciesResponseBody &) = default ;
    CreateCustomRoutingEndpointTrafficPoliciesResponseBody(CreateCustomRoutingEndpointTrafficPoliciesResponseBody &&) = default ;
    CreateCustomRoutingEndpointTrafficPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomRoutingEndpointTrafficPoliciesResponseBody() = default ;
    CreateCustomRoutingEndpointTrafficPoliciesResponseBody& operator=(const CreateCustomRoutingEndpointTrafficPoliciesResponseBody &) = default ;
    CreateCustomRoutingEndpointTrafficPoliciesResponseBody& operator=(CreateCustomRoutingEndpointTrafficPoliciesResponseBody &&) = default ;
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
    inline CreateCustomRoutingEndpointTrafficPoliciesResponseBody& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline CreateCustomRoutingEndpointTrafficPoliciesResponseBody& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomRoutingEndpointTrafficPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the traffic destinations.
    shared_ptr<vector<string>> policyIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
