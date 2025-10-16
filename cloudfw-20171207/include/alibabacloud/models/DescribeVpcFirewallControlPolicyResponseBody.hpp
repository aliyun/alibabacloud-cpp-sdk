// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCONTROLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCONTROLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallControlPolicyResponseBodyPolicys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallControlPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policys, policys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policys, policys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcFirewallControlPolicyResponseBody() = default ;
    DescribeVpcFirewallControlPolicyResponseBody(const DescribeVpcFirewallControlPolicyResponseBody &) = default ;
    DescribeVpcFirewallControlPolicyResponseBody(DescribeVpcFirewallControlPolicyResponseBody &&) = default ;
    DescribeVpcFirewallControlPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallControlPolicyResponseBody() = default ;
    DescribeVpcFirewallControlPolicyResponseBody& operator=(const DescribeVpcFirewallControlPolicyResponseBody &) = default ;
    DescribeVpcFirewallControlPolicyResponseBody& operator=(DescribeVpcFirewallControlPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policys_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // policys Field Functions 
    bool hasPolicys() const { return this->policys_ != nullptr;};
    void deletePolicys() { this->policys_ = nullptr;};
    inline const vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys> & policys() const { DARABONBA_PTR_GET_CONST(policys_, vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys>) };
    inline vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys> policys() { DARABONBA_PTR_GET(policys_, vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys>) };
    inline DescribeVpcFirewallControlPolicyResponseBody& setPolicys(const vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys> & policys) { DARABONBA_PTR_SET_VALUE(policys_, policys) };
    inline DescribeVpcFirewallControlPolicyResponseBody& setPolicys(vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys> && policys) { DARABONBA_PTR_SET_RVALUE(policys_, policys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallControlPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeVpcFirewallControlPolicyResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the access control policies.
    std::shared_ptr<vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys>> policys_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of access control policies returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
