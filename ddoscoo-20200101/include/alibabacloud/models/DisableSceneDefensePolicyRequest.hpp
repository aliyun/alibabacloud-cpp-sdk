// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESCENEDEFENSEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLESCENEDEFENSEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DisableSceneDefensePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSceneDefensePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSceneDefensePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DisableSceneDefensePolicyRequest() = default ;
    DisableSceneDefensePolicyRequest(const DisableSceneDefensePolicyRequest &) = default ;
    DisableSceneDefensePolicyRequest(DisableSceneDefensePolicyRequest &&) = default ;
    DisableSceneDefensePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSceneDefensePolicyRequest() = default ;
    DisableSceneDefensePolicyRequest& operator=(const DisableSceneDefensePolicyRequest &) = default ;
    DisableSceneDefensePolicyRequest& operator=(DisableSceneDefensePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DisableSceneDefensePolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The ID of the policy that you want to disable.
    // 
    // > You can call the [DescribeSceneDefensePolicies](https://help.aliyun.com/document_detail/159382.html) operation to query the IDs of all policies.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
