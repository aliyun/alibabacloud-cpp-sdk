// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreatePolicySetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicySetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicySetName, policySetName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicySetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicySetName, policySetName_);
    };
    CreatePolicySetRequest() = default ;
    CreatePolicySetRequest(const CreatePolicySetRequest &) = default ;
    CreatePolicySetRequest(CreatePolicySetRequest &&) = default ;
    CreatePolicySetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicySetRequest() = default ;
    CreatePolicySetRequest& operator=(const CreatePolicySetRequest &) = default ;
    CreatePolicySetRequest& operator=(CreatePolicySetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->policySetName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePolicySetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policySetName Field Functions 
    bool hasPolicySetName() const { return this->policySetName_ != nullptr;};
    void deletePolicySetName() { this->policySetName_ = nullptr;};
    inline string getPolicySetName() const { DARABONBA_PTR_GET_DEFAULT(policySetName_, "") };
    inline CreatePolicySetRequest& setPolicySetName(string policySetName) { DARABONBA_PTR_SET_VALUE(policySetName_, policySetName) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> policySetName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
