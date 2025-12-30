// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONECENTERPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONECENTERPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CloneCenterPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneCenterPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneCenterPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloneCenterPolicyResponseBody() = default ;
    CloneCenterPolicyResponseBody(const CloneCenterPolicyResponseBody &) = default ;
    CloneCenterPolicyResponseBody(CloneCenterPolicyResponseBody &&) = default ;
    CloneCenterPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneCenterPolicyResponseBody() = default ;
    CloneCenterPolicyResponseBody& operator=(const CloneCenterPolicyResponseBody &) = default ;
    CloneCenterPolicyResponseBody& operator=(CloneCenterPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyGroupId_ == nullptr
        && this->requestId_ == nullptr; };
    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CloneCenterPolicyResponseBody& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloneCenterPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the duplicated cloud computer policy.
    shared_ptr<string> policyGroupId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
