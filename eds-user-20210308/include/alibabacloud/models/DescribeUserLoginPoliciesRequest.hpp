// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERLOGINPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERLOGINPOLICIESREQUEST_HPP_
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
  class DescribeUserLoginPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserLoginPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserLoginPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
    };
    DescribeUserLoginPoliciesRequest() = default ;
    DescribeUserLoginPoliciesRequest(const DescribeUserLoginPoliciesRequest &) = default ;
    DescribeUserLoginPoliciesRequest(DescribeUserLoginPoliciesRequest &&) = default ;
    DescribeUserLoginPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserLoginPoliciesRequest() = default ;
    DescribeUserLoginPoliciesRequest& operator=(const DescribeUserLoginPoliciesRequest &) = default ;
    DescribeUserLoginPoliciesRequest& operator=(DescribeUserLoginPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->name_ == nullptr && this->policyIds_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline DescribeUserLoginPoliciesRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeUserLoginPoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline DescribeUserLoginPoliciesRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline DescribeUserLoginPoliciesRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


  protected:
    // The channel.
    shared_ptr<string> businessChannel_ {};
    // The policy name.
    shared_ptr<string> name_ {};
    // The list of policy IDs. This is a filter condition for the query.
    shared_ptr<vector<string>> policyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
