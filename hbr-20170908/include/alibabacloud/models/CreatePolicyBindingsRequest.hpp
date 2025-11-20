// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePolicyBindingsRequestPolicyBindingList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreatePolicyBindingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyBindingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyBindingList, policyBindingList_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyBindingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyBindingList, policyBindingList_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    CreatePolicyBindingsRequest() = default ;
    CreatePolicyBindingsRequest(const CreatePolicyBindingsRequest &) = default ;
    CreatePolicyBindingsRequest(CreatePolicyBindingsRequest &&) = default ;
    CreatePolicyBindingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyBindingsRequest() = default ;
    CreatePolicyBindingsRequest& operator=(const CreatePolicyBindingsRequest &) = default ;
    CreatePolicyBindingsRequest& operator=(CreatePolicyBindingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyBindingList_ == nullptr
        && return this->policyId_ == nullptr; };
    // policyBindingList Field Functions 
    bool hasPolicyBindingList() const { return this->policyBindingList_ != nullptr;};
    void deletePolicyBindingList() { this->policyBindingList_ = nullptr;};
    inline const vector<CreatePolicyBindingsRequestPolicyBindingList> & policyBindingList() const { DARABONBA_PTR_GET_CONST(policyBindingList_, vector<CreatePolicyBindingsRequestPolicyBindingList>) };
    inline vector<CreatePolicyBindingsRequestPolicyBindingList> policyBindingList() { DARABONBA_PTR_GET(policyBindingList_, vector<CreatePolicyBindingsRequestPolicyBindingList>) };
    inline CreatePolicyBindingsRequest& setPolicyBindingList(const vector<CreatePolicyBindingsRequestPolicyBindingList> & policyBindingList) { DARABONBA_PTR_SET_VALUE(policyBindingList_, policyBindingList) };
    inline CreatePolicyBindingsRequest& setPolicyBindingList(vector<CreatePolicyBindingsRequestPolicyBindingList> && policyBindingList) { DARABONBA_PTR_SET_RVALUE(policyBindingList_, policyBindingList) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreatePolicyBindingsRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The data sources that you want to bind to the backup policy.
    std::shared_ptr<vector<CreatePolicyBindingsRequestPolicyBindingList>> policyBindingList_ = nullptr;
    // The ID of the backup policy.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
