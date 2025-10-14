// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLECUSTOMSCENEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLECUSTOMSCENEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DisableCustomScenePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableCustomScenePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableCustomScenePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DisableCustomScenePolicyRequest() = default ;
    DisableCustomScenePolicyRequest(const DisableCustomScenePolicyRequest &) = default ;
    DisableCustomScenePolicyRequest(DisableCustomScenePolicyRequest &&) = default ;
    DisableCustomScenePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableCustomScenePolicyRequest() = default ;
    DisableCustomScenePolicyRequest& operator=(const DisableCustomScenePolicyRequest &) = default ;
    DisableCustomScenePolicyRequest& operator=(DisableCustomScenePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DisableCustomScenePolicyRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The policy ID, which can be obtained by calling the [DescribeCustomScenePolicies](https://help.aliyun.com/document_detail/2850508.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
