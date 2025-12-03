// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIPCONTROLPOLICYITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDIPCONTROLPOLICYITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class AddIpControlPolicyItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIpControlPolicyItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyItemId, policyItemId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIpControlPolicyItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyItemId, policyItemId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddIpControlPolicyItemResponseBody() = default ;
    AddIpControlPolicyItemResponseBody(const AddIpControlPolicyItemResponseBody &) = default ;
    AddIpControlPolicyItemResponseBody(AddIpControlPolicyItemResponseBody &&) = default ;
    AddIpControlPolicyItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIpControlPolicyItemResponseBody() = default ;
    AddIpControlPolicyItemResponseBody& operator=(const AddIpControlPolicyItemResponseBody &) = default ;
    AddIpControlPolicyItemResponseBody& operator=(AddIpControlPolicyItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyItemId_ == nullptr
        && return this->requestId_ == nullptr; };
    // policyItemId Field Functions 
    bool hasPolicyItemId() const { return this->policyItemId_ != nullptr;};
    void deletePolicyItemId() { this->policyItemId_ = nullptr;};
    inline string policyItemId() const { DARABONBA_PTR_GET_DEFAULT(policyItemId_, "") };
    inline AddIpControlPolicyItemResponseBody& setPolicyItemId(string policyItemId) { DARABONBA_PTR_SET_VALUE(policyItemId_, policyItemId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddIpControlPolicyItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the policy. The ID is unique.
    std::shared_ptr<string> policyItemId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
