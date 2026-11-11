// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERPOLICYTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERPOLICYTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterPolicyTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterPolicyTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyTableId, policyTableId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterPolicyTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyTableId, policyTableId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateTransitRouterPolicyTableResponseBody() = default ;
    CreateTransitRouterPolicyTableResponseBody(const CreateTransitRouterPolicyTableResponseBody &) = default ;
    CreateTransitRouterPolicyTableResponseBody(CreateTransitRouterPolicyTableResponseBody &&) = default ;
    CreateTransitRouterPolicyTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterPolicyTableResponseBody() = default ;
    CreateTransitRouterPolicyTableResponseBody& operator=(const CreateTransitRouterPolicyTableResponseBody &) = default ;
    CreateTransitRouterPolicyTableResponseBody& operator=(CreateTransitRouterPolicyTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyTableId_ == nullptr
        && this->requestId_ == nullptr; };
    // policyTableId Field Functions 
    bool hasPolicyTableId() const { return this->policyTableId_ != nullptr;};
    void deletePolicyTableId() { this->policyTableId_ = nullptr;};
    inline string getPolicyTableId() const { DARABONBA_PTR_GET_DEFAULT(policyTableId_, "") };
    inline CreateTransitRouterPolicyTableResponseBody& setPolicyTableId(string policyTableId) { DARABONBA_PTR_SET_VALUE(policyTableId_, policyTableId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTransitRouterPolicyTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the policy route table.
    shared_ptr<string> policyTableId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
