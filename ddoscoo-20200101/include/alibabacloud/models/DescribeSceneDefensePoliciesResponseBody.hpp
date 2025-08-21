// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSceneDefensePoliciesResponseBodyPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSceneDefensePoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneDefensePoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneDefensePoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSceneDefensePoliciesResponseBody() = default ;
    DescribeSceneDefensePoliciesResponseBody(const DescribeSceneDefensePoliciesResponseBody &) = default ;
    DescribeSceneDefensePoliciesResponseBody(DescribeSceneDefensePoliciesResponseBody &&) = default ;
    DescribeSceneDefensePoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneDefensePoliciesResponseBody() = default ;
    DescribeSceneDefensePoliciesResponseBody& operator=(const DescribeSceneDefensePoliciesResponseBody &) = default ;
    DescribeSceneDefensePoliciesResponseBody& operator=(DescribeSceneDefensePoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policies_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<DescribeSceneDefensePoliciesResponseBodyPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<DescribeSceneDefensePoliciesResponseBodyPolicies>) };
    inline vector<DescribeSceneDefensePoliciesResponseBodyPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<DescribeSceneDefensePoliciesResponseBodyPolicies>) };
    inline DescribeSceneDefensePoliciesResponseBody& setPolicies(const vector<DescribeSceneDefensePoliciesResponseBodyPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeSceneDefensePoliciesResponseBody& setPolicies(vector<DescribeSceneDefensePoliciesResponseBodyPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSceneDefensePoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSceneDefensePoliciesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // An array that consists of the configurations of the scenario-specific custom policy.
    std::shared_ptr<vector<DescribeSceneDefensePoliciesResponseBodyPolicies>> policies_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
