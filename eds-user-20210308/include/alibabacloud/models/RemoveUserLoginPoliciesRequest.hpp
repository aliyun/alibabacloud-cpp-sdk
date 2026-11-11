// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERLOGINPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERLOGINPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class RemoveUserLoginPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserLoginPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserLoginPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
    };
    RemoveUserLoginPoliciesRequest() = default ;
    RemoveUserLoginPoliciesRequest(const RemoveUserLoginPoliciesRequest &) = default ;
    RemoveUserLoginPoliciesRequest(RemoveUserLoginPoliciesRequest &&) = default ;
    RemoveUserLoginPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserLoginPoliciesRequest() = default ;
    RemoveUserLoginPoliciesRequest& operator=(const RemoveUserLoginPoliciesRequest &) = default ;
    RemoveUserLoginPoliciesRequest& operator=(RemoveUserLoginPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->policyIds_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline RemoveUserLoginPoliciesRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline RemoveUserLoginPoliciesRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline RemoveUserLoginPoliciesRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


  protected:
    // The business channel.
    shared_ptr<string> businessChannel_ {};
    // The list of policy IDs.
    shared_ptr<vector<string>> policyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
