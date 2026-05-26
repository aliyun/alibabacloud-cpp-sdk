// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class DeletePolicySetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicySetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicySetName, policySetName_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicySetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicySetName, policySetName_);
    };
    DeletePolicySetRequest() = default ;
    DeletePolicySetRequest(const DeletePolicySetRequest &) = default ;
    DeletePolicySetRequest(DeletePolicySetRequest &&) = default ;
    DeletePolicySetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicySetRequest() = default ;
    DeletePolicySetRequest& operator=(const DeletePolicySetRequest &) = default ;
    DeletePolicySetRequest& operator=(DeletePolicySetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policySetName_ == nullptr; };
    // policySetName Field Functions 
    bool hasPolicySetName() const { return this->policySetName_ != nullptr;};
    void deletePolicySetName() { this->policySetName_ = nullptr;};
    inline string getPolicySetName() const { DARABONBA_PTR_GET_DEFAULT(policySetName_, "") };
    inline DeletePolicySetRequest& setPolicySetName(string policySetName) { DARABONBA_PTR_SET_VALUE(policySetName_, policySetName) };


  protected:
    shared_ptr<string> policySetName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
