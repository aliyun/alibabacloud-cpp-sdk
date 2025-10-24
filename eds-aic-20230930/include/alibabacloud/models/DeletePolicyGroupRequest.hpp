// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeletePolicyGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyGroupIds, policyGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyGroupIds, policyGroupIds_);
    };
    DeletePolicyGroupRequest() = default ;
    DeletePolicyGroupRequest(const DeletePolicyGroupRequest &) = default ;
    DeletePolicyGroupRequest(DeletePolicyGroupRequest &&) = default ;
    DeletePolicyGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyGroupRequest() = default ;
    DeletePolicyGroupRequest& operator=(const DeletePolicyGroupRequest &) = default ;
    DeletePolicyGroupRequest& operator=(DeletePolicyGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyGroupIds_ == nullptr; };
    // policyGroupIds Field Functions 
    bool hasPolicyGroupIds() const { return this->policyGroupIds_ != nullptr;};
    void deletePolicyGroupIds() { this->policyGroupIds_ = nullptr;};
    inline const vector<string> & policyGroupIds() const { DARABONBA_PTR_GET_CONST(policyGroupIds_, vector<string>) };
    inline vector<string> policyGroupIds() { DARABONBA_PTR_GET(policyGroupIds_, vector<string>) };
    inline DeletePolicyGroupRequest& setPolicyGroupIds(const vector<string> & policyGroupIds) { DARABONBA_PTR_SET_VALUE(policyGroupIds_, policyGroupIds) };
    inline DeletePolicyGroupRequest& setPolicyGroupIds(vector<string> && policyGroupIds) { DARABONBA_PTR_SET_RVALUE(policyGroupIds_, policyGroupIds) };


  protected:
    // The IDs of the policies.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> policyGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
